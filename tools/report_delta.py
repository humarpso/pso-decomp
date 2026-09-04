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


def exact_data_ranges(report: dict) -> dict:
    """Exact non-text section intervals, independent of TU names/boundaries."""
    ranges = {}
    for unit in report.get('units', []):
        module = unit.get('metadata', {}).get('module_name', '')
        for section in unit.get('sections', []):
            size = int(section.get('size', 0))
            if section['name'] == '.text' or not size or section.get('fuzzy_match_percent') != 100:
                continue
            address = section.get('metadata', {}).get('virtual_address')
            if address is None:
                raise ValueError(f"No original address for exact section {unit['name']}:{section['name']}")
            start = int(address)
            ranges.setdefault((module, section['name']), []).append((start, start + size))
    # A split or merge must not look like data loss. Normalize adjacent ranges.
    for key, rows in ranges.items():
        merged = []
        for start, end in sorted(rows):
            if merged and start <= merged[-1][1]:
                merged[-1] = (merged[-1][0], max(end, merged[-1][1]))
            else:
                merged.append((start, end))
        ranges[key] = merged
    return ranges


def lost_data_ranges(before: dict, after: dict) -> list:
    old, new = exact_data_ranges(before), exact_data_ranges(after)
    lost = []
    for (module, section), ranges in sorted(old.items()):
        for start, end in ranges:
            cursor = start
            for first, last in new.get((module, section), []):
                if last <= cursor:
                    continue
                if first >= end:
                    break
                if first > cursor:
                    lost.append((module, section, cursor, first))
                cursor = max(cursor, min(last, end))
            if cursor < end:
                lost.append((module, section, cursor, end))
    return [{'module': module, 'section': section, 'address': f'0x{start:08X}',
             'size': end - start} for module, section, start, end in lost]


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
    data_regressions = lost_data_ranges(before, after)
    if data_regressions:
        failures.append('Previously exact data ranges regressed or disappeared')
    if old_exact - new_exact:
        failures.append("Previously exact functions regressed or disappeared")
    if old.keys() - new.keys():
        failures.append("Original function addresses disappeared from coverage")
    for key, values in metrics.items():
        if key.startswith('total_') and values['delta'] != 0:
            failures.append(f"{key} changed by {values['delta']:+d}; reconcile coverage explicitly")
        elif values["delta"] < 0:
            failures.append(f"{key} decreased by {-values['delta']}")
    return {
        "metrics": metrics,
        "new_matches": rows(new_exact - old_exact, new),
        "regressions": rows(old_exact - new_exact, old),
        "data_regressions": data_regressions,
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
        for row in delta['data_regressions']:
            print(f"  data: {row['module']} {row['section']} {row['address']} +{row['size']} bytes")
    return 1 if args.check and delta["failures"] else 0


if __name__ == "__main__":
    raise SystemExit(main())
