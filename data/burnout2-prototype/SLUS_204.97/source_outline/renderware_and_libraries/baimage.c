// baimage.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
char *ImageAttempRead(char *, void *);  // 0x001547B0
char *ImageDetermineExtender(char *, void *);  // 0x00154980
static RwPluginRegistry imageTKList;  // 0x002A2BD0
RwModuleInfo imageModule;  // 0x00310908
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x00153A00-0x00153C18 (536 bytes), lines 138-204
void *_rwImageOpen(void *instance, int offset)
{
    // param void *instance  (in $s3)
    // param int offset  (in $v0)
    {   // 0x00153A00-0x00153C18
    }
}

// 0x00153C20-0x00153D5C (316 bytes), lines 216-264
void *_rwImageClose(void *instance)
{
    // param void *instance  (in $s2)
    {   // 0x00153C20-0x00153D5C
    }
}

// 0x00153D60-0x00153DFC (156 bytes), lines 411-438
RwImage *RwImageCreate(int width, int height, int depth)
{
    // param int width  (in $s2)
    // param int height  (in $s1)
    // param int depth  (in $s0)
    {   // 0x00153D60-0x00153DFC
        RwImage *image;  // in $s3
    }
}

// 0x00153E00-0x00153E68 (104 bytes), lines 455-473
int RwImageDestroy(RwImage *image)
{
    // param RwImage *image  (in $s0)
    {   // 0x00153E00-0x00153E68
    }
}

// 0x00153E70-0x00153F8C (284 bytes), lines 819-866
RwImage *RwImageAllocatePixels(RwImage *image)
{
    // param RwImage *image  (in $s1)
    {   // 0x00153E70-0x00153F8C
        RwError _rwErrorCode;  // $sp+88
        unsigned int totalSize;  // in $s3
        unsigned int pixelsSize;  // in $s2
        unsigned int imageDepth;  // in $v0
    }
}

// 0x00153F90-0x00153FE0 (80 bytes), lines 888-901
RwImage *RwImageFreePixels(RwImage *image)
{
    // param RwImage *image  (in $s0)
    {   // 0x00153F90-0x00153FE0
    }
}

// 0x00153FE0-0x00154110 (304 bytes), lines 1045-1110
RwImage *RwImageMakeMask(RwImage *image)
{
    // param RwImage *image  (in $v0)
    {   // 0x00153FE0-0x00154110
        int nOpacity;  // in $a2
        RwRGBA *rpCur;  // in $a1
        int j;  // in $v1
        unsigned char *cpSpan;  // in $v0
        int nOpacity;  // in $a3
        RwRGBA *rpPal;  // in $a2
        int palSize;  // in $a1
        int i;  // in $v1
    }
}

// 0x00154110-0x001544AC (924 bytes), lines 1140-1277
RwImage *RwImageApplyMask(RwImage *image, RwImage *mask)
{
    // param RwImage *image  (in $s1)
    // param RwImage *mask  (in $s0)
    {   // 0x00154110-0x001544AC
        RwError _rwErrorCode;  // $sp+152
        RwRGBA *srcRGB;  // in $v1
        unsigned char *srcInd;  // in $t4
        RwRGBA *dstRGB;  // in $t3
        unsigned char *cpDst;  // in $t2
        RwRGBA *rpPal;  // in $t1
        unsigned char *cpSrc;  // in $t0
        int j;  // in $v1
        int i;  // in $a3
        RwError _rwErrorCode;  // $sp+144
    }
}

// 0x001544B0-0x001547A4 (756 bytes), lines 1396-1484
static char *ImagePathForAllFullNames(char *filename, int extraBytes, char *(*callBack)(char *, void *), void *data)
{
    // param char *filename  (in $s0)
    // param int extraBytes  (in $s7)
    // param char *(*callBack)(char *, void *)  (in $fp)
    // param void *data  ($sp+172)
    {   // 0x001544B0-0x001547A4
        int pathElementLength;  // in $v0
        char *nextPathElement;  // in $s2
        char *pathElement;  // in $s1
        char *fullname;  // in $v0
        int pathsize;  // in $s1
    }
}

// 0x001547B0-0x0015481C (108 bytes), lines 1497-1517
static char *ImageAttempRead(char *pathname, void *data)
{
    // param char *pathname  (in $s1)
    // param void *data  (in $v0)
    {   // 0x001547B0-0x0015481C
        _imageReadData *imageData;  // in $s0
    }
}

// 0x00154820-0x0015497C (348 bytes), lines 1550-1616
RwImage *RwImageRead(char *imageName)
{
    // param char *imageName  (in $s3)
    {   // 0x00154820-0x0015497C
        _imageReadData imageData;  // $sp+104
        rwImageFormat *imageFormat;  // in $s1
        char *extender;  // in $s0
        char *testSeparator;  // in $v0
    }
}

// 0x00154980-0x00154A74 (244 bytes), lines 1629-1671
static char *ImageDetermineExtender(char *pathname, void *data)
{
    // param char *pathname  (in $s0)
    // param void *data  (in $v0)
    {   // 0x00154980-0x00154A74
        char *extPos;  // in $s3
        rwImageFormat *imageFormat;  // in $s2
        char **extender;  // in $s1
    }
}

// 0x00154A80-0x00154AB0 (48 bytes), lines 1698-1712
char *RwImageFindFileType(char *imageName)
{
    // param char *imageName  (in $v0)
    {   // 0x00154A80-0x00154AB0
        char *extender;  // $sp+28
    }
}

// 0x00154AB0-0x00154DE8 (824 bytes), lines 1978-2023
RwImage *RwImageReadMaskedImage(char *imageName, char *maskName)
{
    // param char *imageName  (in $v0)
    // param char *maskName  (in $s1)
    {   // 0x00154AB0-0x00154DE8
        RwImage *mask;  // in $s1
        RwImage *image;  // in $s0
    }
}

// 0x00154DF0-0x0015515C (876 bytes), lines 2166-2258
static int ImageConvertDepth(RwImage *ipDestin, RwImage *ipSource)
{
    // param RwImage *ipDestin  (in $s5)
    // param RwImage *ipSource  (in $s4)
    {   // 0x00154DF0-0x0015515C
        RwError _rwErrorCode;  // $sp+136
        RwRGBA *rpDst;  // in $s3
        unsigned char *cpSrc;  // in $s2
        RwRGBA *rpSrcPalette;  // in $v1
        unsigned char *cpDst;  // in $v0
        int height;  // in $s1
        int width;  // in $s0
        int j;  // in $v0
        int i;  // in $s6
        int result;  // in $s6
    }
}

// 0x00155160-0x00155280 (288 bytes), lines 2280-2310
RwImage *RwImageCopy(RwImage *destImage, RwImage *sourceImage)
{
    // param RwImage *destImage  (in $s5)
    // param RwImage *sourceImage  (in $s4)
    {   // 0x00155160-0x00155280
    }
}

// 0x00155280-0x00155474 (500 bytes), lines 2672-2733
RwImage *RwImageGammaCorrect(RwImage *image)
{
    // param RwImage *image  (in $v0)
    {   // 0x00155280-0x00155474
        RwError _rwErrorCode;  // $sp+40
        RwError _rwErrorCode;  // $sp+32
        int y;  // in $t1
        int height;  // in $t0
        int width;  // in $a3
        unsigned char *curLine;  // in $a2
        RwError _rwErrorCode;  // $sp+24
        unsigned int palSize;  // in $v0
        RwRGBA *pal;  // in $v0
    }
}

// 0x00155480-0x001555B4 (308 bytes), lines 2776-2811
int RwImageSetGamma(float gammaValue)
{
    // param float gammaValue  (optimised away)
    {   // 0x00155480-0x001555B4
        int quantize;  // in $v1
        float scaled;  // $sp+80
        float nT;  // optimised away
        int i;  // in $s0
        float nGammaInv;  // optimised away
    }
}

