<sub>[Home](../README.md)</sub>

# Renderer overview

The renderer is central to every avenue: a remaster replaces it, a decompilation has to match it, and a
remake has to reproduce how it looks. This page gathers what the names tell us about it. The full list
of renderer source files and classes is on the [rendering system page](systems/rendering.md).

## How drawing works on the PS2 (in general)

1. Game code on the EE decides what to draw.
2. RenderWare's PS2 pipelines, or Criterion's own code, build DMA packets with geometry and settings.
3. **VU1 microcode** transforms, lights and clips the vertices, and sends triangles to the GS.
4. The GS draws them into video memory. Full-screen effects (bloom, blur) are extra passes the GS does
   from video memory.

So most of a PS2 game's "shaders" are VU1 programs. These are the parts with no direct PC equivalent;
a port has to reimplement or emulate them.

## Burnout 3's VU programs (from DNAT_200.MAP)

Full list with entry labels: [vu_microcode.txt](../data/burnout3-prototype/maps/vu_microcode.txt).

| Program | Probably draws | CPU side (source file) |
|---|---|---|
| `G3_Gen_ADC.dsm` | World geometry, generic | `B3TrackRendererRuntimePS2.cpp`, `B3TrackMaterialPS2.cpp` |
| `G3_BFC_ADC.dsm` | World geometry with back-face culling | the same |
| `G3_Gen_ADC_Specular.dsm`, `G3_BFC_ADC_Specular.dsm` | … with specular highlights | the same |
| `G3_Gen_ADC_Glass.dsm`, `G3_BFC_ADC_Glass.dsm` | Glass | the same |
| `G3_Gen_ADCReflect.dsm` | Reflective surfaces | the same |
| `G3_Gen_ADCWater.dsm` | Water | the same |
| `G3_Gen_Line.dsm` | Lines | |
| `G3_Instance.dsm` | Instanced objects | `B3PropManagerPS2.cpp`? |
| `B3InstanceVU0.dsm` | VU0: instancing helper (`gfB3InstanceGenerateWorldSpaceBoundingBox`) | |
| `vehicleRenderer.dsm` | Cars | `B3VehicleRendererRuntimePS2.cpp` |
| `vehicleRendererVU0.dsm` | VU0: car rendering helper | the same |
| `SkyDome.dsm` | Sky | `B3SkyDomeRendererPS2.cpp` |
| `particles.dsm` | Particles | `B3ParticleRendererPS2.cpp` |
| `Spark.dsm` | Sparks | `B3SparkRendererPS2.cpp` |
| `debris.dsm` | Debris | `B3DebrisRendererPS2.cpp` |
| `Popcorn.dsm` | Unknown ("popcorn": small bits thrown off in crashes?) | `B3PopcornRendererPS2.cpp` |
| `Corona.dsm` | Light coronas and flares | `B3CoronaRendererPS2.cpp` |
| `B3TrailRenderer.dsm` | Trails (boost, skids?) | `B3TrailRenderPS2.cpp` |
| `B3Im3d.dsm` | Immediate-mode 3D | `B3Im3DPS2.cpp` |
| `GtIntsecVU0.dsm` | VU0: intersection tests for collision, not drawing | `GtIntersectionPS2.cpp` |
| RenderWare's `baim2d*`, `banfim2d*` | 2D drawing (menus, HUD) | `Gt2dRendererPS2.cpp` |

"Probably draws" is read from the names. `G3` is likely the name of Criterion's generic pipeline
family; what `ADC` stands for is unknown (it might refer to the GS's ADC flag, which controls whether a
vertex starts a new triangle).

**Full-screen and other effects** (CPU side): `B3BloomPS2`, `B3RadialBlurPS2`, `B3DirectionalBlurPS2`,
`B3FogPS2`, `B3Shadows` / `B3ShadowRendererPS2`, `B3ScrapeRenderPS2`, `B3SunRendererPS2`,
`B3VehicleReflectivityData`, and the texture cache (`GtTextureCachePS2`).

## Burnout 2 for comparison

Burnout 2's renderer folders in its outlines: `gamesource/Render/PS2PrelitWorld2`,
`PS2InstancedPrelit2`, `PS2InstancedLit2`, `PS2CarRenderer`. They are the ancestors of the `G3_*` and
`vehicleRenderer` programs, with types and parameters. See the
[Burnout 2 outlines](../data/burnout2-prototype/SLUS_204.97/source_outline/gamesource/Render).

## What each avenue needs from this

- **Remaster:** a new renderer that takes over at step 2: intercept what the game asks RenderWare to
  draw (meshes, materials, lights) and draw it with modern techniques. The table above is the list of
  everything to cover.
- **Decompilation:** the C/C++ side compiles normally; the `.dsm` microcode stays as binary or is
  disassembled into VU assembly.
- **Remake:** the list of visual features to reproduce: specular, glass, water, reflections, coronas,
  sparks, debris, trails, bloom, two blurs, fog, shadows.

## Notes

_Findings go here._
