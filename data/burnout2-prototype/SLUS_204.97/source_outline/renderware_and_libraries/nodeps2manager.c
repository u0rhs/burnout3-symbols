// nodeps2manager.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwRaster *skyTextureRaster;  // 0x00310A88
RwModuleInfo meshModule;  // 0x00310B50
int rwPip2WorldSectorOffset;  // 0x00310B88
int rwPip2AtomicOffset;  // 0x00310B8C
int rwPip2GeometryOffset;  // 0x00310B90
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x00194B50-0x00194EB0 (864 bytes), lines 152-193
static int PS2ManagerPipelineNodeInit(RxPipelineNode *self)
{
    // param RxPipelineNode *self  (in $s5)
    {   // 0x00194B50-0x00194EB0
        int result;  // in $v0
        rwPS2ManagerPvtData *data;  // in $s0
        rwPS2ManagerPvtDataBridgeFirst matBridgeData;  // $sp+944
        rwPS2ManagerPvtDataInstFirst matInstanceData;  // $sp+128
    }
}

// 0x00194EB0-0x001955A4 (1780 bytes), lines 203-617
static int PS2ManagerIm3DNodeBody(RxPipelineNode *self, RxPipelineNodeParam *params)
{
    // param RxPipelineNode *self  (in $s7)
    // param RxPipelineNodeParam *params  (in $v0)
    {   // 0x00194EB0-0x001955A4
        unsigned int i;  // in $a0
        rwPS2ResEntryHeader *ps2ResHeader;  // in $v1
        unsigned int numBreakOuts;  // in $v0
        void *dataPtrs[11];  // $sp+848
        RxPipelineCluster *pipelineCluster;  // in $a3
        RxCluster *cluster;  // in $a2
        unsigned int slot;  // in $t0
        int triStrip;  // in $t3
        int triFan;  // in $s2
        rwPS2MatInstancePvtData *matInstanceData;  // in $s1
        unsigned char *vertToIndOffset;  // in $t2
        unsigned char *vertToIndRatio;  // in $t1
        RpMesh *mesh;  // in $s0
        unsigned short swappedTriFanIndex;  // in $fp
        unsigned short firstTriFanIndex;  // $sp+208
        RpMeshHeader meshHeader[2];  // $sp+816
        RwMeshCache meshCache;  // $sp+904
        RxObjSpace3DVertex *tempObjVerts;  // $sp+192
        RxObjSpace3DVertex swappedTriFanVertex;  // $sp+768
        RxObjSpace3DVertex firstTriFanVertex;  // $sp+720
        unsigned int i;  // in $t0
        unsigned int indPerBlock;  // $sp+176
        unsigned int indOffset;  // in $s5
        unsigned int numNonOpaqueClusters;  // in $a2
        unsigned int numOpaqueClusters;  // in $a3
        unsigned int numClusters;  // in $a2
        unsigned int sumClusterWidth;  // in $a1
        unsigned int numVerts;  // in $a0
        unsigned int maxBatchesPerBlock;  // in $a0
        unsigned int skipSize;  // in $a0
        unsigned int batchSize;  // in $v1
        unsigned int numBatches;  // in $v0
        RwPrimitiveType primType;  // $sp+160
        int success;  // in $v0
        void *data;  // in $s4
        RxCluster fakeClusters[16];  // $sp+272
        _rwIm3DPoolStash *immData;  // in $v0
        RxPS2Mesh PS2Mesh;  // $sp+256
        RxPS2DMASessionRecord DMASessionRecord;  // $sp+224
        rwPS2ManagerPvtData *pvtData;  // in $s3
    }
}

// 0x001955B0-0x00195940 (912 bytes), lines 625-832
static int PS2ManagerWorldSectorNodeBody(RxPipelineNode *self, RxPipelineNodeParam *params)
{
    // param RxPipelineNode *self  (in $s5)
    // param RxPipelineNodeParam *params  (in $v0)
    {   // 0x001955B0-0x00195940
        void *dataPtrs[2];  // $sp+712
        rwPS2ResEntryHeader *ps2ResHeader;  // in $v1
        unsigned int numBreakOuts;  // in $v0
        void *dataPtrs[11];  // $sp+656
        RxPipelineCluster *pipelineCluster;  // in $t0
        RxCluster *cluster;  // in $a3
        unsigned int slot;  // in $t1
        rwPS2MatInstancePvtData *matInstanceData;  // in $v0
        unsigned int i;  // in $v0
        RwTexture *texture;  // in $v1
        unsigned int n;  // in $s3
        RpMesh *mesh;  // in $s2
        RwMeshCache *meshCache;  // in $s7
        RpMeshHeader *meshHeader;  // in $s6
        int success;  // in $s1
        void *data;  // in $s2
        RxCluster fakeClusters[16];  // $sp+208
        RxPS2Mesh PS2Mesh;  // $sp+192
        RxPS2DMASessionRecord DMASessionRecord;  // $sp+160
        rwPS2ManagerPvtData *pvtData;  // in $s0
    }
}

// 0x00195940-0x00195D44 (1028 bytes), lines 840-1078
static int PS2ManagerAtomicNodeBody(RxPipelineNode *self, RxPipelineNodeParam *params)
{
    // param RxPipelineNode *self  (in $s5)
    // param RxPipelineNodeParam *params  (in $v0)
    {   // 0x00195940-0x00195D44
        void *dataPtrs[2];  // $sp+744
        rwPS2ResEntryHeader *ps2ResHeader;  // in $v1
        unsigned int numBreakOuts;  // in $v0
        void *dataPtrs[13];  // $sp+688
        RxPipelineCluster *pipelineCluster;  // in $t0
        RxCluster *cluster;  // in $a3
        unsigned int slot;  // in $t1
        rwPS2MatInstancePvtData *matInstanceData;  // in $v0
        unsigned int i;  // in $v0
        RwTexture *texture;  // in $v1
        unsigned int n;  // in $s3
        RpMesh *mesh;  // in $s2
        RwMeshCache *meshCache;  // in $fp
        RpMeshHeader *meshHeader;  // in $s6
        int success;  // in $s1
        void *data;  // $sp+160
        RxCluster fakeClusters[16];  // $sp+240
        RpGeometry *geom;  // in $s7
        RxPS2Mesh PS2Mesh;  // $sp+224
        RxPS2DMASessionRecord DMASessionRecord;  // $sp+192
        rwPS2ManagerPvtData *pvtData;  // in $s0
    }
}

// 0x00195D50-0x00195D84 (52 bytes), lines 1134-1154
RxPipelineNode *RxPipelineNodePS2ManagerSetInstanceCallBack(RxPipelineNode *self, int (*callBack)(void **, unsigned int))
{
    // param RxPipelineNode *self  (in $v0)
    // param int (*callBack)(void **, unsigned int)  (in $v0)
    {   // 0x00195D50-0x00195D84
    }
}

// 0x00195D90-0x00195DFC (108 bytes), lines 1300-1321
RxPipelineNode *RxPipelineNodePS2ManagerGenerateCluster(RxPipelineNode *self, RxClusterDefinition *cluster2generate, unsigned int type)
{
    // param RxPipelineNode *self  (in $s1)
    // param RxClusterDefinition *cluster2generate  (in $s0)
    // param unsigned int type  (in $v0)
    {   // 0x00195D90-0x00195DFC
        RxPipelineNode *result;  // in $v0
    }
}

// 0x00195E00-0x00195E08 (8 bytes), lines 1370-1370
RxPipelineNode *RxPipelineNodePS2ManagerSetVUBufferSizes(RxPipelineNode *self, int strideOfInputCluster, int vuTSVertexMaxCount, int vuTLTriMaxCount)
{
    // param RxPipelineNode *self  (in $v0)
    // param int strideOfInputCluster  (in $v0)
    // param int vuTSVertexMaxCount  (in $v0)
    // param int vuTLTriMaxCount  (in $v0)
    {   // 0x00195E00-0x00195E08
        RxPipelineNode *result;  // in $v0
    }
}

// 0x00195E10-0x00195FD0 (448 bytes), lines 1621-1649
RxPipelineNode *RxPipelineNodePS2ManagerSetVU1CodeArray(RxPipelineNode *self, void **VU1CodeArray)
{
    // param RxPipelineNode *self  (in $s5)
    // param void **VU1CodeArray  (in $v0)
    {   // 0x00195E10-0x00195FD0
        RxPipelineNode *result;  // in $v0
        rwPS2ManagerPvtData *origData;  // in $v0
        rwPS2ManagerPvtDataBridgeFirst data;  // $sp+128
    }
}

// 0x00195FD0-0x00196190 (448 bytes), lines 1746-1774
RxPipelineNode *RxPipelineNodePS2ManagerSetVIFOffset(RxPipelineNode *self, int vifOffset)
{
    // param RxPipelineNode *self  (in $s5)
    // param int vifOffset  (in $v0)
    {   // 0x00195FD0-0x00196190
        RxPipelineNode *result;  // in $v0
        rwPS2ManagerPvtData *origData;  // in $v0
        rwPS2ManagerPvtDataBridgeFirst data;  // $sp+128
    }
}

// 0x00196190-0x001961DC (76 bytes), lines 1990-2008
RxNodeDefinition *RxNodeDefinitionGetPS2Manager(int objType)
{
    // param int objType  (in $v0)
    {   // 0x00196190-0x001961DC
        RxNodeDefinition *result;  // in $v0
        RxNodeDefinition nodePS2ManagerAtomicCSL;  // at 0x002B3EB0
        RxNodeDefinition nodePS2ManagerWorldSectorCSL;  // at 0x002B3E50
        RxNodeDefinition nodePS2ManagerIm3DCSL;  // at 0x002B3DF0
    }
}

