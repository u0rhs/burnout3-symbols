// texcache.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void _skyTexCacheNullUploadRaster(RwRaster *, int);  // 0x001718C0
void _skyTexCacheUploadRaster(RwRaster *, int);  // 0x00172120
static _SkyTexCache skyTexCache;  // 0x002A3480
unsigned int skyGNumTexMemBlocks;  // 0x003103DC
u_long128 *_rwDMAAsyncPktPtr;  // 0x003109B8
u_long128 *_rwDMAPktPtr;  // 0x003109BC
long skyTex1_1;  // 0x00310A28
int skyFrameBit;  // 0x00310A40
int skyRasterExt;  // 0x00310A74
static int skyTexCacheLastWasSpec;  // 0x00310AE8
unsigned int ourGlobals[4096];  // 0x004486D0
rwDMA_flipDataTag _rwDMAFlipData;  // 0x0044CED0
TexCacheState state;  // 0x0044DCC0

// ---- functions ----

// 0x00170DE0-0x00170F74 (404 bytes), lines 188-276
u_long128 *skyFillInPktForUpLoadAlignedContiguousRectangle(u_long128 *pkt, unsigned char *src, unsigned long bytesInRectangle, unsigned char cachedPacket)
{
    // param u_long128 *pkt  (in $s0)
    // param unsigned char *src  (in $v0)
    // param unsigned long bytesInRectangle  (in $v0)
    // param unsigned char cachedPacket  (in $v0)
    {   // 0x00170DE0-0x00170F74
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $t4
        u_long128 ___ltmp;  // in $t4
        unsigned int dmaID;  // in $t8
        unsigned int eop;  // in $t4
        unsigned int nloop;  // in $t6
        u_long128 ___ltmp;  // in $t2
        u_long128 *ptr;  // in $t1
        int l;  // in $t0
        int k;  // in $v0
        int i;  // in $a2
        unsigned long tmp;  // in $v0
    }
}

// 0x00170F80-0x001712C8 (840 bytes), lines 320-423
void skyPrepareUploadRaster(RwRaster *raster)
{
    // param RwRaster *raster  (in $s0)
    {   // 0x00170F80-0x001712C8
        unsigned int palHeight;  // in $a2
        unsigned int palWidth;  // in $a1
        int palBPP;  // in $a0
        unsigned int mipStride;  // $sp+192
        unsigned int mipHeight;  // in $fp
        unsigned int mipWidth;  // in $a2
        unsigned char *srcAddress;  // in $v0
        _SkyRasterExt *rasExt;  // in $s2
        int contiguous;  // $sp+176
        unsigned int bitsPerPixel;  // $sp+160
        int level;  // in $s1
        unsigned int palHeights[8];  // at 0x002C3F20
        unsigned int palWidths[8];  // at 0x002C3F00
    }
}

// 0x001712D0-0x001715AC (732 bytes), lines 432-545
static void _SkyDdispatchUpLoadAlignedContiguousRectangle(unsigned int pixelWidth, unsigned int pixelHeight, unsigned int dstAddress, unsigned int dstWidthBy64, unsigned int pixelFormat, u_long128 *pkt, unsigned char cachedPacket)
{
    // param unsigned int pixelWidth  (in $s1)
    // param unsigned int pixelHeight  (in $s0)
    // param unsigned int dstAddress  (in $s4)
    // param unsigned int dstWidthBy64  (in $s3)
    // param unsigned int pixelFormat  (in $s2)
    // param u_long128 *pkt  (in $s5)
    // param unsigned char cachedPacket  (in $v0)
    {   // 0x001712D0-0x001715AC
        u_long128 ___ltmp;  // in $t1
        u_long128 ___ltmp;  // in $t0
        u_long128 ___ltmp;  // in $t2
        u_long128 ___ltmp;  // in $t1
        u_long128 ___ltmp;  // in $t0
        u_long128 ___ltmp;  // in $t2
        unsigned long tmp;  // in $v0
    }
}

// 0x001715B0-0x001718B4 (772 bytes), lines 552-691
static void _SkyUpLoadAlignedRectangle(unsigned int pixelWidth, unsigned int pixelHeight, unsigned char *srcAddress, unsigned int dstAddress, unsigned int dstWidthBy64, unsigned int bitsPerPixel, unsigned int pixelFormat, unsigned int srcStride)
{
    // param unsigned int pixelWidth  (in $v0)
    // param unsigned int pixelHeight  (in $s2)
    // param unsigned char *srcAddress  (in $s1)
    // param unsigned int dstAddress  (in $s5)
    // param unsigned int dstWidthBy64  (in $s6)
    // param unsigned int bitsPerPixel  (in $fp)
    // param unsigned int pixelFormat  ($sp+172)
    // param unsigned int srcStride  (in $s0)
    {   // 0x001715B0-0x001718B4
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $a2
        unsigned int dmaID;  // in $a3
        unsigned int eop;  // in $a2
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $s4
        u_long128 *pkt;  // in $s7
        u_long128 *ptr;  // in $v1
        unsigned long qWordsInLine;  // in $s3
        unsigned int i;  // in $v0
        unsigned long tmp;  // in $v0
        unsigned char *src;  // in $v0
    }
}

// 0x001718C0-0x001718C8 (8 bytes), lines 1161-1161
static void _skyTexCacheNullUploadRaster()
{
    {   // 0x001718C0-0x001718C8
    }
}

// 0x001718D0-0x0017211C (2124 bytes), lines 1167-1507
static void skyTexCacheMemRasterToGs(RwRaster *raster, unsigned int address, int speculative)
{
    // param RwRaster *raster  ($sp+252)
    // param unsigned int address  ($sp+248)
    // param int speculative  (in $v0)
    {   // 0x001718D0-0x0017211C
        unsigned int format;  // in $s3
        unsigned int palHeight;  // in $s2
        unsigned int palWidth;  // in $s0
        unsigned int dstAddress;  // in $s7
        int palBPP;  // in $v1
        unsigned int dstAddress;  // in $s4
        unsigned int mipStride;  // in $fp
        unsigned int mipHeight;  // in $s3
        unsigned int mipWidth;  // in $s2
        unsigned char *srcAddress;  // in $v0
        int level;  // in $s6
        unsigned int widthBy64[7];  // $sp+288
        unsigned int offsetBy64[7];  // $sp+256
        unsigned long miptbp2;  // in $a1
        unsigned long miptbp1;  // in $a1
        int contiguous;  // $sp+192
        unsigned int pixelFormat;  // $sp+176
        unsigned int bitsPerPixel;  // $sp+160
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a2
        unsigned int i;  // in $v0
        u_long128 *data1;  // in $s2
        unsigned long txadj;  // in $a3
        unsigned long tmp;  // in $v0
        unsigned int pktSize;  // in $s0
        _SkyRasterExt *rasExt;  // in $s1
        unsigned int palHeights[8];  // at 0x002C3F60
        unsigned int palWidths[8];  // at 0x002C3F40
    }
}

// 0x00172120-0x001726F8 (1496 bytes), lines 1511-2036
static void _skyTexCacheUploadRaster(RwRaster *raster, int speculative)
{
    // param RwRaster *raster  (in $s3)
    // param int speculative  (in $v0)
    {   // 0x00172120-0x001726F8
        _SkyMemBlock *blockEnd;  // in $a3
        unsigned int startSize;  // in $a0
        unsigned int startAddress;  // in $t1
        _SkyRasterExt *rasExt2;  // in $a1
        unsigned int size;  // in $a1
        unsigned int entry;  // in $v1
        _SkyMemBlock *blockEnd;  // in $t4
        unsigned int startSize;  // in $t0
        unsigned int startAddress;  // in $t3
        unsigned int size;  // in $t1
        unsigned int entry;  // in $a0
        unsigned int ringEnd;  // in $v1
        unsigned int topOfMem;  // in $a3
        unsigned int address;  // in $v0
        _SkyRasterExt *rasExt;  // in $s4
    }
}

// 0x00172700-0x00172810 (272 bytes), lines 2055-2114
int skyTexCacheOpenCache(int start, int size)
{
    // param int start  (in $v0)
    // param int size  (in $v0)
    {   // 0x00172700-0x00172810
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
    }
}

// 0x00172810-0x00172934 (292 bytes), lines 2129-2181
int skyTexCacheCloseCache()
{
    {   // 0x00172810-0x00172934
        _SkyRasterExt *rasExt;  // in $v0
        unsigned int i;  // in $a0
    }
}

// 0x00172940-0x00172948 (8 bytes), lines 2198-2198
void skyTexCacheEndFrame()
{
    {   // 0x00172940-0x00172948
    }
}

// 0x00172950-0x00172A14 (196 bytes), lines 2219-2254
void RpSkyTexCacheAccessSpeculate(RwRaster *raster)
{
    // param RwRaster *raster  (in $v0)
    {   // 0x00172950-0x00172A14
        unsigned int destAddr;  // in $a2
        _SkyRasterExt *rasExt;  // in $s0
    }
}

// 0x00172A20-0x00172EB0 (1168 bytes), lines 2271-2518
int RpSkyTexCacheAccessRaster(RwRaster *raster, int useContext2)
{
    // param RwRaster *raster  (in $s3)
    // param int useContext2  (in $s0)
    {   // 0x00172A20-0x00172EB0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $t0
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a0
        unsigned int destAddr;  // in $a1
        unsigned long mipAddr1;  // in $a3
        unsigned long texAddr;  // in $v0
        unsigned long tmp;  // in $v0
        _SkyRasterExt *rasExt;  // in $s1
    }
}

// 0x00172EB0-0x00173038 (392 bytes), lines 2537-2606
void RpSkyTexCacheReleaseRaster(RwRaster *raster)
{
    // param RwRaster *raster  (in $v0)
    {   // 0x00172EB0-0x00173038
        unsigned int i;  // in $a3
        _SkyRasterExt *rasExt;  // in $v1
    }
}

// 0x00173040-0x00173344 (772 bytes), lines 2625-2775
int RpSkyTexCacheRasterLock(RwRaster *raster, int lock)
{
    // param RwRaster *raster  (in $v0)
    // param int lock  (in $v0)
    {   // 0x00173040-0x00173344
        unsigned int destAddr;  // in $a1
        unsigned int i;  // in $a3
        _SkyRasterExt *rasExt;  // in $s0
    }
}

// 0x00173350-0x0017340C (188 bytes), lines 2825-2870
void RpSkyTexCacheFlush()
{
    {   // 0x00173350-0x0017340C
        unsigned int i;  // in $a1
    }
}

// 0x00173410-0x00173710 (768 bytes), lines 2882-2990
void RpSkyTexCacheRestore()
{
    {   // 0x00173410-0x00173710
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a3
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a3
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $t1
        u_long128 ___ltmp;  // in $a2
        unsigned long tmp;  // in $v0
        unsigned long texAddr;  // in $v0
        unsigned long mipAddr2;  // in $v0
        unsigned long mipAddr1;  // in $t0
        int useContext2;  // in $s1
        _SkyRasterExt *rasExt;  // in $s0
    }
}

// 0x00173710-0x00173730 (32 bytes), lines 3186-3192
RwRaster *RpSkyTexGetTex0(RwRaster *raster, unsigned int *msb, unsigned int *lsb)
{
    // param RwRaster *raster  (in $v0)
    // param unsigned int *msb  (in $v0)
    // param unsigned int *lsb  (in $v0)
    {   // 0x00173710-0x00173730
        _SkyRasterExt *rasExt;  // in $a0
    }
}

// 0x00173730-0x0017373C (12 bytes), lines 3453-3454
int RpSkyTexCacheGetStartAddress()
{
    {   // 0x00173730-0x0017373C
    }
}

// 0x00173740-0x00173818 (216 bytes), lines 3472-3511
int RpSkyTexCacheSetStartAddress(int start)
{
    // param int start  (in $s1)
    {   // 0x00173740-0x00173818
        int topOfMem;  // in $v1
    }
}

