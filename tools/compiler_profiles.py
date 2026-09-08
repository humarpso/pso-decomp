"""Compiler exceptions established by complete owning-TU object comparisons."""
import json
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
        ('-O', '-inline ', '-use_lmw_stmw ', '-opt '))]
    result += [profile['optimization'], '-inline ' + profile['inline'],
               '-use_lmw_stmw ' + profile['use_lmw_stmw']]
    if profile.get('opt'):
        result.append('-opt ' + profile['opt'])
    return {'mw_version': profile['mw_version'], 'cflags': result}


def compile_rules(ninja_text):
    """Read source -> (compiler, argv) from expanded MWCC Ninja rules."""
    import shlex
    import re
    text = re.sub(r'\$\n\s*', ' ', ninja_text)
    rules = {}
    source = None
    values = {}

    def save():
        if source and 'mw_version' in values and 'cflags' in values:
            rules[source] = (values['mw_version'], shlex.split(values['cflags']))

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
    return rules


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
