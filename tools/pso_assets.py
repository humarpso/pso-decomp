#!/usr/bin/env python3
"""PSO runtime data dependencies, PRS extraction, and asset inventory.

The DOL is not the whole game: item stats live in ItemPMT.prs, in-game text in
Text<Lang>.pr2/.pr3, and models in .bml/.nj archives. PSO's .rel containers
use their own pointer relocation format; movie.rel is a Nintendo code REL.

  inventory    scan the extracted disc, categorize every file, and write
               build/progress/assets.json (counts, sizes, extraction status)
  extract      PRS-decompress one .prs/.pr2 to build/assets/ (or --all for the
               known data/text archives)
  strings      dump printable strings from a decompressed text archive
  verify       check pinned data dependencies and their pointer relocations;
               optional replacements must reproduce the pinned files exactly

PRS and PRC format reference: fuzziqersoftware/newserv (MIT licensed).
https://github.com/fuzziqersoftware/newserv
"""

from __future__ import annotations

import argparse
import hashlib
import json
import os
import shlex
import struct
import subprocess
import sys
import tempfile
from pathlib import Path, PurePosixPath

ROOT = Path(__file__).resolve().parent.parent
DISC_ROOT = ROOT / "orig" / "GPOE8P"
if (DISC_ROOT / "P-GPOE").is_dir():
    DISC_ROOT /= "P-GPOE"
FILES_DIR = DISC_ROOT / "files"
SYS_DIR = DISC_ROOT / "sys"
OUT_DIR = ROOT / "build" / "assets"
INVENTORY_JSON = ROOT / "build" / "progress" / "assets.json"
DEFAULT_MANIFEST = ROOT / "config" / "GPOE8P" / "data.json"
DISC_EXTENSIONS = {".iso", ".gcm", ".rvz", ".wia", ".wbfs", ".ciso", ".nfs", ".gcz", ".tgc"}

# Category by extension — the disc's asset taxonomy.
CATEGORIES = {
    ".prs": "data-compressed (PRS)",
    ".pr2": "text/data archive (PRS-compressed body)",
    ".pr3": "text relocation archive (encrypted PRS)",
    ".rel": "REL-named data",
    ".bml": "model/animation archive (BML)",
    ".nj": "model (Ninja)",
    ".njm": "animation (Ninja motion)",
    ".xvm": "texture archive (XVM)",
    ".gvm": "texture archive (GVM)",
    ".gsl": "archive (GSL)",
    ".snd": "audio",
    ".adx": "audio (ADX stream)",
    ".afs": "audio/archive (AFS)",
    ".dol": "executable (DOL)",
    ".bin": "binary data",
    ".dat": "binary data",
    ".pae": "particle/effect data",
    ".bnr": "banner",
}


def prs_decompress(data: bytes, max_output_size: int = 32 * 1024 * 1024) -> bytes:
    """Decompress Sega PRS (the fuzziqer-software algorithm newserv uses)."""
    out = bytearray()
    pos = 0
    ctrl = 0
    bits = 0

    def getbit() -> int:
        nonlocal ctrl, bits, pos
        if bits == 0:
            if pos >= len(data):
                raise ValueError("truncated PRS control byte")
            ctrl = data[pos]
            pos += 1
            bits = 8
        bit = ctrl & 1
        ctrl >>= 1
        bits -= 1
        return bit

    def take() -> int:
        nonlocal pos
        if pos >= len(data):
            raise ValueError("truncated PRS stream")
        value = data[pos]
        pos += 1
        return value

    while True:
        if getbit():                      # literal
            if len(out) >= max_output_size:
                raise ValueError("PRS output exceeds limit")
            out.append(take())
            continue
        if getbit():                      # long copy (or end marker)
            a, b = take(), take()
            if a == 0 and b == 0:
                break
            t = a | (b << 8)
            offset = (t >> 3) - 0x2000    # negative displacement
            amount = t & 7
            if amount == 0:
                amount = take() + 1
            else:
                amount += 2
        else:                             # short copy
            amount = getbit() * 2 + getbit() + 2
            offset = take() - 0x100
        if -offset > len(out) or len(out) + amount > max_output_size:
            raise ValueError("invalid PRS backreference or output size")
        for _ in range(amount):
            out.append(out[offset])
    return bytes(out)


class PSOV2Cipher:
    """The classic PSO DC/PC/GC stream cipher (fuzziqer CRYPT_PC) — used by
    PRC-wrapped files (.pr2): u32 decompressed_size, u32 seed, then the
    encrypted PRS body."""

    def __init__(self, seed: int):
        M = 0xFFFFFFFF
        self.keys = [0] * 57
        esi = 1
        ebx = seed & M
        edi = 0x15
        self.keys[56] = ebx
        self.keys[55] = ebx
        while edi <= 0x46E:
            edx = edi % 55
            ebx = (ebx - esi) & M
            edi += 0x15
            self.keys[edx] = esi
            esi = ebx
            ebx = self.keys[edx]
        for _ in range(4):
            self._mix()
        self.pos = 56

    def _mix(self):
        M = 0xFFFFFFFF
        for i in range(1, 25):
            self.keys[i] = (self.keys[i] - self.keys[i + 0x1F]) & M
        for i in range(25, 56):
            self.keys[i] = (self.keys[i] - self.keys[i - 0x18]) & M

    def next(self) -> int:
        if self.pos == 56:
            self._mix()
            self.pos = 1
        v = self.keys[self.pos]
        self.pos += 1
        return v


def pr2_decompress(data: bytes, big_endian: bool = True,
                   max_output_size: int = 32 * 1024 * 1024) -> bytes:
    """Decrypt + decompress PRC-wrapped .pr2 or .pr3 (GC uses big endian)."""
    if len(data) < 8:
        raise ValueError("truncated PRC header")
    bo = "big" if big_endian else "little"
    out_size = int.from_bytes(data[0:4], bo)
    if out_size > max_output_size:
        raise ValueError("PRC output exceeds limit")
    seed = int.from_bytes(data[4:8], bo)
    body = bytearray(data[8:])
    orig_len = len(body)
    if orig_len % 4:                      # PRC crypts the body rounded UP to 4
        body += b"\0" * (4 - orig_len % 4)
    ciph = PSOV2Cipher(seed)
    for i in range(0, len(body), 4):
        k = ciph.next()
        w = int.from_bytes(body[i:i + 4], bo) ^ k
        body[i:i + 4] = w.to_bytes(4, bo)
    plain = prs_decompress(bytes(body), min(out_size, max_output_size))
    if len(plain) != out_size:
        raise ValueError(f"decompressed {len(plain)} != header {out_size}")
    return plain


def _iter_disc_files():
    for base in (FILES_DIR, SYS_DIR):
        if base.is_dir():
            for p in sorted(base.rglob("*")):
                if p.is_file():
                    yield p


def cmd_inventory(args) -> int:
    if not FILES_DIR.is_dir():
        print(f"No extracted disc at {FILES_DIR} — extract the ROM first.",
              file=sys.stderr)
        return 1
    cats: dict[str, dict] = {}
    files = []
    for p in _iter_disc_files():
        ext = p.suffix.lower()
        cat = ("relocatable code module" if p.name == "movie.rel" else
               CATEGORIES.get(ext, f"other ({ext or 'no ext'})"))
        c = cats.setdefault(cat, {"count": 0, "bytes": 0})
        c["count"] += 1
        c["bytes"] += p.stat().st_size
        files.append({
            "path": str(p.relative_to(ROOT / "orig")),
            "size": p.stat().st_size,
            "category": cat,
            "extracted": (OUT_DIR / (p.name + ".bin" if ext == ".pr3" else p.stem + ".bin")).exists(),
        })
    inv = {
        "schema_version": 1,
        "total_files": len(files),
        "total_bytes": sum(f["size"] for f in files),
        "extracted": sum(1 for f in files if f["extracted"]),
        "categories": cats,
        "files": files if args.full else None,
    }
    INVENTORY_JSON.parent.mkdir(parents=True, exist_ok=True)
    INVENTORY_JSON.write_text(json.dumps(inv, indent=2) + "\n")
    print(f"Disc asset inventory: {inv['total_files']} files, "
          f"{inv['total_bytes'] / 1024 / 1024:.1f} MB, "
          f"{inv['extracted']} extracted -> {INVENTORY_JSON.relative_to(ROOT)}")
    for cat, c in sorted(cats.items(), key=lambda kv: -kv[1]["bytes"]):
        print(f"  {cat:<42} {c['count']:>5} files  "
              f"{c['bytes'] / 1024 / 1024:>8.2f} MB")
    return 0


# The archives worth extracting first: item stats + all localized text.
KNOWN_ARCHIVES = [
    "ItemPMT.prs", "ItemMagEdit.prs", "ItemRTT.prs", "PlyLevelTbl.prs",
] + [f"Text{language}.{extension}"
     for language in ("English", "Japanese", "French", "German", "Spanish")
     for extension in ("pr2", "pr3")]


def _extract_one(src: Path) -> Path:
    raw = src.read_bytes()
    if src.suffix.lower() in {".pr2", ".pr3"}:
        try:
            body = pr2_decompress(raw, big_endian=True)
        except (IndexError, ValueError):
            body = pr2_decompress(raw, big_endian=False)
    else:
        body = prs_decompress(raw)
    OUT_DIR.mkdir(parents=True, exist_ok=True)
    # Preserve the existing PR2 output name; PR3 must not overwrite its partner.
    dst = OUT_DIR / (src.name + ".bin" if src.suffix.lower() == ".pr3" else src.stem + ".bin")
    dst.write_bytes(body)
    print(f"  {src.name}: {len(raw):,} -> {len(body):,} bytes "
          f"({dst.relative_to(ROOT)})")
    return dst


def cmd_extract(args) -> int:
    targets = ([FILES_DIR / n for n in KNOWN_ARCHIVES] if args.all
               else [Path(args.file)])
    ok = 0
    for src in targets:
        if not src.is_file():
            src2 = FILES_DIR / src.name
            if src2.is_file():
                src = src2
            else:
                print(f"  {src.name}: not found, skipped")
                continue
        try:
            _extract_one(src)
            ok += 1
        except (IndexError, ValueError) as exc:
            print(f"  {src.name}: PRS decode FAILED ({exc})")
    print(f"Extracted {ok} archive(s) to {OUT_DIR.relative_to(ROOT)}/")
    return 0 if ok else 1


def cmd_strings(args) -> int:
    src = Path(args.file)
    if not src.is_file():
        src = OUT_DIR / src.name
    data = src.read_bytes()
    # GC text uses Sega Shift-JIS/Latin text, with separate 16-bit keyboard keys.
    # --utf16 remains available for explicitly selected non-GC Unicode inputs.
    shown = 0
    if args.utf16:
        i = 0
        cur = []
        while i + 1 < len(data):
            ch = int.from_bytes(data[i:i + 2], "little")
            if 0x20 <= ch < 0xFFFE and ch != 0x7F:
                cur.append(chr(ch))
            else:
                if len(cur) >= args.min_len:
                    print("".join(cur))
                    shown += 1
                cur = []
            i += 2
    else:
        cur = bytearray()
        for b in data:
            if 0x20 <= b < 0x7F:
                cur.append(b)
            else:
                if len(cur) >= args.min_len:
                    print(cur.decode("ascii"))
                    shown += 1
                cur = bytearray()
    print(f"-- {shown} strings (>= {args.min_len} chars)", file=sys.stderr)
    return 0


def _relocation_fields(payload: bytes, table: bytes, count: int, offset: int = 0) -> list[int]:
    if offset < 0 or offset + count * 2 > len(table):
        raise ValueError("relocation table exceeds file")
    fields = []
    position = 0
    for index in range(count):
        delta = struct.unpack_from(">H", table, offset + index * 2)[0]
        position += delta * 4
        if (index and not delta) or position + 4 > len(payload):
            raise ValueError("duplicate or out-of-bounds relocation field")
        # A relocated zero means the start of the payload, not a null pointer.
        if struct.unpack_from(">I", payload, position)[0] >= len(payload):
            raise ValueError("relocation target exceeds payload")
        fields.append(position)
    return fields


def validate_pso_rel(data: bytes) -> dict:
    """Validate pointer relocations without classifying the payload content.

    Format reference: newserv src/CommonFileFormats.hh, RELFileFooterT.
    https://github.com/fuzziqersoftware/newserv/blob/master/src/CommonFileFormats.hh
    """
    if len(data) < 36:
        raise ValueError("truncated PSO REL")
    footer = len(data) - 32
    table, count, _, _, root, _, _, _ = struct.unpack_from(">8I", data, footer)
    if table % 2 or root % 4 or root >= footer or not count:
        raise ValueError("invalid PSO REL footer")
    # These disc dependencies place the table before the footer. Other PSO
    # formats that pack relocations into unused footer words are not accepted.
    _relocation_fields(data[:footer], data[:footer], count, table)
    return {"root_offset": root, "relocations": count,
            "relocation_table_offset": table, "payload_bytes": footer}


def validate_text_pair(pr2: bytes, pr3: bytes) -> dict:
    """Validate the separate GC language payload and relocation archive."""
    text = pr2_decompress(pr2, max_output_size=4 * 1024 * 1024)
    relocations = pr2_decompress(pr3, max_output_size=256 * 1024)
    if len(relocations) < 32 or len(text) < 8:
        raise ValueError("truncated language pair")
    _, count, _, _, root, _, _, _ = struct.unpack_from(">8I", relocations)
    # PR3's table starts after its header; its first word is not a BE offset
    # into PR2 (the retail files contain 0x20000000 here).
    if not count or root != len(text) - 8 or root % 4:
        raise ValueError("invalid language relocation header")
    fields = _relocation_fields(text, relocations, count, 32)
    if root not in fields or root + 4 not in fields:
        raise ValueError("language roots are missing relocations")
    return {"text_bytes": len(text), "relocation_bytes": len(relocations),
            "root_offset": root, "relocations": count}


def load_manifest(path: Path = DEFAULT_MANIFEST, *, data: bytes | None = None) -> dict:
    manifest = json.loads(path.read_bytes() if data is None else data)
    if manifest.get("schema_version") != 1 or not isinstance(manifest.get("files"), list):
        raise ValueError("unsupported data manifest")
    entries = {}
    for entry in manifest["files"]:
        name = entry.get("path", "")
        relative = PurePosixPath(name)
        if (not name.startswith("files/") or relative.as_posix() != name
                or ".." in relative.parts or "\\" in name or name in entries):
            raise ValueError(f"invalid or duplicate data path: {name}")
        if (entry.get("format") not in {"pso_rel", "text_pr2", "text_pr3"}
                or not isinstance(entry.get("size"), int) or entry["size"] < 0
                or len(entry.get("sha1", "")) != 40
                or any(c not in "0123456789abcdef" for c in entry["sha1"])):
            raise ValueError(f"invalid data metadata: {name}")
        entries[name] = entry
    for name, entry in entries.items():
        if entry["format"].startswith("text_"):
            partner = entries.get(entry.get("pair"))
            opposite = "text_pr3" if entry["format"] == "text_pr2" else "text_pr2"
            if not partner or partner["format"] != opposite or partner.get("pair") != name:
                raise ValueError(f"invalid language pair: {name}")
    return manifest


def _replacement_files(root: Path | None, entries: dict) -> set[str]:
    if root is None:
        return set()
    if not root.is_dir():
        raise ValueError(f"replacement directory is missing: {root}")
    names = set()
    for path in root.rglob("*"):
        if path.is_symlink():
            raise ValueError(f"replacement symlink is not supported: {path}")
        if path.is_file():
            name = path.relative_to(root).as_posix()
            if name not in entries:
                raise ValueError(f"replacement is not a data dependency: {name}")
            names.add(name)
    return names


def extract_missing(disc_root: Path, names: list[str], iso: Path | None,
                    dtk: Path | None) -> None:
    if not names:
        return
    if iso is None:
        images = sorted(p for p in disc_root.iterdir()
                        if p.is_file() and p.suffix.lower() in DISC_EXTENSIONS) if disc_root.is_dir() else []
        if len(images) != 1:
            raise ValueError("missing data inputs; supply --iso or keep one disc image in --disc-root")
        iso = images[0]
    if not iso.is_file() or dtk is None or not dtk.is_file():
        raise ValueError("data extraction requires an existing disc image and --dtk executable")
    groups = {}
    for name in names:
        groups.setdefault(PurePosixPath(name).parent.as_posix(), []).append(name)
    for parent, paths in groups.items():
        destination = disc_root / parent
        destination.mkdir(parents=True, exist_ok=True)
        for start in range(0, len(paths), 64):
            subprocess.run([str(dtk.resolve()), "vfs", "cp", "--no-decompress", "-q",
                            *(f"{iso.resolve()}:{name}" for name in paths[start:start + 64]),
                            str(destination.resolve())], check=True)


def verify_data(disc_root: Path, manifest_path: Path = DEFAULT_MANIFEST,
                replacements: Path | None = None, *, iso: Path | None = None,
                dtk: Path | None = None) -> dict:
    """Verify selected dependencies; exact inputs are not recovered-source progress."""
    manifest_bytes = manifest_path.read_bytes()
    manifest = load_manifest(manifest_path, data=manifest_bytes)
    entries = {entry["path"]: entry for entry in manifest["files"]}
    replacement_names = _replacement_files(replacements, entries)
    missing = [name for name in entries if name not in replacement_names
               and not (disc_root / name).is_file()]
    extract_missing(disc_root, missing, iso, dtk)
    files, text_pairs = [], {}
    for name, entry in entries.items():
        replacement = name in replacement_names
        source = (replacements if replacement else disc_root) / name
        if not source.is_file() or source.stat().st_size != entry["size"]:
            raise ValueError(f"missing or wrong-sized data input: {source}")
        data = source.read_bytes()
        if hashlib.sha1(data).hexdigest() != entry["sha1"]:
            raise ValueError(f"data SHA-1 mismatch: {source}")
        validation = {}
        if entry["format"] == "pso_rel":
            try:
                validation = validate_pso_rel(data)
            except ValueError as exc:
                raise ValueError(f"{name}: {exc}") from exc
        else:
            text_pairs[name] = data
        files.append({**entry, "origin": "replacement" if replacement else "original",
                      "source_path": str(source.resolve()), "validation": validation})
    by_name = {entry["path"]: entry for entry in files}
    for name, data in text_pairs.items():
        entry = by_name[name]
        if entry["format"] == "text_pr2":
            try:
                validation = validate_text_pair(data, text_pairs[entry["pair"]])
            except ValueError as exc:
                raise ValueError(f"{name}: {exc}") from exc
            entry["validation"] = validation
            by_name[entry["pair"]]["validation"] = validation
    summary = {"files": len(files), "bytes": sum(e["size"] for e in files)}
    for origin in ("original", "replacement"):
        selected = [entry for entry in files if entry["origin"] == origin]
        summary[f"{origin}_files"] = len(selected)
        summary[f"{origin}_bytes"] = sum(entry["size"] for entry in selected)
    if manifest_path.read_bytes() != manifest_bytes:
        raise ValueError("data manifest changed during verification")
    return {"schema_version": 1, "scope": "runtime_data_dependencies",
            "manifest_sha1": hashlib.sha1(manifest_bytes).hexdigest(),
            "disc_root": str(disc_root.resolve()),
            "replacements_root": str(replacements.resolve()) if replacements is not None else None,
            "summary": summary, "files": files}


def _write_atomic(path: Path, text: str) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with tempfile.NamedTemporaryFile(mode="w", encoding="utf-8", dir=path.parent,
                                     prefix=path.name + ".", delete=False) as stream:
        temporary = Path(stream.name)
        try:
            stream.write(text)
            stream.close()
            os.replace(temporary, path)
        finally:
            temporary.unlink(missing_ok=True)


def cmd_verify(args) -> int:
    # A failed rerun must not leave an older successful report looking current.
    if args.report:
        args.report.unlink(missing_ok=True)
    try:
        report = verify_data(args.disc_root, args.manifest, args.replacements,
                             iso=args.iso, dtk=args.dtk)
        if args.depfile:
            dependencies = {str(args.manifest.resolve()), str(Path(__file__).resolve()),
                            *(entry["source_path"] for entry in report["files"])}
            if args.replacements:
                dependencies.add(str(args.replacements.resolve()))
                dependencies.update(str(p.resolve()) for p in args.replacements.rglob("*") if p.is_dir())
            def escape(value):
                return str(value).replace("\\", "/").replace("$", "$$").replace(" ", "\\ ").replace("#", "\\#").replace(":", "\\:")
            _write_atomic(args.depfile, escape(args.report) + ": " +
                          " ".join(escape(p) for p in sorted(dependencies)) + "\n")
        if args.report:
            _write_atomic(args.report, json.dumps(report, indent=2) + "\n")
        summary = report["summary"]
        print(f"Data dependencies verified: {summary['original_files']} original inputs, "
              f"{summary['replacement_files']} exact replacements (no source-recovery claim)")
        return 0
    except (OSError, ValueError, subprocess.CalledProcessError) as exc:
        print(f"Data verification failed: {exc}", file=sys.stderr)
        return 1


def add_build_steps(config, disc_root: Path, *, manifest: Path = Path("config/GPOE8P/data.json"),
                    replacements: Path | None = None) -> None:
    """Add the primary target's data check using dtk-template's existing hook."""
    tool = Path("tools/pso_assets.py")
    report = config.out_path() / "data-report.json"
    suffix = ".exe" if os.name == "nt" else ""
    dtk = config.dtk_path
    if dtk is None:
        dtk = config.build_dir / "tools" / f"dtk{suffix}"
    elif not dtk.is_file():
        dtk = config.build_dir / "tools" / "release" / f"dtk{suffix}"
    arguments = [str(tool), "verify", "--disc-root", str(disc_root),
                 "--manifest", str(manifest), "--dtk", str(dtk)]
    if replacements is not None:
        arguments += ["--replacements", str(replacements)]
    quoted = subprocess.list2cmdline(arguments) if os.name == "nt" else shlex.join(arguments)
    rule = {"name": "verify_pso_data", "command": "$python " + quoted.replace("$", "$$") +
            ' --report $out --depfile $out.d',
            "description": "VERIFY PSO data dependencies", "depfile": "$out.d", "deps": "gcc"}
    config.custom_build_rules = [*(config.custom_build_rules or []), rule]
    steps = config.custom_build_steps = dict(config.custom_build_steps or {})
    steps["post-build"] = [*steps.get("post-build", []),
                           {"outputs": report, "rule": rule["name"],
                            "inputs": [tool, manifest], "implicit": [dtk]}]
    config.reconfig_deps = [*(config.reconfig_deps or []), tool, manifest]


def main(argv=None) -> int:
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="cmd", required=True)

    p = sub.add_parser("inventory", help="scan the extracted disc and write "
                                         "build/progress/assets.json")
    p.add_argument("--full", action="store_true",
                   help="include the per-file list in assets.json")
    p.set_defaults(func=cmd_inventory)

    p = sub.add_parser("extract", help="PRS-decompress an archive (or --all "
                                       "known data/text archives)")
    p.add_argument("file", nargs="?", default="",
                   help="path or name of a .prs/.pr2 under the disc files/")
    p.add_argument("--all", action="store_true",
                   help="extract the known item/text archives")
    p.set_defaults(func=cmd_extract)

    p = sub.add_parser("strings", help="dump strings from a decompressed "
                                       "archive in build/assets/")
    p.add_argument("file", help="decompressed .bin (name or path)")
    p.add_argument("--utf16", action="store_true", help="decode as UTF-16LE (not GC text)")
    p.add_argument("--min-len", type=int, default=4)
    p.set_defaults(func=cmd_strings)

    p = sub.add_parser("verify", help="verify pinned runtime data and optional exact replacements")
    p.add_argument("--disc-root", type=Path, default=FILES_DIR.parent)
    p.add_argument("--manifest", type=Path, default=DEFAULT_MANIFEST)
    p.add_argument("--report", type=Path, help="write the successful dependency report")
    p.add_argument("--depfile", type=Path, help="write Ninja dependencies (requires --report)")
    p.add_argument("--replacements", type=Path, help="explicit replacement tree containing files/...")
    p.add_argument("--iso", type=Path, help="disc image for missing original inputs")
    p.add_argument("--dtk", type=Path, help="decomp-toolkit executable for extraction")
    p.set_defaults(func=cmd_verify)

    args = ap.parse_args(argv)
    if args.cmd == "verify" and args.depfile and not args.report:
        ap.error("--depfile requires --report")
    return args.func(args)


if __name__ == "__main__":
    sys.exit(main())
