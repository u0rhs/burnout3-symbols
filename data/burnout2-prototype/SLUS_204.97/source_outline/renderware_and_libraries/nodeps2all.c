// nodeps2all.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void reDestroyCallBack(RwResEntry *);  // 0x00191720
RwModuleInfo resourcesModule;  // 0x003108C8
int _rxPipelineGlobalsOffset;  // 0x00310AF8
unsigned int _skyLightQWordsWritten;  // 0x00310B80
float *_skyLightFillPos;  // 0x00310B84
unsigned int ourGlobals[4096];  // 0x004486D0
u_long128 lightBuffer[];  // 0x0044DD50

// ---- functions ----

// 0x00194190-0x0019425C (204 bytes), lines 124-169
static int PS2AllPipelineNodeInit(RxPipelineNode *self)
{
    // param RxPipelineNode *self  (in $v0)
    {   // 0x00194190-0x0019425C
        u_long128 ___ltmp;  // in $a2
        rxNodePS2AllPvtData *pvtData;  // in $t0
    }
}

// 0x00194260-0x00194A8C (2092 bytes), lines 177-924
static int PS2AllNodeBody(RxPipelineNode *self, RxPipelineNodeParam *params)
{
    // param RxPipelineNode *self  (in $v0)
    // param RxPipelineNodeParam *params  (in $v0)
    {   // 0x00194260-0x00194A8C
        int offset;  // in $a2
        rwPS2AllClusterInstanceInfo *clinfo;  // in $t1
        unsigned int *_nmvt;  // in $v0
        u_long128 *data;  // in $v1
        unsigned int numStripes;  // in $t0
        void *dataPtrs[11];  // $sp+704
        unsigned int i;  // in $a0
        rwPS2AllFieldRec fieldRec[11];  // $sp+432
        unsigned int numVerts;  // $sp+764
        unsigned int numBatches;  // $sp+760
        unsigned int batchesPerTag;  // $sp+756
        unsigned int batchSize;  // $sp+752
        unsigned int size;  // in $v0
        rwPS2AllResEntryHeader *ps2ResHeader;  // in $s3
        RwResEntry **repEntry;  // in $s2
        rxNodePS2AllMatPvtData *matPvtData;  // in $s1
        RxPipeline *srcPipe;  // in $v1
        RwRGBA blankMatCol;  // $sp+748
        u_long128 ___ltmp;  // in $v1
        RwMatrixTag *pxForm;  // $sp+416
        RwMatrixTag xForm;  // $sp+352
        int success;  // in $v0
        unsigned int n;  // $sp+256
        RpMesh *mesh;  // in $s0
        RwMeshCache *meshCache;  // $sp+240
        RpMeshHeader *meshHeader;  // $sp+224
        RxPipeline *curMatPipe;  // $sp+220
        rxNodePS2AllMatPvtData *curMatPvtData;  // $sp+192
        RxPipeline *defaultMatPipe;  // $sp+176
        RxPS2AllPipeData ps2AllPipeData;  // $sp+272
        rxNodePS2AllPvtData *objPvtData;  // $sp+160
    }
}

// 0x00194A90-0x00194AFC (108 bytes), lines 1096-1136
RxPipelineNode *RxPipelineNodePS2AllSetCallBack(RxPipelineNode *self, RxPipelineNodePS2AllCallBackType type, void *func)
{
    // param RxPipelineNode *self  (in $v0)
    // param RxPipelineNodePS2AllCallBackType type  (in $v0)
    // param void *func  (in $v0)
    {   // 0x00194A90-0x00194AFC
        rxNodePS2AllPvtData *data;  // in $v0
    }
}

// 0x00194B00-0x00194B34 (52 bytes), lines 1300-1318
RxPipelineNode *RxPipelineNodePS2AllGroupMeshes(RxPipelineNode *self, RxPipeline *pipe)
{
    // param RxPipelineNode *self  (in $v0)
    // param RxPipeline *pipe  (in $v0)
    {   // 0x00194B00-0x00194B34
    }
}

// 0x00194B40-0x00194B4C (12 bytes), lines 1438-1439
RxNodeDefinition *RxNodeDefinitionGetPS2All()
{
    {   // 0x00194B40-0x00194B4C
        RxNodeDefinition nodePS2AllCSL;  // at 0x002B3D90
    }
}

