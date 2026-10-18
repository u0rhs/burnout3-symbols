<sub>[Home](../README.md)</sub>

# Glossary

## Criterion's naming

**Class and file prefixes**

| Prefix | Meaning |
|---|---|
| `CB3…` / `B3….cpp` | Burnout 3 game code |
| `CGt…` / `Gt….cpp` | Criterion's shared game toolkit (file system, sound, 2D, maths, network). Burnout 2 has `CGT…` for the same role |
| `C…` (B2) | Burnout 2 game classes; many reappear in B3 as `CB3…` |
| `Rw…`, `Rp…`, `Rt…`, `_rw…` | RenderWare: core, plugins, toolkits, internals |
| `Rwa…` | RenderWare Audio |
| `…PS2` | The PS2 implementation of a platform-neutral class (`B3InputManager` / `B3InputManagerPS2`) |
| `…Page` / `…State` | A menu screen: what it draws / its logic |
| `…Logic` | The rules of one event type (`B3OfflineRoadRageLogic`) |
| `…Attribs` | Tuning data (`B3RaceCarPhysicsAttribs`) |
| `…Struct` | A data layout loaded from files (`B3TrafficLaneStruct`) |
| `E…` | An enum type (`ETrackID`, `EGlassState`) |
| `S…` | A plain struct (`SRCBBox`) |

**Variable prefixes** (Hungarian notation, counted from the Burnout 2 types)

A variable name is a scope letter, then type letters, then the name: `marBodyworkDamage` is a
**m**ember **a**rray of **r**eals.

| Scope | | Type | |
|---|---|---|---|
| `m` | member | `n` | int (count, index) |
| `l` | local | `r` | real (float) |
| `k` | constant | `p` | pointer |
| `g` | global | `b` | bool (stored as int) |
| | | `e` | enum |
| | | `a` | array (combines: `ap`, `ar`, `ab`) |
| | | `u` / `un` | unsigned (`mu…8`, `mu…16`: width in the name) / unsigned int |
| | | `x` | bit flags (`mxFlags`, `mxActivePoints`) |
| | | `v` | vector (`RwV3d`) |
| | | `ac` | char array (string) |
| | | `c` | char |

Most common in Burnout 2's classes: `mr` (668), `m` (666), `mn` (477), `mp` (408), `mb` (246).

## PS2 terms

| Term | Meaning |
|---|---|
| EE | Emotion Engine: the main MIPS R5900 CPU. Runs the game code |
| IOP | I/O processor (MIPS R3000). Runs the `.IRX` modules: disc, sound, pads, memory card, network |
| IRX | An IOP module |
| VU0 / VU1 | Vector units. VU1 transforms and lights geometry for the GS; VU0 helps the EE (B3 uses it for instancing and intersection tests) |
| `.dsm` / microcode | VU programs (`vehicleRenderer.dsm`, `SkyDome.dsm` …) |
| GS | Graphics Synthesizer: draws the triangles VU1 sends it |
| GIF / VIF / DMA | The paths data takes to the GS, into the VUs, and around memory |
| SPU2 | Sound processor |
| `u_long128` | 128-bit integer; the EE's registers and DMA packets are 128 bits wide |
| `SLUS-xxxxx` / `SLES-xxxxx` | NTSC-U / PAL disc serials |
| DNAS | Sony's network authentication for online games |

## RenderWare terms

| Term | Meaning |
|---|---|
| Atomic | A drawable piece of geometry attached to a frame |
| Clump | A group of atomics: a car, say |
| Frame | A transform in a hierarchy |
| Raster / Texture | Image data / an image with filtering settings |
| TXD | Texture dictionary file |
| DFF | Model (clump) file |
| Pipeline / node | RenderWare's render pipelines; the PS2 nodes (`nodePS2*`) feed the VU1 programs |
| Plugin | An extension that adds data to RenderWare objects |
| `Im3D` / `Im2D` | Immediate-mode 3D / 2D drawing |

## Builds and tools

| Term | Meaning |
|---|---|
| DNAT_200 | The B3 prototype executable and its map |
| B3DEBUG / B3INTERN / B3O0PCH | B3 debug, internal and unoptimised builds (maps only) |
| MW / MWCC | Metrowerks CodeWarrior, the compiler (2.4.1.01) |
| DWARF 1 | The old debug format of the B2 prototype |
| Static recompilation | Translating a binary's machine code to C/C++ ahead of time (PS2Recomp, burnout3-pc, Takedawn) |
| Matching decompilation | Source that compiles back to byte-identical machine code with the original compiler |
