#!/usr/bin/env python3
"""Check a change before sending it: the checks a pull request has to pass.

On the commit your change starts from:
  python configure.py && ninja && ninja baseline
Then, with your change in place:
  python tools/check_pr.py

It runs, in order:
  1. ninja: rebuilds everything and checks PsoV3.dol against the original's SHA-1.
  2. report_delta.py --check against build/GPOE8P/baseline.json: no match, linked
     function or data range may be lost, compared by original address.
  3. link_units.py check: every unit in linked_units.txt still links from source.
  4. link_units.py scan: lists units that now match completely but are not linked
     yet. That is not a failure; link them with `link_units.py scan --write`.
"""
from __future__ import annotations

import argparse
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
BASELINE = ROOT / "build/GPOE8P/baseline.json"
REPORT = ROOT / "build/GPOE8P/report.json"


def run(title: str, command: list[str]) -> tuple[bool, str]:
    print(f"== {title}", flush=True)
    result = subprocess.run(command, cwd=ROOT, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True)
    return result.returncode == 0, result.stdout


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--baseline", type=Path, default=BASELINE)
    parser.add_argument("--no-build", action="store_true", help="use the current build instead of running ninja")
    args = parser.parse_args()
    if not args.baseline.exists():
        parser.exit(2, f"missing {args.baseline}: run `ninja baseline` on the commit your change starts from\n")

    python = sys.executable
    failed = []
    if not args.no_build:
        ok, out = run("ninja", ["ninja"])
        lines = out.strip().splitlines()
        print("\n".join(lines[-15:] if not ok else [l for l in lines if l.endswith(": OK")]))
        if not ok:
            print("FAIL: the build failed or PsoV3.dol does not match the original")
            return 1

    ok, out = run("report_delta.py --check", [python, "tools/report_delta.py", str(args.baseline), str(REPORT),
                                               "--check"])
    print(out.rstrip())
    if not ok:
        failed.append("report_delta.py: something that matched, linked or was covered before is lost")

    ok, out = run("link_units.py check", [python, "tools/link_units.py", "check"])
    print(out.rstrip())
    if not ok:
        failed.append("link_units.py check: a linked unit no longer links from source; "
                      "see linked_units_blocked.json after `link_units.py scan`")

    _, out = run("link_units.py scan", [python, "tools/link_units.py", "scan"])
    print(out.rstrip())

    if failed:
        for reason in failed:
            print(f"FAIL: {reason}")
        return 1
    print("PASS")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
