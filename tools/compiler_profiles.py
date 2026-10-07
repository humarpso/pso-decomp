"""Compiler exceptions established by complete owning-TU object comparisons."""
import json
import shlex
from collections.abc import Mapping
from pathlib import Path

PROFILE_FILE = Path(__file__).resolve().parent.parent / 'config/GPOE8P/psov3/compiler_profiles.json'
_RULE_CACHE = {}


def load_profiles(path=PROFILE_FILE):
    return json.loads(path.read_text()) if path.exists() else {}


def object_options(owner, flags, profiles=None):
    profile = (load_profiles() if profiles is None else profiles).get(owner)
    if profile is None:
        return {}
    # Replace switches instead of appending conflicting optimization settings.
    result = [f for f in flags if not f.startswith(
        ('-O', '-inline ', '-use_lmw_stmw ', '-opt ')
        + (('-sdata2 ',) if 'sdata2' in profile else ()))]
    result += [profile['optimization'], '-inline ' + profile['inline'],
               '-use_lmw_stmw ' + profile['use_lmw_stmw']]
    if profile.get('opt'):
        result.append('-opt ' + profile['opt'])
    # Units that load pooled doubles with `lfd x@sda21` were built with the
    # compiler's default small-data threshold, not the game's -sdata2 4.
    if 'sdata2' in profile:
        result.append(f"-sdata2 {profile['sdata2']}")
    return {'mw_version': profile['mw_version'], 'cflags': result}


class CompileRules(Mapping):
    """source -> (compiler, argv); cflags are split only when a rule is read.

    build.ninja has ~5k MWCC rules and a caller usually needs one, so splitting
    every rule up front cost ~1.4 s per call."""

    def __init__(self, raw):
        self._raw = raw
        self._split = {}

    def __getitem__(self, source):
        rule = self._split.get(source)
        if rule is None:
            version, cflags = self._raw[source]
            rule = self._split[source] = (version, shlex.split(cflags))
        return rule

    def __contains__(self, source):
        return source in self._raw

    def __iter__(self):
        return iter(self._raw)

    def __len__(self):
        return len(self._raw)


def compile_rules(ninja_text):
    """Read source -> (compiler, argv) from expanded MWCC Ninja rules."""
    import re
    text = re.sub(r'\$\n\s*', ' ', ninja_text)
    rules = {}
    source = None
    values = {}

    def save():
        if source and 'mw_version' in values and 'cflags' in values:
            rules[source] = (values['mw_version'], values['cflags'])

    for line in text.splitlines():
        if line.startswith('build '):
            save()
            source, values = None, {}
            match = re.search(r':\s+mwcc(?:_sjis)?\s+(\S+)', line)
            if match:
                source = match[1]
        elif source and line.startswith('  ') and '=' in line:
            key, value = line.strip().split('=', 1)
            values[key.strip()] = value.strip()
    save()
    return CompileRules(rules)


def rules_from_file(path):
    stat = path.stat()
    key = (path.resolve(), stat.st_mtime_ns, stat.st_size)
    rules = _RULE_CACHE.get(key)
    if rules is None:
        rules = compile_rules(path.read_text())
        _RULE_CACHE.clear()
        _RULE_CACHE[key] = rules
    # Another probe may refresh the cache after a build-file regeneration.
    # Return this call's snapshot even if that refresh evicts its key.
    return rules
