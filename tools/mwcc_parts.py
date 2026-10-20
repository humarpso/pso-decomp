"""Recognize MWCC function parts superseded by later strong definitions.

This recognizes only the observed BE ELF32/PPC .mwcats.text format. Unknown
or inconsistent metadata returns zero through mwcat_discarded_text_bytes().
It never treats an arbitrary uncovered text span as linker padding.
"""
from pathlib import Path
import struct


class Unproven(ValueError):
    pass


def inspect_mwcat_orphans(path):
    b = Path(path).read_bytes()

    def need(ok, reason):
        if not ok:
            raise Unproven(reason)

    def unpack(fmt, offset):
        size = struct.calcsize(fmt)
        need(0 <= offset <= len(b) - size, "truncated ELF field")
        return struct.unpack_from(fmt, b, offset)

    need(b[:7] == b"\x7fELF\x01\x02\x01", "not BE ELF32")
    need(unpack(">HH", 16) == (1, 20), "not relocatable PPC")
    shoff, = unpack(">I", 32)
    shentsize, shnum, shstrndx = unpack(">HHH", 46)
    need(shentsize == 40 and 0 < shstrndx < shnum, "unknown section table")
    sections = []
    for i in range(shnum):
        row = unpack(">10I", shoff + i * shentsize)
        sections.append(dict(zip(
            ("nameoff", "type", "flags", "addr", "offset", "size",
             "link", "info", "align", "entsize"), row)))

    def payload(sec):
        need(sec["type"] != 8, "unexpected NOBITS metadata")
        start, size = sec["offset"], sec["size"]
        need(start <= len(b) and size <= len(b) - start, "truncated section")
        return b[start:start + size]

    def string(data, offset):
        need(0 <= offset < len(data), "bad string offset")
        end = data.find(b"\0", offset)
        need(end >= 0, "unterminated string")
        return data[offset:end].decode("utf-8", errors="strict")

    shstr = payload(sections[shstrndx])
    for sec in sections:
        sec["name"] = string(shstr, sec["nameoff"])

    def unique(predicate, reason):
        matches = [i for i, sec in enumerate(sections) if predicate(sec)]
        need(len(matches) == 1, reason)
        return matches[0]

    text_idx = unique(lambda s: s["name"] == ".text", "missing/duplicate .text")
    cat_idx = unique(lambda s: s["name"] == ".mwcats.text", "missing/duplicate catalog")
    sym_idx = unique(lambda s: s["type"] == 2, "missing/ambiguous symbol table")
    text, cat, symsec = sections[text_idx], sections[cat_idx], sections[sym_idx]
    need(text["type"] == 1 and text["flags"] & 6 == 6, "not allocated code")
    need(cat["type"] == 0xCA2A82C2 and cat["link"] == text_idx,
         "catalog does not identify this .text")
    need(cat["size"] > 0 and cat["size"] % 8 == 0, "partial catalog record")
    need(symsec["entsize"] == 16 and symsec["size"] % 16 == 0,
         "unknown symbol layout")
    need(0 <= symsec["link"] < shnum, "bad symbol strings")
    strtab = payload(sections[symsec["link"]])
    symdata = payload(symsec)
    symbols = []
    for off in range(0, len(symdata), 16):
        nameoff, value, size, info, other, shndx = struct.unpack_from(">IIIBBH", symdata, off)
        symbols.append(dict(name=string(strtab, nameoff), value=value, size=size,
                            bind=info >> 4, type=info & 15, section=shndx))

    # Read every relocation, not just catalog entries: a section-symbol plus
    # addend can otherwise expose a supposedly superseded part to live code.
    relocs = []
    cat_relocs = {}
    text_reloc_offsets = set()
    for sec in sections:
        need(sec["type"] != 9, "REL addends are not supported")
        if sec["type"] != 4:
            continue
        need(sec["link"] == sym_idx and 0 < sec["info"] < shnum,
             "relocation uses another/invalid table")
        need(sec["entsize"] == 12 and sec["size"] % 12 == 0,
             "unknown relocation layout")
        data = payload(sec)
        for off in range(0, len(data), 12):
            offset, info, addend = struct.unpack_from(">IIi", data, off)
            target_idx, kind = info >> 8, info & 255
            source_idx = sec["info"]
            need(target_idx < len(symbols) and offset < sections[source_idx]["size"],
                 "out-of-bounds relocation")
            rel = (source_idx, offset, target_idx, kind, addend)
            relocs.append(rel)
            if source_idx == text_idx:
                text_reloc_offsets.add(offset)
            if source_idx == cat_idx:
                need(offset not in cat_relocs, "duplicate catalog relocation")
                cat_relocs[offset] = rel

    catdata = payload(cat)
    rows = []
    cursor = 0
    for off in range(0, len(catdata), 8):
        packed, pointer = struct.unpack_from(">II", catdata, off)
        size = packed & 0xFFFFFF
        need(packed >> 24 == 2 and size > 0 and size % 4 == 0 and pointer == 0,
             "unknown function-part descriptor")
        need(off + 4 in cat_relocs, "missing function-part relocation")
        _, _, target_idx, kind, addend = cat_relocs[off + 4]
        need(kind == 1 and addend == 0, "function-part relocation is not plain ADDR32")
        sym = symbols[target_idx]
        need(sym["type"] == 2 and sym["section"] == text_idx and sym["size"] > 0,
             "function part does not target a defined text function")
        need(cursor + size <= text["size"], "function parts exceed text")
        rows.append(dict(start=cursor, end=cursor + size, size=size,
                         target=target_idx, name=sym["name"], record=off))
        cursor += size
    need(cursor == text["size"] and len(cat_relocs) == len(rows),
         "catalog does not tile all text exactly")

    canonical = {}
    for row in rows:
        sym = symbols[row["target"]]
        if row["start"] == sym["value"] and row["size"] == sym["size"]:
            need(row["target"] not in canonical, "ambiguous canonical record")
            canonical[row["target"]] = row
    text_functions = {i for i, sym in enumerate(symbols)
                      if sym["section"] == text_idx and sym["type"] == 2}
    need(set(canonical) == text_functions, "missing canonical function record")

    discarded = []
    for row in rows:
        if canonical[row["target"]] is row:
            continue
        sym = symbols[row["target"]]
        # Narrowly recognize an earlier stale descriptor whose symbol was
        # replaced by a later strong definition in this same object.
        need(sym["bind"] == 1 and sym["value"] >= row["end"],
             "duplicate part lacks a later GLOBAL canonical definition")
        discarded.append(row)

    def overlaps(start, end):
        return any(start < row["end"] and row["start"] < end for row in discarded)

    for sym in symbols:
        if sym["section"] == text_idx and sym["type"] != 3:
            need(not overlaps(sym["value"], sym["value"] + max(sym["size"], 1)),
                 "live symbol covers a discarded part")
    for source_idx, offset, target_idx, kind, addend in relocs:
        if source_idx == text_idx and overlaps(offset, offset + 1):
            continue  # outbound reference in a discarded part
        sym = symbols[target_idx]
        if sym["section"] == text_idx:
            target = sym["value"] + addend
            need(not overlaps(target, target + 1), "live relocation targets discarded text")

    # A same-section branch may have no ELF relocation at all. Reject these
    # incoming edges as well; this is not a general PowerPC control-flow pass.
    code = payload(text)
    for off in range(0, len(code), 4):
        if overlaps(off, off + 4) or off in text_reloc_offsets:
            continue
        word, = struct.unpack_from(">I", code, off)
        opcode = word >> 26
        if opcode == 18:
            disp = word & 0x03FFFFFC
            if disp & 0x02000000:
                disp -= 0x04000000
        elif opcode == 16:
            disp = word & 0xFFFC
            if disp & 0x8000:
                disp -= 0x10000
        else:
            continue
        target = disp if word & 2 else off + disp
        need(not overlaps(target, target + 1), "live direct branch targets discarded text")

    return dict(text_size=len(code), records=len(rows), canonical_records=len(canonical),
                discarded_bytes=sum(row["size"] for row in discarded), discarded=discarded)


def mwcat_discarded_text_bytes(path):
    """Return only positively proven superseded-part bytes, or zero."""
    try:
        return inspect_mwcat_orphans(path)["discarded_bytes"]
    except (OSError, Unproven, struct.error, UnicodeError, IndexError, KeyError):
        return 0


if __name__ == "__main__":
    import json
    import sys
    for path in sys.argv[1:]:
        try:
            print(json.dumps(dict(path=path, **inspect_mwcat_orphans(path)), indent=2))
        except (OSError, Unproven, struct.error, UnicodeError, IndexError, KeyError) as exc:
            print(json.dumps(dict(path=path, discarded_bytes=0, refused=str(exc)), indent=2))
