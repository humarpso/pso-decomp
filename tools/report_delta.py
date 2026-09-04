#!/usr/bin/env python3
"""Compare objdiff reports by original address, surviving renames and TU merges.

Save report.json before editing, then run:
  python tools/report_delta.py build/before-report.json --check
"""
from __future__ import annotations

import argparse
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent


def functions_by_address(report: dict) -> dict:
    functions = {}
    for unit in report.get("units", []):
        module = unit.get("metadata", {}).get("module_name", "")
        for function in unit.get("functions", []):
            address = function.get("metadata", {}).get("virtual_address")
            if address is None:
                raise ValueError(f"No original address for {function['name']}")
            key = (module, int(address))
            if key in functions:
                raise ValueError(f"Duplicate original address: {module}:0x{int(address):08X}")
            functions[key] = function
    return functions


def compare(before: dict, after: dict) -> dict:
    old = functions_by_address(before)
    new = functions_by_address(after)

    def exact(functions):
        return {key for key, f in functions.items() if f.get("fuzzy_match_percent") == 100}

    old_exact, new_exact = exact(old), exact(new)

    def rows(keys, functions):
        return [{"module": key[0], "address": f"0x{key[1]:08X}",
                 "name": functions[key]["name"]} for key in sorted(keys)]

    metrics = {}
    for key in ("matched_functions", "matched_code", "matched_data", "complete_code", "complete_data",
                "total_functions", "total_code", "total_data"):
        first = int(before.get("measures", {}).get(key, 0))
        last = int(after.get("measures", {}).get(key, 0))
        metrics[key] = {"before": first, "after": last, "delta": last - first}
    failures = []
    if old_exact - new_exact:
        failures.append("Previously exact functions regressed or disappeared")
    if old.keys() - new.keys():
        failures.append("Original function addresses disappeared from coverage")
    for key, values in metrics.items():
        if values["delta"] < 0:
            failures.append(f"{key} decreased by {-values['delta']}")
    return {
        "metrics": metrics,
        "new_matches": rows(new_exact - old_exact, new),
        "regressions": rows(old_exact - new_exact, old),
        "missing_functions": rows(old.keys() - new.keys(), old),
        "failures": failures,
    }


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("before", type=Path)
    parser.add_argument("after", nargs="?", type=Path, default=ROOT / "build/GPOE8P/report.json")
    parser.add_argument("--check", action="store_true", help="fail on regression or lost coverage")
    parser.add_argument("--json", action="store_true")
    args = parser.parse_args()
    try:
        delta = compare(json.loads(args.before.read_text()), json.loads(args.after.read_text()))
    except (OSError, ValueError) as error:
        parser.exit(2, f"Cannot compare reports: {error}\n")
    if args.json:
        print(json.dumps(delta, indent=2))
    else:
        for key, values in delta["metrics"].items():
            print(f"{key}: {values['before']} -> {values['after']} ({values['delta']:+d})")
        print(f"New exact functions: {len(delta['new_matches'])}; regressions: {len(delta['regressions'])}")
        for row in delta["new_matches"]:
            print(f"  + {row['address']} {row['name']}")
        for failure in delta["failures"]:
            print(f"FAIL: {failure}")
    return 1 if args.check and delta["failures"] else 0


if __name__ == "__main__":
    raise SystemExit(main())
