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
3. **Its fields:** Burnout 3 has no layouts. The ancestor's layout from Burnout 2 is on the class page
   ([all ancestors](reference/class-ancestors.md)); every Burnout 2 type is in
   [`data/burnout2-prototype/SLUS_204.97/types.h`](../data/burnout2-prototype/SLUS_204.97/types.h).

## An address

| Build | Where to look |
|---|---|
| B3 prototype (map) | [`maps/DNAT_200.symbols.txt`](../data/burnout3-prototype/maps/DNAT_200.symbols.txt), by address. The executable is six days newer: game-code addresses drift by up to −0xCE40 |
| B3 debug / internal / -O0 | `maps/B3DEBUG.symbols.txt` and the others |
| B3 prototype, data | [b3-globals](reference/b3-globals.md) |
| B3 retail | The [retail memory map](reference/retail-memory-map.md) (from cheat codes and patches); strings with addresses in [`disc/strings/`](../data/burnout3-retail/disc/strings/README.md). Functions are not named yet |
| B2 prototype | [`symbols.txt`](../data/burnout2-prototype/SLUS_204.97/symbols.txt), or [`functions.txt`](../data/burnout2-prototype/SLUS_204.97/functions.txt) with signatures and lines |

## A source file

- **Burnout 3:** search `maps/DNAT_200.symbols.txt` for `==== B3File.cpp`; `*.source_files.txt` lists all
  files with sizes; the [system pages](systems/README.md) list each area's files.
- **Burnout 2:** [`source_outline/`](../data/burnout2-prototype/SLUS_204.97/source_outline/README.md) mirrors
  Criterion's tree; each file lists its functions with parameters, locals, scopes and lines.
- **Burnout 3 file ↔ Burnout 2 file:** [source-file lineage](reference/source-file-lineage.md).

## A function's parameters

- **Burnout 3:** the maps give parameter types only.
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
| Retail | Needs names carried to retail; the retail strings are a partial check |

## One function across builds

Example, `CB3VehiclePhysics::UpdateSuspension(float)`:

| Build | Address | Size |
|---|---|---:|
| DNAT_200 (map) | `0x00194BC0` | 4,848 |
| B3INTERN | `0x001C1240` | 6,516 |
| B3DEBUG | `0x001C7610` | 6,700 |
| B3O0PCH | `0x001CE580` | 6,212 |
| Burnout 2, `CVehiclePhysics::UpdateSuspension(float lrTimeStep)` | `0x001CDDA0` | in `functions.txt` |

The debug builds' versions are larger (asserts, less optimisation). Every function's addresses and sizes
in all four builds: [data/b3-functions-by-build.csv](reference/data/b3-functions-by-build.csv).

## Text from the game

- **Strings of each executable**, with addresses and sorted by kind (file paths, messages, identifiers,
  expressions): `data/*/disc/strings/`. Overview: [discs](discs.md).
- **Assert expressions:** [asserts](reference/asserts.md).
- **The original text link maps:** `data/*/originals/`.
