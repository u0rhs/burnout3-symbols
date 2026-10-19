<sub>[Home](../../README.md) › [Uses](README.md)</sub>

# Using this data for a decompilation

A decompilation produces readable C++ source for Burnout 3. There are two kinds:

| | Functional | Matching |
|---|---|---|
| Proof it's right | Tests, e.g. differential testing against the original | The source compiles to byte-identical code |
| Compiler | Any | **Metrowerks CodeWarrior for PS2 3.0.1 build 119** code generation for retail, `-O4 -Cpp_exceptions off` |
| Typical tooling | A static recompilation whose functions are replaced one by one | splat, m2c, objdiff, decomp.me |
| Effort | Lower | Much higher; the result can be trusted completely |

**Which compiler.** The `MW MIPS C Compiler (2.4.1.01)` string in every executable's `.comment` is the
linker's fixed tag (every CodeWarrior PS2 linker from 2000 to 2006 writes it), not the compiler version.
Code generation identifies it ([builds](../builds.md)):

- **Retail:** of 21 CodeWarrior PS2 builds tried, only **3.0.1 build 119** (14 September 2004) reproduces
  retail functions byte for byte (e.g. its delay-slot `nop`s). Retail is dated 29 July, so Criterion used a
  build with the same code generation; build 119 is the closest one available.
- **The June 2004 prototype:** 3.0 build 38 to 3.0.1 build 103 reproduce its functions; build 103
  (28 May 2004) is the last before its link date.
- **Flags:** `-O4 -Cpp_exceptions off`. With C++ exceptions on, the compiler doesn't emit the tail jumps
  (a `j` to the next function instead of `jal` and return) that both executables have; turning exceptions
  off reproduces them. `-str readonly` makes no difference to the functions tested.

A whole retail build made this way (splat, build 119, these flags) reproduces the retail executable's SHA-1.

## Step 1: names for the retail executable

The retail executable (`SLUS_210.50`) has no symbols. The prototype maps name about 8,300 functions
of a build seven weeks older. **This has been done for 5,054 of them**
([prototype names](../reference/retail-prototype-names.md)), 3,008 proven against the code. The methods,
for the rest and for other builds:

1. **Masked byte signatures.** Compare functions with call targets, `lui`/`addiu` address pairs and
   `$gp` offsets masked out. With the same compiler, unchanged functions match exactly. The
   libraries (RenderWare, Sony, MSL) match best. **Trap:** with call targets masked, every short wrapper
   (a few instructions and a `jal`) looks alike. Pairing retail functions with *wrong* prototype functions of
   the same size passes an exact masked comparison 61 times in 4,885 (none of them unique). Accept an exact match only if the code
   is unique in both executables, or the called functions' names agree.
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
6. **Burnout 2.** RenderWare and Criterion's toolkit carried over with few changes
   ([function lineage](../reference/function-lineage.md)): byte matching Burnout 2 against Burnout 3 retail
   pairs library functions reliably (516 of 519 agree with the prototype names), but not game code (7 of
   1,705 Burnout 2 class methods pair). Use Burnout 2 for names and structure, not for game-code matching.
7. **The other three maps.** They name functions DNAT_200 doesn't have: statics, and inlines in the
   `-O0` build ([build comparison](../reference/build-comparison.md)).

**Retail names already available:** [5,054 prototype names](../reference/retail-prototype-names.md)
(with a proof level each) and [Nahelam's 1,146 PAL names](../reference/retail-function-names.md), checked
against the code. They are anchors for everything above: functions between two named ones can be matched
by order and size against the prototype. The names carry the **June 2004 parameter lists**; some retail
functions take other parameters.

Each name should record how it was found and how certain it is. Function sizes across the four
builds ([data/b3-functions-by-build.csv](../reference/data/b3-functions-by-build.csv)) are a quick
check: the optimised builds' sizes should be close to retail's.

**The map is older than the prototype executable.** DNAT_200.MAP was linked six days before
`DNAT_200.45`; game-code addresses drift by up to −0xCE40 ([formats](../formats/codewarrior-maps.md)). The
shift is constant within blocks of functions, so the map is aligned block by block before its names are
used on the executable. `prototype-names.csv` gives both addresses (`prototype_map_address`,
`prototype_elf_address`).

## Step 2: types

Burnout 3 has no debug types. Sources for them:

- **Burnout 2 layouts** of the ancestor classes ([class ancestors](../reference/class-ancestors.md)),
  shown on each class page. Expect added and moved fields; some classes were rebuilt entirely. The 2D
  classes are an example: `C2dObject` is 160 bytes in Burnout 2, while Burnout 3's `CGt2dObject` is 64
  bytes with position, size and colour at 0x0–0x1F and the render callback at 0x3C; `C2dScene` keeps its
  layers at 0x74/0x78, `CGt2dScene` at 0x2C/0x30 (worked out from the retail code; see the
  [`CGt2dObject`](../classes/CGt2dObject.md) and [`CGt2dScene`](../classes/CGt2dScene.md) Notes).
- **Burnout Revenge (July 2005 prototype)** has GCC debug information with real member names, offsets and
  methods for 2,717 types, many of them Burnout 3 classes renamed `CB4*` and Criterion's `CGt*` engine classes
  ([Revenge classes](../reference/revenge-class-lineage.md): 444 of the 890; each class page shows the layout). Some layouts are identical to what the
  Burnout 3 retail code uses (`CGt2dScene`, `CGt2dObject`), others changed (Burnout 3's `CGt2dFont` has
  one more word): check each member against Burnout 3 code before using its name.
- **Burnout 2 enums** ([enums](../reference/enums.md)) and RenderWare structs (`types.h`), which
  changed little.
- **Asserts** of the debug builds name members and locals ([asserts](../reference/asserts.md)).
- **Constructors and allocation sizes** in the code give each class's size; **vtable sizes** give the
  number of virtual functions.

## Step 3: function by function

- **Parameter names:** for functions with a Burnout 2 counterpart, the Burnout 2 signature has them
  ([function lineage](../reference/function-lineage.md)); so does the Burnout Revenge one, for 2,805 functions
  ([Revenge function lineage](../reference/revenge-function-lineage.md)). Both are on the class pages.
- **Source layout:** the maps give the source file of every function, in link order, so functions can
  be placed into files as Criterion had them ([source files](../reference/source-file-lineage.md),
  `*.source_files.txt`). **The files stay whole in retail:** of 361 game and engine `.cpp` files with
  retail names, 356 occupy one unbroken address range. Split in two: `B3VehicleRendererRuntime`,
  `B3VehicleDeform`, `B3CameraEditor`, `B3BoundingBox`, `B3BehaviourTrackSide`. So a decompilation unit
  can be one original source file.
- **Folders:** no Burnout 3 build keeps its source paths. Burnout 2's are `gamesource\<Area>\` and
  `GameShared\GameClasses\<Area>\`; Burnout Revenge's have the same shape (`GameSource/Hud/`,
  `GameShared/GameClasses/Graphical/2d/`), which suggests Burnout 3's: 300 Burnout 3 files have a Revenge file
  of the same name ([Revenge source files](../reference/revenge-source-file-lineage.md)).
- **Unoptimised build:** `B3O0PCH` has the inlined helpers as separate functions, which helps when
  reading optimised code.
- **VU microcode** (`*.dsm`) is not C/C++; it is kept as data or disassembled into VU assembly
  ([VU programs](../reference/vu-programs.md)).

## Notes

_Findings go here._
