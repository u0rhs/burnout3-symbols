<sub>[Home](../README.md)</sub>

# Related resources

Outside projects and resources that use or complement this data, and how each relates to it.

## Names and research

| Resource | What | Relevance |
|---|---|---|
| [Nahelam's PS2-Game-Mods](https://github.com/Nahelam/PS2-Game-Mods/tree/main/Burnout%203%20Takedown) and [B3Mod](https://github.com/Nahelam/B3Mod) | The most extensive public reverse engineering of the retail game: a development menu, debug views, the Car Viewer, an ELF code cave, Burnout Online revival, a mod menu and dozens of patches for every region | Documented on [Nahelam's mods](reference/nahelam-mods.md); his PAL names give the [retail function names](reference/retail-function-names.md) |
| [Nahelam's research lists](https://github.com/Nahelam/PS2-Game-Mods/tree/main/Burnout%203%20Takedown/Research) | Function names for the PAL retail release (`SLES_525.85.txt`) and the prototype (`DNAT_200.45.txt`), made from the same prototype map plus Burnout Revenge prototype symbols; also PCSX2 patches (e.g. 60 fps crashes) | A cross-check for names carried to retail. The author notes there may be mistakes |
| [Burnout MOD wiki (Japanese)](https://wikiwiki.jp/burnout/B3/MOD) | Mod tools and texture extraction for the PS2 version | Asset tooling for the PS2 data |
| [AeroWidescreen/PCSX2-Cheats](https://github.com/AeroWidescreen/PCSX2-Cheats/tree/main/Burnout%203%20Takedown/SLUS-21050) | PCSX2 patches for SLUS-21050: a full 16:9 fix (Aero_) and gameplay button mapping (Ookami & Aero_), MIT | Locates the widescreen flag, field of view, every HUD and menu layout value, the button mapping code and free space in the retail image. Included unchanged in `data/burnout3-retail/third-party/`; described in the [retail memory map](reference/retail-memory-map.md) |
| [GameHacking.org](https://gamehacking.org) cheat codes ([copy on Scribd](https://www.scribd.com/document/876925846/Burnout-3-Takedown-NTSC-U-SLUS-21050-pnach)) | About 360 cheat codes for SLUS-21050 by Codejunkies, Code Master and MadCatz, as a PCSX2 `.pnach` | Locates the save profile (medals, trophies, takedowns, headlines, garage, unlocks), race state, boost, crash tuning, the simulation time step, pad input, vehicle IDs and several code locations. Rewritten as the [retail memory map](reference/retail-memory-map.md) (the codes themselves are not reproduced) |

## PS2 ports and tooling

| Resource | What | Relevance |
|---|---|---|
| [burnout3-pc](https://github.com/danielgomesvieira2000/burnout3-pc) | A static recompilation of the NTSC-U retail release (SLUS-21050) to C++, with a Vulkan renderer and a PC settings menu. Functions are tracked as lifted, reconstructed or verified (differential-tested) | The same executable this data is meant to name. Its `games/burnout3/config/functions.csv` lists 9,277 functions and `games/burnout3/config/names.csv` takes names as `address,name,source`, with only about 127 named: a natural destination for names carried to retail.
[`prototype-names.csv`](../data/burnout3-retail/prototype-names.csv) has 5,054 of them, 5,015 on its own
function starts. Its `games/burnout3/docs/FINDINGS.md` analyses the stripped retail binary |
| [PS2Recomp](https://github.com/ran-j/PS2Recomp) | A general PS2 static recompiler and runtime (MIPS R5900 → C++), with an IOP emulator (GPL) | Tooling for native PS2 ports; takes per-game configuration and symbol names |
| [splat](https://github.com/ethteck/splat) | Splits a binary for a matching decompilation | Reads a `symbol_addrs.txt`, which this data could produce |
| [decomp.me](https://decomp.me) | Online matching-decompilation tool | Check its compiler list for MWCC PS2 2.4.1.01, the compiler of all three executables |

## Xbox ports

The original Xbox release of Burnout 3 (NTSC-U, `default.xbe`, built 29 July 2004 with XDK 5849) is
the same Criterion codebase compiled with Microsoft's compiler for x86. Its code doesn't match the PS2
build byte for byte, but its behaviour, classes and data do, and the projects below document it using
the PS2 names from Nahelam's list. Their findings can be located in the PS2 code through those names.

| Resource | What | Relevance |
|---|---|---|
| [xboxrecomp](https://github.com/sp00nznet/xboxrecomp) | Static recompiler and Xbox runtime (kernel, NV2A GPU, MCPX audio, USB) shared by several Xbox titles | The toolkit the Xbox ports below are built on |
| [sp00nznet/burnout3](https://github.com/sp00nznet/burnout3) | The first static recompilation of the Xbox version: boots through the real entry point and runs every game mode on a software NV2A | `docs/boot.md` records what booting the game required, fix by fix; `config/seed_functions.json` lists functions found by indirect calls |
| [Takedawn](https://github.com/xenophobentx/takedawn) | A static recompilation of the Xbox version for macOS, Windows, Linux, Steam Deck and Android, with GPU renderers and many options (widescreen, ultrawide, 60 fps crash cameras, split-screen 60 fps and music, custom soundtracks) | Its research is the most detailed behavioural documentation of Burnout 3 so far, with PS2 names throughout: `docs/research/` (XBE analysis, RenderWare notes, asset formats: `bgv`, `global-txd`, `prgdata`, `static-dat`, `streamed-dat`), and `docs/crash60.md`, `split-screen.md`, `race-clock.md`, `draw-distance.md`, `effects.md`, `widescreen-hud.md`, `ultrawide.md`, `custom-music.md`. `config/patches.json` explains each patched decision point (frame-rate choice, LOD distances, bloom and blur, music in split screen) with the PS2 function names. MIT licence |
| [burnout3-sw](https://github.com/antoxa2584x/burnout3-sw) | The Xbox recompilation for Nintendo Switch and Linux, with Vulkan and OpenGL renderers | Notes on the game's reflection cube, its off-screen bloom/blur composite, and running races in real time at any frame rate |

### Topics these projects document, by system

| System here | Documented there |
|---|---|
| [Game flow](systems/game-flow.md) | The simulation stepper and its two modes (fixed step vs. wall clock), and when the race switches between them (Takedawn `race-clock.md`) |
| [Cameras and replays](systems/cameras-replay.md), [crashes](systems/crash-scoring.md) | Why crash and takedown cameras run at 30 fps, and where `CB3Game::UpdatePreSimulation` decides it (Takedawn `crash60.md`; Nahelam's PS2 patch at SLUS-21050 `0x1320D8`) |
| [Audio](systems/audio.md) | EA Trax muted in split screen, and where the player count is checked (Takedawn `split-screen.md`); custom soundtrack handling on Xbox (`custom-music.md`) |
| [Rendering](systems/rendering.md) | Bloom and the two motion blurs (`CB3DirectionalBlur::Render`) and their on/off conditions (Takedawn `effects.md`); vehicle and scenery LOD distances, draw distance in the track files (`draw-distance.md`); car reflections (burnout3-sw) |
| [HUD](systems/hud.md) | The 640×480 HUD layout and widescreen correction (Takedawn `widescreen-hud.md`, after ThirteenAG's PS2 widescreen fix) |
| [Tracks and streaming](systems/tracks-streaming.md) | `static.dat`, `streamed.dat`, `bgv`, global TXD and `prgdata` formats (Takedawn `docs/research/formats/`, Xbox versions) |

## Widescreen and patches

| Resource | What | Relevance |
|---|---|---|
| [ThirteenAG WidescreenFixesPack](https://github.com/ThirteenAG/WidescreenFixesPack) | Includes a PCSX2 widescreen fix for Burnout 3 (`Burnout3.PCSX2F.WidescreenFix`) | The PS2 patch sites and the arithmetic for the HUD and field of view |

## Preservation

| Resource | What | Relevance |
|---|---|---|
| [Hidden Palace](https://hiddenpalace.org) | The main prototype archive | The source of both prototypes: [Burnout 3: Takedown (Jun 8, 2004 prototype)](https://hiddenpalace.org/Burnout_3:_Takedown_(Jun_8,_2004_prototype)) and [Burnout 2: Point of Impact (Jul 29, 2002 prototype)](https://hiddenpalace.org/Burnout_2:_Point_of_Impact_(Jul_29,_2002_prototype)). See [provenance](builds.md#provenance) |
| [The Cutting Room Floor](https://tcrf.net) | Unused and cut content | See [unlinked code](reference/unlinked-code.md) and the [demo-disc code](systems/demo-builds.md) |
