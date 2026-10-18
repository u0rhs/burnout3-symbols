// baraster.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static RwPluginRegistry rasterTKList;  // 0x002A2BF0
RwModuleInfo rasterModule;  // 0x00310910
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x00155770-0x001557B0 (64 bytes), lines 486-498
RwRaster *RwRasterUnlock(RwRaster *raster)
{
    // param RwRaster *raster  (in $s0)
    {   // 0x00155770-0x001557B0
    }
}

// 0x001557B0-0x00155800 (80 bytes), lines 739-755
RwRaster *RwRasterUnlockPalette(RwRaster *raster)
{
    // param RwRaster *raster  (in $s0)
    {   // 0x001557B0-0x00155800
    }
}

// 0x00155800-0x00155870 (112 bytes), lines 776-792
int RwRasterDestroy(RwRaster *raster)
{
    // param RwRaster *raster  (in $s1)
    {   // 0x00155800-0x00155870
    }
}

// 0x00155870-0x0015589C (44 bytes), lines 876-876
int RwRasterRegisterPlugin(int size, unsigned int pluginID, void *(*constructCB)(void *, int, int), void *(*destructCB)(void *, int, int), void *(*copyCB)(void *, void *, int, int))
{
    // param int size  (in $a0)
    // param unsigned int pluginID  (in $v0)
    // param void *(*constructCB)(void *, int, int)  (in $v1)
    // param void *(*destructCB)(void *, int, int)  (in $v0)
    // param void *(*copyCB)(void *, void *, int, int)  (in $v0)
    {   // 0x00155870-0x0015589C
        int plug;  // in $v0
    }
}

// 0x001558A0-0x001558E8 (72 bytes), lines 904-924
unsigned char *RwRasterLockPalette(RwRaster *raster, int lockMode)
{
    // param RwRaster *raster  (in $v0)
    // param int lockMode  (in $v0)
    {   // 0x001558A0-0x001558E8
        unsigned char *palettePtr;  // $sp+28
    }
}

// 0x001558F0-0x0015594C (92 bytes), lines 989-1014
int RwRasterGetNumLevels(RwRaster *raster)
{
    // param RwRaster *raster  (in $v0)
    {   // 0x001558F0-0x0015594C
        int numMipLevels;  // $sp+28
    }
}

// 0x00155950-0x001559B8 (104 bytes), lines 1041-1075
RwRaster *RwRasterShowRaster(RwRaster *raster, void *dev, unsigned int flags)
{
    // param RwRaster *raster  (in $s3)
    // param void *dev  (in $s2)
    // param unsigned int flags  (in $s1)
    {   // 0x00155950-0x001559B8
        int (*RasterShowRasterFunc)(void *, void *, int);  // in $s0
    }
}

// 0x001559C0-0x00155A60 (160 bytes), lines 1109-1143
RwRaster *RwRasterSubRaster(RwRaster *subRaster, RwRaster *raster, RwRect *rect)
{
    // param RwRaster *subRaster  (in $s1)
    // param RwRaster *raster  (in $s0)
    // param RwRect *rect  (in $v0)
    {   // 0x001559C0-0x00155A60
    }
}

// 0x00155A60-0x00155B64 (260 bytes), lines 1189-1231
RwRaster *RwRasterCreate(int width, int height, int depth, int flags)
{
    // param int width  (in $s3)
    // param int height  (in $s2)
    // param int depth  (in $s1)
    // param int flags  (in $s0)
    {   // 0x00155A60-0x00155B64
        int (*RasterCreateFunc)(void *, void *, int);  // in $v0
        RwRaster *raster;  // in $s4
    }
}

// 0x00155B70-0x00155BC0 (80 bytes), lines 1271-1314
unsigned char *RwRasterLock(RwRaster *raster, unsigned char level, int lockMode)
{
    // param RwRaster *raster  (in $v1)
    // param unsigned char level  (in $v0)
    // param int lockMode  (in $v0)
    {   // 0x00155B70-0x00155BC0
        unsigned char *pixelPtr;  // $sp+28
    }
}

// 0x00155BC0-0x00155C34 (116 bytes), lines 1332-1346
void *_rwRasterClose(void *instance)
{
    // param void *instance  (in $s1)
    {   // 0x00155BC0-0x00155C34
    }
}

// 0x00155C40-0x00155D58 (280 bytes), lines 1357-1390
void *_rwRasterOpen(void *instance, int offset)
{
    // param void *instance  (in $s2)
    // param int offset  (in $v0)
    {   // 0x00155C40-0x00155D58
    }
}

