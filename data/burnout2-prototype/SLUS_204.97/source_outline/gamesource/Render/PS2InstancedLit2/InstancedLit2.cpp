// I:\Burnout 2 Code\gamesource\Render\PS2InstancedLit2\InstancedLit2.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int _IL2ShadowDispatchCode(int, int, int, void *);  // 0x001E6B30
int _IL2ShadowUpdateCode(int, int, int, int, int, void *);  // 0x001E6DB0
int _IL2DispatchCode(int, int, int, void *);  // 0x001E6E40
int _IL2UpdateCode(int, int, int, int, int, void *);  // 0x001E70F0
int _IL2ShadowInstanceCode(RpGeometry *, RpMesh *, GsPS2RenderObject *);  // 0x001E74C0
int _IL2InstanceCode(RpGeometry *, RpMesh *, GsPS2RenderObject *);  // 0x001E7AA0
long irxformParallel2;  // 0x002949E0
long ilxform2;  // 0x00294D30
u_long128 *_rwDMAPktPtr;  // 0x003109BC
static int _gIL2CurrentMatrixIndex;  // 0x00310C08
CTrack gTrack;  // 0x0031F280
unsigned int ourGlobals[4096];  // 0x004486D0
static RwMatrixTag _gIL2EmbeddedMatrixArray[16];  // 0x004546C0
static RwV4d _gIL2EmbeddedLightArray[16];  // 0x00454AC0
static unsigned int _gaunShadCol[4];  // 0x00454BC0
static int _gIL2Flags[4];  // 0x00454BD0
static RwV4d _gIL2FadeFlags;  // 0x00454BE0

// ---- functions ----

// 0x001E6B30-0x001E6DB0 (640 bytes), lines 1648-1830
// _IL2ShadowDispatchCode__FiiiPv
int _IL2ShadowDispatchCode(int lbKeepPacket, int lnNumExtraQW, int lnData)
{
    // param int lbKeepPacket  (in $v0)
    // param int lnNumExtraQW  (in $v0)
    // param int lnData  (in $v0)
    {   // 0x001E6B30-0x001E6DB0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $a2
        int i;  // in $v1
        unsigned int *matVector;  // in $t0
        RwMatrixTag *m;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        int lnNumQW;  // in $s2
        unsigned long long tmp1;  // in $a3
        unsigned long long tmp;  // in $v0
    }
}

// 0x001E6DB0-0x001E6E34 (132 bytes), lines 1600-1626
// _IL2ShadowUpdateCode__FiiiiiPv
int _IL2ShadowUpdateCode(int lnData1, void *lpData6)
{
    // param int lnData1  (in $v0)
    // param void *lpData6  (in $v0)
    {   // 0x001E6DB0-0x001E6E34
        u_long128 *lp128SourceMatrix;  // in $v0
        u_long128 *lp128DestMatrix;  // in $a1
        int lnCount;  // in $v1
        int lnNumMatrices;  // in $v0
    }
}

// 0x001E6E40-0x001E70B0 (624 bytes), lines 1398-1568
// _IL2DispatchCode__FiiiPv
int _IL2DispatchCode(int lbKeepPacket, int lnNumExtraQW, int lnData)
{
    // param int lbKeepPacket  (in $v0)
    // param int lnNumExtraQW  (in $v0)
    // param int lnData  (in $s2)
    {   // 0x001E6E40-0x001E70B0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        RwMatrixTag *lpCamMat;  // in $a3
        int i;  // in $a3
        unsigned int *matVector;  // in $v0
        u_long128 *l;  // in $a2
        u_long128 *m;  // in $a1
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        int lnNumQW;  // in $s0
        unsigned long long tmp1;  // in $a1
        unsigned long long tmp;  // in $v0
    }
}

// 0x001E70B0-0x001E70E8 (56 bytes), lines 1363-1376
// IL2SetFadeDistances__Fffi
void IL2SetFadeDistances(float lrStartFade, float lrEndFade, int lbRestoreDefaults)
{
    // param float lrStartFade  ($sp+0)
    // param float lrEndFade  ($sp+0)
    // param int lbRestoreDefaults  (in $v0)
    {   // 0x001E70B0-0x001E70E8
    }
}

// 0x001E70F0-0x001E74C0 (976 bytes), lines 1235-1344
// _IL2UpdateCode__FiiiiiPv
int _IL2UpdateCode(int lnData1, int lnData2, int lnData3, int lnData4, void *lpData6)
{
    // param int lnData1  (in $v0)
    // param int lnData2  (in $v0)
    // param int lnData3  (in $v0)
    // param int lnData4  (in $v0)
    // param void *lpData6  (in $v0)
    {   // 0x001E70F0-0x001E74C0
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        float *lprIntensity;  // in $v0
        unsigned int *matVector;  // in $v0
        unsigned long long tmp1;  // in $v0
        unsigned long long tmp;  // in $v0
        u_long128 ltmp;  // in $v0
        RwV4d *lpDestLightDirection;  // in $v0
        u_long128 *lp128DestMatrix;  // in $t0
        int lnNumMatricesWhenDone;  // in $v0
        int lnCount;  // in $v1
        RwMatrixTag *lpMatrices;  // in $v0
        int lnAlphaValue;  // in $v0
        int lnEmbeddedLight;  // in $v0
        int lnCullingFlag;  // in $v0
        int lnNumMatrices;  // in $v0
    }
}

// 0x001E74C0-0x001E7A98 (1496 bytes), lines 717-1058
// _IL2ShadowInstanceCode__FP10RpGeometryP6RpMeshP17GsPS2RenderObject
static int _IL2ShadowInstanceCode(RpGeometry *lpGeometry, RpMesh *lpMesh, GsPS2RenderObject *lpObject)
{
    // param RpGeometry *lpGeometry  ($sp+232)
    // param RpMesh *lpMesh  ($sp+228)
    // param GsPS2RenderObject *lpObject  (in $s1)
    {   // 0x001E74C0-0x001E7A98
        float *pADCReal;  // in $t9
        unsigned int ADC;  // $sp+236
        float *pXYZW;  // in $t1
        RpMesh *pLocalMesh;  // in $a2
        signed char *pADC;  // in $v0
        RpMorphTarget *morphTarget;  // in $s3
        int indexOffset;  // in $t0
        int batchSize;  // in $a3
        int k;  // in $a2
        int j;  // in $a1
        int i;  // in $a1
        unsigned char *pMemory;  // in $s2
        int xyzAdcOff;  // $sp+224
        int batchSize;  // $sp+208
        int i;  // in $s5
        unsigned long long *pLastDMAtag;  // in $s4
        unsigned long long *pData;  // in $s3
        unsigned char *pMemory;  // in $s2
        int numPerTag;  // in $a3
        int size8QWAlign;  // in $a1
        int numActualVertices;  // in $a1
        unsigned char *pNewMemory;  // in $s1
        int numBatchesPerDMAtag;  // $sp+192
        int xyzAdcOffsetLast;  // in $s6
        int xyzAdcOffsetFull;  // $sp+176
        int numBatches;  // in $s0
        int numVertsBatch;  // in $fp
        int numVertsLast;  // $sp+160
        int batchSizeLast;  // in $v0
        int batchSizeFull;  // in $v0
        int size;  // in $v0
    }
}

// 0x001E7AA0-0x001E82AC (2060 bytes), lines 278-688
// _IL2InstanceCode__FP10RpGeometryP6RpMeshP17GsPS2RenderObject
static int _IL2InstanceCode(RpGeometry *lpGeometry, RpMesh *lpMesh, GsPS2RenderObject *lpObject)
{
    // param RpGeometry *lpGeometry  ($sp+360)
    // param RpMesh *lpMesh  ($sp+356)
    // param GsPS2RenderObject *lpObject  (in $s3)
    {   // 0x001E7AA0-0x001E82AC
        float *pADCReal;  // in $fp
        unsigned int ADC;  // $sp+364
        float *pNormal;  // in $t7
        float *pUV;  // in $t6
        float *pXYZW;  // in $t5
        RpMesh *pLocalMesh;  // in $a2
        signed char *pADC;  // in $v0
        RpMorphTarget *morphTarget;  // in $s4
        int indexOffset;  // in $t4
        int uvOff;  // in $a2
        int xyzOff;  // in $a1
        int batchSize;  // in $t3
        int k;  // in $a2
        int j;  // in $t2
        int i;  // in $a1
        unsigned char *pMemory;  // in $s3
        int numVertsAlign;  // in $v1
        int normalOff;  // $sp+316
        int uvOff;  // $sp+312
        int xyzOff;  // $sp+308
        int batchSize;  // $sp+288
        int i;  // in $s5
        unsigned long long *pLastDMAtag;  // in $s7
        unsigned long long *pData;  // in $s4
        unsigned char *pMemory;  // in $s3
        int numPerTag;  // in $a3
        int size8QWAlign;  // in $a2
        int numActualVertices;  // in $v0
        unsigned char *pNewMemory;  // in $s6
        int numBatchesPerDMAtag;  // $sp+272
        int normalOffsetLast;  // $sp+256
        int normalOffsetFull;  // $sp+240
        int uvOffsetLast;  // $sp+224
        int uvOffsetFull;  // $sp+208
        int xyzOffsetLast;  // $sp+192
        int xyzOffsetFull;  // $sp+176
        int numBatches;  // in $s2
        int numVertsBatch;  // in $fp
        int numVertsLast;  // $sp+160
        int batchSizeLast;  // in $s1
        int batchSizeFull;  // in $s0
        int size;  // in $v0
    }
}

// 0x001E82B0-0x001E8344 (148 bytes), lines 217-249
// IL2CreatePipelineShadow__Fv
GsPS2Pipeline *IL2CreatePipelineShadow()
{
    {   // 0x001E82B0-0x001E8344
        GsPS2Pipeline *pILS2;  // in $v0
    }
}

// 0x001E8350-0x001E8408 (184 bytes), lines 165-204
// IL2CreatePipeline__Fv
GsPS2Pipeline *IL2CreatePipeline()
{
    {   // 0x001E8350-0x001E8408
        GsPS2Pipeline *pIL2;  // in $v0
    }
}

