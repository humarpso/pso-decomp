#!/usr/bin/env python3
"""Browse standard objdiff reports offline, without inferring original source layout.

Usage: python tools/progress_map.py build/<version>/report.json [...] -o build/progress [--readme README.md]

The report's matched/complete counters remain authoritative. Complete means
source selected by the build configuration; it does not prove a final hash.
Data includes every section counted by the report, including BSS when present.
"""

import argparse
import json
import math
from pathlib import Path
from typing import Dict

COUNTERS = (
    "total_code", "matched_code", "complete_code", "total_data", "matched_data",
    "complete_data", "total_functions", "matched_functions", "total_units", "complete_units",
)
README_BEGIN = "<!-- progress-table -->"
README_END = "<!-- /progress-table -->"
CODE_SECTIONS = {".text", ".init", ".fini"}
BSS_SECTIONS = {".bss", ".sbss", ".sbss2", ".common"}


def number(value, default=0):
    """Protobuf JSON encodes uint64 as strings and omits zero-valued fields."""
    if value is None:
        return default
    result = float(value)
    if not math.isfinite(result) or result < 0:
        raise ValueError(f"Invalid nonnegative report number: {value!r}")
    return result


def measures(raw):
    return {key: int(number(raw.get(key))) for key in COUNTERS}


def add_measures(target, source):
    for key in COUNTERS:
        target[key] += source[key]


def section_kind(name):
    if name in CODE_SECTIONS:
        return "code"
    if name in BSS_SECTIONS:
        return "bss"
    return "initialized_data"


def normalize_report(report: Dict, version: str) -> Dict:
    """Use real modules, current objects and original function addresses."""
    root = {"id": "root", "name": version, "kind": "directory", "children": [], "measures": measures({})}
    modules = {}
    function_ids = set()
    for index, unit in enumerate(report.get("units", [])):
        metadata = unit.get("metadata") or {}
        unit_name = str(unit.get("name", f"unit-{index}"))
        module = str(metadata.get("module_name") or unit_name.split("/")[0] or "main")
        source = metadata.get("source_path")
        path = str(source or unit_name).replace("\\", "/").strip("/")
        selected = metadata.get("complete") is True
        leaf = {
            "id": f"unit-{index}", "name": path.rsplit("/", 1)[-1], "kind": "unit", "unit_name": unit_name,
            "path": str(source or unit_name), "module": module, "source_path": source,
            "source_selected": selected, "measures": measures(unit.get("measures") or {}),
            "similarity": number((unit.get("measures") or {}).get("fuzzy_match_percent")),
            "sections": [], "functions": [],
        }
        for section_index, section in enumerate(unit.get("sections", [])):
            name = str(section.get("name", "(unnamed)"))
            size = int(number(section.get("size")))
            similarity = number(section.get("fuzzy_match_percent"))
            entry = {"name": name, "size": size, "kind": section_kind(name), "similarity": similarity,
                     "exact": similarity == 100, "source_selected": selected,
                     "address": (section.get("metadata") or {}).get("virtual_address"),
                     "id": f"section-{index}-{section_index}"}
            leaf["sections"].append(entry)
        for function in unit.get("functions", []):
            function_name = str(function.get("name", "(unnamed)"))
            function_metadata = function.get("metadata") or {}
            similarity = number(function.get("fuzzy_match_percent"))
            address = function_metadata.get("virtual_address")
            if address is None:
                raise ValueError(f"No original address for {unit_name}:{function_name}")
            module_key = metadata.get("module_id", module)
            identity = f"function:{module_key}:{int(number(address))}"
            if identity in function_ids:
                raise ValueError(f"Duplicate original function address: {identity}")
            function_ids.add(identity)
            leaf["functions"].append({
                "id": identity, "name": function_name,
                "display_name": str(function_metadata.get("demangled_name") or function_name),
                "size": int(number(function.get("size"))), "similarity": similarity,
                "exact": similarity == 100, "source_selected": selected,
                "address": function_metadata.get("virtual_address"),
            })
        addresses = [int(f["address"]) for f in leaf["functions"]]
        if not addresses:
            addresses = [int(s["address"]) for s in leaf["sections"] if s["address"] is not None]
        leaf["address"] = min(addresses) if addresses else None
        add_measures(root["measures"], leaf["measures"])
        if module not in modules:
            modules[module] = {"id": "module:" + module, "name": module, "kind": "module",
                               "children": [], "measures": measures({})}
            root["children"].append(modules[module])
        add_measures(modules[module]["measures"], leaf["measures"])
        modules[module]["children"].append(leaf)
    reported = measures(report.get("measures") or {})
    differences = {key: {"report": reported[key], "unit_sum": root["measures"][key]}
                   for key in COUNTERS if reported[key] != root["measures"][key]}
    return {
        "schema_version": 2, "version": version, "objdiff_report_version": report.get("version"),
        "objdiff_measures": report.get("measures") or {}, "measures": reported,
        "similarity": number((report.get("measures") or {}).get("fuzzy_match_percent")),
        "unit_sum_differences": differences, "tree": root,
    }


PAGE = r'''<!doctype html>
<html lang="en"><head><meta charset="utf-8"><meta name="viewport" content="width=device-width,initial-scale=1">
<title>PSO objdiff report</title>
<style>
:root{color-scheme:dark}*{box-sizing:border-box}body{margin:0;background:#181b20;color:#eceff2;font:14px/1.5 system-ui,sans-serif}main{max-width:1440px;margin:auto;padding:24px}h1{font-size:24px;margin:0}p{margin:10px 0}.muted,small{color:#adb6c1}a{color:#9ec9f5}button,select,input{font:inherit;color:inherit;background:#242930;border:1px solid #454d58;border-radius:3px;padding:6px 9px}button{cursor:pointer}button:hover{background:#38414c}button:focus-visible,input:focus-visible,select:focus-visible{outline:2px solid #91c4fb;outline-offset:2px}.controls{display:flex;gap:12px;align-items:end;flex-wrap:wrap;margin:18px 0}label{display:grid;gap:3px;color:#adb6c1;font-size:12px}#search{min-width:240px}#scope-note{border-left:3px solid #789abc;padding-left:10px}.numbers{display:flex;gap:28px;flex-wrap:wrap;margin:18px 0}.numbers strong{font-size:20px;margin-right:8px}#breadcrumbs{display:flex;gap:8px;align-items:center;flex-wrap:wrap}#breadcrumbs button{padding:3px 8px}#detail{min-height:46px;overflow-wrap:anywhere;color:#adb6c1}.tablewrap{overflow:auto;border:1px solid #454d58}table{border-collapse:collapse;width:100%;font-size:13px;text-align:right}th,td{padding:8px 11px;border-bottom:1px solid #343b44;white-space:nowrap}th{background:#242930}th button{padding:0;background:none;border:0}th:first-child,td:first-child{text-align:left}td:first-child{max-width:580px;white-space:normal;overflow-wrap:anywhere}td button{color:#b8d8f9;padding:0;background:none;border:0;text-align:left}td small{display:block}.meter{display:block;height:4px;background:#414750;margin:4px 0}.meter span{display:block;height:100%;background:#468bd2}.linked span{background:#3b984c}tbody tr:hover{background:#252d37}#pager{display:flex;gap:12px;align-items:center;margin:15px 0}#warning{color:#eab968}details{margin-top:18px}footer{margin-top:20px;color:#adb6c1;font-size:12px}@media(max-width:700px){main{padding:12px}h1{font-size:21px}.numbers{gap:12px}.numbers strong{font-size:17px}#search{min-width:180px}}
</style></head><body><main>
<h1>PSO objdiff report</h1>
<p class="muted">Episode I &amp; II Plus · USA v1.02</p>
<p id="scope-note"></p>
<div class="controls">
<label>Executable / module<select id="scope"></select></label>
<label>Measure<select id="metric"><option value="code">Code</option><option value="data">Data + BSS</option></select></label>
<label>View<select id="view"><option value="objects">Current objects</option><option value="entries">Functions</option></select></label>
<label>Show<select id="filter"><option value="all">Everything</option><option value="unmatched">Needs matching</option><option value="unlinked">Not fully linked</option><option value="matched-unlinked">Exact, not linked</option></select></label>
<label>Search<input id="search" type="search" placeholder="Symbol, source file, 0x800…"></label><button id="reset">Reset</button>
</div>
<nav id="breadcrumbs" aria-label="Current object"></nav>
<div id="numbers" class="numbers" aria-live="polite"></div>
<p>Objects below are the current build splits. Source paths and object counts do not establish original TU boundaries or recovered game modules.</p>
<div id="detail"></div>
<p id="shown" class="muted"></p>
<div class="tablewrap"><table><thead><tr>
<th><button data-sort="name">Object / function</button></th><th><button data-sort="address">Original address</button></th>
<th><button data-sort="total">Bytes</button></th><th><button data-sort="matched">Matched</button></th><th><button data-sort="complete">Linked</button></th><th><button data-sort="remaining">Unmatched bytes ↓</button></th><th>Exact functions</th>
</tr></thead><tbody id="rows"></tbody></table></div>
<div id="pager"><button id="previous">Previous</button><span id="page"></span><button id="next">Next</button></div>
<p id="empty" hidden>No entries in this view.</p><p id="warning"></p>
<details><summary>Report definitions and folding</summary>
<p>Matched bytes are objdiff's exact-match counters. Linked bytes are selected from compiled source by the build; Ninja checks the output hash. A partly matched object retains its actual matched byte count.</p>
<p>A fold can combine several current objects. Rebuild the report to see the new ownership. Functions retain their original module/address identity when renamed or moved. Compare saved reports with <code>tools/report_delta.py BEFORE AFTER --check</code> to check exact functions and original data intervals, including linked coverage.</p>
<p>Inside an object, code rows are functions and data rows are sections. Their summed sizes can differ from the object counters because of padding. BSS describes zero-initialized storage. Function and object counts are not measures of recovered original TU boundaries.</p>
<p>Search and filters affect the table; the totals above it describe the selected module or object. Runtime asset verification is separate from these code/data counters.</p>
</details><footer id="exports"></footer>
</main><script id="reports" type="application/json">__REPORT_DATA__</script><script>
'use strict';
const reports=JSON.parse(document.getElementById('reports').textContent),$=id=>document.getElementById(id);
const fmt=n=>Number(n||0).toLocaleString('en-US'),percent=(n,d)=>d?(100*n/d).toFixed(2)+'%':'—';
const address=n=>n===null||n===undefined?'—':'0x'+Number(n).toString(16).toUpperCase().padStart(8,'0');
function el(tag,text,attrs={}){const n=document.createElement(tag);if(text!==undefined)n.textContent=text;for(const[k,v]of Object.entries(attrs))n.setAttribute(k,v);return n;}
let current,base,selected=null,metric='code',query='',filter='all',view='objects',sort='remaining',descending=true,page=0;
const scopes=[],pageSize=100;
function amount(n,kind='total'){return n.measures[kind+'_'+metric]||0;}
function entries(unit){return (metric==='code'?unit.functions:unit.sections.filter(s=>s.kind!=='code')).map(f=>({...f,kind:metric==='code'?'function':'section',owner:unit,path:unit.path,source_path:unit.source_path,measures:{['total_'+metric]:f.size,['matched_'+metric]:f.exact?f.size:0,['complete_'+metric]:unit.source_selected?f.size:0,total_functions:metric==='code'?1:0,matched_functions:metric==='code'&&f.exact?1:0}}));}
function permitted(n){const t=amount(n);return t>0&&(filter==='all'||filter==='unmatched'&&amount(n,'matched')<t||filter==='unlinked'&&amount(n,'complete')<t||filter==='matched-unlinked'&&amount(n,'matched')===t&&amount(n,'complete')<t);}
function matches(n){return !query||[n.name,n.display_name,n.path,n.unit_name,address(n.address)].join(' ').toLowerCase().includes(query);}
function results(){
 const units=selected?[selected]:base.children,out=[];
 for(const u of units){if(selected||view==='entries'){out.push(...entries(u).filter(n=>permitted(n)&&matches(n)));continue;}
  if(permitted(u)&&matches(u)){out.push(u);continue;}
  if(query)out.push(...entries(u).filter(n=>permitted(n)&&matches(n)));
 }return out;
}
function inspect(n){$('detail').replaceChildren(el('strong',n.display_name||n.unit_name||n.name),el('div',address(n.address)+' · '+fmt(amount(n))+' bytes · '+(n.owner?'Current object: '+n.owner.unit_name:n.path)),el('div','Matched: '+fmt(amount(n,'matched'))+' · Linked: '+fmt(amount(n,'complete'))));}
function visit(n){if(n.kind==='unit'){selected=n;query='';$('search').value='';page=0;render();}else inspect(n);}
function render(){
 const node=selected||base,nodes=results();
 $('breadcrumbs').replaceChildren();const back=el('button',base.name);back.onclick=()=>{selected=null;page=0;render();};$('breadcrumbs').append(back);if(selected)$('breadcrumbs').append(el('span','/'),el('span',selected.unit_name));
 $('numbers').replaceChildren();for(const[label,n,d]of[['Matched '+metric,amount(node,'matched'),amount(node)],['Linked '+metric,amount(node,'complete'),amount(node)],['Exact functions',node.measures.matched_functions,node.measures.total_functions]]){const box=el('div');box.append(el('strong',percent(n,d)),el('span',label),el('div',fmt(n)+' / '+fmt(d)+(label==='Exact functions'?'':' bytes'),{class:'muted'}));$('numbers').append(box);}
 const value=n=>sort==='address'?(n.address??Number.MAX_SAFE_INTEGER):sort==='remaining'?amount(n)-amount(n,'matched'):sort==='total'?amount(n):amount(n,sort)/amount(n);
 nodes.sort((a,b)=>((sort==='name'?(a.display_name||a.name).localeCompare(b.display_name||b.name):value(a)-value(b))*(descending?-1:1))||((a.address??0)-(b.address??0))||a.id.localeCompare(b.id));
 const pages=Math.max(1,Math.ceil(nodes.length/pageSize));page=Math.min(page,pages-1);$('page').textContent=(page+1)+' / '+pages;$('previous').disabled=page===0;$('next').disabled=page+1===pages;
 $('shown').textContent=fmt(nodes.length)+' entries · '+fmt(nodes.reduce((s,n)=>s+amount(n),0))+' bytes in table'+(query||filter!=='all'?' (filtered)':'');$('empty').hidden=nodes.length>0;$('rows').replaceChildren();
 for(const n of nodes.slice(page*pageSize,(page+1)*pageSize)){const tr=el('tr'),name=el('td'),b=el('button',n.display_name||n.name);b.onclick=()=>visit(n);name.append(b);if(n.path)name.append(el('small',n.path));tr.append(name,el('td',address(n.address)),el('td',fmt(amount(n))));for(const kind of ['matched','complete']){const td=el('td',percent(amount(n,kind),amount(n))),meter=el('span',undefined,{class:'meter'+(kind==='complete'?' linked':'')}),fill=el('span');fill.style.width=100*amount(n,kind)/amount(n)+'%';meter.append(fill);td.append(meter,el('small',fmt(amount(n,kind))+' bytes'));tr.append(td);}tr.append(el('td',fmt(amount(n)-amount(n,'matched'))),el('td',n.measures.total_functions?fmt(n.measures.matched_functions)+' / '+fmt(n.measures.total_functions):'—'));$('rows').append(tr);}
 $('warning').textContent=Object.keys(current.unit_sum_differences).length?'Report totals differ from unit sums. Module/object views use the current units; the downloaded report retains its original aggregates.':'';
 $('view').disabled=!!selected;$('view').options[1].textContent=metric==='code'?'Functions':'Data sections';if(selected)inspect(selected);else $('detail').textContent='Select an object to inspect its functions or data sections. Search also finds symbols inside objects.';
}
function selectScope(index){const s=scopes[index];current=s.report;base=s.node;selected=null;query='';page=0;$('search').value='';$('scope-note').textContent=s.aux?'Outside project scope: auxiliary executable retained for disc reconstruction.':base.name==='movie'?'movie.rel · Main-game code module, separate from PsoV3.':'PsoV3.dol · Main game; auxiliary DOLs are outside project scope.';$('exports').replaceChildren(el('span','Source: '+current.version+'/report.json · '),el('a','Download original objdiff report',{href:current.file_stem+'.json',download:''}));render();}
const main=el('optgroup',undefined,{label:'Main game'}),aux=el('optgroup',undefined,{label:'Outside project scope'});
for(const report of reports)for(const node of report.tree.children){const outside=/_(BOOT|SWITCHERD?|IWANAGAD?)$/.test(report.version)||report.version==='GPOE8P-main'||node.name==='boot';const i=scopes.length;scopes.push({report,node,aux:outside});(outside?aux:main).append(el('option',node.name+' · '+report.version,{value:i}));}
if(main.children.length)$('scope').append(main);if(aux.children.length)$('scope').append(aux);
$('scope').onchange=()=>selectScope(Number($('scope').value));for(const id of ['metric','view','filter'])$(id).onchange=()=>{metric=$('metric').value;view=$('view').value;filter=$('filter').value;page=0;render();};$('search').oninput=()=>{query=$('search').value.trim().toLowerCase();page=0;render();};$('reset').onclick=()=>{filter='all';view='objects';$('filter').value=filter;$('view').value=view;selectScope(Number($('scope').value));};$('previous').onclick=()=>{page--;render();};$('next').onclick=()=>{page++;render();};
document.querySelectorAll('[data-sort]').forEach(b=>b.onclick=()=>{const key=b.dataset.sort;descending=sort===key?!descending:!['name','address'].includes(key);sort=key;page=0;document.querySelectorAll('[data-sort]').forEach(x=>x.textContent=x.textContent.replace(/ [↑↓]$/,''));b.textContent+=' '+(descending?'↓':'↑');render();});
const first=scopes.findIndex(s=>s.node.name.toLowerCase()==='psov3');if(scopes.length){$('scope').value=String(first>=0?first:0);selectScope(Number($('scope').value));}else{$('empty').hidden=false;$('empty').textContent='No report units.';}
</script></body></html>
'''


def render_page(reports):
    # A script element is raw text even for application/json; escape '<' to keep
    # report symbol names from closing it. DOM rendering uses textContent.
    data = json.dumps(reports, ensure_ascii=True, separators=(",", ":")).replace("<", "\\u003c")
    return PAGE.replace("__REPORT_DATA__", data)


def generate(report_paths, output, width=1280, height=720) -> Path:
    """Write offline artifacts and return their index; never invokes a build."""
    paths = [Path(path) for path in report_paths]
    output = Path(output)
    if not paths:
        raise ValueError("at least one report is required")
    if width <= 0 or height <= 0:
        raise ValueError("width and height must be positive")
    versions = [path.parent.name for path in paths]
    if len(versions) != len(set(versions)):
        raise ValueError("report parent-directory names must be unique")
    reports = []
    output.mkdir(parents=True, exist_ok=True)
    for path, version in zip(paths, versions):
        report = json.loads(path.read_text(encoding="utf-8"))
        normalized = normalize_report(report, version)
        normalized["file_stem"] = version
        for name in (f"{version}.svg", f"{version}-data.svg"):
            (output / name).unlink(missing_ok=True)
        (output / f"{version}.json").write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
        reports.append(normalized)
    index = output / "index.html"
    index.write_text(render_page(reports), encoding="utf-8")
    return index


def readme_table(report: Dict) -> str:
    """The README's progress table, from a report's top-level counters."""
    m = measures(report.get("measures", {}))

    def pct(part, whole):
        return f"{100 * part / whole:.2f}%" if whole else "0.00%"

    return "\n".join([
        "| | Matched | Linked |",
        "|:--|--:|--:|",
        f"| Code | {pct(m['matched_code'], m['total_code'])} | {pct(m['complete_code'], m['total_code'])} |",
        f"| Data | {pct(m['matched_data'], m['total_data'])} | {pct(m['complete_data'], m['total_data'])} |",
        f"| Functions | {pct(m['matched_functions'], m['total_functions'])} "
        f"({m['matched_functions']:,} of {m['total_functions']:,}) | |",
        f"| Units | | {pct(m['complete_units'], m['total_units'])} "
        f"({m['complete_units']:,} of {m['total_units']:,}) |",
    ]) + "\n"


def update_readme(readme: Path, report_path: Path) -> bool:
    """Rewrite the table between the README's progress markers; True if it changed."""
    text = readme.read_text(encoding="utf-8")
    if text.count(README_BEGIN) != 1 or text.count(README_END) != 1:
        raise ValueError(f"{readme} needs one {README_BEGIN} ... {README_END} block")
    head, rest = text.split(README_BEGIN)
    _, tail = rest.split(README_END)
    table = readme_table(json.loads(Path(report_path).read_text(encoding="utf-8")))
    new = f"{head}{README_BEGIN}\n{table}{README_END}{tail}"
    if new != text:
        readme.write_text(new, encoding="utf-8")
    return new != text


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("reports", nargs="+", type=Path, help="build/<version>/report.json files")
    parser.add_argument("-o", "--output", type=Path, default=Path("build/progress"))
    parser.add_argument("--width", type=int, default=1280, help=argparse.SUPPRESS)
    parser.add_argument("--height", type=int, default=720, help=argparse.SUPPRESS)
    parser.add_argument("--readme", type=Path, help="also update this README's progress table from the first report")
    args = parser.parse_args()
    try:
        index = generate(args.reports, args.output, args.width, args.height)
        print(f"wrote {index}")
        if args.readme:
            changed = update_readme(args.readme, args.reports[0])
            print(f"{'updated' if changed else 'unchanged'}: progress table in {args.readme}")
    except ValueError as error:
        parser.error(str(error))


if __name__ == "__main__":
    main()
