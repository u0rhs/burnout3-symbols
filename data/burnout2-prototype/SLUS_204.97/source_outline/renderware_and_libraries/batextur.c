// batextur.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int TextureDefaultMipmapName(char *, char *, unsigned char, int);  // 0x00156E60
RwTexture *TextureDefaultRead(char *, char *);  // 0x00157E40
RwRaster *TextureRasterDefaultBuildMipmaps(RwRaster *, RwImage *);  // 0x00157E90
int RwTextureDestroy(RwTexture *);  // 0x00158610
RwPluginRegistry textureTKList;  // 0x002A2C10
RwPluginRegistry texDictTKList;  // 0x002A2C30
static RwTexDictionary *dummyTexDict;  // 0x00310918
RwModuleInfo textureModule;  // 0x00310920
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x00156E60-0x00156F18 (184 bytes), lines 259-281
static int TextureDefaultMipmapName(char *name, char *maskName, unsigned char mipLevel)
{
    // param char *name  (in $v0)
    // param char *maskName  (in $s0)
    // param unsigned char mipLevel  (in $v0)
    {   // 0x00156E60-0x00156F18
        char mipCharacterString[3];  // $sp+60
    }
}

// 0x00156F20-0x0015701C (252 bytes), lines 286-339
static int PalettizeImage(RwImage **image, int depth)
{
    // param RwImage **image  (in $s0)
    // param int depth  (in $s1)
    {   // 0x00156F20-0x0015701C
        rwPalQuant palQuant;  // $sp+1088
        RwImage *palImage;  // in $s1
        RwRGBA palette[256];  // $sp+64
    }
}

// 0x00157020-0x00157254 (564 bytes), lines 346-444
static int PalettizeMipmaps(RwRGBA *MipPalette, RwImage *sourceImage, RwImage **mipArray, int totalMipLevels, int logpalsize)
{
    // param RwRGBA *MipPalette  (in $s7)
    // param RwImage *sourceImage  ($sp+172)
    // param RwImage **mipArray  (in $s5)
    // param int totalMipLevels  (in $s4)
    // param int logpalsize  (in $fp)
    {   // 0x00157020-0x00157254
        RwImage *palImage;  // in $s1
        RwImage *dcimg;  // in $s0
        unsigned int *pal2;  // in $t0
        unsigned int *pal1;  // in $v0
        rwPalQuant palQuant;  // $sp+176
        int i;  // in $a3
        int mipLevel;  // in $a2
    }
}

// 0x00157260-0x001575C8 (872 bytes), lines 455-565
static RwImage *TextureImageReadAndSize(char *name, char *maskName, int format, int *rasterWidth, int *rasterHeight, int *rasterDepth, int *rasterFlags)
{
    // param char *name  (in $s5)
    // param char *maskName  (in $s4)
    // param int format  (in $s3)
    // param int *rasterWidth  (in $s2)
    // param int *rasterHeight  (in $s1)
    // param int *rasterDepth  (in $s6)
    // param int *rasterFlags  (in $s7)
    {   // 0x00157260-0x001575C8
        int originalDepth;  // in $s0
        RwImage *resampledImage;  // in $s1
        RwError _rwErrorCode;  // $sp+704
        RwError _rwErrorCode;  // $sp+696
        RwError _rwErrorCode;  // $sp+688
        RwImage *image;  // $sp+716
        char *masknameExt;  // in $v0
        char *filenameExt;  // in $v0
        char mipmaskName[256];  // $sp+432
        char mipName[256];  // $sp+176
    }
}

// 0x001575D0-0x00157860 (656 bytes), lines 572-677
static RwTexture *TextureDefaultNormalRead(char *name, char *maskName)
{
    // param char *name  (in $s1)
    // param char *maskName  (in $s0)
    {   // 0x001575D0-0x00157860
        RwError _rwErrorCode;  // $sp+1648
        RwError _rwErrorCode;  // $sp+1640
        int rasterFlags;  // $sp+1676
        int rasterDepth;  // $sp+1672
        int rasterHeight;  // $sp+1668
        int rasterWidth;  // $sp+1664
        char mipmaskName[256];  // $sp+1376
        char mipName[256];  // $sp+1120
        RwRGBA MipPalette[256];  // $sp+96
        RwRaster *raster;  // in $s2
        RwImage *image;  // $sp+1660
        RwTexture *texture;  // in $s3
    }
}

// 0x00157860-0x00157E40 (1504 bytes), lines 682-902
static RwTexture *TextureDefaultMipmapRead(char *name, char *maskName)
{
    // param char *name  (in $s4)
    // param char *maskName  (in $s3)
    {   // 0x00157860-0x00157E40
        RwError _rwErrorCode;  // $sp+1784
        RwError _rwErrorCode;  // $sp+1776
        int totalMipLevels;  // in $s1
        int mipLevel;  // in $s2
        RwError _rwErrorCode;  // $sp+1768
        RwError _rwErrorCode;  // $sp+1760
        int rasterFlags;  // $sp+1804
        int rasterDepth;  // $sp+1800
        int rasterHeight;  // $sp+1796
        int rasterWidth;  // $sp+1792
        char mipmaskName[256];  // $sp+1504
        char mipName[256];  // $sp+1248
        int format;  // in $s5
        RwRGBA MipPalette[256];  // $sp+224
        RwRaster *raster;  // in $s0
        RwImage *mipArray[16];  // $sp+160
        RwTexture *texture;  // in $s1
    }
}

// 0x00157E40-0x00157E88 (72 bytes), lines 916-931
static RwTexture *TextureDefaultRead(char *name, char *maskName)
{
    // param char *name  (in $v0)
    // param char *maskName  (in $v0)
    {   // 0x00157E40-0x00157E88
        RwTexture *texture;  // in $v0
    }
}

// 0x00157E90-0x00158208 (888 bytes), lines 937-1101
static RwRaster *TextureRasterDefaultBuildMipmaps(RwRaster *raster, RwImage *sourceImage)
{
    // param RwRaster *raster  (in $s5)
    // param RwImage *sourceImage  (in $s4)
    {   // 0x00157E90-0x00158208
        RwRGBA MipPalette[256];  // $sp+192
        unsigned int autoMipmap;  // in $s6
        int rasterHeight;  // in $v0
        int rasterWidth;  // in $v0
        RwImage *mipArray[16];  // $sp+128
        int totalMipLevels;  // in $s1
        int mipLevel;  // in $s0
    }
}

// 0x00158210-0x001582D0 (192 bytes), lines 1163-1193
static int StringCompare(char *cpA, char *cpB)
{
    // param char *cpA  (in $v0)
    // param char *cpB  (in $v0)
    {   // 0x00158210-0x001582D0
        char cB;  // in $a2
        char cA;  // in $v1
    }
}

// 0x001582D0-0x001582EC (28 bytes), lines 1324-1326
int RwTextureSetMipmapping(int enable)
{
    // param int enable  (in $v0)
    {   // 0x001582D0-0x001582EC
    }
}

// 0x001582F0-0x00158308 (24 bytes), lines 1348-1349
int RwTextureGetMipmapping()
{
    {   // 0x001582F0-0x00158308
    }
}

// 0x00158310-0x0015832C (28 bytes), lines 1384-1386
int RwTextureSetAutoMipmapping(int enable)
{
    // param int enable  (in $v0)
    {   // 0x00158310-0x0015832C
    }
}

// 0x00158330-0x00158348 (24 bytes), lines 1413-1414
int RwTextureGetAutoMipmapping()
{
    {   // 0x00158330-0x00158348
    }
}

// 0x00158350-0x00158424 (212 bytes), lines 1558-1583
RwTexDictionary *RwTexDictionaryCreate()
{
    {   // 0x00158350-0x00158424
        RwTexDictionary *dict;  // in $s0
    }
}

// 0x00158430-0x001584DC (172 bytes), lines 1609-1637
int RwTexDictionaryDestroy(RwTexDictionary *dict)
{
    // param RwTexDictionary *dict  (in $s2)
    {   // 0x00158430-0x001584DC
    }
}

// 0x001584E0-0x0015855C (124 bytes), lines 1668-1702
RwTexDictionary *RwTexDictionaryForAllTextures(RwTexDictionary *dict, RwTexture *(*fpCallBack)(RwTexture *, void *), void *pData)
{
    // param RwTexDictionary *dict  (in $s4)
    // param RwTexture *(*fpCallBack)(RwTexture *, void *)  (in $s3)
    // param void *pData  (in $s2)
    {   // 0x001584E0-0x0015855C
        RwLLLink *end;  // in $s1
        RwLLLink *next;  // in $s0
        RwLLLink *cur;  // in $v0
    }
}

// 0x00158560-0x0015860C (172 bytes), lines 1803-1845
RwTexture *RwTextureCreate(RwRaster *raster)
{
    // param RwRaster *raster  (in $s1)
    {   // 0x00158560-0x0015860C
        RwTexture *texture;  // in $s0
    }
}

// 0x00158610-0x001586CC (188 bytes), lines 1906-1923
int RwTextureDestroy(RwTexture *texture)
{
    // param RwTexture *texture  (in $s0)
    {   // 0x00158610-0x001586CC
        int result;  // in $v0
    }
}

// 0x001586D0-0x00158768 (152 bytes), lines 2013-2025
RwTexture *RwTextureSetName(RwTexture *texture, char *name)
{
    // param RwTexture *texture  (in $s1)
    // param char *name  (in $s0)
    {   // 0x001586D0-0x00158768
        RwError _rwErrorCode;  // $sp+72
    }
}

// 0x00158770-0x00158808 (152 bytes), lines 2045-2057
RwTexture *RwTextureSetMaskName(RwTexture *texture, char *maskName)
{
    // param RwTexture *texture  (in $s1)
    // param char *maskName  (in $s0)
    {   // 0x00158770-0x00158808
        RwError _rwErrorCode;  // $sp+72
    }
}

// 0x00158810-0x00158860 (80 bytes), lines 2126-2136
RwTexture *RwTexDictionaryAddTexture(RwTexDictionary *dict, RwTexture *texture)
{
    // param RwTexDictionary *dict  (in $v0)
    // param RwTexture *texture  (in $v0)
    {   // 0x00158810-0x00158860
    }
}

// 0x00158860-0x001588C0 (96 bytes), lines 2193-2227
RwTexture *RwTexDictionaryFindNamedTexture(RwTexDictionary *dict, char *name)
{
    // param RwTexDictionary *dict  (in $v0)
    // param char *name  (in $t3)
    {   // 0x00158860-0x001588C0
        RwLLLink *end;  // in $t2
        RwLLLink *cur;  // in $t1
        RwTexture *result;  // in $t0
    }
}

// 0x001588C0-0x001588DC (28 bytes), lines 2265-2268
RwTexDictionary *RwTexDictionarySetCurrent(RwTexDictionary *dict)
{
    // param RwTexDictionary *dict  (in $v0)
    {   // 0x001588C0-0x001588DC
    }
}

// 0x001588E0-0x001588F8 (24 bytes), lines 2288-2289
RwTexDictionary *RwTexDictionaryGetCurrent()
{
    {   // 0x001588E0-0x001588F8
    }
}

// 0x00158900-0x00158944 (68 bytes), lines 2328-2342
int RwTextureGenerateMipmapName(char *name, char *maskName, unsigned char mipLevel, int format)
{
    // param char *name  (in $v0)
    // param char *maskName  (in $v0)
    // param unsigned char mipLevel  (in $v0)
    // param int format  (in $v0)
    {   // 0x00158900-0x00158944
    }
}

// 0x00158950-0x00158B3C (492 bytes), lines 2399-2454
RwTexture *RwTextureRead(char *name, char *maskName)
{
    // param char *name  (in $s4)
    // param char *maskName  (in $s3)
    {   // 0x00158950-0x00158B3C
        RwError _rwErrorCode;  // $sp+120
        RwError _rwErrorCode;  // $sp+112
        RwTexture *result;  // in $v0
    }
}

// 0x00158B40-0x00158B6C (44 bytes), lines 2827-2827
int RwTextureRegisterPlugin(int size, unsigned int pluginID, void *(*constructCB)(void *, int, int), void *(*destructCB)(void *, int, int), void *(*copyCB)(void *, void *, int, int))
{
    // param int size  (in $a0)
    // param unsigned int pluginID  (in $v0)
    // param void *(*constructCB)(void *, int, int)  (in $v1)
    // param void *(*destructCB)(void *, int, int)  (in $v0)
    // param void *(*copyCB)(void *, void *, int, int)  (in $v0)
    {   // 0x00158B40-0x00158B6C
        int plug;  // in $v0
    }
}

// 0x00158B70-0x00158BA4 (52 bytes), lines 3130-3144
int RwTextureRasterGenerateMipmaps(RwRaster *raster, RwImage *image)
{
    // param RwRaster *raster  (in $v0)
    // param RwImage *image  (in $v0)
    {   // 0x00158B70-0x00158BA4
    }
}

// 0x00158BB0-0x00158D50 (416 bytes), lines 3162-3246
void *_rwTextureClose(void *instance)
{
    // param void *instance  (in $s4)
    {   // 0x00158BB0-0x00158D50
        RwLLLink *next;  // in $v1
        RwLLLink *end;  // in $v0
        RwLLLink *cur;  // in $v0
    }
}

// 0x00158D50-0x00158FA0 (592 bytes), lines 3258-3320
void *_rwTextureOpen(void *instance, int offset)
{
    // param void *instance  (in $s4)
    // param int offset  (in $v0)
    {   // 0x00158D50-0x00158FA0
    }
}

