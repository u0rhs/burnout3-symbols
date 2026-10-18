// skyconv.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static int swapPalIndexBits[4];  // 0x002C3ED0
RwVideoMode *skyVideoMode;  // 0x003109D8

// ---- functions ----

// 0x0016B120-0x0016B21C (252 bytes), lines 144-172
int _rwSkyRGBToPixel(void *pPixel, void *pCol, int nFormat)
{
    // param void *pPixel  (in $v0)
    // param void *pCol  (in $v0)
    // param int nFormat  (in $v0)
    {   // 0x0016B120-0x0016B21C
        RwRGBA *rpCol;  // in $v0
    }
}

// 0x0016B220-0x0016B308 (232 bytes), lines 194-221
int _rwSkyPixelToRGB(void *pRGB, void *pPixel, int nFormat)
{
    // param void *pRGB  (in $v0)
    // param void *pPixel  (in $v0)
    // param int nFormat  (in $v0)
    {   // 0x0016B220-0x0016B308
        unsigned int nPixel;  // in $a3
        RwRGBA *rpRGB;  // in $v0
    }
}

// 0x0016B310-0x0016B4DC (460 bytes), lines 277-383
int _rwSkyImageFindRasterFormat(void *pRaster, void *pImage, int flags)
{
    // param void *pRaster  (in $v0)
    // param void *pImage  (in $v0)
    // param int flags  (in $v0)
    {   // 0x0016B310-0x0016B4DC
        unsigned int mipmapFlag;  // in $s2
        RwImage *image;  // in $s1
        RwRaster *raster;  // in $s0
    }
}

// 0x0016B4E0-0x0016C6CC (4588 bytes), lines 399-864
int _rwSkyImageGetRaster(void *pImage, void *pRaster)
{
    // param void *pImage  (in $v0)
    // param void *pRaster  (in $v0)
    {   // 0x0016B4E0-0x0016C6CC
        unsigned int pixel;  // in $a0
        unsigned int *rasLinePixels;  // in $t0
        unsigned int pixel;  // in $a1
        unsigned char *rasLinePixels;  // in $t0
        unsigned short pixel;  // in $v0
        unsigned short *rasLinePixels;  // in $t0
        unsigned int pixel;  // in $v0
        unsigned char *rasLinePixels;  // in $a1
        unsigned int *rasPal;  // in $a0
        unsigned short pixel;  // in $v0
        unsigned char *rasLinePixels;  // in $a1
        unsigned short *rasPal;  // in $a0
        unsigned int pixel;  // in $a2
        unsigned char *rasLinePixels;  // in $a0
        unsigned int *rasPal;  // in $v0
        unsigned short pixel;  // in $a2
        unsigned char *rasLinePixels;  // in $a0
        unsigned short *rasPal;  // in $v0
        RwRGBA *imageLinePixels;  // in $v1
        unsigned int pixel;  // in $a0
        unsigned int *rasPal;  // in $t6
        unsigned short *rasPal;  // in $v1
        unsigned char *imageLinePixels;  // in $a0
        unsigned char *rasLinePixels;  // in $v1
        unsigned int pixel;  // in $t3
        unsigned int *rasPal;  // in $v1
        unsigned short *rasPal;  // in $t0
        unsigned char *imageLinePixels;  // in $a1
        unsigned char *rasLinePixels;  // in $v1
        unsigned int pixel;  // in $t3
        unsigned int *rasPal;  // in $v1
        unsigned short *rasPal;  // in $t1
        int alreadyPaletteLocked;  // $sp+208
        int alreadyPixelLocked;  // $sp+192
        RwRGBA *imagePal;  // in $t5
        unsigned char *imagePixels;  // in $s3
        unsigned char *rasPixels;  // in $s2
        int y;  // in $a0
        int x;  // in $t0
        RwImage *image;  // in $s1
        RwRaster *raster;  // in $s0
    }
}

// 0x0016C6D0-0x0016D2C0 (3056 bytes), lines 878-946
static void copyRGBAPalette(RwRaster *raster, RwRGBA *palette)
{
    // param RwRaster *raster  (in $v0)
    // param RwRGBA *palette  (in $v0)
    {   // 0x0016C6D0-0x0016D2C0
        RwRGBA *color;  // in $t4
        unsigned int *rasPal;  // in $v0
        RwRGBA *color;  // in $t5
        unsigned short *rasPal;  // in $t7
        RwRGBA *color;  // in $v0
        unsigned int *rasPal;  // in $v0
        RwRGBA *color;  // in $v0
        unsigned short *rasPal;  // in $v1
        int i;  // in $v0
    }
}

// 0x0016D2C0-0x0016D398 (216 bytes), lines 962-1001
static int SkyRasterPalQuantImage(RwRaster *raster, RwImage *image)
{
    // param RwRaster *raster  (in $s1)
    // param RwImage *image  (in $s0)
    {   // 0x0016D2C0-0x0016D398
        RwRGBA palette[256];  // $sp+96
        rwPalQuant palQuant;  // $sp+80
        int result;  // in $s3
        int palSize;  // in $s2
        unsigned char *rasPixels;  // in $s0
    }
}

// 0x0016D3A0-0x0016D608 (616 bytes), lines 1005-1127
static int SkyRasterSetImageNormalPalettised(RwRaster *raster, RwImage *image)
{
    // param RwRaster *raster  (in $s1)
    // param RwImage *image  (in $s0)
    {   // 0x0016D3A0-0x0016D608
        unsigned char *imageLinePixels;  // in $a1
        unsigned char *rasLinePixels;  // in $a0
        int y;  // in $v1
        int x;  // in $v0
        int result;  // in $s4
        RwRGBA *imagePal;  // in $v0
        unsigned char *imagePixels;  // in $s3
        unsigned char *rasPixels;  // in $s2
    }
}

// 0x0016D610-0x0016DA80 (1136 bytes), lines 1142-1285
static int SkyRasterSetImageNormal(RwRaster *raster, RwImage *image)
{
    // param RwRaster *raster  (in $s3)
    // param RwImage *image  (in $s2)
    {   // 0x0016D610-0x0016DA80
        unsigned int *npOut;  // in $a3
        unsigned int pixel;  // in $t2
        unsigned char *npOut;  // in $t5
        unsigned short *npOut;  // in $a3
        RwRGBA *rpIn;  // in $a2
        RwRGBA *rpIn;  // in $a2
        unsigned int *npOut;  // in $v0
        unsigned int pixel;  // in $a0
        RwRGBA *rpIn;  // in $v1
        unsigned char *npOut;  // in $a3
        RwRGBA *rpIn;  // in $a0
        unsigned short *npOut;  // in $v1
        RwRGBA *rpPal;  // in $s5
        unsigned char *imagePixels;  // in $s1
        unsigned char *rasPixels;  // in $s0
        int x;  // in $v0
        int y;  // in $s4
    }
}

// 0x0016DA80-0x0016DBBC (316 bytes), lines 1299-1373
int _rwSkyRasterSetImage(void *pRaster, void *pImage)
{
    // param void *pRaster  (in $v0)
    // param void *pImage  (in $s3)
    {   // 0x0016DA80-0x0016DBBC
        int alreadyPaletteLocked;  // in $s2
        int alreadyPixelLocked;  // in $s1
        int success;  // in $s3
        RwRaster *raster;  // in $s0
    }
}

