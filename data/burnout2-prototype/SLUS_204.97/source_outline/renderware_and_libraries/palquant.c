// palquant.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
unsigned int ourGlobals[4096];  // 0x004486D0
unsigned long splice[256];  // 0x0044C6D0

// ---- functions ----

// 0x00159180-0x001591A8 (40 bytes), lines 48-56
static LeafNode *InitLeaf(LeafNode *Leaf)
{
    // param LeafNode *Leaf  (in $v0)
    {   // 0x00159180-0x001591A8
    }
}

// 0x001591B0-0x00159370 (448 bytes), lines 104-135
static OctNode *AllocateToLeaf(rwPalQuant *pq, OctNode *root, unsigned long Octs, int depth)
{
    // param rwPalQuant *pq  (in $s3)
    // param OctNode *root  (in $v0)
    // param unsigned long Octs  (in $s2)
    // param int depth  (in $s1)
    {   // 0x001591B0-0x00159370
    }
}

// 0x00159370-0x00159994 (1572 bytes), lines 140-227
void _rwPalQuantAddImage(rwPalQuant *pq, RwImage *img, float weight)
{
    // param rwPalQuant *pq  (in $s0)
    // param RwImage *img  ($sp+204)
    // param float weight  (optimised away)
    {   // 0x00159370-0x00159994
        RwRGBA *color;  // in $s1
        RwRGBA *color;  // in $s3
        unsigned char *linePixels;  // in $fp
        RwRGBA *palette;  // $sp+176
        unsigned char *pixels;  // in $s6
        int stride;  // in $s7
        int height;  // in $s2
        int width;  // in $s1
    }
}

// 0x001599A0-0x00159BA8 (520 bytes), lines 235-290
static void assignindex(OctNode *root, RwRGBA *origin, int depth, box *region, int palIndex)
{
    // param OctNode *root  (in $s4)
    // param RwRGBA *origin  (in $s3)
    // param int depth  (in $s2)
    // param box *region  (in $s1)
    // param int palIndex  (in $s0)
    {   // 0x001599A0-0x00159BA8
        RwRGBA suborigin;  // $sp+140
        int i;  // in $s5
        int dA;  // in $a3
        int dB;  // in $a0
        int dG;  // in $a1
        int dR;  // in $a2
        int da;  // in $t7
        int db;  // in $t6
        int dg;  // in $t5
        int dr;  // in $t4
        int width;  // in $t3
    }
}

// 0x00159BB0-0x00159E14 (612 bytes), lines 316-374
static void addvolume(OctNode *root, RwRGBA *origin, int depth, box *region, LeafNode *volume)
{
    // param OctNode *root  (in $s4)
    // param RwRGBA *origin  (in $s3)
    // param int depth  (in $s2)
    // param box *region  (in $s1)
    // param LeafNode *volume  (in $s0)
    {   // 0x00159BB0-0x00159E14
        RwRGBA suborigin;  // $sp+140
        int i;  // in $s5
        int dA;  // in $a3
        int dB;  // in $a0
        int dG;  // in $a1
        int dR;  // in $a2
        int da;  // in $t7
        int db;  // in $t6
        int dg;  // in $t5
        int dr;  // in $t4
        int width;  // in $t3
    }
}

// 0x00159E20-0x0015A424 (1540 bytes), lines 428-563
static float nMaximize(OctNode *root, box *cube, int dir, int *cut, LeafNode *whole)
{
    // param OctNode *root  (in $s5)
    // param box *cube  (in $s4)
    // param int dir  (in $v0)
    // param int *cut  (in $s3)
    // param LeafNode *whole  (in $s2)
    {   // 0x00159E20-0x0015A424
        int i;  // in $s0
        float lastval;  // optimised away
        float val;  // optimised away
        float maxsum;  // $sp+240
        LeafNode left;  // $sp+176
        box infcube;  // $sp+216
    }
}

// 0x0015A430-0x0015A69C (620 bytes), lines 568-644
static int nCut(OctNode *root, box *set1, box *set2)
{
    // param OctNode *root  (in $s2)
    // param box *set1  (in $s1)
    // param box *set2  (in $s0)
    {   // 0x0015A430-0x0015A69C
        LeafNode whole;  // $sp+80
        float maxa;  // $sp+128
        float maxb;  // optimised away
        float maxg;  // optimised away
        float maxr;  // optimised away
        int cuta;  // $sp+120
        int cutb;  // $sp+116
        int cutg;  // $sp+112
        int cutr;  // $sp+108
    }
}

// 0x0015A6A0-0x0015A794 (244 bytes), lines 687-710
static int CountLeafs(OctNode *root, int depth)
{
    // param OctNode *root  (in $fp)
    // param int depth  (in $s6)
    {   // 0x0015A6A0-0x0015A794
        int n;  // in $s7
        int i;  // in $s0
    }
}

// 0x0015A7A0-0x0015A8D4 (308 bytes), lines 767-794
static int ExtractNodes(OctNode *root, RwRGBA *palette, int nodeIndex, int depth)
{
    // param OctNode *root  (in $s1)
    // param RwRGBA *palette  (in $s0)
    // param int nodeIndex  (in $v0)
    // param int depth  (in $s4)
    {   // 0x0015A7A0-0x0015A8D4
        int quantize;  // in $v0
        int i;  // in $s2
    }
}

// 0x0015A8E0-0x0015ADD4 (1268 bytes), lines 799-912
int _rwPalQuantResolvePalette(RwRGBA *palette, int maxcols, rwPalQuant *pq)
{
    // param RwRGBA *palette  (in $s5)
    // param int maxcols  (in $s4)
    // param rwPalQuant *pq  (in $s3)
    {   // 0x0015A8E0-0x0015ADD4
        int quantize;  // in $v0
        LeafNode Node;  // $sp+160
        float maxvar;  // $sp+304
        int kk;  // in $v0
        int next;  // in $s1
        int k;  // in $a0
        int i;  // in $s0
        int numcols;  // in $s7
    }
}

// 0x0015ADE0-0x0015AEB4 (212 bytes), lines 917-933
static unsigned char GetIndex(OctNode *root, unsigned long Octs, int depth)
{
    // param OctNode *root  (in $v0)
    // param unsigned long Octs  (in $v0)
    // param int depth  (in $v0)
    {   // 0x0015ADE0-0x0015AEB4
        unsigned char result;  // in $v0
    }
}

// 0x0015AEC0-0x0015B548 (1672 bytes), lines 938-1101
void _rwPalQuantMatchImage(unsigned char *dstpixels, int dststride, int dstdepth, int dstPacked, rwPalQuant *pq, RwImage *img)
{
    // param unsigned char *dstpixels  (in $s5)
    // param int dststride  (in $s4)
    // param int dstdepth  (in $v0)
    // param int dstPacked  (in $v0)
    // param rwPalQuant *pq  ($sp+236)
    // param RwImage *img  (in $fp)
    {   // 0x0015AEC0-0x0015B548
        RwRGBA *color;  // in $v0
        RwRGBA *srcLinePixels;  // in $s7
        RwRGBA *color;  // in $a3
        unsigned char *srcLinePixels;  // in $s7
        RwRGBA *palette;  // $sp+208
        RwRGBA *color;  // in $a1
        RwRGBA *srcLinePixels;  // $sp+192
        RwRGBA *color;  // in $a3
        unsigned char *srcLinePixels;  // $sp+176
        RwRGBA *palette;  // $sp+160
        unsigned char *dstLinePixels;  // in $s3
        unsigned char *pixels;  // in $s1
        unsigned int stride;  // in $s0
        unsigned int height;  // in $s6
        unsigned int x;  // in $s2
        unsigned int width;  // in $s7
    }
}

// 0x0015B550-0x0015B68C (316 bytes), lines 1106-1133
int _rwPalQuantInit(rwPalQuant *pq)
{
    // param rwPalQuant *pq  (in $s0)
    {   // 0x0015B550-0x0015B68C
        unsigned long mask;  // in $t0
        int j;  // in $a3
        int i;  // in $a2
    }
}

// 0x0015B690-0x0015B784 (244 bytes), lines 1138-1159
static void DeleteOctTree(rwPalQuant *pq, OctNode *root, int depth)
{
    // param rwPalQuant *pq  (in $s6)
    // param OctNode *root  (in $s5)
    // param int depth  (in $s7)
    {   // 0x0015B690-0x0015B784
        int i;  // in $s0
    }
}

// 0x0015B790-0x0015B844 (180 bytes), lines 1164-1177
void _rwPalQuantTerm(rwPalQuant *pq)
{
    // param rwPalQuant *pq  (in $s0)
    {   // 0x0015B790-0x0015B844
    }
}

