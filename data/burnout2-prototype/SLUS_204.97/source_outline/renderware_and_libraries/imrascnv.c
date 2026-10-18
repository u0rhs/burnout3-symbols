// imrascnv.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- functions ----

// 0x00159040-0x00159174 (308 bytes), lines 249-331
rwImageAlphaType _rwImageFindAlphaType(RwImage *image)
{
    // param RwImage *image  (in $v0)
    {   // 0x00159040-0x00159174
        RwRGBA *rpInCur;  // in $a1
        unsigned char *imagePixels;  // in $a0
        unsigned char *cpInCur;  // in $t3
        RwRGBA *palette;  // in $a0
        unsigned char *imagePixels;  // in $t2
        int stride;  // in $t1
        int height;  // in $t0
        int width;  // in $a3
        int masked;  // in $a2
        int y;  // in $a1
        int x;  // in $v1
    }
}

