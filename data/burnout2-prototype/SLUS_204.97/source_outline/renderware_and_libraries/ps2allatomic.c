// ps2allatomic.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RpLight *_rpAtomicPS2AllDoApplyLight(RpLight *, void *);  // 0x0019ED20
RpLight *_rpAtomicPS2AllDoApplyLightFrame(RpLight *, void *);  // 0x0019ED70
long skyPrim_State;  // 0x003103B0
int skyTLClipperMode;  // 0x003103D8
u_long128 *_rwDMAPktPtr;  // 0x003109BC
long skyTest_1;  // 0x00310A08
long skyClamp_1;  // 0x00310A20
long skyTex1_1;  // 0x00310A28
int skyCameraExt;  // 0x00310A70
RwCullMode gSkyCullState;  // 0x00310A78
int skyVertexAlpha;  // 0x00310A80
int skyAlphaTex;  // 0x00310A84
RwRaster *skyTextureRaster;  // 0x00310A88
unsigned char skyTransType;  // 0x00310AC4
void *skyUploadedCode;  // 0x00310AC8
unsigned int skyUserSwitch1;  // 0x00310ACC
unsigned int skyUserSwitch2;  // 0x00310AD0
int skyTSClipperMode;  // 0x00310AD4
unsigned int _skyLightQWordsWritten;  // 0x00310B80
float *_skyLightFillPos;  // 0x00310B84
int rwPip2AtomicOffset;  // 0x00310B8C
int rwPip2GeometryOffset;  // 0x00310B90
unsigned int ourGlobals[4096];  // 0x004486D0
u_long128 gifTag128;  // 0x0044DB40
u_long128 skyClipVect1;  // 0x0044DBA0
u_long128 skyClipVect2;  // 0x0044DBB0
u_long128 skyCClipVect1;  // 0x0044DBC0
u_long128 skyCClipVect2;  // 0x0044DBD0

// ---- functions ----

// 0x0019DDA0-0x0019DEE8 (328 bytes), lines 244-246
void RpAtomicPS2AllObjInstanceTestFunc(RpAtomic *atomic, RxPS2AllPipeData *ps2AllPipeData)
{
    // param RpAtomic *atomic  (in $v0)
    // param RxPS2AllPipeData *ps2AllPipeData  (in $v0)
    {   // 0x0019DDA0-0x0019DEE8
        RpInterpolator *interpolator;  // in $a2
        rwPS2AllResEntryHeader *ps2AllResHeader;  // in $a0
        RwResEntry *resEntry;  // in $a3
        RpGeometry *_gmty;  // in $v1
    }
}

// 0x0019DEF0-0x0019DFBC (204 bytes), lines 430-432
void RpAtomicPS2AllPrimTypeTransTypeSetupFunc(RxPS2AllPipeData *ps2AllPipeData, RwFrustumTestResult inFrustum)
{
    // param RxPS2AllPipeData *ps2AllPipeData  (in $v0)
    // param RwFrustumTestResult inFrustum  (in $v0)
    {   // 0x0019DEF0-0x0019DFBC
        RwFrustumTestResult _infm;  // in $v0
    }
}

// 0x0019DFC0-0x0019E100 (320 bytes), lines 515-519
void RpAtomicPS2AllLightingSetupFunc(RxPS2AllPipeData *ps2AllPipeData)
{
    // param RxPS2AllPipeData *ps2AllPipeData  (in $v0)
    {   // 0x0019DFC0-0x0019E100
        float _result;  // optimised away
        float temp;  // $sp+160
        RwMatrixTag *frameMat;  // in $s2
        rpAtomicPS2AllLightData lightingData;  // $sp+64
        RpMeshHeader *meshHeader;  // in $v0
        RwLLLink *end;  // in $s0
        RwLLLink *cur;  // in $s1
        RpGeometry *_gmty;  // in $s1
        RpAtomic *_atmc;  // in $s0
    }
}

// 0x0019E100-0x0019E1C8 (200 bytes), lines 618-623
void RpAtomicPS2AllResEntryAllocFunc(RxPS2AllPipeData *ps2AllPipeData, RwResEntry **repEntry, unsigned int size, void (*destroyCallBack)(RwResEntry *))
{
    // param RxPS2AllPipeData *ps2AllPipeData  (in $v0)
    // param RwResEntry **repEntry  (in $s3)
    // param unsigned int size  (in $s2)
    // param void (*destroyCallBack)(RwResEntry *)  (in $s1)
    {   // 0x0019E100-0x0019E1C8
        RpGeometry *_gmty;  // in $s0
    }
}

// 0x0019E1D0-0x0019E3F8 (552 bytes), lines 714-767
int RpAtomicPS2AllObjectSetupCallBack(RxPS2AllPipeData *ps2AllPipeData, RwMatrixTag **transform)
{
    // param RxPS2AllPipeData *ps2AllPipeData  (in $s3)
    // param RwMatrixTag **transform  (in $s1)
    {   // 0x0019E1D0-0x0019E3F8
        RwFrustumTestResult inFrustum;  // $sp+108
        RpAtomic *atomic;  // in $s0
    }
}

// 0x0019E400-0x0019E4B8 (184 bytes), lines 797-829
int RpMeshPS2AllMeshInstanceTestCallBack(RxPS2AllPipeData *ps2AllPipeData)
{
    // param RxPS2AllPipeData *ps2AllPipeData  (in $v0)
    {   // 0x0019E400-0x0019E4B8
        rwPS2AllResEntryHeader *_rshd;  // in $v0
        unsigned int *_nmvt;  // in $a2
        unsigned int _nvrt;  // $sp+12
        rwPS2AllResEntryHeader *_rshd;  // in $a1
    }
}

// 0x0019E4C0-0x0019E590 (208 bytes), lines 869-899
RwResEntry *RpMeshPS2AllResEntryAllocCallBack(RxPS2AllPipeData *ps2AllPipeData, RwResEntry **repEntry, unsigned int size, void (*destroyCallBack)(RwResEntry *))
{
    // param RxPS2AllPipeData *ps2AllPipeData  (in $v0)
    // param RwResEntry **repEntry  (in $s3)
    // param unsigned int size  (in $s2)
    // param void (*destroyCallBack)(RwResEntry *)  (in $s1)
    {   // 0x0019E4C0-0x0019E590
    }
}

// 0x0019E590-0x0019E5D0 (64 bytes), lines 932-951
int RpMeshPS2AllInstanceCallBack(RxPS2AllPipeData *ps2AllPipeData)
{
    // param RxPS2AllPipeData *ps2AllPipeData  (in $v0)
    {   // 0x0019E590-0x0019E5D0
    }
}

// 0x0019E5D0-0x0019ED20 (1872 bytes), lines 1000-1063
int RpMeshPS2AllBridgeCallBack(RxPS2AllPipeData *ps2AllPipeData)
{
    // param RxPS2AllPipeData *ps2AllPipeData  (in $s0)
    {   // 0x0019E5D0-0x0019ED20
        u_long128 ___ltmp;  // in $v1
        rwPS2AllResEntryHeader *_p2rh;  // in $s0
        u_long128 ___ltmp;  // in $a0
        void *_kohd;  // in $a1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $a1
        unsigned long __tmp;  // in $v0
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $a1
        unsigned int __skySwitchFlag;  // in $v0
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $v1
        unsigned long __tmp1;  // in $v0
        u_long128 ___ltmp;  // in $a1
        unsigned int cFormat;  // in $v1
        RwRaster *_nwrs;  // in $v0
        RwTexture *_nwtx;  // in $s1
    }
}

// 0x0019ED20-0x0019ED64 (68 bytes), lines 1110-1128
RpLight *_rpAtomicPS2AllDoApplyLight(RpLight *light, void *pData)
{
    // param RpLight *light  (in $s0)
    // param void *pData  (in $v0)
    {   // 0x0019ED20-0x0019ED64
        rpAtomicPS2AllLightData *lightingData;  // in $v0
    }
}

// 0x0019ED70-0x0019EDDC (108 bytes), lines 1136-1159
RpLight *_rpAtomicPS2AllDoApplyLightFrame(RpLight *light, void *pData)
{
    // param RpLight *light  (in $s1)
    // param void *pData  (in $v0)
    {   // 0x0019ED70-0x0019EDDC
        rpAtomicPS2AllLightData *lightingData;  // in $v0
    }
}

// 0x0019EDE0-0x0019FC80 (3744 bytes), lines 1167-1973
int RpAtomicPS2AllInstance(RxPS2AllPipeData *ps2AllPipeData)
{
    // param RxPS2AllPipeData *ps2AllPipeData  (in $v0)
    {   // 0x0019EDE0-0x0019FC80
        RwRGBA *col;  // in $s3
        RwRGBA *preLitLum;  // in $a3
        unsigned int *dataTmp;  // in $a0
        u_long128 *data;  // in $v1
        RwTexCoords *coord;  // in $a3
        RwTexCoords *tc2;  // in $s1
        RwTexCoords *tc1;  // in $s0
        float *dataTmp;  // in $t3
        u_long128 *data;  // in $t2
        RwTexCoords *coord;  // in $v1
        RwTexCoords *tc;  // in $t2
        float *dataTmp;  // in $t0
        u_long128 *data;  // in $a3
        RwV3d *normal;  // in $s6
        RwV3d *normal;  // in $s6
        RwV3d *normals;  // in $t0
        unsigned char *dataTmp;  // in $v0
        u_long128 *data;  // in $a3
        RwV3d *pos;  // in $s6
        RwV3d *vertices;  // in $t0
        float *dataTmp;  // in $v0
        u_long128 *data;  // in $a3
        RwV3d *normal;  // in $s5
        RwV3d *normal;  // in $s5
        RwV3d *normals;  // in $t2
        unsigned char *dataTmp;  // in $t0
        u_long128 *data;  // in $a3
        RwV3d *pos;  // in $s5
        RwV3d *vertices;  // in $s1
        float *dataTmp;  // in $s0
        u_long128 *data;  // in $t9
        unsigned short *indexArray;  // in $t8
        unsigned char *swap;  // in $t0
        unsigned char *vertInc;  // in $t7
        unsigned char *shiftMask2;  // in $t6
        unsigned char *shiftMask;  // in $t5
        unsigned int stripReverse;  // in $t4
        unsigned int modCnt;  // in $t3
        unsigned int startIndOffset;  // in $v0
        unsigned int indOffset;  // in $t2
        unsigned int cntGen;  // in $t1
        RpMorphTarget *endMorphTarget;  // in $v1
        RpMorphTarget *startMorphTarget;  // in $fp
        int instanceNormal;  // in $s7
        int instanceXYZ;  // $sp+144
        int j;  // in $t0
        int vertCounter;  // in $a3
        unsigned int numVerts;  // in $v0
        rwPS2AllResEntryHeader *ps2AllResHeader;  // in $a2
        RpGeometry *geom;  // in $a1
        RpAtomic *atomic;  // in $a1
        RpInterpolator *interpolator;  // in $v1
        rwPS2AllIndexLUTs IndexLUT;  // at 0x002C4180
    }
}

