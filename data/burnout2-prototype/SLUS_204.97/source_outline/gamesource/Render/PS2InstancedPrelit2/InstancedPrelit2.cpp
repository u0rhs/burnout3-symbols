// I:\Burnout 2 Code\gamesource\Render\PS2InstancedPrelit2\InstancedPrelit2.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int _IP2DispatchCode(int, int, int, void *);  // 0x001C9190
int _IP2UpdateCode(int, int, int, int, int, void *);  // 0x001C94F0
int _IP2InstanceCode(RpGeometry *, RpMesh *, GsPS2RenderObject *);  // 0x001C9580
long ipxform2;  // 0x0028E650
u_long128 *_rwDMAPktPtr;  // 0x003109BC
static int _gCurrentMatrixIndex;  // 0x00310BE4
unsigned int ourGlobals[4096];  // 0x004486D0
static RwMatrixTag _gEmbeddedMatrixArray[48];  // 0x00451690
static int _gIP2Flags[4];  // 0x00452290
static RwV4d _gIP2FadeFlags;  // 0x004522A0

// ---- functions ----

// 0x001C9190-0x001C94A8 (792 bytes), lines 748-955
// _IP2DispatchCode__FiiiPv
int _IP2DispatchCode(int lbKeepPacket, int lnNumExtraQW, int lnData, void *lpData)
{
    // param int lbKeepPacket  (in $v0)
    // param int lnNumExtraQW  (in $v0)
    // param int lnData  (in $s2)
    // param void *lpData  (in $v0)
    {   // 0x001C9190-0x001C94A8
        u_long128 *lpMyData;  // in $a2
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $v0
        int i;  // in $a1
        unsigned int *lpunMatVector;  // in $a3
        RwMatrixTag *lpM;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        RwCamera *lpCam;  // in $v0
        float lRadius;  // optimised away
        int lnNumQW;  // in $s3
        RwV4d lBottomPlane;  // $sp+144
        RwV4d lTopPlane;  // $sp+128
        RwV4d lRightPlane;  // $sp+112
        RwV4d lLeftPlane;  // $sp+96
        RwV4d lNearPlane;  // $sp+80
        unsigned long long tmp1;  // in $a1
        unsigned long long tmp;  // in $t0
    }
}

// 0x001C94B0-0x001C94E8 (56 bytes), lines 714-727
// IP2SetFadeDistances__Fffi
void IP2SetFadeDistances(float lrStartFade, float lrEndFade, int lbRestoreDefaults)
{
    // param float lrStartFade  ($sp+0)
    // param float lrEndFade  ($sp+0)
    // param int lbRestoreDefaults  (in $v0)
    {   // 0x001C94B0-0x001C94E8
    }
}

// 0x001C94F0-0x001C9578 (136 bytes), lines 656-695
// _IP2UpdateCode__FiiiiiPv
int _IP2UpdateCode(int lnData1, int lnData2, void *lpData6)
{
    // param int lnData1  (in $v0)
    // param int lnData2  (in $v0)
    // param void *lpData6  (in $v0)
    {   // 0x001C94F0-0x001C9578
        u_long128 *lp128Matrices;  // in $v0
        u_long128 *lp128;  // in $a2
        int lnCount;  // in $v1
        RwMatrixTag *lpMatrices;  // in $v0
        int lnNumMatrices;  // in $v0
    }
}

// 0x001C9580-0x001C9BD8 (1624 bytes), lines 268-621
// _IP2InstanceCode__FP10RpGeometryP6RpMeshP17GsPS2RenderObject
static int _IP2InstanceCode(RpGeometry *lpGeometry, RpMesh *lpMesh, GsPS2RenderObject *lpObject)
{
    // param RpGeometry *lpGeometry  (in $s6)
    // param RpMesh *lpMesh  ($sp+344)
    // param GsPS2RenderObject *lpObject  (in $s2)
    {   // 0x001C9580-0x001C9BD8
        int ADCFlag;  // $sp+348
        float *pUV;  // in $t4
        float *pXYZADC;  // in $t3
        RpMesh *pLocalMesh;  // in $a2
        signed char *pADC;  // in $v0
        RpMorphTarget *morphTarget;  // in $s4
        int indexOffset;  // in $t2
        int xyzwOff;  // in $a0
        int batchSize;  // in $t1
        int k;  // in $t0
        int i;  // in $a1
        unsigned char *pMemory;  // in $s3
        int uvOff;  // $sp+300
        int xyzwOff;  // $sp+296
        int batchSize;  // $sp+272
        int i;  // in $s4
        unsigned long long *pLastDMAtag;  // in $s7
        unsigned long long *pData;  // in $s3
        unsigned char *pMemory;  // in $v0
        int numPerTag;  // in $a3
        int size8QWAlign;  // in $a2
        int numActualVertices;  // in $a2
        unsigned char *pNewMemory;  // in $s2
        int numBatchesPerDMAtag;  // $sp+256
        int uvOffsetLast;  // $sp+240
        int uvOffsetFull;  // $sp+224
        int xyzwOffsetLast;  // $sp+208
        int xyzwOffsetFull;  // $sp+192
        int numBatches;  // in $s1
        int numVertsBatch;  // $sp+176
        int numVertsLast;  // $sp+160
        int batchSizeLast;  // in $s0
        int batchSizeFull;  // in $fp
        int size;  // in $v0
    }
}

// 0x001C9BE0-0x001C9C98 (184 bytes), lines 133-172
// IP2CreatePipeline__Fv
GsPS2Pipeline *IP2CreatePipeline()
{
    {   // 0x001C9BE0-0x001C9C98
        GsPS2Pipeline *pIP2;  // in $v0
    }
}

