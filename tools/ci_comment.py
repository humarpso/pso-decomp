#!/usr/bin/env python3
"""Render the pull request comment from `check_pr.py --json` output.

    python tools/ci_comment.py result.json --sha <commit> --run-url <url>

A missing or unreadable result file renders as a failure that ran no checks, which is
what a CI run that stopped before the gate looks like. The input is produced by the
pull request's own code, so every value is checked and escaped here before it reaches
the comment.
"""
from __future__ import annotations

import argparse
import json
import re
from pathlib import Path

MARKER = "<!-- pso-ci -->"
PASS, FAIL, SKIP = "✅", "❌", "➖"

CHECKS = {
    "build": "Build + DOL SHA-1",
    "report_delta": "No regressions (`report_delta --check`)",
    "link_units": "Linked units still link",
}
METRICS = [
    ("metrics", "matched_data", "Matched data (bytes)"),
    ("metrics", "complete_data", "Complete data (bytes)"),
    ("metrics", "matched_code", "Matched code (bytes)"),
    ("metrics", "complete_code", "Complete code (bytes)"),
    ("metrics", "matched_functions", "Matched functions"),
    ("structure", "linked_units", "Linked units"),
]


def text(value: object, limit: int = 300) -> str:
    """One line of untrusted text, safe inside a table cell."""
    value = re.sub(r"\s+", " ", str(value))[:limit]
    value = value.replace("&", "&amp;").replace("@", "@​").replace("|", "\\|").replace("<", "&lt;").replace(">", "&gt;")
    return value


def block(value: object, limit: int = 6000) -> str:
    """Untrusted multi-line text, safe inside a fenced code block."""
    return str(value)[-limit:].replace("`", "ˋ").replace("@", "@​")


def number(value: object) -> int | None:
    return value if isinstance(value, int) and not isinstance(value, bool) else None


def delta_cell(value: int) -> str:
    return f"**{value:+,}**" if value else "0"


def render(result: dict | None, sha: str, run_url: str) -> str:
    checks = {c.get("name"): c for c in (result or {}).get("checks", []) if isinstance(c, dict)}
    passed = isinstance(result, dict) and result.get("result") == "pass" and checks.get("build", {}).get("ok") is True
    sha = re.sub(r"[^0-9a-f]", "", sha)[:10]
    lines = [MARKER, f"### {PASS if passed else FAIL} CI {'passed' if passed else 'failed'}"
             + (f" · `{sha}`" if sha else "") + (f" · [run]({run_url})" if run_url else ""), ""]
    if result is None:
        lines.append("The run stopped before the gate wrote its results; see the run log.")
        return "\n".join(lines) + "\n"

    lines += ["| Check | Result |", "|---|:---:|"]
    for name, label in CHECKS.items():
        c = checks.get(name, {})
        ok = c.get("ok")
        mark = PASS if ok is True else FAIL if ok is False else SKIP
        reason = f" {text(c['reason'])}" if ok is False and c.get("reason") else ""
        lines.append(f"| {label} | {mark}{reason} |")

    delta = result.get("delta")
    if isinstance(delta, dict):
        rows = []
        for group, key, label in METRICS:
            row = (delta.get(group) or {}).get(key) or {}
            before, after, change = (number(row.get(k)) for k in ("before", "after", "delta"))
            if None not in (before, after, change):
                rows.append(f"| {label} | {before:,} | {after:,} | {delta_cell(change)} |")
        if rows:
            lines += ["", "| Metric | Base | PR | Δ |", "|---|---:|---:|---:|"] + rows
        counts = []
        for key, label in (("new_matches", "new exact functions"), ("regressions", "function regressions"),
                           ("renamed_functions", "renamed functions")):
            if isinstance(delta.get(key), list):
                counts.append(f"{len(delta[key])} {label}")
        if counts:
            lines += ["", ", ".join(counts).capitalize() + "."]
        failures = delta.get("failures")
        if isinstance(failures, list) and failures:
            lines += [""] + [f"- {FAIL} {text(f)}" for f in failures[:20]]

    failed = [c for c in checks.values() if c.get("ok") is False and c.get("output")]
    for c in failed:
        lines += ["", f"<details><summary>{text(CHECKS.get(c.get('name'), c.get('name'))).replace('`', '')} output</summary>", "",
                  "```", block(c["output"]), "```", "</details>"]
    return "\n".join(lines) + "\n"


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("result", type=Path)
    parser.add_argument("--sha", default="")
    parser.add_argument("--run-url", default="")
    args = parser.parse_args()
    try:
        result = json.loads(args.result.read_text())
        if not isinstance(result, dict):
            result = None
    except (OSError, ValueError):
        result = None
    run_url = args.run_url if re.fullmatch(r"https://github\.com/[\w.-]+/[\w.-]+/actions/runs/\d+(/attempts/\d+)?",
                                           args.run_url) else ""
    print(render(result, args.sha, run_url), end="")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
