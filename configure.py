#!/usr/bin/env python3

###
# PSO Episode I & II Plus decompilation build configuration.
#
# Generates build.ninja, objdiff.json, and compile_commands.json
# using the standard dtk-template project generator (tools/project.py).
#
# Usage:
#   python3 configure.py                    # Generate build files
#   python3 configure.py --help             # Show all options
#
# After generating:
#   ninja                                   # Build & verify (default)
#   ninja all_source                        # Compile all source objects
#   ninja progress                          # Show progress after build
###

import argparse
import sys
from pathlib import Path
from typing import Any, Dict, List
from tools.compiler_profiles import load_profiles, object_options

from tools.project import (
    Object,
    ProgressCategory,
    ProjectConfig,
    calculate_progress,
    generate_build,
    is_windows,
)

# ===================================================================
# Helper: Matching / NonMatching constructors
# ===================================================================
def Matching(name: str, **kwargs: Any) -> Object:
    """An object that byte-matches the original binary."""
    return Object(True, name, **kwargs)

# Units whose compiled object is LINKED into the DOL. Earned from report.json
# (every function + section 100%); never
# hand-edit. A listed unit is treated as Matching even though it is registered
# below with NonMatching(...) — the list, not the call site, is the authority.
_LINKED_UNITS_FILE = Path(__file__).resolve().parent / "config" / "GPOE8P" / "psov3" / "linked_units.txt"
_LINKED_UNITS = set()
if _LINKED_UNITS_FILE.exists():
    for _line in _LINKED_UNITS_FILE.read_text().splitlines():
        _line = _line.split("#", 1)[0].strip()
        if _line:
            _LINKED_UNITS.add(_line)

def _psov3_units_from_splits(prefix: str = "pso/") -> List[str]:
    """Unit names (== source paths) of every `prefix` unit in splits.txt."""
    path = Path(__file__).resolve().parent / "config" / "GPOE8P" / "psov3" / "splits.txt"
    out: List[str] = []
    if path.exists():
        for line in path.read_text().splitlines():
            if line.startswith(prefix) and line.rstrip().endswith(":"):
                out.append(line.rstrip()[:-1])
    return out


def _musyx_options(unit: str, profiles: dict) -> dict:
    # PSO's MusyX objects carry extab/extabindex for every non-leaf function;
    # C++ with exceptions on reproduces those tables byte for byte and leaves
    # .text unchanged.
    options = object_options(unit, cflags_pso, profiles)
    options["cflags"] = [
        "-Cpp_exceptions on" if f == "-Cpp_exceptions off" else f
        for f in options["cflags"]
    ] + ["-lang=c++"]
    return options

def NonMatching(name: str, **kwargs: Any) -> Object:
    """An object that does not yet match (work in progress) — unless
    linked_units.txt lists it as verified exact."""
    return Object(name in _LINKED_UNITS, name, **kwargs)

Equivalent = NonMatching

# ===================================================================
# Version Configuration
# ===================================================================
DEFAULT_VERSION = "GPOE8P"
VERSIONS = [
    "GPOE8P",  # USA v1.02
]

# ===================================================================
# Argument Parsing
# ===================================================================
parser = argparse.ArgumentParser(
    description="PSO Episode I & II Plus decompilation build configuration"
)
parser.add_argument(
    "mode",
    choices=["configure", "progress"],
    default="configure",
    nargs="?",
    help="script mode (default: configure)",
)
parser.add_argument(
    "-v", "--version",
    choices=VERSIONS,
    type=str,
    default=DEFAULT_VERSION,
    help=f"game version (default: {DEFAULT_VERSION})",
)
parser.add_argument(
    "--build-dir",
    metavar="DIR",
    type=Path,
    default=Path("build"),
    help="base build directory (default: build)",
)
parser.add_argument(
    "--non-matching",
    dest="non_matching",
    action="store_true",
    help="build non-matching objects",
)
parser.add_argument(
    "--map",
    action="store_true",
    help="generate linker map file(s)",
)
parser.add_argument(
    "--dtk",
    metavar="BINARY",
    type=Path,
    help="path to decomp-toolkit binary",
)
parser.add_argument(
    "--objdiff",
    metavar="BINARY",
    type=Path,
    help="path to objdiff-cli binary",
)
parser.add_argument(
    "--compilers",
    metavar="DIR",
    type=Path,
    help="path to compilers directory",
)
parser.add_argument(
    "--binutils",
    metavar="BINARY",
    type=Path,
    help="path to binutils",
)
parser.add_argument(
    "--sjiswrap",
    metavar="EXE",
    type=Path,
    help="path to sjiswrap.exe",
)
if not is_windows():
    parser.add_argument(
        "--wrapper",
        metavar="BINARY",
        type=Path,
        help="path to wibo or wine",
    )
parser.add_argument(
    "--verbose",
    action="store_true",
    help="print verbose output",
)
parser.add_argument(
    "--no-progress",
    dest="progress",
    action="store_false",
    help="disable progress calculation",
)
parser.add_argument(
    "--target",
    choices=["psov3", "main"],
    default="psov3",
    help="DOL target to build (default: psov3 — the game binary)",
)
args = parser.parse_args()

# ===================================================================
# Project Configuration
# ===================================================================
config = ProjectConfig()
config.version = str(args.version)
config.build_dir = args.build_dir
config.non_matching = args.non_matching
config.generate_map = args.map
# Use local patched dtk binary if available, otherwise use --dtk arg or download
_local_dtk = Path("tools/dtk")
if args.dtk is not None:
    config.dtk_path = args.dtk
elif _local_dtk.is_file():
    config.dtk_path = _local_dtk
else:
    config.dtk_path = None
config.objdiff_path = args.objdiff
config.compilers_path = args.compilers
config.binutils_path = args.binutils
config.sjiswrap_path = getattr(args, "sjiswrap", None)
config.progress = args.progress
if not is_windows():
    config.wrapper = getattr(args, "wrapper", None)

# Don't build asm overrides unless --non-matching
if not config.non_matching:
    config.asm_dir = None

# PSO uses `.rel` as a generic data-file extension. `movie.rel` is the only
# verified standard CodeWarrior REL module; it needs its own non-empty module
# config, symbols, splits, and source plan before enabling REL linking.
config.build_rels = False

# ---------------------------------------------------------------------------
# Tool versions (from dtk-template)
# ---------------------------------------------------------------------------
config.binutils_tag = "2.42-1"
config.compilers_tag = "20251118"
config.dtk_tag = "v1.8.3"
config.objdiff_tag = "v3.6.1"
config.sjiswrap_tag = "v1.2.2"
config.wibo_tag = "1.0.3"

# ---------------------------------------------------------------------------
# Paths — select DOL target
# ---------------------------------------------------------------------------
if args.target == "psov3":
    config.config_path = Path("config") / config.version / "psov3" / "config.yml"
    config.check_sha_path = Path("config") / config.version / "psov3" / "build.sha1"
else:
    config.config_path = Path("config") / config.version / "config.yml"
    config.check_sha_path = Path("config") / config.version / "build.sha1"
    # Separate output namespace (build/GPOE8P-main/) so switching targets
    # doesn't clobber the psov3 target's split/obj artifacts.
    config.version = f"{config.version}-main"

# ---------------------------------------------------------------------------
# Assembler flags
# ---------------------------------------------------------------------------
config.asflags = [
    "-mgekko",
    "--strip-local-absolute",
    "-I include",
    f"-I build/{config.version}/include",
]

# ---------------------------------------------------------------------------
# Linker flags
# ---------------------------------------------------------------------------
config.ldflags = [
    "-fp hardware",
    "-nodefaults",
]
if args.map:
    config.ldflags.append("-mapunused")

# Linker version
config.linker_version = "GC/2.6"

# Re-configure when these files change
config.reconfig_deps = []

# Shift JIS: disabled by default, enable per-object if needed
config.shift_jis = False

# ===================================================================
# Compiler Flags
# ===================================================================

# Base flags: CodeWarrior for GameCube, matching the original build.
cflags_base = [
    "-nodefaults",
    "-proc gekko",
    "-align powerpc",
    "-enum int",
    "-fp hardware",
    "-Cpp_exceptions off",
    "-RTTI off",
    "-O4,p",
    "-inline auto",
    "-str reuse",
    "-maxerrors 1",
    "-nosyspath",
    # Generated headers only — per-group include paths live in
    # cflags_pso / cflags_dolphin / cflags_runtime below so SDK code
    # never sees game headers and vice versa.
    f"-i build/{config.version}/include",
]

# PSO main game code flags. Do not pass the base speed/auto-inline flags and
# then override them later; some MWCC/wibo rebuild paths are fragile with
# duplicate optimization switches. SDK/runtime still use cflags_base unchanged.
cflags_pso_base = [
    f for f in cflags_base
    if f not in ("-O4,p", "-inline auto")
]

cflags_pso = [
    *cflags_pso_base,
    "-i include",
    "-i src",
    "-i libs/dolphin/include",
    "-i libs/dolphin/include/dolphin",  # for "types.h" includes inside SDK headers
    "-char signed",
    "-use_lmw_stmw on",
    # Sega's game code was built optimize-for-SIZE, not speed: the original
    # uses stmw/lmw register save-restore and un-scheduled prologues. -O4,s
    # reproduces that (verified via locate_func masked scan, 2026-06-12).
    # SDK/runtime keep their own optimization via cflags_dolphin/runtime.
    "-O4,s",
    # ...and with auto-inlining OFF. The original keeps operator new/delete,
    # accessors, etc. as real out-of-line calls. Switching -inline auto ->
    # off took locate_func FOUND counts from 6->83 (TProtocol), 2->16
    # (TMainTask), 5->13 (TObject) with zero regressions (2026-06-12).
    "-inline off",
    # Target game code loads f64 constant-pool literals (int->float magic
    # 0x4330000080000000 etc.) from .rodata via lis/@l, never @sda21 — the
    # target's lfd@sda21 sites are all SDK-side units. mwcc's default
    # -sdata2 8 parks compiler-generated doubles in .sdata2, which is the
    # documented "magic-const @sda21-vs-rodata" stuck cluster. 4 keeps f32
    # consts (lfs @sda21, everywhere in target game code) small-data while
    # pushing 8-byte pool literals to .rodata like the original.
    "-sdata2 4",
]

# Dolphin SDK library flags
cflags_dolphin = [
    *cflags_base,
    "-i libs/dolphin/include",
    "-i libs/dolphin/include/dolphin",  # for "types.h" includes inside SDK headers
    "-i libs/dolphin/include/libc",
    "-i libs/dolphin/src",
    "-char unsigned",
    "-fp_contract off",
    "-D__GEKKO__",  # donor SDK sources guard asm functions with this
]

# odemuexi2/DebuggerDriver.o was built with deferred inlining: functions are
# emitted in reverse definition order and its small EXI helpers inline away.
cflags_dolphin_deferred = [
    "-inline auto,deferred" if f == "-inline auto" else f for f in cflags_dolphin
]

# Recovered SDK owners omit unused inline-math constants from their pools.
cflags_dolphin_recovered = [
    f for f in cflags_dolphin if f != "-char unsigned"
] + ["-char signed", "-DPSO_SDK_COMPACT_MATH"]

# PowerPC EABI runtime flags
cflags_runtime = [
    *cflags_base,
    # ac-donor MSL_C/ + libc/ headers first (the MSL sources are ac's
    # no-threads build, which is what PSO's MSL actually is). Do NOT mix in
    # libs/dolphin/include/libc here — its stdio.h shares the same include
    # guard but lacks the FILE typedef.
    "-i libs/PowerPC_EABI_Support/include",
    "-i libs/PowerPC_EABI_Support/include/libc",
    "-i libs/dolphin/include/dolphin",
    "-i libs/PowerPC_EABI_Support/Runtime/Inc",
    "-i libs/PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Include",
    "-i libs/PowerPC_EABI_Support/MSL/MSL_C/PPC_EABI/Include",
    "-use_lmw_stmw on",
    "-str reuse,pool,readonly",
    "-common off",
    "-char signed",
    "-inline deferred,auto",
]

# MetroTRK debugger flags (mirrors ac-decomp's TRK_MINNOW_DOLPHIN lib)
cflags_trk = [
    *cflags_base,
    "-i libs",
    "-i libs/dolphin/include",
    "-i libs/dolphin/include/dolphin",
    "-i libs/dolphin/include/libc",
    "-i libs/PowerPC_EABI_Support/Runtime/Inc",
    "-i libs/PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Include",
    "-i libs/PowerPC_EABI_Support/MSL/MSL_C/PPC_EABI/Include",
    "-sdata 0",
    "-sdata2 0",
    "-inline auto,deferred",
    "-rostr",
    "-char signed",
    "-use_lmw_stmw on",
]

# Native donor profiles verified against complete owning translation units.
cflags_native_recovered = [
    '-nodefaults',
    '-proc gekko',
    '-align powerpc',
    '-enum int',
    '-fp hardware',
    '-Cpp_exceptions off',
    '-RTTI off',
    '-O4,p',
    '-str reuse,pool,readonly',
    '-maxerrors 1',
    '-nosyspath',
    '-fp_contract off',
    '-char signed',
    '-use_lmw_stmw on',
    '-common off',
    '-D__GEKKO__',
    '-DDEBUG=0',
    '-DNDEBUG',
    '-DVERSION=0',
    '-inline deferred,auto',
    '-i libs',
    '-i libs/PowerPC_EABI_Support/include',
    '-i libs/PowerPC_EABI_Support/include/libc',
    '-i libs/dolphin/include',
    '-i libs/dolphin/include/dolphin',
]
cflags_native_recovered_auto = [
    "-inline auto" if f == "-inline deferred,auto" else f
    for f in cflags_native_recovered
]

# ===================================================================
# Library Helpers
# ===================================================================

def DolphinLib(lib_name: str, objects: list) -> dict:
    """A Dolphin SDK library. Use when registering SDK source files.

    The SDK copy embedded in PsoV3.dol was prebuilt by Nintendo with an
    older compiler than the game code — GC/1.2.5n matches its prologue
    style (mflr/stw/stwu, 0x8 frames), same as tp's DolphinLib.
    """
    return {
        "lib": lib_name,
        "mw_version": "GC/1.2.5n",
        "cflags": cflags_dolphin,
        "progress_category": "sdk",
        "src_dir": "libs/dolphin/src",
        "objects": objects,
    }


_msl_math = {
    "mw_version": "GC/1.3",
    "cflags": [f for f in cflags_runtime if f != "-fp_contract off"] + ["-fp_contract on"],
}


def RuntimeLib(lib_name: str, objects: list) -> dict:
    """A PowerPC EABI runtime / MSL library.

    Unit names carry the full PowerPC_EABI_Support/... prefix (same as tp)
    so src_dir is libs/.
    """
    return {
        "lib": lib_name,
        "mw_version": "GC/2.6",
        "cflags": cflags_runtime,
        "progress_category": "runtime",
        "src_dir": "libs",
        "objects": objects,
    }


def TRKLib(lib_name: str, objects: list) -> dict:
    """MetroTRK debugger library. Prebuilt like the SDK; flags and compiler
    follow ac-decomp's TRK_MINNOW_DOLPHIN settings (GC/1.3)."""
    return {
        "lib": lib_name,
        "mw_version": "GC/1.3",
        "cflags": cflags_trk,
        "progress_category": "sdk",
        "src_dir": "libs",
        "objects": objects,
    }


# ===================================================================
# Library / Object Definitions
# ===================================================================
# Object names MUST match the TU names in splits.txt.
# When you break a new source file out of the monolithic split,
# add the corresponding split in config/GPOE8P/psov3/splits.txt first,
# then add the Object here.
#
# End state: one object per real TU — the
# auto_* placeholder units shrink to zero as TUs are broken out.
# SDK TU boundaries can be transferred from tp and ac-decomp
# instead of discovered. See WORKFLOW.md's SDK/runtime loop for the process.
# ===================================================================

if args.target == "psov3":
    _pso_profiles = load_profiles()
    config.reconfig_deps = [Path('config/GPOE8P/psov3/compiler_profiles.json'), Path('tools/compiler_profiles.py')]
    config.libs = [
        # ------------------------------------------------------------------
        # PsoV3.dol — Game code.
        # Each object here MUST have a matching split in
        # config/GPOE8P/psov3/splits.txt (unit name == object path).
        # Objects without a split are silently ignored by the build.
        # ------------------------------------------------------------------
        {
            "lib": "psov3_main",
            "mw_version": "GC/2.6",
            "cflags": cflags_pso,
            "progress_category": "game",
            "src_dir": "src",
            "objects": [
                # Generated from config/GPOE8P/psov3/splits.txt: every `pso/`
                # unit is an Object (dtk requires unit name == source path), and
                # it is LINKED iff linked_units.txt lists it. Add a unit by
                # adding its splits.txt block; never edit this list by hand.
                *[NonMatching(_u, **object_options(_u, cflags_pso, _pso_profiles))
                  for _u in _psov3_units_from_splits()],
            ],
        },
        {
            # MusyX runtime (Factor 5), one unit per original
            # musyx/runtime/*.c file (evidence for every boundary:
            # the original object layout). Profiles come from
            # compiler_profiles.json. The bodies are compiled as C++ with C
            # linkage and exceptions on (see _musyx_options).
            "lib": "musyx",
            "mw_version": "GC/1.2.5n",
            "cflags": cflags_pso,
            "progress_category": "game",
            "src_dir": "src",
            "objects": [
                *[NonMatching(_u, **_musyx_options(_u, _pso_profiles))
                  for _u in _psov3_units_from_splits("musyx/")],
            ],
        },
        DolphinLib(
            "recovered_sdk",
            [
                NonMatching('mtx/mtx.c', mw_version="GC/1.2.5"),
                NonMatching('mtx/mtxvec.c'),
                NonMatching('mtx/mtx44.c'),
                NonMatching('mtx/vec.c'),
                NonMatching('dvd/dvdlow.c'),
                NonMatching('dvd/dvdfs.c'),
                NonMatching('dvd/dvd.c'),
                NonMatching('vi/vi.c'),
                NonMatching('pad/Pad.c'),
                NonMatching('ai/ai.c'),
                NonMatching('ar/ar.c'),
                NonMatching('ar/arq.c'),
                NonMatching('dsp/dsp.c'),
                NonMatching('dsp/dsp_debug.c'),
                NonMatching('dsp/dsp_task.c'),
                NonMatching('card/CARDBios.c'),
                NonMatching('card/CARDUnlock.c'),
                NonMatching('card/CARDRdwr.c'),
                NonMatching('card/CARDBlock.c'),
                NonMatching('card/CARDDir.c'),
                NonMatching('card/CARDCheck.c'),
                NonMatching('card/CARDMount.c'),
                NonMatching('card/CARDFormat.c'),
                NonMatching('card/CARDOpen.c'),
                NonMatching('card/CARDCreate.c'),
                NonMatching('card/CARDRead.c'),
                NonMatching('card/CARDWrite.c'),
                NonMatching('card/CARDDelete.c'),
                NonMatching('card/CARDStat.c'),
                NonMatching('card/CARDRename.c'),
                NonMatching('card/CARDStatEx.c'),
                NonMatching('card/CARDNet.c'),
                NonMatching('gx/GXFifo.c'),
                NonMatching('gx/GXAttr.c'),
                NonMatching('gx/GXMisc.c'),
                NonMatching('gx/GXFrameBuf.c'),
                NonMatching('gx/GXLight.c'),
                NonMatching('gx/GXTexture.c'),
                NonMatching('gx/GXBump.c'),
                NonMatching('gx/GXPixel.c'),
                NonMatching('gx/GXDisplayList.c'),
                NonMatching('gx/GXTransform.c'),
                NonMatching('gx/GXPerf.c'),
            ],
        ) | {"cflags": cflags_dolphin_recovered},
        TRKLib(
            "recovered_trk",
            [
                NonMatching("TRK_MINNOW_DOLPHIN/support.c",
                            mw_version="GC/2.6", cflags=cflags_native_recovered),
                NonMatching("TRK_MINNOW_DOLPHIN/notify.c",
                            mw_version="GC/2.6", cflags=cflags_native_recovered),
                NonMatching("TRK_MINNOW_DOLPHIN/flush_cache.c",
                            mw_version="GC/2.6", cflags=cflags_native_recovered),
                NonMatching("TRK_MINNOW_DOLPHIN/mem_TRK.c",
                            mw_version="GC/1.3", cflags=cflags_native_recovered_auto),
                NonMatching("TRK_MINNOW_DOLPHIN/targimpl.c",
                            mw_version="GC/2.6", cflags=cflags_native_recovered),
                NonMatching("TRK_MINNOW_DOLPHIN/dolphin_trk.c",
                            mw_version="GC/2.6", cflags=cflags_native_recovered),
            ],
        ),
        RuntimeLib(
            "recovered_runtime",
            [
                NonMatching("PowerPC_EABI_Support/Runtime/Src/CPlusLibPPC.cp",
                            mw_version="GC/2.6", cflags=cflags_native_recovered),
                NonMatching("PowerPC_EABI_Support/Runtime/Src/NMWException.cp",
                            mw_version="GC/1.3", cflags=cflags_native_recovered_auto),
                NonMatching("PowerPC_EABI_Support/Runtime/Src/ptmf.c",
                            mw_version="GC/2.6", cflags=cflags_native_recovered),
                NonMatching("PowerPC_EABI_Support/Runtime/Src/runtime.c",
                            mw_version="GC/2.6", cflags=cflags_native_recovered),
                NonMatching("PowerPC_EABI_Support/Runtime/Src/__init_cpp_exceptions.cpp",
                            mw_version="GC/2.6", cflags=cflags_native_recovered),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/ansi_fp.c",
                            mw_version="GC/1.3", cflags=cflags_native_recovered_auto),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/printf.c",
                            mw_version="GC/1.3", cflags=cflags_native_recovered),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/rand.c",
                            mw_version="GC/1.3", cflags=cflags_native_recovered),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/scanf.c",
                            mw_version="GC/1.3", cflags=cflags_native_recovered),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/string.c",
                            mw_version="GC/2.6", cflags=cflags_native_recovered),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/strtoul.c",
                            mw_version="GC/1.3", cflags=cflags_native_recovered),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/uart_console_io.c",
                            mw_version="GC/2.6", cflags=cflags_native_recovered),
            ],
        ),
        DolphinLib(
            "recovered_sdk_io",
            [
                NonMatching('exi/EXIBios.c', cflags=cflags_dolphin_recovered),
                NonMatching('exi/EXIUart.c', cflags=cflags_dolphin_recovered),
                NonMatching('si/SIBios.c', cflags=cflags_dolphin_recovered),
            ],
        ),
        # ------------------------------------------------------------------
        # PsoV3.dol — Embedded Dolphin SDK copy.
        # TU boundaries transferred from the tp and ac-decomp donors
        # (see WORKFLOW.md's SDK/runtime loop). Source lives in libs/dolphin/src.
        # ------------------------------------------------------------------
        DolphinLib(
            "base",
            [
                Matching("base/PPCArch.c"),
            ],
        ),
        DolphinLib(
            "db",
            [
                Matching("db/db.c"),
            ],
        ),
        DolphinLib(
            "os",
            [
                NonMatching("os/OS.c", cflags=cflags_dolphin_recovered),
                Matching("os/OSAlarm.c"),
                Matching("os/OSAlloc.c"),
                Matching("os/OSArena.c"),
                Matching("os/OSAudioSystem.c"),
                NonMatching("os/OSCache.c", cflags=cflags_dolphin_recovered),
                NonMatching("os/OSContext.c", cflags=cflags_dolphin_recovered),
                NonMatching("os/OSError.c", cflags=cflags_dolphin_recovered),
                Matching("os/OSInterrupt.c"),
                NonMatching("os/OSLink.c"),
                Matching("os/OSMessage.c"),
                NonMatching("os/OSMemory.c"),
                Matching("os/OSMutex.c"),
                NonMatching("os/OSReboot.c"),
                Matching("os/OSReset.c"),
                Matching("os/OSResetSW.c"),
                NonMatching("os/OSRtc.c"),
                Matching("os/OSSync.c"),
                NonMatching("os/OSThread.c"),
                NonMatching("os/OSTime.c"),
                Matching("os/__ppc_eabi_init.cpp"),
            ],
        ),
        DolphinLib(
            "dvd",
            [
                Matching("dvd/dvdqueue.c"),
                Matching("dvd/dvderror.c"),
                NonMatching("dvd/fstload.c", cflags=cflags_dolphin_recovered),
            ],
        ),
        DolphinLib(
            "gx",
            [
                NonMatching("gx/GXInit.c", cflags=cflags_dolphin_recovered),
                Matching("gx/GXGeometry.c"),
                Matching("gx/GXTev.c"),
            ],
        ),
        DolphinLib(
            "si",
            [
                NonMatching("si/SISamplingRate.c", cflags=cflags_dolphin_recovered),
            ],
        ),
        DolphinLib(
            "gba",
            [
                NonMatching("gba/GBA.c", cflags=cflags_dolphin_recovered),
                NonMatching("gba/GBAGetProcessStatus.c", cflags=cflags_dolphin_recovered),
                NonMatching("gba/GBAJoyBoot.c", cflags=cflags_dolphin_recovered),
                NonMatching("gba/GBARead.c", cflags=cflags_dolphin_recovered),
                NonMatching("gba/GBAWrite.c", cflags=cflags_dolphin_recovered),
                NonMatching("gba/GBAXfer.c", cflags=cflags_dolphin_recovered),
                NonMatching("gba/GBAKey.c", cflags=cflags_dolphin_recovered),
            ],
        ),
        DolphinLib(
            "amcstubs",
            [
                Matching("amcstubs/AmcExi2Stubs.c"),
            ],
        ),
        DolphinLib(
            "odenotstub",
            [
                Matching("odenotstub/odenotstub.c"),
            ],
        ),
        DolphinLib(
            "odemuexi2",
            [
                NonMatching("odemuexi2/DebuggerDriver.c", cflags=cflags_dolphin_deferred),
            ],
        ),
        TRKLib(
            "TRK_MINNOW_DOLPHIN",
            [
                Matching("TRK_MINNOW_DOLPHIN/mainloop.c"),
                Matching("TRK_MINNOW_DOLPHIN/nubevent.c"),
                NonMatching("TRK_MINNOW_DOLPHIN/nubinit.c"),
                Matching("TRK_MINNOW_DOLPHIN/msg.c"),
                NonMatching("TRK_MINNOW_DOLPHIN/msgbuf.c"),
                Matching("TRK_MINNOW_DOLPHIN/msghndlr.c"),
                Matching("TRK_MINNOW_DOLPHIN/serpoll.c"),
                Matching("TRK_MINNOW_DOLPHIN/usr_put.c"),
                Matching("TRK_MINNOW_DOLPHIN/dispatch.c"),
                Matching("TRK_MINNOW_DOLPHIN/mpc_7xx_603e.c"),
                Matching("TRK_MINNOW_DOLPHIN/main_TRK.c"),
                NonMatching("TRK_MINNOW_DOLPHIN/dolphin_trk_glue.c"),
                Matching("TRK_MINNOW_DOLPHIN/targcont.c"),
                NonMatching("TRK_MINNOW_DOLPHIN/target_options.c"),
                Matching("TRK_MINNOW_DOLPHIN/mutex_TRK.c"),
                Matching("TRK_MINNOW_DOLPHIN/mslsupp.c"),
            ],
        ),
        RuntimeLib(
            "Runtime.PPCEABI.H",
            [
                Matching("PowerPC_EABI_Support/Runtime/Src/__va_arg.c"),
                NonMatching("PowerPC_EABI_Support/Runtime/Src/global_destructor_chain.c"),
                Matching("PowerPC_EABI_Support/Runtime/Src/Gecko_ExceptionPPC.cp"),
            ],
        ),
        RuntimeLib(
            "MSL_C.PPCEABI.bare.H",
            [
                Matching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/abort_exit.c"),
                Matching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/ansi_files.c"),
                Matching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/buffer_io.c"),
                Matching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/direct_io.c"),
                Matching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/FILE_POS.c"),
                # file_io.c: PSO's fclose keeps a real `bl fflush`; -inline
                # deferred would fold fflush into fclose and reverse the
                # emission order, so this TU drops deferred. extra_cflags
                # can't cancel it (deferred is sticky), hence full override.
                Matching(
                    "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/file_io.c",
                    cflags=[
                        f if f != "-inline deferred,auto" else "-inline auto"
                        for f in cflags_runtime
                    ],
                ),
                Matching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/mbstring.c"),
                Matching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/mem.c"),
                # mem_funcs.c: PSO's copy of these MSL copy loops predates the
                # rest of the runtime — GC/2.6 emits clrlwi/pipelined loops
                # that can't match; GC/1.3 with plain -inline auto is exact.
                Matching(
                    "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/mem_funcs.c",
                    mw_version="GC/1.3",
                    cflags=[
                        f if f != "-inline deferred,auto" else "-inline auto"
                        for f in cflags_runtime
                    ],
                ),
                Matching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/misc_io.c"),
                Matching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/wchar_io.c"),
            ],
        ),
        # fdlibm + math_ppc (0x8039F7FC-0x803A2DA0): built like ac's MSL math,
        # GC/1.3 with -fp_contract on (e_acos needs fmadd; s_atan only matches
        # under 1.3).
        RuntimeLib(
            "MSL_C.PPCEABI.bare.H.math",
            [
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_acos.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_asin.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_atan2.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_log.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_pow.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_rem_pio2.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_cos.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_rem_pio2.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_sin.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_tan.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_atan.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_ceil.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_copysign.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_cos.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_floor.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_frexp.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_ldexp.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_modf.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_nextafter.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_sin.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_tan.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_acos.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_asin.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_atan2.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_log.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_pow.c", **_msl_math),
                NonMatching("PowerPC_EABI_Support/MSL/MSL_C/PPC_EABI/Src/math_ppc.c", **_msl_math),
            ],
        ),
    ]
else:
    config.libs = [
        # ------------------------------------------------------------------
        # main.dol — Initialization code (.init section)
        # ------------------------------------------------------------------
        {
            "lib": "init",
            "mw_version": "GC/2.6",
            "cflags": cflags_pso,
            "progress_category": "runtime",
            "src_dir": "src",
            "objects": [
                NonMatching("init.c"),
            ],
        },
        # ------------------------------------------------------------------
        # main.dol — Boot DOL code (monolithic)
        # ------------------------------------------------------------------
        {
            "lib": "pso_main",
            "mw_version": "GC/2.6",
            "cflags": cflags_pso,
            "progress_category": "game",
            "src_dir": "src",
            "objects": [
                NonMatching("main.c"),
            ],
        },
    ]

# ===================================================================
# Progress Categories
# ===================================================================
config.progress_categories = [
    ProgressCategory("game", "PSO Game Code"),
    ProgressCategory("sdk", "Dolphin SDK"),
    ProgressCategory("runtime", "Runtime"),
]

# Progress report arguments for objdiff-cli
config.progress_report_args = [
    "--config", "functionRelocDiffs=data_value",
]

# ===================================================================
# Main Dispatch
# ===================================================================
if args.mode == "configure":
    generate_build(config)
elif args.mode == "progress":
    calculate_progress(config)
else:
    sys.exit(f"Unknown mode: {args.mode}")
