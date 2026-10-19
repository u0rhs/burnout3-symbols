<sub>[Home](../README.md)</sub>

# Finding things

All data files with direct links: [symbols and maps](files.md).

Recipes for the common questions. Paths are relative to the repository root. A plain-text search over
the whole repository (`grep -r`, or an editor's search) is often the fastest start; every export is
text.

## A class

1. **Its page:** [classes](classes/README.md) has one page per Burnout 3 class: methods with addresses
   in all four builds, vtable, static data, the Burnout 2 ancestor's layout, and related asserts.
2. **Its area:** the [game systems](systems/README.md) pages group classes by area.
3. **Its fields:** the Burnout 3 builds have no type information. The ancestor's layout from Burnout 2 is
   on the class page ([all ancestors](reference/class-ancestors.md)); every Burnout 2 type is in
   [`data/burnout2-prototype/SLUS_204.97/types.h`](../data/burnout2-prototype/SLUS_204.97/types.h). Burnout 2
   layouts often don't carry over: the 2D classes were rebuilt (their pages' Notes give the Burnout 3 layouts
   worked out from the retail code). The Burnout Revenge July 2005 prototype has real layouts, with
   member names and methods, for 444 of the classes: each class page shows the Revenge layout next to the
   Burnout 2 one ([Revenge classes](reference/revenge-class-lineage.md)). Check them against Burnout 3 code
   before use; some changed.

## An address

| Build | Where to look |
|---|---|
| B3 prototype (map) | [`maps/DNAT_200.symbols.txt`](../data/burnout3-prototype/maps/DNAT_200.symbols.txt), by address. The executable is six days newer: game-code addresses drift by up to −0xCE40 |
| B3 debug / internal / -O0 | `maps/B3DEBUG.symbols.txt` and the others |
| B3 prototype, data | [b3-globals](reference/b3-globals.md) |
| B3 retail, code | [`prototype-names.csv`](../data/burnout3-retail/prototype-names.csv): 5,054 functions with start, size, prototype name and how sure it is ([prototype names](reference/retail-prototype-names.md)); [`function-names.csv`](../data/burnout3-retail/function-names.csv): Nahelam's names ([checked](reference/retail-function-names.md#checked-against-the-code)) |
| B3 retail, data | The [retail memory map](reference/retail-memory-map.md) (from cheat codes and patches; `in_function` says which function a code address is in); strings with addresses in [`disc/strings/`](../data/burnout3-retail/disc/strings/README.md) |
| B2 prototype | [`symbols.txt`](../data/burnout2-prototype/SLUS_204.97/symbols.txt), or [`functions.txt`](../data/burnout2-prototype/SLUS_204.97/functions.txt) with signatures and lines |

## A source file

- **Burnout 3:** search `maps/DNAT_200.symbols.txt` for `==== B3File.cpp`; `*.source_files.txt` lists all
  files with sizes; the [system pages](systems/README.md) list each area's files.
- **Its folder:** no Burnout 3 build keeps source paths; the Burnout Revenge file of the same name does
  (`B3HUDComponent.cpp` → `GameSource/Hud/B4HUDComponent.cpp`), on the system pages and in
  [Revenge source files](reference/revenge-source-file-lineage.md) (300 of 598 files).
- **Burnout 2:** [`source_outline/`](../data/burnout2-prototype/SLUS_204.97/source_outline/README.md) mirrors
  Criterion's tree; each file lists its functions with parameters, locals, scopes and lines.
- **Burnout 3 file ↔ Burnout 2 file:** [source-file lineage](reference/source-file-lineage.md).

## A function's parameters

- **Burnout 3:** the maps give parameter types only, as of June 2004; retail can differ
  ([prototype names](reference/retail-prototype-names.md#what-the-names-do-not-prove)).
- **Burnout Revenge** has parameter names too: the class pages show the Revenge signature of each method
  (2,805 Burnout 3 functions have one, [function lineage](reference/revenge-function-lineage.md)).
- **Parameter names:** when the function has a Burnout 2 counterpart, its class page shows the Burnout 2
  signature with names ([all of them](reference/function-lineage.md)).
- **RenderWare functions:** [RenderWare API](reference/renderware-api.md) has full signatures.

## Whether a name was shipped

| Found in | Meaning |
|---|---|
| `DNAT_200.symbols.*` | Linked into the prototype executable |
| [unlinked code](reference/unlinked-code.md) only | Existed in the source; dropped by the linker |
| `B3O0PCH.*` only | Usually a small header function the optimised builds inlined |
| The debug and internal maps but not DNAT_200 | Debug-only or removed ([build comparison](reference/build-comparison.md)) |
| [`prototype-names.csv`](../data/burnout3-retail/prototype-names.csv) | In the retail executable too, at the address given (5,054 functions; see the `proof` column) |
| DNAT_200 but not `prototype-names.csv` | Not found in retail yet: removed, rewritten past recognition, or missed |

## One function across builds

Example, `CB3VehiclePhysics::UpdateSuspension(float)`:

| Build | Address | Size |
|---|---|---:|
| DNAT_200 (map) | `0x00194BC0` | 4,848 |
| B3INTERN | `0x001C1240` | 6,516 |
| B3DEBUG | `0x001C7610` | 6,700 |
| B3O0PCH | `0x001CE580` | 6,212 |
| DNAT_200.45 (the executable; the map is shifted against it) | `0x00192550` | 4,848 |
| Retail SLUS-21050 ([`prototype-names.csv`](../data/burnout3-retail/prototype-names.csv); `unverified`: changed by retail) | `0x001CC900` | 4,720 |
| Burnout 2, `CVehiclePhysics::UpdateSuspension(float lrTimeStep)` | `0x001CDDA0` | in `functions.txt` |

The debug builds' versions are larger (asserts, less optimisation). Every function's addresses and sizes
in all four builds: [data/b3-functions-by-build.csv](reference/data/b3-functions-by-build.csv).

## Text from the game

- **Strings of each executable**, with addresses and sorted by kind (file paths, messages, identifiers,
  expressions): `data/*/disc/strings/`. Overview: [discs](discs.md).
- **Assert expressions:** [asserts](reference/asserts.md).
- **The original text link maps:** `data/*/originals/`.
