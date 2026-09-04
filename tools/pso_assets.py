#!/usr/bin/env python3
"""PSO disc-asset lane: PRS decompression + asset inventory tracking.

The DOL is not the whole game: item stats live in ItemPMT.prs, in-game text in
Text<Lang>.pr2/.pr3, models in .bml/.nj archives, and per-mode code in .rel
modules — all on disc under orig/GPOE8P/P-GPOE/files/. This tool gives that
surface the same visibility the code has:

  inventory    scan the extracted disc, categorize every file, and write
               build/progress/assets.json (counts, sizes, extraction status)
  extract      PRS-decompress one .prs/.pr2 to build/assets/ (or --all for the
               known data/text archives)
  strings      dump printable strings from a decompressed text archive

PRS is Sega's LZ77 variant (fuzziqer/newserv-compatible implementation below;
newserv is the format authority — see reference/newserv-LICENSE).
"""

from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
FILES_DIR = ROOT / "orig" / "GPOE8P" / "P-GPOE" / "files"
SYS_DIR = ROOT / "orig" / "GPOE8P" / "P-GPOE" / "sys"
OUT_DIR = ROOT / "build" / "assets"
INVENTORY_JSON = ROOT / "build" / "progress" / "assets.json"

# Category by extension — the disc's asset taxonomy.
CATEGORIES = {
    ".prs": "data-compressed (PRS)",
    ".pr2": "text/data archive (PRS-compressed body)",
    ".pr3": "text/data archive (pointer table)",
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


def prs_decompress(data: bytes) -> bytes:
    """Decompress Sega PRS (the fuzziqer-software algorithm newserv uses)."""
    out = bytearray()
    pos = 0
    ctrl = 0
    bits = 0

    def getbit() -> int:
        nonlocal ctrl, bits, pos
        if bits == 0:
            ctrl = data[pos]
            pos += 1
            bits = 8
        bit = ctrl & 1
        ctrl >>= 1
        bits -= 1
        return bit

    while pos < len(data):
        if getbit():                      # literal
            out.append(data[pos])
            pos += 1
            continue
        if getbit():                      # long copy (or end marker)
            a = data[pos]
            b = data[pos + 1]
            pos += 2
            if a == 0 and b == 0:
                break
            t = a | (b << 8)
            offset = (t >> 3) - 0x2000    # negative displacement
            amount = t & 7
            if amount == 0:
                amount = data[pos] + 1
                pos += 1
            else:
                amount += 2
        else:                             # short copy
            amount = getbit() * 2 + getbit() + 2
            offset = data[pos] - 0x100
            pos += 1
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


def pr2_decompress(data: bytes, big_endian: bool = True) -> bytes:
    """Decrypt + decompress a PRC-wrapped .pr2 (GC text archives)."""
    bo = "big" if big_endian else "little"
    out_size = int.from_bytes(data[0:4], bo)
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
    plain = prs_decompress(bytes(body))
    if out_size and len(plain) < out_size:
        raise ValueError(f"decompressed {len(plain)} < header {out_size}")
    return plain[:out_size] if out_size else plain


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
            "extracted": (OUT_DIR / (p.stem + ".bin")).exists(),
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
    "TextEnglish.pr2", "TextJapanese.pr2", "TextFrench.pr2",
    "TextGerman.pr2", "TextSpanish.pr2",
]


def _extract_one(src: Path) -> Path:
    raw = src.read_bytes()
    if src.suffix.lower() == ".pr2":
        try:
            body = pr2_decompress(raw, big_endian=True)
        except (IndexError, ValueError):
            body = pr2_decompress(raw, big_endian=False)
    else:
        body = prs_decompress(raw)
    OUT_DIR.mkdir(parents=True, exist_ok=True)
    dst = OUT_DIR / (src.stem + ".bin")
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
    # PSO GC text archives store UTF-16LE strings; fall back to ASCII runs.
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
    p.add_argument("--utf16", action="store_true", help="decode as UTF-16BE")
    p.add_argument("--min-len", type=int, default=4)
    p.set_defaults(func=cmd_strings)

    args = ap.parse_args(argv)
    return args.func(args)


if __name__ == "__main__":
    sys.exit(main())
