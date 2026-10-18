// baimras.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x001555C0-0x00155634 (116 bytes), lines 96-117
RwImage *RwImageSetFromRaster(RwImage *image, RwRaster *raster)
{
    // param RwImage *image  (in $s0)
    // param RwRaster *raster  (in $s1)
    {   // 0x001555C0-0x00155634
    }
}

// 0x00155640-0x001556B4 (116 bytes), lines 148-168
RwRaster *RwRasterSetFromImage(RwRaster *raster, RwImage *image)
{
    // param RwRaster *raster  (in $s0)
    // param RwImage *image  (in $s1)
    {   // 0x00155640-0x001556B4
    }
}

// 0x001556C0-0x0015576C (172 bytes), lines 197-301
RwImage *RwImageFindRasterFormat(RwImage *ipImage, int nRasterType, int *npWidth, int *npHeight, int *npDepth, int *npFormat)
{
    // param RwImage *ipImage  (in $s4)
    // param int nRasterType  (in $a1)
    // param int *npWidth  (in $s3)
    // param int *npHeight  (in $s2)
    // param int *npDepth  (in $s1)
    // param int *npFormat  (in $s0)
    {   // 0x001556C0-0x0015576C
        RwRaster rRaster;  // $sp+96
    }
}

