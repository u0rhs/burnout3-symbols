// I:\Burnout 2 Code\gamesource\Render\PS2CarRenderer\PS2CarRenderer.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int _RaceCarFrontEndInstanceCode(RpGeometry *, RpMesh *, GsPS2RenderObject *);
int _CarShadowSetupCode(int, int, void *);  // 0x001DF530
int _CarMatSetupCode(int, int, void *);  // 0x001DF6A0
int _RaceCarShadowInstanceCode(RpGeometry *, RpMesh *, GsPS2RenderObject *);  // 0x001DFA10
int _RaceCarInstanceCode(RpGeometry *, RpMesh *, GsPS2RenderObject *);  // 0x001DFF70
long carRenderer;  // 0x00293230
long carShadowRenderer;  // 0x00295880
u_long128 nullLightBlock[2];  // 0x002A3390
u_long128 *_rwDMAPktPtr;  // 0x003109BC
long skyFrame_1;  // 0x00310A00
long skyTest_1;  // 0x00310A08
long skyTex1_1;  // 0x00310A28
RwRaster *skyTextureRaster;  // 0x00310A88
unsigned int _skyLightQWordsWritten;  // 0x00310B80
float *_skyLightFillPos;  // 0x00310B84
CRenderer gRenderer;  // 0x00434440
unsigned int ourGlobals[4096];  // 0x004486D0
static u_long128 _CarLightBuffer[8];  // 0x00454450

// ---- functions ----

// 0x001DF530-0x001DF698 (360 bytes), lines 2048-2176
// _CarShadowSetupCode__FiiPv
int _CarShadowSetupCode(int bKeepPacket, int nNumExtraQW, void *pData)
{
    // param int bKeepPacket  (in $v0)
    // param int nNumExtraQW  (in $s1)
    // param void *pData  (in $v0)
    {   // 0x001DF530-0x001DF698
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $v0
        unsigned int launShadowColour[4];  // $sp+128
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        unsigned int launFlags[4];  // $sp+112
        u_long128 ___ltmp;  // in $v0
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        RwMatrixTag *lpViewMatrix;  // in $v0
        CarShadowDataTag *lpCarShadowData;  // in $s0
        RwMatrixTag lxForm;  // $sp+48
        unsigned long long tmp1;  // in $a1
        unsigned long long tmp;  // in $a2
    }
}

// 0x001DF6A0-0x001DFA10 (880 bytes), lines 1766-2028
// _CarMatSetupCode__FiiPv
int _CarMatSetupCode(int bKeepPacket, int nNumExtraQW, void *pData)
{
    // param int bKeepPacket  (in $v0)
    // param int nNumExtraQW  (in $s0)
    // param void *pData  (in $v0)
    {   // 0x001DF6A0-0x001DFA10
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        unsigned int launObjectFlags[4];  // $sp+144
        u_long128 *u;  // in $s2
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $a1
        unsigned int myTex1;  // in $a3
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        u_long128 ___ltmp;  // in $a1
        RwMatrixTag *lpViewMatrix;  // in $s1
        CarSetupDataTag *lpCarData;  // in $v0
        RwMatrixTag lxForm;  // $sp+80
        unsigned long long tmp1;  // in $a1
        unsigned long long tmp;  // in $v0
        u_long128 ltmp;  // in $v0
    }
}

// 0x001DFA10-0x001DFF64 (1364 bytes), lines 1412-1746
// _RaceCarShadowInstanceCode__FP10RpGeometryP6RpMeshP17GsPS2RenderObject
static int _RaceCarShadowInstanceCode(RpGeometry *pGeometry, RpMesh *pMesh, GsPS2RenderObject *pObject)
{
    // param RpGeometry *pGeometry  ($sp+232)
    // param RpMesh *pMesh  ($sp+228)
    // param GsPS2RenderObject *pObject  (in $s1)
    {   // 0x001DFA10-0x001DFF64
        float *pXYZAdc;  // in $t2
        int count;  // in $a2
        RpMesh *pLocalMesh;  // in $a1
        unsigned int ADC;  // $sp+236
        float *pADCReal;  // in $s4
        signed char *pADC;  // in $v0
        RpMorphTarget *morphTarget1;  // in $s3
        int indexOffset;  // in $t1
        int batchSize;  // in $t0
        int k;  // in $a3
        int j;  // in $a2
        int i;  // in $a1
        unsigned char *pMemory;  // in $s2
        int xyzAdcOff;  // $sp+224
        int batchSize;  // $sp+208
        int i;  // in $s4
        unsigned long long *pLastDMAtag;  // in $s3
        unsigned long long *pData;  // in $s2
        unsigned char *pMemory;  // in $v0
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

// 0x001DFF70-0x001E0C08 (3224 bytes), lines 284-863
// _RaceCarInstanceCode__FP10RpGeometryP6RpMeshP17GsPS2RenderObject
static int _RaceCarInstanceCode(RpGeometry *pGeometry, RpMesh *pMesh, GsPS2RenderObject *pObject)
{
    // param RpGeometry *pGeometry  ($sp+524)
    // param RpMesh *pMesh  ($sp+520)
    // param GsPS2RenderObject *pObject  (in $s3)
    {   // 0x001DFF70-0x001E0C08
        short lV;  // in $v0
        unsigned short index;  // in $v0
        int count;  // in $a2
        RpMesh *pLocalMesh;  // in $a1
        signed char *pADC;  // in $v0
        signed char *pNormal2;  // $sp+432
        signed char *pXYZ2ADC;  // in $s4
        signed char *pNormal;  // $sp+416
        short *pUV;  // in $fp
        float *pXYZ;  // $sp+400
        RpMorphTarget *morphTarget2;  // $sp+384
        RpMorphTarget *morphTarget1;  // in $v0
        int xyz2Off;  // in $t0
        int normalOff;  // in $a1
        int uvOff;  // in $a0
        int xyzOff;  // in $v1
        int indexOffset;  // $sp+368
        int batchSize;  // $sp+352
        int k;  // in $a1
        int j;  // in $a0
        int i;  // in $s3
        unsigned char *pMemory;  // $sp+336
        int normal2Off;  // $sp+332
        int xyz2Off;  // $sp+328
        int normalOff;  // $sp+324
        int uvOff;  // $sp+320
        int xyzOff;  // $sp+316
        int batchSize;  // $sp+288
        int i;  // in $s4
        unsigned long long *pLastDMAtag;  // $sp+284
        unsigned long long *pData;  // in $s3
        unsigned char *pMemory;  // in $v0
        int numPerTag;  // in $a3
        int size8QWAlign;  // in $a1
        int numVertsAlignedBy4;  // in $a2
        int numActualVertices;  // in $a1
        unsigned char *pNewMemory;  // $sp+256
        int numBatchesPerDMAtag;  // $sp+240
        int normal2OffsetLast;  // in $v0
        int normal2OffsetFull;  // in $v0
        int xyz2OffsetLast;  // in $v0
        int xyz2OffsetFull;  // in $v0
        int normalOffsetLast;  // in $v0
        int normalOffsetFull;  // in $v0
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

// 0x001E0C10-0x001E0C84 (116 bytes), lines 192-216
// RaceCarShadowPipelineCreate__Fv
GsPS2Pipeline *RaceCarShadowPipelineCreate()
{
    {   // 0x001E0C10-0x001E0C84
        GsPS2Pipeline *pPipeRaceCarShadow;  // in $v0
    }
}

// 0x001E0C90-0x001E0D04 (116 bytes), lines 118-142
// RaceCarPipelineCreate__Fv
GsPS2Pipeline *RaceCarPipelineCreate()
{
    {   // 0x001E0C90-0x001E0D04
        GsPS2Pipeline *pPipeRaceCar;  // in $v0
    }
}

