<sub>[Home](../../README.md) › [Uses](README.md)</sub>

# Using this data for a decompilation

A decompilation produces readable C++ source for Burnout 3. There are two kinds:

| | Functional | Matching |
|---|---|---|
| Proof it's right | Tests, e.g. differential testing against the original | The source compiles to byte-identical code |
| Compiler | Any | **Metrowerks CodeWarrior for PS2, MW MIPS C Compiler 2.4.1.01**, the exact one |
| Typical tooling | A static recompilation whose functions are replaced one by one | splat, m2c, objdiff, decomp.me |
| Effort | Lower | Much higher; the result can be trusted completely |

All three executables (B2 prototype, B3 prototype, B3 retail) were built with that same compiler
([builds](../builds.md)).

## Step 1: names for the retail executable

The retail executable (`SLUS_210.50`) has no symbols. The prototype maps name about 8,300 functions
of a build six weeks older. Ways to carry the names over:

1. **Masked byte signatures.** Compare functions with call targets, `lui`/`addiu` address pairs and
   `$gp` offsets masked out. With the same compiler, unchanged functions match exactly. The
   libraries (RenderWare, Sony, MSL) match best.
2. **Call-graph propagation.** When function A matches A', the functions they call at the same
   positions match too. This also catches small functions that are ambiguous on their own.
3. **Vtables.** DNAT_200 has 312, all named (`Class::__vt`). One vtable found in retail names all its
   slots. Sizes are on the [class pages](../classes/README.md).
4. **Known retail locations.** The [retail memory map](../reference/retail-memory-map.md) lists code
   addresses that cheat codes and patches change (a vehicle collision function, the race timer, Crash
   Breaker checks, boost on crashing, the HUD render and menu layout code, the button mapping). Each sits
   in a function whose behaviour is known, which narrows down its prototype name.
5. **Strings.** Functions that use the same literals in both builds. String lists with addresses:
   [disc contents](../discs.md).
6. **Burnout 2. RenderWare and Criterion's toolkit carried over with few changes
   ([function lineage](../reference/function-lineage.md)).
7. **The other three maps. They name functions DNAT_200 doesn't have: statics, and inlines in the
   `-O0` build ([build comparison](../reference/build-comparison.md)).

**Retail names already available:** [1,146 retail functions](../reference/retail-function-names.md)
are named from Nahelam's PAL list (863 verified). They are anchors for everything above: functions
between two named ones can be matched by order and size against the prototype.

Each name should record how it was found and how certain it is. Function sizes across the four
builds ([data/b3-functions-by-build.csv](../reference/data/b3-functions-by-build.csv)) are a quick
check: the optimised builds' sizes should be close to retail's.

**The map is older than the prototype executable.** DNAT_200.MAP was linked six days before
`DNAT_200.45`; game-code addresses drift by up to −0xCE40 ([formats](../formats/codewarrior-maps.md)).

## Step 2: types

Burnout 3 has no debug types. Sources for them:

- **Burnout 2 layouts** of the ancestor classes ([class ancestors](../reference/class-ancestors.md)),
  shown on each class page. Expect added and moved fields.
- **Burnout 2 enums** ([enums](../reference/enums.md)) and RenderWare structs (`types.h`), which
  changed little.
- **Asserts** of the debug builds name members and locals ([asserts](../reference/asserts.md)).
- **Constructors and allocation sizes** in the code give each class's size; **vtable sizes** give the
  number of virtual functions.

## Step 3: function by function

- **Parameter names:** for functions with a Burnout 2 counterpart, the Burnout 2 signature has them
  ([function lineage](../reference/function-lineage.md)).
- **Source layout:** the maps give the source file of every function, in link order, so functions can
  be placed into files as Criterion had them ([source files](../reference/source-file-lineage.md),
  `*.source_files.txt`).
- **Unoptimised build:** `B3O0PCH` has the inlined helpers as separate functions, which helps when
  reading optimised code.
- **VU microcode** (`*.dsm`) is not C/C++; it is kept as data or disassembled into VU assembly
  ([VU programs](../reference/vu-programs.md)).

## Notes

_Findings go here._
