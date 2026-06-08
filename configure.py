#!/usr/bin/env python3

###
# Generates build files for the PSO Episode I & II Plus decompilation project.
#
# This file includes the project configuration (compiler flags, library
# definitions, object matching status) and generates build.ninja for the
# Ninja build system.
#
# Modeled after the Twilight Princess decomp's configure.py, but self-contained
# so it works without tools/project.py until that module is ported.
#
# Usage:
#   python3 configure.py                    # Generate build.ninja
#   python3 configure.py configure          # Same as above
#   python3 configure.py progress           # Show decomp progress
#   python3 configure.py report             # Generate build/GPOE8P/report.json
#   python3 configure.py --help             # Show all options
#
# After generating build.ninja:
#   ninja                                   # Build everything
#   ninja -t clean                          # Clean build artifacts
###

import argparse
import io
import json
import os
import platform
import sys
from pathlib import Path
from typing import Any, Dict, List, Optional, Tuple

# ---------------------------------------------------------------------------
# Attempt to import from tools.project (dtk-template shared module).
# If it doesn't exist yet, we define our own minimal equivalents inline.
# ---------------------------------------------------------------------------
_USE_PROJECT_MODULE = False
try:
    from tools.project import (
        Object,
        ProgressCategory,
        ProjectConfig,
        calculate_progress,
        generate_build,
        is_windows,
    )
    _USE_PROJECT_MODULE = True
except ImportError:
    pass

if not _USE_PROJECT_MODULE:
    # ------------------------------------------------------------------
    # Minimal standalone implementations (used until tools/project.py is
    # ported from dtk-template).
    # ------------------------------------------------------------------

    def is_windows() -> bool:
        return os.name == "nt"

    class ProgressCategory:
        """A named category for grouping progress metrics."""
        def __init__(self, id: str, name: str) -> None:
            self.id = id
            self.name = name

    class Object:
        """
        Represents a single translation unit (source file) in the build.

        Parameters
        ----------
        completed : bool
            Whether the object byte-matches the original.
        name : str
            Source file path relative to src_dir (e.g. "main.c").
        **options
            Per-object overrides (cflags, mw_version, etc.).
        """
        def __init__(self, completed: bool, name: str, **options: Any) -> None:
            self.name = name
            self.completed = completed
            self.options: Dict[str, Any] = {
                "add_to_all": True,
                "cflags": None,
                "extra_cflags": [],
                "mw_version": None,
                "progress_category": None,
                "source": name,
                "src_dir": None,
            }
            self.options.update(options)

    class ProjectConfig:
        """Minimal project configuration container."""
        def __init__(self) -> None:
            # Paths
            self.build_dir: Path = Path("build")
            self.src_dir: Path = Path("src")
            self.tools_dir: Path = Path("tools")
            self.asm_dir: Optional[Path] = Path("asm")

            # Tooling
            self.binutils_tag: Optional[str] = None
            self.binutils_path: Optional[Path] = None
            self.dtk_tag: Optional[str] = None
            self.dtk_path: Optional[Path] = None
            self.compilers_tag: Optional[str] = None
            self.compilers_path: Optional[Path] = None
            self.wibo_tag: Optional[str] = None
            self.wrapper: Optional[Path] = None
            self.sjiswrap_tag: Optional[str] = None
            self.sjiswrap_path: Optional[Path] = None
            self.objdiff_tag: Optional[str] = None
            self.objdiff_path: Optional[Path] = None
            self.ninja_path: Optional[Path] = None

            # Project
            self.non_matching: bool = False
            self.build_rels: bool = True
            self.check_sha_path: Optional[Path] = None
            self.config_path: Optional[Path] = None
            self.generate_map: bool = False
            self.asflags: Optional[List[str]] = None
            self.ldflags: Optional[List[str]] = None
            self.libs: Optional[List[Dict[str, Any]]] = None
            self.linker_version: Optional[str] = None
            self.version: Optional[str] = None
            self.shift_jis: bool = False
            self.reconfig_deps: Optional[List[Path]] = None
            self.progress: bool = True
            self.progress_categories: List[ProgressCategory] = []
            self.progress_each_module: bool = False
            self.progress_report_args: Optional[List[str]] = None

        def out_path(self) -> Path:
            return self.build_dir / str(self.version)

        def objects(self) -> Dict[str, "Object"]:
            out: Dict[str, Object] = {}
            for lib in self.libs or []:
                for obj in lib.get("objects", []):
                    out[obj.name] = obj
            return out

        def compilers(self) -> Path:
            if self.compilers_path:
                return self.compilers_path
            elif self.compilers_tag:
                return self.build_dir / "compilers"
            else:
                sys.exit("ProjectConfig.compilers_tag missing")

        def use_wibo(self) -> bool:
            return (
                self.wibo_tag is not None
                and (sys.platform == "linux" or sys.platform == "darwin")
                and platform.machine() in ("i386", "x86_64", "aarch64", "arm64")
                and self.wrapper is None
            )

        def compiler_wrapper(self) -> Optional[Path]:
            wrapper = self.wrapper
            if self.use_wibo():
                wrapper = self.build_dir / "tools" / "wibo"
            if not is_windows() and wrapper is None:
                wrapper = Path("wine")
            return wrapper


# ---------------------------------------------------------------------------
# Helper: Matching / NonMatching / Equivalent object constructors
# ---------------------------------------------------------------------------
def Matching(name: str, **kwargs: Any) -> Object:
    """An object that byte-matches the original binary."""
    return Object(True, name, **kwargs)

def NonMatching(name: str, **kwargs: Any) -> Object:
    """An object that does not yet match (work in progress)."""
    return Object(False, name, **kwargs)

def Equivalent(name: str, **kwargs: Any) -> Object:
    """An object that is functionally equivalent but not byte-matching."""
    return Object(False, name, **kwargs)


# ===================================================================
# Version Configuration
# ===================================================================
DEFAULT_VERSION = "GPOE8P"
VERSIONS = [
    "GPOE8P",  # USA v1.02 (only version supported so far)
]


# ===================================================================
# Argument Parsing
# ===================================================================
parser = argparse.ArgumentParser(
    description="PSO Episode I & II Plus decompilation build configuration"
)
parser.add_argument(
    "mode",
    choices=["configure", "progress", "report"],
    default="configure",
    nargs="?",
    help="script mode (default: configure)",
)
parser.add_argument(
    "-v", "--version",
    choices=VERSIONS,
    type=str,
    default=DEFAULT_VERSION,
    help=f"game version to build (default: {DEFAULT_VERSION})",
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
    help="build equivalent (non-matching) or modded objects",
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
    help="path to decomp-toolkit binary (optional)",
)
parser.add_argument(
    "--objdiff",
    metavar="BINARY",
    type=Path,
    help="path to objdiff-cli binary (optional)",
)
parser.add_argument(
    "--compilers",
    metavar="DIR",
    type=Path,
    help="path to compilers directory (optional)",
)
parser.add_argument(
    "--binutils",
    metavar="BINARY",
    type=Path,
    help="path to binutils (optional)",
)
parser.add_argument(
    "--sjiswrap",
    metavar="EXE",
    type=Path,
    help="path to sjiswrap.exe (optional)",
)
if not is_windows():
    parser.add_argument(
        "--wrapper",
        metavar="BINARY",
        type=Path,
        help="path to wibo or wine (optional)",
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
    "--standalone",
    action="store_true",
    help="force standalone build generator (skip tools/project.py)",
)
args = parser.parse_args()

# Allow forcing standalone mode (bypasses dtk split requirement)
if args.standalone:
    _USE_PROJECT_MODULE = False


# ===================================================================
# Project Configuration
# ===================================================================
config = ProjectConfig()
config.version = str(args.version)
config.build_dir = args.build_dir
config.non_matching = args.non_matching
config.generate_map = args.map
config.dtk_path = args.dtk
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

# ---------------------------------------------------------------------------
# Tool versions
# ---------------------------------------------------------------------------
config.binutils_tag = "2.42-1"
config.compilers_tag = "20251118"
config.dtk_tag = "v1.8.0"
config.objdiff_tag = "v3.6.1"
config.sjiswrap_tag = "v1.2.2"
config.wibo_tag = "1.0.0"

# ---------------------------------------------------------------------------
# Paths
# ---------------------------------------------------------------------------
config.config_path = Path("config") / config.version / "config.yml"
config.check_sha_path = Path("config") / config.version / "build.sha1"

# ---------------------------------------------------------------------------
# Assembler flags (for .s files processed by powerpc-eabi-as)
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

# Linker version (CodeWarrior for GameCube)
config.linker_version = "GC/2.6"

# Re-configure when these files change
config.reconfig_deps = []

# Shift JIS: PSO has some SJIS strings but the build predominantly uses ASCII.
# Keep disabled for now; enable per-object if needed.
config.shift_jis = False

# ===================================================================
# Compiler Flags
# ===================================================================

# Base flags: CodeWarrior for GameCube, matching the original build.
# These are the flags that were used to compile PSO Ep I&II Plus.
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
    # Include paths
    "-i include",
    "-i src",
    "-i libs",
    f"-i build/{config.version}/include",
]

# PSO main game code flags
cflags_pso = [
    *cflags_base,
    "-char signed",
    "-use_lmw_stmw on",
]

# Dolphin SDK library flags
cflags_dolphin = [
    *cflags_base,
    "-i libs/dolphin/include",
    "-char unsigned",
    "-fp_contract off",
]

# PowerPC EABI runtime flags
cflags_runtime = [
    *cflags_base,
    "-i libs/PowerPC_EABI_Support/Runtime/Inc",
    "-i libs/PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Include",
    "-i libs/PowerPC_EABI_Support/MSL/MSL_C/PPC_EABI/Include",
    "-use_lmw_stmw on",
    "-str reuse,pool,readonly",
    "-common off",
    "-char signed",
    "-inline deferred,auto",
]


# ===================================================================
# Library / Object Definitions
# ===================================================================
# Objects are added here as decompilation progresses. Each entry
# represents a single translation unit (.c or .cpp file).
#
# Use Matching("path/to/file.c") for byte-matching objects.
# Use NonMatching("path/to/file.c") for work-in-progress objects.
#
# The object lists below are empty since we are just starting the
# decompilation. As functions are decompiled, matched, and verified,
# they will be added to the appropriate library section.
# ===================================================================

config.libs = [
    # ------------------------------------------------------------------
    # PSO Main Game Code (DOL)
    # ------------------------------------------------------------------
    {
        "lib": "pso_main",
        "mw_version": "GC/2.6",
        "cflags": cflags_pso,
        "progress_category": "game",
        "src_dir": "src",
        "objects": [
            NonMatching("init.c", progress_category="runtime"),
            NonMatching("game/stubs.c"),
            NonMatching("game/bitstream.c"),
            NonMatching("game/math_util.c"),
            NonMatching("game/dispatch.c"),
        ],
    },
    # ------------------------------------------------------------------
    # Dolphin SDK
    # ------------------------------------------------------------------
    {
        "lib": "dolphin_sdk",
        "mw_version": "GC/1.2.5",
        "cflags": cflags_dolphin,
        "progress_category": "sdk",
        "src_dir": "src/dolphin",
        "objects": [
            NonMatching("ppc_hw.c"),
            NonMatching("os_arena.c"),
            NonMatching("os_cache.c"),
            NonMatching("os_context.c"),
            NonMatching("os_error.c"),
            NonMatching("os_exception_init.c"),
            NonMatching("os_interrupt.c"),
            NonMatching("os_misc.c"),
            NonMatching("os_report.c"),
            NonMatching("os_reset.c"),
            NonMatching("os_time.c"),
            NonMatching("os_funcs.c"),
        ],
    },
    # ------------------------------------------------------------------
    # PowerPC EABI Runtime (Metrowerks Runtime & MSL)
    # ------------------------------------------------------------------
    {
        "lib": "runtime",
        "mw_version": "GC/2.6",
        "cflags": cflags_runtime,
        "progress_category": "runtime",
        "src_dir": "src/runtime",
        "objects": [
            Matching("runtime.c"),
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
# Standalone Build System (used when tools/project.py is not available)
# ===================================================================

def _count_objects(cfg: ProjectConfig) -> Tuple[int, int, int, int]:
    """Count total and matched objects/functions across all libraries."""
    total_objects = 0
    matched_objects = 0
    total_funcs = 0
    matched_funcs = 0
    for lib in cfg.libs or []:
        for obj in lib.get("objects", []):
            total_objects += 1
            if obj.completed:
                matched_objects += 1
    # Also count functions from symbols.txt if it exists
    symbols_path = Path("config") / str(cfg.version) / "symbols.txt"
    if symbols_path.is_file():
        with open(symbols_path, "r") as f:
            for line in f:
                line = line.strip()
                if not line or line.startswith("#") or line.startswith("//"):
                    continue
                # Each non-blank, non-comment line is a symbol
                # Lines with "type:func" or containing function-like patterns
                # count as functions
                if "type:func" in line or "=" not in line:
                    total_funcs += 1
    return total_objects, matched_objects, total_funcs, matched_funcs


def _make_flags_str(flags: Optional[List[str]]) -> str:
    """Join a list of flags into a single string."""
    if not flags:
        return ""
    return " ".join(flags)


def _standalone_generate_build(cfg: ProjectConfig) -> None:
    """
    Generate build.ninja without requiring tools/project.py.

    This produces a functional build file that:
    - Downloads tools (dtk, objdiff, compilers, wibo, binutils)
    - Compiles C/C++ source files with CodeWarrior (via wibo on Linux)
    - Runs dtk for DOL/REL analysis and linking
    - Runs objdiff for binary comparison
    """
    from tools import ninja_syntax

    out_buf = io.StringIO()
    n = ninja_syntax.Writer(out_buf)
    n.variable("ninja_required_version", "1.3")
    n.newline()

    # ------------------------------------------------------------------
    # Variables
    # ------------------------------------------------------------------
    configure_script = Path(os.path.relpath(os.path.abspath(sys.argv[0])))
    n.comment("Generated by configure.py -- do not edit manually.")
    n.comment("Regenerate with: python3 configure.py")
    n.newline()

    n.variable("configure_args", sys.argv[1:])
    n.variable("python", f'"{sys.executable}"')
    n.newline()

    n.comment("Variables")
    version = str(cfg.version)
    build_path = cfg.out_path()
    build_tools_path = cfg.build_dir / "tools"
    report_path = build_path / "report.json"

    n.variable("version", version)
    n.variable("build_dir", str(build_path))
    n.variable("ldflags", _make_flags_str(cfg.ldflags))
    n.variable("mw_version", cfg.linker_version or "GC/2.6")
    n.newline()

    # ------------------------------------------------------------------
    # Tool download rules
    # ------------------------------------------------------------------
    download_tool = cfg.tools_dir / "download_tool.py"

    n.comment("Tool download rules")
    n.rule(
        name="download_tool",
        command=f"$python {download_tool} $tool $out --tag $tag",
        description="TOOL $out",
    )
    n.newline()

    # dtk (decomp-toolkit)
    dtk_path = cfg.dtk_path or (build_tools_path / "dtk")
    if cfg.dtk_path is None and cfg.dtk_tag:
        n.build(
            outputs=str(dtk_path),
            rule="download_tool",
            implicit=[str(download_tool)],
            variables={"tool": "dtk", "tag": cfg.dtk_tag},
        )
        n.newline()

    # objdiff-cli
    objdiff_path = cfg.objdiff_path or (build_tools_path / "objdiff-cli")
    if cfg.objdiff_path is None and cfg.objdiff_tag:
        n.build(
            outputs=str(objdiff_path),
            rule="download_tool",
            implicit=[str(download_tool)],
            variables={"tool": "objdiff-cli", "tag": cfg.objdiff_tag},
        )
        n.newline()

    # sjiswrap
    sjiswrap_path = cfg.sjiswrap_path or (build_tools_path / "sjiswrap.exe")
    if cfg.sjiswrap_path is None and cfg.sjiswrap_tag:
        n.build(
            outputs=str(sjiswrap_path),
            rule="download_tool",
            implicit=[str(download_tool)],
            variables={"tool": "sjiswrap", "tag": cfg.sjiswrap_tag},
        )
        n.newline()

    # Compilers
    compilers_path = cfg.compilers()
    if cfg.compilers_path is None and cfg.compilers_tag:
        n.build(
            outputs=str(compilers_path),
            rule="download_tool",
            implicit=[str(download_tool)],
            variables={"tool": "compilers", "tag": cfg.compilers_tag},
        )
        n.newline()

    # Binutils
    binutils_path = cfg.binutils_path or (build_tools_path / "binutils")
    if cfg.binutils_path is None and cfg.binutils_tag:
        n.build(
            outputs=str(binutils_path),
            rule="download_tool",
            implicit=[str(download_tool)],
            variables={"tool": "binutils", "tag": cfg.binutils_tag},
        )
        n.newline()

    # wibo (Linux only)
    wibo_path = build_tools_path / "wibo"
    if cfg.use_wibo():
        n.build(
            outputs=str(wibo_path),
            rule="download_tool",
            implicit=[str(download_tool)],
            variables={"tool": "wibo", "tag": cfg.wibo_tag},
        )
        n.newline()

    # ------------------------------------------------------------------
    # Determine compiler wrapper
    # ------------------------------------------------------------------
    wrapper = cfg.compiler_wrapper()
    wrapper_str = f"{wrapper} " if wrapper else ""

    # Compiler binary path
    mw_version = cfg.linker_version or "GC/2.6"
    cc_path = compilers_path / mw_version / "mwcceppc.exe"
    ld_path = compilers_path / mw_version / "mwldeppc.exe"

    # ------------------------------------------------------------------
    # Reconfigure rule (re-run configure.py when it changes)
    # ------------------------------------------------------------------
    n.comment("Reconfigure when configure.py or tools change")
    reconfig_deps = [str(configure_script)]
    if not _USE_PROJECT_MODULE:
        reconfig_deps.append(str(cfg.tools_dir / "ninja_syntax.py"))
    for dep in cfg.reconfig_deps or []:
        reconfig_deps.append(str(dep))

    n.rule(
        name="configure",
        command=f"$python {configure_script} $configure_args",
        generator=True,
        description="CONFIGURE",
    )
    n.build(
        outputs="build.ninja",
        rule="configure",
        implicit=reconfig_deps,
    )
    n.newline()

    # ------------------------------------------------------------------
    # dtk build rules
    # ------------------------------------------------------------------
    n.comment("decomp-toolkit (dtk) rules")
    config_yml = cfg.config_path or Path(f"config/{version}/config.yml")

    n.rule(
        name="dtk_disasm",
        command=f"{dtk_path} dol disasm $config -o $out_dir",
        description="DTK DISASM $out_dir",
    )
    n.rule(
        name="dtk_elf2dol",
        command=f"{dtk_path} elf2dol $in $out",
        description="DTK ELF2DOL $out",
    )
    n.rule(
        name="dtk_shasum",
        command=f"{dtk_path} shasum -c $in",
        description="DTK SHASUM $in",
    )
    n.rule(
        name="dtk_link",
        command=f"{wrapper_str}{ld_path} $ldflags -o $out @$out.rsp",
        description="LINK $out",
        rspfile="$out.rsp",
        rspfile_content="$in",
    )
    n.newline()

    # ------------------------------------------------------------------
    # Compile rules
    # ------------------------------------------------------------------
    n.comment("Compile rules")

    # C/C++ compilation with CodeWarrior
    # Uses $cc variable to allow per-library compiler version selection
    n.rule(
        name="cc",
        command=f"{wrapper_str}$cc $cflags -c $in -o $out",
        description="CC $out",
        depfile="$out.d",
        deps="gcc",
    )
    n.newline()

    # Assembly with powerpc-eabi-as
    as_path = binutils_path / "powerpc-eabi-as"
    n.rule(
        name="as",
        command=f"{as_path} $asflags -o $out $in",
        description="AS $out",
    )
    n.newline()

    # ------------------------------------------------------------------
    # objdiff rules
    # ------------------------------------------------------------------
    n.comment("objdiff rules")
    n.rule(
        name="objdiff_report",
        command=(
            f"{objdiff_path} report generate"
            f" -p {build_path / 'objdiff.json'}"
            f" -o $out"
            f" {_make_flags_str(cfg.progress_report_args)}"
        ),
        description="REPORT $out",
    )
    n.newline()

    # ------------------------------------------------------------------
    # Build steps: compile all objects
    # ------------------------------------------------------------------
    n.comment("Object compilation targets")
    all_src_objects: List[str] = []  # compiled .o files (from source)
    all_asm_objects: List[str] = []  # assembled .o files (from asm overrides)

    tool_deps: List[str] = []
    if cfg.compilers_path is None and cfg.compilers_tag:
        tool_deps.append(str(compilers_path))
    if cfg.use_wibo():
        tool_deps.append(str(wibo_path))
    if cfg.binutils_path is None and cfg.binutils_tag:
        tool_deps.append(str(binutils_path))

    for lib in cfg.libs or []:
        lib_name = lib.get("lib", "unknown")
        lib_cflags = lib.get("cflags", cflags_base)
        lib_mw_version = lib.get("mw_version", mw_version)
        lib_src_dir = lib.get("src_dir", "src")
        objects: List[Object] = lib.get("objects", [])

        if objects:
            n.comment(f"Library: {lib_name}")

        for obj in objects:
            src_name = obj.options.get("source", obj.name)
            src_dir = obj.options.get("src_dir") or lib_src_dir
            obj_cflags = obj.options.get("cflags") or lib_cflags
            extra_cflags = obj.options.get("extra_cflags", [])

            src_path = Path(src_dir) / src_name
            obj_base = Path(obj.name).with_suffix("")
            src_obj_path = build_path / "src" / f"{obj_base}.o"
            asm_obj_path = build_path / "mod" / f"{obj_base}.o"

            # Determine cflags string
            cflags_list = list(obj_cflags) + list(extra_cflags)
            cflags_str = " ".join(cflags_list)

            # Determine compiler path for this library
            obj_cc_path = str(compilers_path / lib_mw_version / "mwcceppc.exe")

            # Compile from source
            n.build(
                outputs=str(src_obj_path),
                rule="cc",
                inputs=str(src_path),
                implicit=tool_deps,
                variables={"cflags": cflags_str, "cc": obj_cc_path},
            )
            all_src_objects.append(str(src_obj_path))

            # Assembly override (for non-matching builds)
            if cfg.asm_dir is not None:
                asm_path = cfg.asm_dir / src_name
                asm_s = asm_path.with_suffix(".s")
                if asm_s.is_file() or cfg.non_matching:
                    n.build(
                        outputs=str(asm_obj_path),
                        rule="as",
                        inputs=str(asm_s),
                        implicit=tool_deps,
                        variables={"asflags": _make_flags_str(cfg.asflags)},
                    )
                    all_asm_objects.append(str(asm_obj_path))

    n.newline()

    # ------------------------------------------------------------------
    # Link DOL
    # ------------------------------------------------------------------
    n.comment("Link targets")
    dol_elf = build_path / "main.elf"
    dol_out = build_path / "main.dol"
    orig_dol = Path(f"orig/{version}/P-GPOE/sys/main.dol")

    if all_src_objects:
        n.build(
            outputs=str(dol_elf),
            rule="dtk_link",
            inputs=all_src_objects,
            variables={"ldflags": _make_flags_str(cfg.ldflags)},
        )
        n.build(
            outputs=str(dol_out),
            rule="dtk_elf2dol",
            inputs=str(dol_elf),
        )
        n.newline()

    # ------------------------------------------------------------------
    # SHA check
    # ------------------------------------------------------------------
    if cfg.check_sha_path and cfg.check_sha_path.is_file():
        n.comment("SHA verification")
        n.build(
            outputs=str(build_path / "sha_check"),
            rule="dtk_shasum",
            inputs=str(cfg.check_sha_path),
        )
        n.newline()

    # ------------------------------------------------------------------
    # Report generation
    # ------------------------------------------------------------------
    n.comment("Progress report")
    n.build(
        outputs=str(report_path),
        rule="objdiff_report",
        implicit=[str(objdiff_path)] if cfg.objdiff_path is None else [],
    )
    n.newline()

    # ------------------------------------------------------------------
    # Default target
    # ------------------------------------------------------------------
    n.comment("Default targets")
    defaults = list(all_src_objects)
    if dol_out and all_src_objects:
        defaults = [str(dol_out)]
    n.default(defaults if defaults else ["build.ninja"])
    n.newline()

    # ------------------------------------------------------------------
    # Write build.ninja
    # ------------------------------------------------------------------
    build_ninja_path = Path("build.ninja")
    with open(build_ninja_path, "w", encoding="utf-8") as f:
        f.write(out_buf.getvalue())
    print(f"Generated {build_ninja_path}")

    # ------------------------------------------------------------------
    # Write objdiff.json (for the objdiff GUI)
    # ------------------------------------------------------------------
    _generate_objdiff_config(cfg, build_path)


def _generate_objdiff_config(cfg: ProjectConfig, build_path: Path) -> None:
    """Generate objdiff.json configuration for the objdiff GUI tool."""
    version = str(cfg.version)
    orig_dir = Path(f"orig/{version}/P-GPOE")
    objdiff_config: Dict[str, Any] = {
        "min_version": "3.0.0",
        "custom_make": "ninja",
        "custom_args": [],
        "build_target": False,
        "watch_patterns": [
            "src/**/*.c",
            "src/**/*.cpp",
            "src/**/*.h",
            "include/**/*.h",
            "libs/**/*.c",
            "libs/**/*.cpp",
            "libs/**/*.h",
        ],
        "units": [],
    }

    for lib in cfg.libs or []:
        lib_name = lib.get("lib", "unknown")
        lib_src_dir = lib.get("src_dir", "src")
        for obj in lib.get("objects", []):
            src_name = obj.options.get("source", obj.name)
            obj_base = Path(obj.name).with_suffix("")
            src_obj = build_path / "src" / f"{obj_base}.o"
            # Target object comes from dtk disassembly
            target_obj = build_path / "mod" / f"{obj_base}.o"

            unit: Dict[str, Any] = {
                "name": str(obj_base),
                "target_path": str(target_obj),
                "base_path": str(src_obj),
                "reverse_fn_order": False,
                "complete": obj.completed,
                "metadata": {
                    "library": lib_name,
                    "source_path": str(Path(lib_src_dir) / src_name),
                    "progress_categories": [],
                },
            }
            cat = obj.options.get("progress_category")
            if cat:
                if isinstance(cat, list):
                    unit["metadata"]["progress_categories"] = cat
                else:
                    unit["metadata"]["progress_categories"] = [cat]

            objdiff_config["units"].append(unit)

    objdiff_json_path = build_path / "objdiff.json"
    objdiff_json_path.parent.mkdir(parents=True, exist_ok=True)
    with open(objdiff_json_path, "w", encoding="utf-8") as f:
        json.dump(objdiff_config, f, indent=2)
    print(f"Generated {objdiff_json_path}")


# ===================================================================
# Standalone Progress / Report
# ===================================================================

def _standalone_progress(cfg: ProjectConfig) -> None:
    """Display decompilation progress to stdout."""
    report_path = cfg.out_path() / "report.json"

    # If report.json exists (generated by objdiff-cli), use it
    if report_path.is_file():
        with open(report_path, "r", encoding="utf-8") as f:
            report_data = json.load(f)

        measures = report_data.get("measures", {})
        # Convert string numbers to int
        for key, value in list(measures.items()):
            if isinstance(value, str) and value.isdigit():
                measures[key] = int(value)

        total_code = measures.get("total_code", 0)
        matched_code = measures.get("matched_code", 0)
        matched_pct = measures.get("matched_code_percent", 0.0)
        total_data = measures.get("total_data", 0)
        matched_data = measures.get("matched_data", 0)
        matched_data_pct = measures.get("matched_data_percent", 0.0)
        total_funcs = measures.get("total_functions", 0)
        matched_funcs = measures.get("matched_functions", 0)

        print("Progress (from report.json):")
        print(f"  Code: {matched_code} / {total_code} bytes ({matched_pct:.2f}%)")
        print(f"  Data: {matched_data} / {total_data} bytes ({matched_data_pct:.2f}%)")
        print(f"  Functions: {matched_funcs} / {total_funcs}")
        print()

        for category in report_data.get("categories", []):
            cat_measures = category.get("measures", {})
            for key, value in list(cat_measures.items()):
                if isinstance(value, str) and value.isdigit():
                    cat_measures[key] = int(value)
            cat_name = category.get("name", category.get("id", "?"))
            cat_total = cat_measures.get("total_code", 0)
            cat_matched = cat_measures.get("matched_code", 0)
            cat_pct = cat_measures.get("matched_code_percent", 0.0)
            print(f"  {cat_name}: {cat_matched} / {cat_total} bytes ({cat_pct:.2f}%)")

        return

    # Fallback: compute progress from object definitions
    total_obj, matched_obj, total_funcs, matched_funcs = _count_objects(cfg)

    # DOL code size from VISION.md (known constants)
    DOL_CODE_SIZE = 181_760   # .init + .text
    DOL_DATA_SIZE = 31_936    # .rodata + .data + .sdata + .sdata2

    print(f"PSO Episode I & II Plus ({cfg.version}) Decompilation Progress")
    print("=" * 60)
    print()
    print(f"  Objects: {matched_obj} / {total_obj} matching"
          + (f" ({100.0 * matched_obj / total_obj:.1f}%)" if total_obj > 0 else ""))
    print(f"  Functions in symbols.txt: {total_funcs}")
    print()
    print("  DOL Code:  0 / {:,} bytes (0.00%)".format(DOL_CODE_SIZE))
    print("  DOL Data:  0 / {:,} bytes (0.00%)".format(DOL_DATA_SIZE))
    print()
    if total_obj == 0:
        print("  No objects configured yet. Add source files to configure.py")
        print("  as decompilation progresses.")
    print()
    print(f"  Report: {cfg.out_path() / 'report.json'}")
    print("  (Run 'python3 configure.py report' to generate report.json,")
    print("   then 'python3 configure.py progress' for detailed stats.)")


def _standalone_report(cfg: ProjectConfig) -> None:
    """Generate a basic report.json from object definitions."""
    total_obj, matched_obj, total_funcs, matched_funcs = _count_objects(cfg)

    # Known DOL sizes
    DOL_CODE_SIZE = 181_760
    DOL_DATA_SIZE = 31_936

    # Calculate matched bytes (rough estimate from matched objects)
    # In reality, objdiff-cli generates this from actual binary comparison.
    # This is a placeholder until objdiff is set up.
    matched_code = 0
    matched_data = 0
    code_pct = 0.0
    data_pct = 0.0

    report: Dict[str, Any] = {
        "measures": {
            "total_code": DOL_CODE_SIZE,
            "matched_code": matched_code,
            "matched_code_percent": code_pct,
            "total_data": DOL_DATA_SIZE,
            "matched_data": matched_data,
            "matched_data_percent": data_pct,
            "total_functions": total_funcs,
            "matched_functions": matched_funcs,
            "total_units": total_obj,
            "complete_units": matched_obj,
        },
        "categories": [],
    }

    # Per-category breakdown
    for cat in cfg.progress_categories:
        cat_total = 0
        cat_matched = 0
        for lib in cfg.libs or []:
            for obj in lib.get("objects", []):
                obj_cat = obj.options.get("progress_category")
                if obj_cat == cat.id or (isinstance(obj_cat, list) and cat.id in obj_cat):
                    cat_total += 1
                    if obj.completed:
                        cat_matched += 1
        report["categories"].append({
            "id": cat.id,
            "name": cat.name,
            "measures": {
                "total_code": 0,
                "matched_code": 0,
                "matched_code_percent": 0.0,
                "total_data": 0,
                "matched_data": 0,
                "matched_data_percent": 0.0,
                "total_functions": 0,
                "matched_functions": 0,
                "total_units": cat_total,
                "complete_units": cat_matched,
            },
        })

    out_path = cfg.out_path()
    out_path.mkdir(parents=True, exist_ok=True)
    report_path = out_path / "report.json"
    with open(report_path, "w", encoding="utf-8") as f:
        json.dump(report, f, indent=2)
    print(f"Generated {report_path}")


# ===================================================================
# Main Dispatch
# ===================================================================
if args.mode == "configure":
    if _USE_PROJECT_MODULE:
        # Use the full dtk-template project generator
        generate_build(config)
    else:
        # Use standalone build generator
        _standalone_generate_build(config)
elif args.mode == "progress":
    if _USE_PROJECT_MODULE:
        calculate_progress(config)
    else:
        _standalone_progress(config)
elif args.mode == "report":
    _standalone_report(config)
else:
    sys.exit(f"Unknown mode: {args.mode}")
