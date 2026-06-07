#!/usr/bin/env python3
"""
ISO Reconstruction Tool for PSO Decomp

Rebuilds the original Phantasy Star Online Episode I & II Plus ISO
from the decompiled/recompiled DOL and original game files.

Usage:
    python tools/build_iso.py build              # Build ISO from current DOL
    python tools/build_iso.py verify             # Verify built ISO against original
    python tools/build_iso.py check-dol          # Quick DOL-only hash check
    python tools/build_iso.py compare-sections   # Section-by-section comparison
"""

import argparse
import hashlib
import os
import struct
import subprocess
import sys
from pathlib import Path

# Project root
ROOT = Path(__file__).resolve().parent.parent
ORIG_DIR = ROOT / "orig" / "GPOE8P" / "P-GPOE"
BUILD_DIR = ROOT / "build" / "GPOE8P"

# Known hashes
EXPECTED_DOL_SHA1 = "5f74659ed8968974ad3d334c4f22843800357dfe"
EXPECTED_ISO_SHA1 = "0ff155311f4cc57951c03baeb1a8cc15de5fe1cd"


def sha1_file(path: Path) -> str:
    """Compute SHA1 hash of a file."""
    h = hashlib.sha1()
    with open(path, "rb") as f:
        while True:
            chunk = f.read(65536)
            if not chunk:
                break
            h.update(chunk)
    return h.hexdigest()


def sha1_bytes(data: bytes) -> str:
    return hashlib.sha1(data).hexdigest()


def parse_dol_header(path: Path) -> dict:
    """Parse DOL file header."""
    with open(path, "rb") as f:
        data = f.read(0x100)

    text_offsets = struct.unpack(">7I", data[0x00:0x1C])
    data_offsets = struct.unpack(">11I", data[0x1C:0x48])
    text_addrs = struct.unpack(">7I", data[0x48:0x64])
    data_addrs = struct.unpack(">11I", data[0x64:0x90])
    text_sizes = struct.unpack(">7I", data[0x90:0xAC])
    data_sizes = struct.unpack(">11I", data[0xAC:0xD8])
    bss_addr = struct.unpack(">I", data[0xD8:0xDC])[0]
    bss_size = struct.unpack(">I", data[0xDC:0xE0])[0]
    entry = struct.unpack(">I", data[0xE0:0xE4])[0]

    sections = []
    for i in range(7):
        if text_sizes[i] > 0:
            sections.append({
                "name": f".text{i}",
                "type": "text",
                "offset": text_offsets[i],
                "addr": text_addrs[i],
                "size": text_sizes[i],
            })
    for i in range(11):
        if data_sizes[i] > 0:
            sections.append({
                "name": f".data{i}",
                "type": "data",
                "offset": data_offsets[i],
                "addr": data_addrs[i],
                "size": data_sizes[i],
            })

    return {
        "entry": entry,
        "bss_addr": bss_addr,
        "bss_size": bss_size,
        "sections": sections,
    }


def cmd_check_dol(args):
    """Quick DOL hash check."""
    built_dol = BUILD_DIR / "main.dol"
    orig_dol = ORIG_DIR / "sys" / "main.dol"

    if not orig_dol.exists():
        print(f"ERROR: Original DOL not found at {orig_dol}")
        return 1

    orig_hash = sha1_file(orig_dol)
    print(f"Original DOL SHA1: {orig_hash}")
    assert orig_hash == EXPECTED_DOL_SHA1, "Original DOL hash mismatch!"

    if not built_dol.exists():
        print(f"Built DOL not found at {built_dol}")
        print("Run the build first: ninja")
        return 1

    built_hash = sha1_file(built_dol)
    print(f"Built DOL SHA1:    {built_hash}")

    if built_hash == EXPECTED_DOL_SHA1:
        print("\nMATCH! Built DOL is byte-identical to original.")
        return 0
    else:
        print("\nMISMATCH. Built DOL differs from original.")
        print("Run 'compare-sections' for detailed diff.")
        return 1


def cmd_compare_sections(args):
    """Section-by-section comparison between built and original DOL."""
    built_dol = BUILD_DIR / "main.dol"
    orig_dol = ORIG_DIR / "sys" / "main.dol"

    if not orig_dol.exists():
        print(f"ERROR: Original DOL not found at {orig_dol}")
        return 1
    if not built_dol.exists():
        print(f"ERROR: Built DOL not found at {built_dol}")
        print("Run the build first: ninja")
        return 1

    with open(orig_dol, "rb") as f:
        orig_data = f.read()
    with open(built_dol, "rb") as f:
        built_data = f.read()

    orig_info = parse_dol_header(orig_dol)
    built_info = parse_dol_header(built_dol)

    print("=" * 72)
    print("  Section-by-Section Comparison")
    print("=" * 72)

    total_bytes = 0
    match_bytes = 0
    mismatches = []

    for osec in orig_info["sections"]:
        name = osec["name"]
        ostart = osec["offset"]
        osize = osec["size"]
        odata = orig_data[ostart:ostart + osize]

        # Find corresponding section in built
        bsec = None
        for s in built_info["sections"]:
            if s["addr"] == osec["addr"]:
                bsec = s
                break

        total_bytes += osize

        if bsec is None:
            print(f"  {name:12s}  MISSING in built DOL")
            mismatches.append((name, osize, 0))
            continue

        bstart = bsec["offset"]
        bsize = bsec["size"]
        bdata = built_data[bstart:bstart + bsize]

        if osize != bsize:
            print(f"  {name:12s}  SIZE MISMATCH: orig={osize} built={bsize}")
            mismatches.append((name, osize, 0))
            continue

        # Byte-by-byte comparison
        matching = sum(1 for a, b in zip(odata, bdata) if a == b)
        match_bytes += matching
        pct = (matching / osize * 100) if osize > 0 else 100.0

        if matching == osize:
            status = "MATCH"
        else:
            status = f"{pct:.1f}%"
            # Find first difference
            first_diff = next(i for i, (a, b) in enumerate(zip(odata, bdata)) if a != b)
            status += f" (first diff at +0x{first_diff:X})"
            mismatches.append((name, osize, matching))

        print(f"  {name:12s}  {osize:8d} bytes  {status}")

    print("-" * 72)
    total_pct = (match_bytes / total_bytes * 100) if total_bytes > 0 else 0
    print(f"  Total: {match_bytes}/{total_bytes} bytes matching ({total_pct:.2f}%)")

    if not mismatches:
        print("\n  ALL SECTIONS MATCH!")
    else:
        print(f"\n  {len(mismatches)} section(s) with mismatches")

    return 0 if not mismatches else 1


def cmd_build(args):
    """Build ISO from decompiled DOL + original game files."""
    built_dol = BUILD_DIR / "main.dol"

    if not built_dol.exists():
        print("No built DOL found. Running ninja first...")
        result = subprocess.run(["ninja"], cwd=ROOT)
        if result.returncode != 0:
            print("Build failed!")
            return 1

    if not built_dol.exists():
        print(f"ERROR: Built DOL not found at {built_dol}")
        return 1

    # Create a staging directory
    stage_dir = BUILD_DIR / "iso_stage"
    stage_dir.mkdir(parents=True, exist_ok=True)

    # Copy original filesystem
    orig_files = ORIG_DIR / "files"
    stage_files = stage_dir / "files"
    stage_sys = stage_dir / "sys"

    print("Staging ISO contents...")

    # Use wit to create ISO from the original extraction, replacing the DOL
    iso_out = BUILD_DIR / "pso_rebuilt.iso"

    # Method: copy original, replace DOL, repack with wit
    import shutil

    # Clean stage
    if stage_dir.exists():
        shutil.rmtree(stage_dir)

    # Copy original structure
    shutil.copytree(ORIG_DIR, stage_dir)

    # Replace DOL with built version
    stage_dol = stage_dir / "sys" / "main.dol"
    shutil.copy2(built_dol, stage_dol)
    print(f"Replaced DOL: {sha1_file(stage_dol)}")

    # Rebuild ISO with wit
    print(f"Building ISO: {iso_out}")
    result = subprocess.run(
        ["wit", "copy", str(stage_dir), str(iso_out), "--overwrite"],
        capture_output=True,
        text=True,
    )

    if result.returncode != 0:
        print(f"wit failed: {result.stderr}")
        return 1

    print(f"ISO built: {iso_out}")
    print(f"ISO size: {iso_out.stat().st_size:,} bytes")

    # Verify
    iso_hash = sha1_file(iso_out)
    print(f"ISO SHA1: {iso_hash}")

    if iso_hash == EXPECTED_ISO_SHA1:
        print("\nISO MATCH! Rebuilt ISO is byte-identical to original!")
        return 0
    else:
        print(f"\nISO mismatch (expected {EXPECTED_ISO_SHA1})")
        dol_hash = sha1_file(stage_dol)
        if dol_hash != EXPECTED_DOL_SHA1:
            print("DOL doesn't match yet - this is expected during development")
        return 1


def cmd_verify(args):
    """Verify existing built ISO against original."""
    iso_path = BUILD_DIR / "pso_rebuilt.iso"
    if not iso_path.exists():
        print(f"No ISO found at {iso_path}")
        print("Run 'build' first")
        return 1

    iso_hash = sha1_file(iso_path)
    print(f"Built ISO SHA1:    {iso_hash}")
    print(f"Expected ISO SHA1: {EXPECTED_ISO_SHA1}")

    if iso_hash == EXPECTED_ISO_SHA1:
        print("\nMATCH!")
        return 0
    else:
        print("\nMISMATCH")
        return 1


def main():
    parser = argparse.ArgumentParser(
        description="PSO Decomp ISO Reconstruction Tool"
    )
    sub = parser.add_subparsers(dest="command")

    sub.add_parser("build", help="Build ISO from decompiled DOL")
    sub.add_parser("verify", help="Verify built ISO against original")
    sub.add_parser("check-dol", help="Quick DOL hash check")
    sub.add_parser("compare-sections", help="Section-by-section comparison")

    args = parser.parse_args()

    if args.command is None:
        parser.print_help()
        return 0

    commands = {
        "build": cmd_build,
        "verify": cmd_verify,
        "check-dol": cmd_check_dol,
        "compare-sections": cmd_compare_sections,
    }

    return commands[args.command](args)


if __name__ == "__main__":
    sys.exit(main())
