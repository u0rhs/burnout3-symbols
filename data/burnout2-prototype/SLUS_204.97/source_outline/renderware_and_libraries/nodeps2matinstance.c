// nodeps2matinstance.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void reDestroyCallback(RwResEntry *);  // 0x00196D60
static RxClusterRef nodeClusters[2];  // 0x002B3F70
char RxPS2AttributeSet[];  // 0x00310530
RwModuleInfo resourcesModule;  // 0x003108C8
unsigned int ourGlobals[4096];  // 0x004486D0
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00

// ---- functions ----

// 0x00196D60-0x00196D90 (48 bytes), lines 234-251
void reDestroyCallback(RwResEntry *resEntry)
{
    // param RwResEntry *resEntry  (in $v0)
    {   // 0x00196D60-0x00196D90
    }
}

// 0x00196D90-0x00197C40 (3760 bytes), lines 258-1259
static int RabinsConstructionTimeCode(rwPS2MatInstancePvtData *pvtdata)
{
    // param rwPS2MatInstancePvtData *pvtdata  (in $v0)
    {   // 0x00196D90-0x00197C40
        int batchSize;  // in $s0
        int batchSize;  // in $t7
        int batchSize;  // in $s0
        int batchSize;  // in $t8
        int i;  // in $t1
        int prevSize;  // in $t7
        int dataTmp;  // in $t2
        int offsetOnVU;  // in $t1
        int numStripes;  // in $t1
        int opaqueStep;  // in $t0
        int sizeOnVU;  // in $v1
        int totallyOpaque;  // in $v0
    }
}

// 0x00197C40-0x001980BC (1148 bytes), lines 1269-1483
static int reInstanceFromIm3D(rwPS2ResEntryHeader *ps2ResHeader, RpMesh *mesh, RpMeshHeaderFlags flags, int numVerts, RxPS2DMASessionRecord *DMASessionRecord)
{
    // param rwPS2ResEntryHeader *ps2ResHeader  (in $v0)
    // param RpMesh *mesh  (in $v0)
    // param RpMeshHeaderFlags flags  (in $v0)
    // param int numVerts  (in $v0)
    // param RxPS2DMASessionRecord *DMASessionRecord  (in $v0)
    {   // 0x00197C40-0x001980BC
        RwRGBA col;  // $sp+108
        RxObjSpace3DVertex *verts;  // in $a2
        unsigned int *dataTmp;  // in $v0
        u_long128 *data;  // in $a1
        RxObjSpace3DVertex *vert;  // in $v1
        RxObjSpace3DVertex *verts;  // in $a2
        float *dataTmp;  // in $v0
        u_long128 *data;  // in $a1
        RwV3d pos;  // $sp+96
        RxObjSpace3DVertex *verts;  // in $s2
        float *dataTmp;  // in $v0
        u_long128 *data;  // in $s1
        unsigned short *indexArray;  // in $s0
        unsigned char *swap;  // in $v1
        unsigned char *vertInc;  // in $t9
        unsigned char *shiftMask2;  // in $t8
        unsigned char *shiftMask;  // in $t7
        unsigned int modCnt;  // in $t6
        unsigned int startIndOffset;  // in $v0
        unsigned int indOffset;  // in $t5
        unsigned int cntGen;  // in $t4
        int j;  // in $v0
        int vertCounter;  // in $t3
        unsigned int stripTmp;  // in $t2
        _rwIm3DPoolStash *stash;  // in $t1
        rwPS2indexLUTs IndexLUT;  // at 0x002C40F0
    }
}

// 0x001980C0-0x001988F8 (2104 bytes), lines 1494-1847
static int reInstanceFromWorldSector(rwPS2MatInstancePvtData *pvtdata, rwPS2ResEntryHeader *ps2ResHeader, RpMesh *mesh, RpMeshHeaderFlags flags, unsigned int numVerts, RxPS2DMASessionRecord *DMASessionRecord)
{
    // param rwPS2MatInstancePvtData *pvtdata  (in $v0)
    // param rwPS2ResEntryHeader *ps2ResHeader  (in $v0)
    // param RpMesh *mesh  (in $v0)
    // param RpMeshHeaderFlags flags  (in $v0)
    // param unsigned int numVerts  (in $v0)
    // param RxPS2DMASessionRecord *DMASessionRecord  (in $v0)
    {   // 0x001980C0-0x001988F8
        RpVertexNormal *normal;  // in $s5
        RpVertexNormal *normal;  // in $s5
        RpVertexNormal *normals;  // in $t1
        unsigned char *dataTmp;  // in $v0
        u_long128 *data;  // in $a3
        RwRGBA *col;  // in $s4
        RwRGBA *preLitLum;  // in $fp
        unsigned int *dataTmp;  // in $v0
        u_long128 *data;  // in $a3
        RwTexCoords *coord;  // in $t8
        RwTexCoords *tc2;  // in $s0
        RwTexCoords *tc1;  // in $t6
        float *dataTmp;  // in $v0
        u_long128 *data;  // in $a3
        RwTexCoords *coord;  // in $t6
        RwTexCoords *tc;  // in $s2
        float *dataTmp;  // in $v0
        u_long128 *data;  // in $s1
        RwV3d *pos;  // in $t6
        RwV3d *vertices;  // in $s5
        float *dataTmp;  // in $v0
        u_long128 *data;  // in $s4
        unsigned short *indexArray;  // in $a2
        unsigned char *swap;  // in $a3
        unsigned char *vertInc;  // in $t5
        unsigned char *shiftMask2;  // in $t4
        unsigned char *shiftMask;  // in $t3
        unsigned int modCnt;  // in $s3
        unsigned int startIndOffset;  // in $v0
        unsigned int indOffset;  // in $s2
        unsigned int cntGen;  // in $t2
        unsigned int stripTmp;  // in $v1
        int j;  // in $v0
        int vertCounter;  // in $s1
        RpWorld *world;  // in $v0
        rwPS2indexLUTs IndexLUT;  // at 0x002C4110
    }
}

// 0x00198900-0x00199798 (3736 bytes), lines 1858-2696
static int reInstanceFromAtomic(rwPS2MatInstancePvtData *pvtdata, rwPS2ResEntryHeader *ps2ResHeader, RpMesh *mesh, RpMeshHeaderFlags flags, unsigned int numVerts, unsigned short needToReInstance, RxPS2DMASessionRecord *DMASessionRecord)
{
    // param rwPS2MatInstancePvtData *pvtdata  (in $v0)
    // param rwPS2ResEntryHeader *ps2ResHeader  (in $v0)
    // param RpMesh *mesh  (in $v0)
    // param RpMeshHeaderFlags flags  (in $v0)
    // param unsigned int numVerts  (in $v0)
    // param unsigned short needToReInstance  (in $v0)
    // param RxPS2DMASessionRecord *DMASessionRecord  (in $v0)
    {   // 0x00198900-0x00199798
        RwRGBA *col;  // in $s2
        RwRGBA *preLitLum;  // in $a3
        unsigned int *dataTmp;  // in $a2
        u_long128 *data;  // in $a0
        RwTexCoords *coord;  // in $s6
        RwTexCoords *tc2;  // in $t5
        RwTexCoords *tc1;  // in $t4
        float *dataTmp;  // in $a3
        u_long128 *data;  // in $a2
        RwTexCoords *coord;  // in $a3
        RwTexCoords *tc;  // in $s1
        float *dataTmp;  // in $s0
        u_long128 *data;  // in $t5
        RwV3d *normal;  // in $s5
        RwV3d *normal;  // in $s5
        RwV3d *normals;  // in $t4
        unsigned char *dataTmp;  // in $a3
        u_long128 *data;  // in $a2
        RwV3d *pos;  // in $s5
        RwV3d *vertices;  // in $t4
        float *dataTmp;  // in $a3
        u_long128 *data;  // in $a2
        RwV3d *normal;  // in $s5
        RwV3d *normal;  // in $s5
        RwV3d *normals;  // in $t4
        unsigned char *dataTmp;  // in $a3
        u_long128 *data;  // in $a2
        RwV3d *pos;  // in $s5
        RwV3d *vertices;  // in $s2
        float *dataTmp;  // in $s1
        u_long128 *data;  // in $s0
        unsigned short *indexArray;  // in $t9
        unsigned char *swap;  // in $a2
        unsigned char *vertInc;  // in $t8
        unsigned char *shiftMask2;  // in $t7
        unsigned char *shiftMask;  // in $t6
        unsigned int modCnt;  // in $t5
        unsigned int startIndOffset;  // in $v0
        unsigned int indOffset;  // in $t4
        unsigned int cntGen;  // in $t3
        RpMorphTarget *endMorphTarget;  // in $s7
        RpMorphTarget *startMorphTarget;  // $sp+160
        int instanceNormal;  // in $fp
        int instanceXYZ;  // $sp+144
        unsigned int stripTmp;  // in $t2
        int j;  // in $a3
        int vertCounter;  // in $a2
        RpInterpolator *interpolator;  // in $s7
        RpGeometry *geom;  // in $v1
        rwPS2indexLUTs IndexLUT;  // at 0x002C4130
    }
}

// 0x001997A0-0x0019B914 (8564 bytes), lines 2716-4195
int _rwRabinsMatInstanceCode(RxPS2DMASessionRecord *DMASessionRecord, RxPS2Mesh *Mesh, rwPS2MatInstancePvtData *pvtdata)
{
    // param RxPS2DMASessionRecord *DMASessionRecord  ($sp+396)
    // param RxPS2Mesh *Mesh  (in $v0)
    // param rwPS2MatInstancePvtData *pvtdata  (in $s7)
    {   // 0x001997A0-0x0019B914
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // $sp+304
        u_long128 ___ltmp;  // in $v0
        int __size;  // in $t7
        u_long128 ___ltmp;  // in $a0
        int currentBatchSize;  // in $t6
        u_long128 ___ltmp;  // in $t5
        RpGeometry *geom;  // in $s3
        RwResEntry *result;  // in $v0
        int offset;  // in $v0
        int wroteATag;  // in $t4
        unsigned int sizeOnVU;  // in $s0
        unsigned long tmp;  // in $v0
        u_long128 *lastTag;  // in $t3
        u_long128 *data;  // in $t2
        int qwBatchSize;  // in $a0
        int qwBatchSize;  // in $t3
        int offset;  // in $v0
        short skip;  // in $t1
        int vertsEndCnt;  // in $t8
        int lastReverse;  // in $t2
        int nonOpaqueOffset;  // in $t1
        int vertsOver;  // in $a0
        int lastReverse;  // in $v1
        int viftags;  // in $v0
        RxCluster *cluster;  // in $s1
        rwPS2ClusterQuickInfo *quickinfo;  // in $v0
        unsigned int i;  // in $s5
        RpInterpolator *interpolator;  // in $a1
        RpGeometry *geom;  // in $a0
        unsigned int fastMorphing;  // in $fp
        int numMorphTargets;  // in $v0
        int j;  // in $t1
        int i;  // in $a0
        RpMesh *mesh;  // $sp+288
        rwPS2FieldRec fieldRec[11];  // $sp+400
        unsigned short needToReInstance;  // $sp+272
        unsigned short overloadFlags;  // $sp+256
        unsigned int numVerts;  // in $v0
        unsigned int size;  // in $s1
        unsigned int effectiveTotalVerts;  // $sp+240
        unsigned int batchesPerTag;  // $sp+224
        unsigned int batchSize;  // in $v0
        unsigned int numBatches;  // in $v0
        rwPS2ResEntryHeader *ps2ResHeader;  // in $s0
        RpMeshHeader *meshHeader;  // $sp+208
        RwResEntry **repEntry;  // in $s2
    }
}

// 0x0019B920-0x0019BE3C (1308 bytes), lines 4204-4438
int _rwPS2MatInstancePipelineNodeInit(RxPipelineNode *self)
{
    // param RxPipelineNode *self  (in $s2)
    {   // 0x0019B920-0x0019BE3C
        char string2[32];  // $sp+1952
        char string[256];  // $sp+1696
        char string[256];  // $sp+1440
        char string[256];  // $sp+1184
        char string[256];  // $sp+928
        char string[256];  // $sp+672
        char string[256];  // $sp+416
        unsigned int cliIndex;  // in $t7
        char string[256];  // $sp+160
        RxClusterDefinition *cluster;  // in $t6
        unsigned int CL_code;  // in $t5
        unsigned int numRequiredClusters;  // in $s1
        rwPS2MatInstanceInitData *initData;  // in $v0
        rwPS2MatInstancePvtData *pvtdata;  // in $s0
        int result;  // in $v0
    }
}

// 0x0019BE40-0x0019C018 (472 bytes), lines 4446-4493
static int PS2MatInstanceNodeBody(RxPipelineNode *self)
{
    // param RxPipelineNode *self  (in $s6)
    {   // 0x0019BE40-0x0019C018
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s0
        unsigned int i;  // in $s1
        RxPacket *pk;  // in $v0
        rwPS2MatInstancePvtData *pvtdata;  // in $s0
    }
}

// 0x0019C020-0x0019C37C (860 bytes), lines 4606-4757
RxPipelineNode *RxPipelineNodePS2MatInstanceGenerateCluster(RxPipelineNode *self, RxClusterDefinition *cluster2generate, unsigned int type)
{
    // param RxPipelineNode *self  (in $s3)
    // param RxClusterDefinition *cluster2generate  (in $s2)
    // param unsigned int type  (in $s1)
    {   // 0x0019C020-0x0019C37C
        RwError _rwErrorCode;  // $sp+88
        rwPS2MatInstanceInitData *data;  // in $v0
        RxNodeDefinition *nodespec;  // in $v0
        RxPipelineNode *result;  // in $s0
    }
}

// 0x0019C380-0x0019C4D0 (336 bytes), lines 4801-4837
RxPipelineNode *RxPS2MatInstanceSetVUBufferSizes(RxPipelineNode *self, int strideOfInputCluster, int vuTSVertexMaxCount, int vuTLTriMaxCount)
{
    // param RxPipelineNode *self  (in $s3)
    // param int strideOfInputCluster  (in $s2)
    // param int vuTSVertexMaxCount  (in $s1)
    // param int vuTLTriMaxCount  (in $s0)
    {   // 0x0019C380-0x0019C4D0
        rwPS2MatInstanceInitData *data;  // in $v0
    }
}

// 0x0019C4D0-0x0019C4DC (12 bytes), lines 5046-5047
RxNodeDefinition *RxNodeDefinitionGetPS2MatInstance()
{
    {   // 0x0019C4D0-0x0019C4DC
        RxNodeDefinition nodePS2MatInstanceCSL;  // at 0x002B4440
    }
}

