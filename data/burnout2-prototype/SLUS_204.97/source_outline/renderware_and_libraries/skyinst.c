// skyinst.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int (*overloadWorldPipes)();
int (*unOverloadWorldPipes)();
int SkyIm2DRenderLine(RwSky2DVertex *, int, int, int);  // 0x0016E880
int SkyIm2DRenderTriangle(RwSky2DVertex *, int, int, int, int);  // 0x0016EB20
int SkyIm2DRenderPrimitive(RwPrimitiveType, RwSky2DVertex *, int);  // 0x0016F990
int SkyIm2DRenderIndexedPrimitive(RwPrimitiveType, RwSky2DVertex *, int, unsigned short *, int);  // 0x001708F0
u_long128 nullLightBlock[2];  // 0x002A3390
static _skyImDispatchModel dispatchModel2DNoFog;  // 0x002C3EE0
static _skyImDispatchModel dispatchModel2DFog;  // 0x002C3EF0
long skyPrim_State;  // 0x003103B0
int skyTLClipperMode;  // 0x003103D8
u_long128 *_rwDMAPktPtr;  // 0x003109BC
RwVideoMode *skyVideoMode;  // 0x003109D8
unsigned char skyTransType;  // 0x00310AC4
void *skyUploadedCode;  // 0x00310AC8
unsigned int skyUserSwitch1;  // 0x00310ACC
unsigned int skyUserSwitch2;  // 0x00310AD0
int skyTSClipperMode;  // 0x00310AD4
static unsigned int maxCopyLinePacketSize;  // 0x00310AD8
static unsigned int maxCopyTriPacketSize;  // 0x00310ADC
float farFogPlane;  // 0x00310AE0
int useFarClip;  // 0x00310AE4
unsigned int ourGlobals[4096];  // 0x004486D0
u_long128 contCmd128;  // 0x0044DAF0
u_long128 dma10Header128;  // 0x0044DB00
u_long128 dma1End128;  // 0x0044DB10
u_long128 dma1Header128;  // 0x0044DB20
u_long128 dma1Ret128;  // 0x0044DB30
u_long128 gifTag128;  // 0x0044DB40
u_long128 gifTagPrim128;  // 0x0044DB50
u_long128 maskCmd128;  // 0x0044DB60
u_long128 runCmd128;  // 0x0044DB70
u_long128 unmaskCmd128;  // 0x0044DB80
u_long128 zero128;  // 0x0044DB90
u_long128 skyClipVect1;  // 0x0044DBA0
u_long128 skyClipVect2;  // 0x0044DBB0
u_long128 skyCClipVect1;  // 0x0044DBC0
u_long128 skyCClipVect2;  // 0x0044DBD0
u_long128 vu1DataNearClip;  // 0x0044DBE0
u_long128 vu1DataFarClip;  // 0x0044DBF0
u_long128 xMaxYMax128;  // 0x0044DC00
u_long128 vu1DataXYZScale;  // 0x0044DC10
u_long128 vu1DataXYZShift;  // 0x0044DC20
u_long128 vu1DataOffset3D;  // 0x0044DC30
static u_long128 baseOffsetCmd128;  // 0x0044DC40
static u_long128 flushCmd128;  // 0x0044DC50
static u_long128 dmaEnd128;  // 0x0044DC60
static u_long128 colScaleNoTexCmd128;  // 0x0044DC70
static u_long128 colScaleTexCmd128;  // 0x0044DC80
static u_long128 prologHeader2D128;  // 0x0044DC90
static u_long128 prologHeader3D128;  // 0x0044DCA0
static u_long128 vu1DataOffset2D;  // 0x0044DCB0

// ---- functions ----

// 0x0016DBC0-0x0016DDB4 (500 bytes), lines 161-231
static int open2DVU1Pkt(unsigned int batchCost, unsigned int primCost, unsigned int numPrims, unsigned int primCode, void *code)
{
    // param unsigned int batchCost  (in $v0)
    // param unsigned int primCost  (in $v0)
    // param unsigned int numPrims  (in $v0)
    // param unsigned int primCode  (in $s2)
    // param void *code  (in $s1)
    {   // 0x0016DBC0-0x0016DDB4
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $t0
        unsigned int packetSize;  // in $v0
    }
}

// 0x0016DDC0-0x0016E04C (652 bytes), lines 383-504
int openVU1SetupPkt(unsigned int primCode, void *code, RwMatrixTag *matrix, u_long128 *lightPkt, unsigned int lightPktLen)
{
    // param unsigned int primCode  (in $s5)
    // param void *code  (in $s4)
    // param RwMatrixTag *matrix  (in $s3)
    // param u_long128 *lightPkt  (in $s2)
    // param unsigned int lightPktLen  (in $s1)
    {   // 0x0016DDC0-0x0016E04C
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $a0
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        unsigned int *matVector;  // in $v0
        unsigned long tmp1;  // in $v0
        unsigned long tmp;  // in $v0
        unsigned int packetSize;  // in $v0
    }
}

// 0x0016E050-0x0016E254 (516 bytes), lines 510-664
int openVU1SetupPktNew(RwMatrixTag *matrix, u_long128 *lightPkt, unsigned int lightPktLen)
{
    // param RwMatrixTag *matrix  (in $s2)
    // param u_long128 *lightPkt  (in $s1)
    // param unsigned int lightPktLen  (in $s0)
    {   // 0x0016E050-0x0016E254
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a0
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        unsigned int *matVector;  // in $v0
        unsigned long tmp1;  // in $v0
        unsigned long tmp;  // in $v0
        unsigned int dest;  // in $s4
        unsigned int numMatrixQW;  // in $v0
        unsigned int numVIFQW;  // in $s3
        unsigned int numDMAQW;  // in $s5
    }
}

// 0x0016E260-0x0016E3BC (348 bytes), lines 673-698
static void closeAndDispatchVU1Packet()
{
    {   // 0x0016E260-0x0016E3BC
        u_long128 ___ltmp;  // in $v1
    }
}

// 0x0016E3C0-0x0016E6A8 (744 bytes), lines 826-972
static void initVu1DispatchStuff()
{
    {   // 0x0016E3C0-0x0016E6A8
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        unsigned int packetSize;  // in $a2
    }
}

// 0x0016E6B0-0x0016E878 (456 bytes), lines 999-1051
static void addCopyVU1Line(_skyImDispatchModel *dispatchModel, RwMatrixTag *matrix, RwSky2DVertex *vert1, RwSky2DVertex *vert2)
{
    // param _skyImDispatchModel *dispatchModel  (in $v1)
    // param RwMatrixTag *matrix  (in $v0)
    // param RwSky2DVertex *vert1  (in $s1)
    // param RwSky2DVertex *vert2  (in $s0)
    {   // 0x0016E6B0-0x0016E878
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a3
    }
}

// 0x0016E880-0x0016E8D4 (84 bytes), lines 1056-1072
static int SkyIm2DRenderLine(RwSky2DVertex *verts, int v1, int v2)
{
    // param RwSky2DVertex *verts  (in $v0)
    // param int v1  (in $v0)
    // param int v2  (in $v0)
    {   // 0x0016E880-0x0016E8D4
    }
}

// 0x0016E8E0-0x0016EB14 (564 bytes), lines 1078-1137
static void addCopyVU1Triangle(_skyImDispatchModel *dispatchModel, RwMatrixTag *matrix, RwSky2DVertex *vert1, RwSky2DVertex *vert2, RwSky2DVertex *vert3)
{
    // param _skyImDispatchModel *dispatchModel  (in $v1)
    // param RwMatrixTag *matrix  (in $v0)
    // param RwSky2DVertex *vert1  (in $s2)
    // param RwSky2DVertex *vert2  (in $s1)
    // param RwSky2DVertex *vert3  (in $s0)
    {   // 0x0016E8E0-0x0016EB14
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a3
    }
}

// 0x0016EB20-0x0016EB7C (92 bytes), lines 1142-1159
static int SkyIm2DRenderTriangle(RwSky2DVertex *verts, int v1, int v2, int v3)
{
    // param RwSky2DVertex *verts  (in $v0)
    // param int v1  (in $v0)
    // param int v2  (in $v0)
    // param int v3  (in $v0)
    {   // 0x0016EB20-0x0016EB7C
    }
}

// 0x0016EB80-0x0016EDF8 (632 bytes), lines 1166-1237
static void addCopyVU1PrimLineList(_skyImDispatchModel *dispatchModel, RwMatrixTag *matrix, RwSky2DVertex *verts, unsigned int numVerts)
{
    // param _skyImDispatchModel *dispatchModel  (in $s4)
    // param RwMatrixTag *matrix  (in $s3)
    // param RwSky2DVertex *verts  (in $s2)
    // param unsigned int numVerts  (in $v0)
    {   // 0x0016EB80-0x0016EDF8
        RwSky2DVertex *v2;  // in $v0
        u_long128 ___ltmp;  // in $t5
        u_long128 ___ltmp;  // in $t4
        unsigned int batchCount;  // in $a3
        u_long128 runCmd;  // in $a2
        unsigned int thisPacketLines;  // in $v0
        unsigned int numLines;  // in $s0
    }
}

// 0x0016EE00-0x0016F078 (632 bytes), lines 1244-1315
static void addCopyVU1PrimPolyLine(_skyImDispatchModel *dispatchModel, RwMatrixTag *matrix, RwSky2DVertex *verts, unsigned int numVerts)
{
    // param _skyImDispatchModel *dispatchModel  (in $s4)
    // param RwMatrixTag *matrix  (in $s3)
    // param RwSky2DVertex *verts  (in $s2)
    // param unsigned int numVerts  (in $v0)
    {   // 0x0016EE00-0x0016F078
        RwSky2DVertex *v2;  // in $v0
        u_long128 ___ltmp;  // in $t5
        u_long128 ___ltmp;  // in $t4
        unsigned int batchCount;  // in $a3
        u_long128 runCmd;  // in $a2
        unsigned int thisPacketLines;  // in $v0
        unsigned int numLines;  // in $s0
    }
}

// 0x0016F080-0x0016F370 (752 bytes), lines 1322-1399
static void addCopyVU1PrimTriList(_skyImDispatchModel *dispatchModel, RwMatrixTag *matrix, RwSky2DVertex *verts, unsigned int numVerts)
{
    // param _skyImDispatchModel *dispatchModel  (in $s4)
    // param RwMatrixTag *matrix  (in $s3)
    // param RwSky2DVertex *verts  (in $s2)
    // param unsigned int numVerts  (in $v0)
    {   // 0x0016F080-0x0016F370
        RwSky2DVertex *v3;  // in $v0
        RwSky2DVertex *v2;  // in $v0
        u_long128 ___ltmp;  // in $t5
        u_long128 ___ltmp;  // in $t4
        unsigned int batchCount;  // in $a3
        u_long128 runCmd;  // in $a2
        unsigned int thisPacketTris;  // in $v0
        unsigned int numTris;  // in $s0
    }
}

// 0x0016F370-0x0016F684 (788 bytes), lines 1406-1485
static void addCopyVU1PrimTriStrip(_skyImDispatchModel *dispatchModel, RwMatrixTag *matrix, RwSky2DVertex *verts, unsigned int numVerts)
{
    // param _skyImDispatchModel *dispatchModel  (in $s5)
    // param RwMatrixTag *matrix  (in $s4)
    // param RwSky2DVertex *verts  (in $s3)
    // param unsigned int numVerts  (in $v0)
    {   // 0x0016F370-0x0016F684
        RwSky2DVertex *v3;  // in $t2
        RwSky2DVertex *v2;  // in $t1
        u_long128 ___ltmp;  // in $t5
        u_long128 ___ltmp;  // in $t4
        unsigned int batchCount;  // in $a3
        u_long128 runCmd;  // in $a2
        unsigned int thisPacketTris;  // in $v0
        unsigned int vertInd;  // in $s1
        unsigned int numTris;  // in $s0
    }
}

// 0x0016F690-0x0016F98C (764 bytes), lines 1492-1566
static void addCopyVU1PrimTriFan(_skyImDispatchModel *dispatchModel, RwMatrixTag *matrix, RwSky2DVertex *verts, unsigned int numVerts)
{
    // param _skyImDispatchModel *dispatchModel  (in $s5)
    // param RwMatrixTag *matrix  (in $s4)
    // param RwSky2DVertex *verts  (in $s3)
    // param unsigned int numVerts  (in $v0)
    {   // 0x0016F690-0x0016F98C
        RwSky2DVertex *v3;  // in $v0
        RwSky2DVertex *v2;  // in $v0
        u_long128 ___ltmp;  // in $t5
        u_long128 ___ltmp;  // in $t4
        unsigned int batchCount;  // in $a3
        u_long128 runCmd;  // in $a2
        RwSky2DVertex *v1;  // in $s1
        unsigned int thisPacketTris;  // in $v0
        unsigned int numTris;  // in $s0
    }
}

// 0x0016F990-0x0016F9FC (108 bytes), lines 1614-1632
static int SkyIm2DRenderPrimitive(RwPrimitiveType primType, RwSky2DVertex *verts, int numVerts)
{
    // param RwPrimitiveType primType  (in $v1)
    // param RwSky2DVertex *verts  (in $a1)
    // param int numVerts  (in $v0)
    {   // 0x0016F990-0x0016F9FC
        void (*SkyAddCopyVU1PrimFuncArray[6])(_skyImDispatchModel *, RwMatrixTag *, RwSky2DVertex *, unsigned int);  // at 0x002A33B0
    }
}

// 0x0016FA00-0x0016FC9C (668 bytes), lines 1645-1717
static void addCopyVU1IndPrimLineList(_skyImDispatchModel *dispatchModel, RwMatrixTag *matrix, RwSky2DVertex *verts, unsigned short *indices, unsigned int numIndices)
{
    // param _skyImDispatchModel *dispatchModel  (in $s5)
    // param RwMatrixTag *matrix  (in $s4)
    // param RwSky2DVertex *verts  (in $s3)
    // param unsigned short *indices  (in $s2)
    // param unsigned int numIndices  (in $v0)
    {   // 0x0016FA00-0x0016FC9C
        RwSky2DVertex *v2;  // in $t2
        RwSky2DVertex *v1;  // in $t1
        u_long128 ___ltmp;  // in $t5
        u_long128 ___ltmp;  // in $t4
        unsigned int batchCount;  // in $a3
        u_long128 runCmd;  // in $a2
        unsigned int thisPacketLines;  // in $v0
        unsigned int numLines;  // in $s0
    }
}

// 0x0016FCA0-0x0016FF3C (668 bytes), lines 1724-1794
static void addCopyVU1IndPrimPolyLine(_skyImDispatchModel *dispatchModel, RwMatrixTag *matrix, RwSky2DVertex *verts, unsigned short *indices, unsigned int numIndices)
{
    // param _skyImDispatchModel *dispatchModel  (in $s5)
    // param RwMatrixTag *matrix  (in $s4)
    // param RwSky2DVertex *verts  (in $s3)
    // param unsigned short *indices  (in $s2)
    // param unsigned int numIndices  (in $v0)
    {   // 0x0016FCA0-0x0016FF3C
        RwSky2DVertex *v2;  // in $t2
        RwSky2DVertex *v1;  // in $t1
        u_long128 ___ltmp;  // in $t5
        u_long128 ___ltmp;  // in $t4
        unsigned int batchCount;  // in $a3
        u_long128 runCmd;  // in $a2
        unsigned int thisPacketLines;  // in $v0
        unsigned int numLines;  // in $s0
    }
}

// 0x0016FF40-0x00170264 (804 bytes), lines 1801-1879
static void addCopyVU1IndPrimTriList(_skyImDispatchModel *dispatchModel, RwMatrixTag *matrix, RwSky2DVertex *verts, unsigned short *indices, unsigned int numIndices)
{
    // param _skyImDispatchModel *dispatchModel  (in $s5)
    // param RwMatrixTag *matrix  (in $s4)
    // param RwSky2DVertex *verts  (in $s3)
    // param unsigned short *indices  (in $s2)
    // param unsigned int numIndices  (in $v0)
    {   // 0x0016FF40-0x00170264
        RwSky2DVertex *v3;  // in $t3
        RwSky2DVertex *v2;  // in $t2
        RwSky2DVertex *v1;  // in $t1
        u_long128 ___ltmp;  // in $t5
        u_long128 ___ltmp;  // in $t3
        unsigned int batchCount;  // in $a3
        u_long128 runCmd;  // in $a2
        unsigned int thisPacketTris;  // in $v0
        unsigned int numTris;  // in $s0
    }
}

// 0x00170270-0x001705B8 (840 bytes), lines 1886-1966
static void addCopyVU1IndPrimTriStrip(_skyImDispatchModel *dispatchModel, RwMatrixTag *matrix, RwSky2DVertex *verts, unsigned short *indices, unsigned int numIndices)
{
    // param _skyImDispatchModel *dispatchModel  (in $s5)
    // param RwMatrixTag *matrix  (in $s6)
    // param RwSky2DVertex *verts  (in $s4)
    // param unsigned short *indices  (in $s3)
    // param unsigned int numIndices  (in $v0)
    {   // 0x00170270-0x001705B8
        RwSky2DVertex *v3;  // in $t3
        RwSky2DVertex *v2;  // in $v1
        RwSky2DVertex *v1;  // in $a0
        u_long128 ___ltmp;  // in $t5
        u_long128 ___ltmp;  // in $t3
        unsigned int batchCount;  // in $t1
        u_long128 runCmd;  // in $t0
        unsigned int thisPacketTris;  // in $v0
        unsigned int vertInd;  // in $s1
        unsigned int numTris;  // in $s0
    }
}

// 0x001705C0-0x001708E8 (808 bytes), lines 1973-2051
static void addCopyVU1IndPrimTriFan(_skyImDispatchModel *dispatchModel, RwMatrixTag *matrix, RwSky2DVertex *verts, unsigned short *indices, unsigned int numIndices)
{
    // param _skyImDispatchModel *dispatchModel  (in $s5)
    // param RwMatrixTag *matrix  (in $s6)
    // param RwSky2DVertex *verts  (in $s4)
    // param unsigned short *indices  (in $s3)
    // param unsigned int numIndices  (in $v0)
    {   // 0x001705C0-0x001708E8
        RwSky2DVertex *v3;  // in $t2
        RwSky2DVertex *v2;  // in $t1
        u_long128 ___ltmp;  // in $t5
        u_long128 ___ltmp;  // in $t4
        unsigned int batchCount;  // in $a3
        u_long128 runCmd;  // in $a2
        RwSky2DVertex *v1;  // in $s1
        unsigned int thisPacketTris;  // in $v0
        unsigned int numTris;  // in $s0
    }
}

// 0x001708F0-0x00170958 (104 bytes), lines 2104-2123
static int SkyIm2DRenderIndexedPrimitive(RwPrimitiveType primType, RwSky2DVertex *verts, unsigned short *indices, int numIndices)
{
    // param RwPrimitiveType primType  (in $v1)
    // param RwSky2DVertex *verts  (in $v0)
    // param unsigned short *indices  (in $v0)
    // param int numIndices  (in $v0)
    {   // 0x001708F0-0x00170958
        void (*SkyAddCopyVU1IndPrimFuncArray[6])(_skyImDispatchModel *, RwMatrixTag *, RwSky2DVertex *, unsigned short *, unsigned int);  // at 0x002A33D0
    }
}

// 0x00170960-0x0017099C (60 bytes), lines 2131-2137
void _rwSkyOverloadPipelines()
{
    {   // 0x00170960-0x0017099C
    }
}

// 0x001709A0-0x001709A8 (8 bytes), lines 2150-2150
void _rwSkyUnOverloadPipelines()
{
    {   // 0x001709A0-0x001709A8
    }
}

// 0x001709B0-0x00170DE0 (1072 bytes), lines 2157-2292
void _rwSkyPipeSetupForCamera(RwCamera *camera)
{
    // param RwCamera *camera  (in $v0)
    {   // 0x001709B0-0x00170DE0
        RwRaster *frameBuffer;  // in $t3
        float Delta;  // $sp+0
        float *XYZShift;  // in $t7
        float *XYZScale;  // in $t6
        float *XYMax;  // in $t2
        float *Offset3D;  // in $t1
        float *Offset2D;  // in $t0
        float *NearClip;  // in $t5
        float *FarClip;  // in $t4
        float *CClipVect2;  // in $a3
        float *CClipVect1;  // in $a2
        float *ClipVect2;  // in $a1
        float *ClipVect1;  // in $v1
    }
}

