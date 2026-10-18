// ps2allsector.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RpLight *_rpWorldSectorPS2AllDoApplyLight(RpLight *, void *);  // 0x001A1800
int skyCameraExt;  // 0x00310A70
unsigned char skyTransType;  // 0x00310AC4
int rwPip2WorldSectorOffset;  // 0x00310B88
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x001A14C0-0x001A15A0 (224 bytes), lines 274-276
void RpWorldSectorPS2AllFrustumTestFunc(RpWorldSector *sector, RwFrustumTestResult *inFrustum)
{
    // param RpWorldSector *sector  (in $v0)
    // param RwFrustumTestResult *inFrustum  (in $v0)
    {   // 0x001A14C0-0x001A15A0
        float dot;  // optimised away
        unsigned int _numPlanes;  // in $a2
        RwFrustumPlane *_frustPlane;  // in $v1
    }
}

// 0x001A15A0-0x001A1800 (608 bytes), lines 459-504
int RpWorldSectorPS2AllObjectSetupCallBack(RxPS2AllPipeData *ps2AllPipeData, RwMatrixTag **transform)
{
    // param RxPS2AllPipeData *ps2AllPipeData  (in $s0)
    // param RwMatrixTag **transform  (in $s3)
    {   // 0x001A15A0-0x001A1800
        RwFrustumTestResult _infm;  // in $v0
        RwFrustumTestResult inFrustum;  // $sp+92
        RpWorldSector *sector;  // in $s1
    }
}

// 0x001A1800-0x001A1844 (68 bytes), lines 518-529
RpLight *_rpWorldSectorPS2AllDoApplyLight(RpLight *light)
{
    // param RpLight *light  (in $s0)
    {   // 0x001A1800-0x001A1844
    }
}

// 0x001A1850-0x001A20F8 (2216 bytes), lines 537-880
int RpWorldSectorPS2AllInstance(RxPS2AllPipeData *ps2AllPipeData)
{
    // param RxPS2AllPipeData *ps2AllPipeData  (in $v0)
    {   // 0x001A1850-0x001A20F8
        RpVertexNormal *normal;  // in $s4
        RpVertexNormal *normal;  // in $s4
        RpVertexNormal *normals;  // in $t4
        unsigned char *dataTmp;  // in $v0
        u_long128 *data;  // in $t3
        RwRGBA *col;  // in $s4
        RwRGBA *preLitLum;  // in $t4
        unsigned int *dataTmp;  // in $v0
        u_long128 *data;  // in $t3
        RwTexCoords *coord;  // in $s6
        RwTexCoords *tc2;  // in $t5
        RwTexCoords *tc1;  // in $t4
        float *dataTmp;  // in $v0
        u_long128 *data;  // in $t3
        RwTexCoords *coord;  // in $t4
        RwTexCoords *tc;  // in $s0
        float *dataTmp;  // in $v0
        u_long128 *data;  // in $t7
        RwV3d *pos;  // in $t4
        RwV3d *vertices;  // in $s3
        float *dataTmp;  // in $v0
        u_long128 *data;  // in $s2
        unsigned short *indexArray;  // in $t2
        unsigned char *swap;  // in $t3
        unsigned char *vertInc;  // in $t1
        unsigned char *shiftMask2;  // in $t0
        unsigned char *shiftMask;  // in $a3
        unsigned int stripReverse;  // in $a2
        unsigned int modCnt;  // in $s1
        unsigned int startIndOffset;  // in $v0
        unsigned int indOffset;  // in $s0
        unsigned int cntGen;  // in $a1
        int j;  // in $v0
        int vertCounter;  // in $t7
        unsigned int numVerts;  // in $v0
        rwPS2AllResEntryHeader *ps2AllResHeader;  // in $v1
        RpWorldSector *sector;  // in $fp
        RpWorld *world;  // in $v0
        rwPS2AllIndexLUTs IndexLUT;  // at 0x002C41F0
    }
}

