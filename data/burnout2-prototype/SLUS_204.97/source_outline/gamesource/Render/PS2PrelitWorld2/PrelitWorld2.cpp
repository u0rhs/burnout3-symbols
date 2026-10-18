// I:\Burnout 2 Code\gamesource\Render\PS2PrelitWorld2\PrelitWorld2.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int _PW2MatSetupCodeGlass(int, int, void *);  // 0x001C5FA0
int _PW2MatSetupCodeWater(int, int, void *);  // 0x001C6030
int _PW2MatSetupCodeSpecular(int, int, void *);  // 0x001C60C0
int _PW2MatSetupCodeDefault(int, int, void *);  // 0x001C6150
int _PW2InstanceCodeLineList(RpGeometry *, RpMesh *, GsPS2RenderObject *);  // 0x001C61D0
int _PW2InstanceCodeGlass(RpGeometry *, RpMesh *, GsPS2RenderObject *);  // 0x001C67C0
int _PW2InstanceCodeWater(RpGeometry *, RpMesh *, GsPS2RenderObject *);  // 0x001C70D0
int _PW2InstanceCodeNormals(RpGeometry *, RpMesh *, GsPS2RenderObject *);  // 0x001C7B10
int _PW2InstanceCode(RpGeometry *, RpMesh *, GsPS2RenderObject *);  // 0x001C8580
long G3_BFC_ADC_S;  // 0x002854F0
long G3_Gen_ADC;  // 0x00287600
long G3_Gen_ADC_S;  // 0x00288EF0
long G3_Gen_ADC_Water;  // 0x0028AB60
long G3_BFC_ADC;  // 0x0028C8D0
long G3_BFC_ADC_G;  // 0x0028F120
long G3_Gen_ADC_G;  // 0x00291400
long G3_Gen_Line;  // 0x002994D0
u_long128 *_rwDMAPktPtr;  // 0x003109BC
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x001C5FA0-0x001C6030 (144 bytes), lines 3177-3240
// _PW2MatSetupCodeGlass__FiiPv
static int _PW2MatSetupCodeGlass(int bKeepPacket, int nNumExtraQW, void *pData)
{
    // param int bKeepPacket  (in $v0)
    // param int nNumExtraQW  (in $v0)
    // param void *pData  (in $v0)
    {   // 0x001C5FA0-0x001C6030
        u_long128 ___ltmp;  // in $v0
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        PWGlassDataTag *lpGlassData;  // in $s0
        unsigned long long tmp1;  // in $v0
        unsigned long long tmp;  // in $a0
    }
}

// 0x001C6030-0x001C60C0 (144 bytes), lines 3095-3158
// _PW2MatSetupCodeWater__FiiPv
static int _PW2MatSetupCodeWater(int bKeepPacket, int nNumExtraQW, void *pData)
{
    // param int bKeepPacket  (in $v0)
    // param int nNumExtraQW  (in $v0)
    // param void *pData  (in $v0)
    {   // 0x001C6030-0x001C60C0
        u_long128 ___ltmp;  // in $v0
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        PWWaterDataTag *lpWaterData;  // in $s0
        unsigned long long tmp1;  // in $v0
        unsigned long long tmp;  // in $a0
    }
}

// 0x001C60C0-0x001C6150 (144 bytes), lines 3013-3076
// _PW2MatSetupCodeSpecular__FiiPv
static int _PW2MatSetupCodeSpecular(int bKeepPacket, int nNumExtraQW, void *pData)
{
    // param int bKeepPacket  (in $v0)
    // param int nNumExtraQW  (in $v0)
    // param void *pData  (in $v0)
    {   // 0x001C60C0-0x001C6150
        u_long128 ___ltmp;  // in $v0
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        PWSpecularDataTag *lpSpecularData;  // in $s0
        unsigned long long tmp1;  // in $v0
        unsigned long long tmp;  // in $a0
    }
}

// 0x001C6150-0x001C61C8 (120 bytes), lines 2940-2994
// _PW2MatSetupCodeDefault__FiiPv
static int _PW2MatSetupCodeDefault(int bKeepPacket, int nNumExtraQW, void *pData)
{
    // param int bKeepPacket  (in $v0)
    // param int nNumExtraQW  (in $v0)
    // param void *pData  (in $v0)
    {   // 0x001C6150-0x001C61C8
        u_long128 ___ltmp;  // in $v0
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        PWDefaultDataTag *lpDefaultData;  // in $s0
        unsigned long long tmp1;  // in $v0
        unsigned long long tmp;  // in $a0
    }
}

// 0x001C61D0-0x001C67B4 (1508 bytes), lines 2590-2921
// _PW2InstanceCodeLineList__FP10RpGeometryP6RpMeshP17GsPS2RenderObject
static int _PW2InstanceCodeLineList(RpGeometry *pGeometry, RpMesh *pMesh, GsPS2RenderObject *pObject)
{
    // param RpGeometry *pGeometry  (in $s5)
    // param RpMesh *pMesh  ($sp+348)
    // param GsPS2RenderObject *pObject  (in $s2)
    {   // 0x001C61D0-0x001C67B4
        unsigned char *pRGBA;  // in $t4
        float *pXYZW;  // in $t3
        RpMorphTarget *morphTarget;  // in $t2
        int indexOffset;  // in $t1
        int xyzOff;  // in $a3
        int batchSize;  // in $t0
        int k;  // in $a3
        int i;  // in $a2
        unsigned char *pMemory;  // in $a1
        int rgbaOff;  // $sp+300
        int xyzOff;  // $sp+296
        int batchSize;  // $sp+272
        int i;  // in $s6
        unsigned long long *pLastDMAtag;  // in $s7
        unsigned long long *pData;  // in $s3
        unsigned char *pMemory;  // in $v0
        int numPerTag;  // in $a3
        int size8QWAlign;  // in $a2
        int numActualVertices;  // in $v0
        unsigned char *pNewMemory;  // in $s2
        int numBatchesPerDMAtag;  // $sp+256
        int rgbaOffsetLast;  // $sp+240
        int rgbaOffsetFull;  // $sp+224
        int xyzOffsetLast;  // $sp+208
        int xyzOffsetFull;  // $sp+192
        int numBatches;  // in $s1
        int numVertsBatch;  // $sp+176
        int numVertsLast;  // in $fp
        int batchSizeLast;  // in $s0
        int batchSizeFull;  // $sp+160
        int size;  // in $v0
    }
}

// 0x001C67C0-0x001C70CC (2316 bytes), lines 2071-2559
// _PW2InstanceCodeGlass__FP10RpGeometryP6RpMeshP17GsPS2RenderObject
static int _PW2InstanceCodeGlass(RpGeometry *pGeometry, RpMesh *pMesh, GsPS2RenderObject *pObject)
{
    // param RpGeometry *pGeometry  (in $s0)
    // param RpMesh *pMesh  ($sp+380)
    // param GsPS2RenderObject *pObject  (in $s4)
    {   // 0x001C67C0-0x001C70CC
        unsigned char blue;  // in $t3
        unsigned char alpha;  // in $a2
        unsigned short index;  // in $v0
        unsigned char *pRGB;  // in $t4
        signed char *pNORM;  // in $t3
        float *pXYZW;  // in $a2
        RpMesh *pLocalMesh;  // in $a2
        signed char *pADC;  // in $v0
        RpMorphTarget *morphTarget;  // in $s5
        int indexOffset;  // in $t2
        int normOff;  // in $a2
        int xyzOff;  // in $a1
        int batchSize;  // in $t1
        int k;  // in $a1
        int j;  // in $t0
        int i;  // in $a1
        unsigned char *pMemory;  // in $s4
        int normOff;  // $sp+332
        int rgbOff;  // $sp+328
        int xyzOff;  // $sp+324
        int batchSize;  // $sp+304
        int i;  // in $s7
        unsigned long long *pLastDMAtag;  // in $fp
        unsigned long long *pData;  // in $s4
        unsigned char *pMemory;  // in $v0
        int numPerTag;  // in $a3
        int size8QWAlign;  // in $a2
        int numActualVertices;  // in $a1
        unsigned char *pNewMemory;  // in $s6
        int numBatchesPerDMAtag;  // $sp+288
        int rgbOffsetLast;  // $sp+272
        int rgbOffsetFull;  // $sp+256
        int normOffsetLast;  // $sp+240
        int normOffsetFull;  // $sp+224
        int xyzOffsetLast;  // $sp+208
        int xyzOffsetFull;  // $sp+192
        int numBatches;  // in $s3
        int numVertsBatch;  // $sp+176
        int numVertsLast;  // $sp+160
        int batchSizeLast;  // in $s2
        int batchSizeFull;  // in $s1
        int size;  // in $v0
    }
}

// 0x001C70D0-0x001C7B10 (2624 bytes), lines 1560-2040
// _PW2InstanceCodeWater__FP10RpGeometryP6RpMeshP17GsPS2RenderObject
static int _PW2InstanceCodeWater(RpGeometry *pGeometry, RpMesh *pMesh, GsPS2RenderObject *pObject)
{
    // param RpGeometry *pGeometry  (in $s4)
    // param RpMesh *pMesh  ($sp+572)
    // param GsPS2RenderObject *pObject  (in $s3)
    {   // 0x001C70D0-0x001C7B10
        unsigned char alpha;  // in $v0
        unsigned int lnSeed;  // in $v0
        unsigned char blue;  // in $a3
        unsigned char *pFREQALPHA;  // $sp+464
        unsigned char *pRGB;  // in $a1
        float *pUV;  // in $a0
        float *pXYZW;  // in $v1
        RpMesh *pLocalMesh;  // in $a1
        signed char *pADC;  // in $s6
        RpMorphTarget *morphTarget;  // $sp+448
        int indexOffset;  // $sp+432
        int rgbOff;  // in $a0
        int uvOff;  // in $v1
        int xyzOff;  // in $v0
        int batchSize;  // $sp+416
        int k;  // in $v0
        int j;  // $sp+400
        int i;  // in $a0
        unsigned char *pMemory;  // in $s7
        int faOff;  // $sp+396
        int rgbOff;  // $sp+392
        int uvOff;  // $sp+388
        int xyzOff;  // $sp+384
        int batchSize;  // $sp+368
        int i;  // in $s6
        unsigned long long *pLastDMAtag;  // $sp+364
        unsigned long long *pData;  // in $s5
        unsigned char *pMemory;  // in $v0
        int numPerTag;  // in $a3
        int size8QWAlign;  // in $a0
        int numActualVertices;  // in $v0
        unsigned char *pNewMemory;  // in $fp
        int numBatchesPerDMAtag;  // $sp+336
        int faOffsetLast;  // $sp+320
        int faOffsetFull;  // $sp+304
        int rgbOffsetLast;  // $sp+288
        int rgbOffsetFull;  // $sp+272
        int uvOffsetLast;  // $sp+256
        int uvOffsetFull;  // $sp+240
        int xyzOffsetLast;  // $sp+224
        int xyzOffsetFull;  // $sp+208
        int numBatches;  // in $s2
        int numVertsBatch;  // in $s7
        int numVertsLast;  // $sp+192
        int batchSizeLast;  // in $s1
        int batchSizeFull;  // in $s0
        int size;  // in $v0
    }
}

// 0x001C7B10-0x001C857C (2668 bytes), lines 949-1507
// _PW2InstanceCodeNormals__FP10RpGeometryP6RpMeshP17GsPS2RenderObject
static int _PW2InstanceCodeNormals(RpGeometry *pGeometry, RpMesh *pMesh, GsPS2RenderObject *pObject)
{
    // param RpGeometry *pGeometry  (in $s0)
    // param RpMesh *pMesh  ($sp+412)
    // param GsPS2RenderObject *pObject  (in $s4)
    {   // 0x001C7B10-0x001C857C
        unsigned char alpha;  // in $v1
        unsigned char blue;  // in $t6
        unsigned short index;  // in $v0
        signed char *pNORM;  // in $t0
        unsigned char *pRGBA;  // in $a1
        float *pUV;  // in $s6
        float *pXYZW;  // in $a0
        RpMesh *pLocalMesh;  // in $a2
        signed char *pADC;  // in $v0
        RpMorphTarget *morphTarget;  // in $s5
        int indexOffset;  // in $a3
        int rgbaOff;  // in $t0
        int uvOff;  // in $a3
        int xyzOff;  // in $v1
        int batchSize;  // in $a2
        int k;  // in $v1
        int j;  // in $a1
        int i;  // in $a1
        unsigned char *pMemory;  // in $s4
        int normOff;  // $sp+332
        int rgbaOff;  // $sp+328
        int uvOff;  // $sp+324
        int xyzOff;  // $sp+320
        int batchSize;  // $sp+304
        int i;  // $sp+288
        unsigned long long *pLastDMAtag;  // $sp+284
        unsigned long long *pData;  // in $s4
        unsigned char *pMemory;  // in $v0
        int numPerTag;  // in $a3
        int size8QWAlign;  // in $a2
        int numActualVertices;  // in $v0
        int lbTextured;  // in $s7
        unsigned char *pNewMemory;  // in $fp
        int numBatchesPerDMAtag;  // $sp+256
        int normOffsetLast;  // in $v0
        int normOffsetFull;  // in $v0
        int rgbaOffsetLast;  // in $v0
        int rgbaOffsetFull;  // in $v0
        int uvOffsetLast;  // $sp+240
        int uvOffsetFull;  // $sp+224
        int xyzOffsetLast;  // $sp+208
        int xyzOffsetFull;  // $sp+192
        int numBatches;  // in $s3
        int numVertsBatch;  // $sp+176
        int numVertsLast;  // $sp+160
        int batchSizeLast;  // in $s2
        int batchSizeFull;  // in $s1
        int size;  // in $v0
    }
}

// 0x001C8580-0x001C8D90 (2064 bytes), lines 474-918
// _PW2InstanceCode__FP10RpGeometryP6RpMeshP17GsPS2RenderObject
static int _PW2InstanceCode(RpGeometry *pGeometry, RpMesh *pMesh, GsPS2RenderObject *pObject)
{
    // param RpGeometry *pGeometry  (in $s5)
    // param RpMesh *pMesh  ($sp+412)
    // param GsPS2RenderObject *pObject  (in $s3)
    {   // 0x001C8580-0x001C8D90
        unsigned char blue;  // in $t1
        unsigned char *pRGBA;  // in $t2
        float *pUV;  // in $s6
        float *pXYZW;  // in $t1
        RpMesh *pLocalMesh;  // in $a2
        signed char *pADC;  // in $v0
        RpMorphTarget *morphTarget;  // in $s4
        int indexOffset;  // in $t0
        int uvOff;  // in $t2
        int xyzOff;  // in $v1
        int batchSize;  // in $a3
        int k;  // in $v1
        int i;  // in $a1
        unsigned char *pMemory;  // in $s3
        int rgbaOff;  // $sp+364
        int uvOff;  // $sp+360
        int xyzOff;  // $sp+356
        int batchSize;  // $sp+336
        int i;  // $sp+320
        unsigned long long *pLastDMAtag;  // $sp+316
        unsigned long long *pData;  // in $s3
        unsigned char *pMemory;  // in $v0
        int numPerTag;  // in $a3
        int size8QWAlign;  // in $a1
        int numActualVertices;  // in $v0
        int lbTextured;  // in $s7
        unsigned char *pNewMemory;  // in $fp
        int numBatchesPerDMAtag;  // $sp+288
        int rgbaOffsetLast;  // $sp+272
        int rgbaOffsetFull;  // $sp+256
        int uvOffsetLast;  // $sp+240
        int uvOffsetFull;  // $sp+224
        int xyzOffsetLast;  // $sp+208
        int xyzOffsetFull;  // $sp+192
        int numBatches;  // in $s2
        int numVertsBatch;  // $sp+176
        int numVertsLast;  // $sp+160
        int batchSizeLast;  // in $s1
        int batchSizeFull;  // in $s0
        int size;  // in $v0
    }
}

// 0x001C8D90-0x001C8E04 (116 bytes), lines 419-443
// PW2CreateLineList__Fv
GsPS2Pipeline *PW2CreateLineList()
{
    {   // 0x001C8D90-0x001C8E04
        GsPS2Pipeline *pPW2LineList;  // in $v0
    }
}

// 0x001C8E10-0x001C8E84 (116 bytes), lines 382-406
// PW2CreateBackFaceCullGlass__Fv
GsPS2Pipeline *PW2CreateBackFaceCullGlass()
{
    {   // 0x001C8E10-0x001C8E84
        GsPS2Pipeline *pPW2BackFaceCullGlass;  // in $v0
    }
}

// 0x001C8E90-0x001C8F04 (116 bytes), lines 344-368
// PW2CreateDoubleSidedGlass__Fv
GsPS2Pipeline *PW2CreateDoubleSidedGlass()
{
    {   // 0x001C8E90-0x001C8F04
        GsPS2Pipeline *pPW2DoubleSidedGlass;  // in $v0
    }
}

// 0x001C8F10-0x001C8F84 (116 bytes), lines 306-330
// PW2CreateWater__Fv
GsPS2Pipeline *PW2CreateWater()
{
    {   // 0x001C8F10-0x001C8F84
        GsPS2Pipeline *pPW2Water;  // in $v0
    }
}

// 0x001C8F90-0x001C9004 (116 bytes), lines 269-293
// PW2CreateBackFaceCullSpecular__Fv
GsPS2Pipeline *PW2CreateBackFaceCullSpecular()
{
    {   // 0x001C8F90-0x001C9004
        GsPS2Pipeline *pPW2BackFaceCullSpecular;  // in $v0
    }
}

// 0x001C9010-0x001C9084 (116 bytes), lines 231-255
// PW2CreateBackFaceCull__Fv
GsPS2Pipeline *PW2CreateBackFaceCull()
{
    {   // 0x001C9010-0x001C9084
        GsPS2Pipeline *pPW2BackFaceCull;  // in $v0
    }
}

// 0x001C9090-0x001C9104 (116 bytes), lines 193-217
// PW2CreateDoubleSidedSpecular__Fv
GsPS2Pipeline *PW2CreateDoubleSidedSpecular()
{
    {   // 0x001C9090-0x001C9104
        GsPS2Pipeline *pPW2DoubleSidedSpecular;  // in $v0
    }
}

// 0x001C9110-0x001C9184 (116 bytes), lines 155-179
// PW2CreateDoubleSided__Fv
GsPS2Pipeline *PW2CreateDoubleSided()
{
    {   // 0x001C9110-0x001C9184
        GsPS2Pipeline *pPW2DoubleSided;  // in $v0
    }
}

