# Contributing

This is a matching decompilation: a function counts when its compiled code is byte-identical to the original,
lives in the unit that owns its address, is a real member of its class and is named on evidence. objdiff's report
(`build/GPOE8P/report.json`) is the only measure of progress. Use whatever tools you like; send a clean pull
request.

## Setup

Follow [Building](README.md#building) in the README. Never commit the original or anything extracted or built from
it: `orig/` and `build/` are ignored.

## What a change can do

- **Match functions.** C or C++ for functions that were not matched before, which objdiff reports as exact.
- **Define data.** A unit's tables, strings and other data objects in source, so its data sections match.
- **Link a unit.** Once every function and data section in a unit matches, add it to
  `config/GPOE8P/psov3/linked_units.txt` so the build takes it from source.
- **Fold or split units.** Move functions and data into the unit that owns them, merging ranges that belong to one
  original object file or splitting ones that don't, and update `config/GPOE8P/psov3/splits.txt` to match.
- **Name things.** Real names for functions, classes, members and data, in the same change as the evidence for them.

[docs/architecture.md](docs/architecture.md) explains units, linking and the source layout.

## Recovering a function

1. Find the unit that owns its address in `config/GPOE8P/psov3/splits.txt`; its source file has the same path
   under `src/`.
2. Write the function as a member of its class, using the class's header in `include/` and the declarations of what
   it calls. If the class has no header yet, add one: fields, the virtual functions in slot order, the methods.
3. Open the repository in objdiff, select the unit and compare. objdiff rebuilds the unit when you save.
4. Keep the bodies in a unit in address order.

[zkit](https://github.com/zeroz41/gc-switch-tool-zkit) is optional tooling built around this project. It looks up
functions and units, compiles a candidate with its unit's exact command and compares it, and measures progress
by original address.

## Rules

- Nothing that matches or links today may stop matching or linking. Run `ninja baseline` on the base commit and
  `ninja changes` after your change, then
  `python tools/report_delta.py build/GPOE8P/baseline.json build/GPOE8P/report.json --check`. It compares by
  original address, so renames and folds don't hide a loss.
- `ninja` must succeed. It checks the rebuilt `PsoV3.dol` against the original's SHA-1.
- One source file per unit, functions in address order, class declarations in `include/`.
- No assembly, anywhere. A function Nintendo or Metrowerks wrote in assembly keeps its C signature with the body
  `#include "orig_asm/<unit>/<function>.inc"`, and `tools/orig_asm.py` generates that body from the disc during the
  build. Never write assembly by hand; a function that can only be matched that way stays unmatched.
- No data copied out of the game: no byte dumps of textures, models, sounds or other assets.
- Write source, not decompiler output: use class members and real types instead of raw pointer offsets,
  `void *` parameters, hand-mangled names, decompiler helper macros or hand-written vtables.
- No commented-out code, address comments, or notes about how a match was found. Comment only what the code
  can't say itself.
- Names come from evidence in the executable: strings, class-name tables, vtables, call patterns. Keep the
  placeholder (`fn_<address>`) rather than guess.
- Code copied or adapted from another project keeps its notices. Add the project to `third_party/README.md`,
  with its license text under `third_party/LICENSES/` if its terms require a copy.

## Pull requests

- One coherent piece of work per pull request, such as one class or one unit.
- Title it with the result: `Match TObjEneDimedian`, `Link TLobby.cpp`, `Split TBoss8Dragon into its units`.
- Say what changed: matched functions and code and data bytes before and after, and the evidence for any unit
  boundary or name.
- Commits are one short line in plain words, under your own name. Pull requests are squash-merged.
