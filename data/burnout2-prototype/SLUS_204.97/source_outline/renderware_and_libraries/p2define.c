// p2define.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static P2MemoryLimits gMemoryLimits;  // 0x00310438
int _rxPipelineGlobalsOffset;  // 0x00310AF8
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x0017D850-0x0017D8C4 (116 bytes), lines 137-155
void *StalacTiteAlloc(unsigned int size)
{
    // param unsigned int size  (in $v0)
    {   // 0x0017D850-0x0017D8C4
        RwError _rwErrorCode;  // $sp+24
    }
}

// 0x0017D8D0-0x0017D944 (116 bytes), lines 160-178
void *StalacMiteAlloc(unsigned int size)
{
    // param unsigned int size  (in $v0)
    {   // 0x0017D8D0-0x0017D944
        RwError _rwErrorCode;  // $sp+24
    }
}

// 0x0017D950-0x0017DA08 (184 bytes), lines 201-230
unsigned int PipelineCalcNumUniqueClusters(RxPipeline *pipeline)
{
    // param RxPipeline *pipeline  (in $v0)
    {   // 0x0017D950-0x0017DA08
        RxClusterDefinition *address;  // in $a1
        RxNodeDefinition *nodeDef;  // in $t3
        unsigned int j;  // in $t2
        unsigned int i;  // in $t1
        unsigned int numUniqueClusters;  // in $v0
        RxClusterDefinition *newAddress;  // in $v0
        RxClusterDefinition *lastAddress;  // in $t0
    }
}

// 0x0017DA10-0x0017DBB8 (424 bytes), lines 237-286
static int ReallocAndFixupSuperBlock(RxPipeline *pipeline, unsigned int newSize)
{
    // param RxPipeline *pipeline  (in $s1)
    // param unsigned int newSize  (in $s0)
    {   // 0x0017DA10-0x0017DBB8
        RwError _rwErrorCode;  // $sp+72
        int diff;  // in $a0
        unsigned int numNodes;  // in $v1
        unsigned int i;  // in $a1
        void *newBlock;  // in $v0
        void *oldBlock;  // in $s2
    }
}

// 0x0017DBC0-0x0017DE20 (608 bytes), lines 293-388
static int LockPipelineExpandData(RxPipeline *dstPipe, RxPipeline *srcPipe)
{
    // param RxPipeline *dstPipe  (in $s1)
    // param RxPipeline *srcPipe  (in $s0)
    {   // 0x0017DBC0-0x0017DE20
        RwError _rwErrorCode;  // $sp+152
        int i;  // in $s2
        unsigned int *outputs;  // in $s2
        RxPipelineNodeTopSortData *topSortArray;  // in $v1
    }
}

// 0x0017DE20-0x0017E240 (1056 bytes), lines 472-654
static RxNodeDefinition *_NodeClone(RxPipelineNode *node, RxClusterDefinition *cluster2add)
{
    // param RxPipelineNode *node  ($sp+196)
    // param RxClusterDefinition *cluster2add  (in $s6)
    {   // 0x0017DE20-0x0017E240
        RwError _rwErrorCode;  // $sp+200
        unsigned char *block;  // in $s3
        unsigned int size;  // in $s4
        unsigned int i;  // in $s3
        RxNodeDefinition *source;  // in $s2
        RxNodeDefinition *result;  // in $s1
    }
}

// 0x0017E240-0x0017E418 (472 bytes), lines 687-773
static int _NodeCreate(RxPipeline *pipeline, RxPipelineNode *node, RxNodeDefinition *nodespec)
{
    // param RxPipeline *pipeline  (in $s4)
    // param RxPipelineNode *node  (in $s3)
    // param RxNodeDefinition *nodespec  (in $s5)
    {   // 0x0017E240-0x0017E418
        RwError _rwErrorCode;  // $sp+152
        RwError _rwErrorCode;  // $sp+144
        RwError _rwErrorCode;  // $sp+136
        unsigned int n;  // in $s1
        int result;  // in $s0
        unsigned int *outputs;  // in $a0
        RxPipelineNodeTopSortData *topSortData;  // in $v1
    }
}

// 0x0017E420-0x0017E4F0 (208 bytes), lines 787-825
static void PipelineTallyInputs(RxPipeline *pipeline)
{
    // param RxPipeline *pipeline  (in $v0)
    {   // 0x0017E420-0x0017E4F0
        unsigned int *outputs;  // in $t0
        int j;  // in $v0
        unsigned int i;  // in $a2
        RxPipelineNode *nodes;  // in $a1
    }
}

// 0x0017E4F0-0x0017E904 (1044 bytes), lines 833-928
static void PipelineTopSort(tagTopSortData *data, unsigned int nodeIndex)
{
    // param tagTopSortData *data  (in $s0)
    // param unsigned int nodeIndex  (in $v0)
    {   // 0x0017E4F0-0x0017E904
        RxPipelineNode *outNode;  // in $a2
        unsigned int outIndex;  // in $v0
        RxPipelineNode *node;  // in $t1
        unsigned int l;  // in $a2
        unsigned int k;  // in $a3
        RxPipelineNode tmpNode;  // $sp+80
        RxPipelineNodeTopSortData *topSortDataJ;  // in $t5
        RxPipelineNodeTopSortData *topSortDataI;  // in $a2
        RxPipelineNodeTopSortData tempTopSortData;  // $sp+128
        unsigned int *outputsJ;  // in $a2
        unsigned int *outputsI;  // in $a0
        unsigned int tmpOutput;  // in $t5
        unsigned int i;  // in $v1
        RxPipelineNode *curNode;  // in $s1
    }
}

// 0x0017E910-0x0017EA5C (332 bytes), lines 957-1022
static RxPipeline *PipelineUnlockTopSort(RxPipeline *pipeline)
{
    // param RxPipeline *pipeline  (in $s0)
    {   // 0x0017E910-0x0017EA5C
        RwError _rwErrorCode;  // $sp+56
        RwError _rwErrorCode;  // $sp+48
        RwError _rwErrorCode;  // $sp+40
        unsigned int i;  // in $a0
        tagTopSortData data;  // $sp+32
    }
}

// 0x0017EA60-0x0017EAE8 (136 bytes), lines 1064-1099
RxNodeDefinition *RxPipelineNodeCloneDefinition(RxPipelineNode *node, RxClusterDefinition *cluster2add)
{
    // param RxPipelineNode *node  (in $v0)
    // param RxClusterDefinition *cluster2add  (in $v0)
    {   // 0x0017EA60-0x0017EAE8
        RxNodeDefinition *result;  // in $v0
    }
}

// 0x0017EAF0-0x0017EBA4 (180 bytes), lines 1137-1162
unsigned int *RxPipelineNodeFindOutputByName(RxPipelineNode *node, char *outputname)
{
    // param RxPipelineNode *node  (in $s4)
    // param char *outputname  (in $s3)
    {   // 0x0017EAF0-0x0017EBA4
        RxOutputSpec *out;  // in $s2
        int numouts;  // in $s1
        int n;  // in $s0
    }
}

// 0x0017EBB0-0x0017EBD8 (40 bytes), lines 1257-1263
RxPipelineNode *RxPipelineNodeFindInput(RxPipelineNode *node)
{
    // param RxPipelineNode *node  (in $v0)
    {   // 0x0017EBB0-0x0017EBD8
    }
}

// 0x0017EBE0-0x0017EC8C (172 bytes), lines 1524-1549
void *RxPipelineNodeCreateInitData(RxPipelineNode *node, unsigned int size)
{
    // param RxPipelineNode *node  (in $s1)
    // param unsigned int size  (in $s0)
    {   // 0x0017EBE0-0x0017EC8C
        RwError _rwErrorCode;  // $sp+56
    }
}

// 0x0017EC90-0x0017EC98 (8 bytes), lines 1599-1599
void *RxPipelineNodeGetInitData(RxPipelineNode *node)
{
    // param RxPipelineNode *node  (in $v0)
    {   // 0x0017EC90-0x0017EC98
    }
}

// 0x0017ECA0-0x0017F348 (1704 bytes), lines 1636-2012
RxPipeline *RxLockedPipeUnlock(RxPipeline *pipeline)
{
    // param RxPipeline *pipeline  (in $s0)
    {   // 0x0017ECA0-0x0017F348
        RwError _rwErrorCode;  // $sp+184
        RwError _rwErrorCode;  // $sp+176
        RxNodeDefinition *nodeDef;  // in $s3
        RxNodeDefinition *nodeDef;  // in $v0
        RxNodeDefinition *nodeDef;  // in $s1
        RwError _rwErrorCode;  // $sp+168
        int i;  // in $v0
        unsigned int doneNodes;  // in $fp
        int error;  // in $s6
        unsigned int *outputs;  // in $s3
        unsigned int *newOutputs;  // in $s1
        unsigned int totalOutputs;  // in $s7
        unsigned int depChaseBlockSize;  // in $v0
        unsigned int topSortBlockSize;  // in $s1
        unsigned int unlockStartBlockSize;  // in $v0
        unsigned int numUniqueClusters;  // in $v0
        RxPipelineNodeTopSortData *topSortData;  // in $s2
        RxPipelineNodeTopSortData *newTopSortData;  // in $s1
    }
}

// 0x0017F350-0x0017F510 (448 bytes), lines 2045-2134
RxPipeline *RxPipelineLock(RxPipeline *pipeline)
{
    // param RxPipeline *pipeline  (in $s3)
    {   // 0x0017F350-0x0017F510
        RxNodeMethods *nodeMethods;  // in $s1
        unsigned int n;  // in $s0
        RwError _rwErrorCode;  // $sp+88
        unsigned int lockedBlockSize;  // in $s0
    }
}

// 0x0017F510-0x0017F610 (256 bytes), lines 2272-2324
RxPipelineNode *RxPipelineFindNodeByName(RxPipeline *pipeline, char *name, RxPipelineNode *start, int *nodeIndex)
{
    // param RxPipeline *pipeline  (in $v0)
    // param char *name  (in $s1)
    // param RxPipelineNode *start  (in $v0)
    // param int *nodeIndex  (in $s0)
    {   // 0x0017F510-0x0017F610
        int n;  // in $s3
        RxPipelineNode *node;  // in $s2
    }
}

// 0x0017F610-0x0017F8E0 (720 bytes), lines 2429-2538
RxPipeline *RxLockedPipeAddFragment(RxPipeline *pipeline, unsigned int *firstIndex, RxNodeDefinition *nodeDef0)
{
    // param RxPipeline *pipeline  (in $s1)
    // param unsigned int *firstIndex  (in $s7)
    // param RxNodeDefinition *nodeDef0  ($sp+216)
    {   // 0x0017F610-0x0017F8E0
        RwError _rwErrorCode;  // $sp+168
        RwError _rwErrorCode;  // $sp+160
        RxPipelineNode *node;  // in $s5
        RwError _rwErrorCode;  // $sp+152
        RxPipelineNode *prevnode;  // in $s4
        unsigned int n;  // in $s3
        unsigned int oldnumnodes;  // in $v0
        unsigned int fragLength;  // in $s2
        RxNodeDefinition *nodeDef;  // in $v0
        char *va;  // in $v1
    }
}

// 0x0017F8E0-0x0017F9A4 (196 bytes), lines 2881-2905
RxPipeline *RxLockedPipeAddPath(RxPipeline *pipeline, unsigned int *out, RxPipelineNode *in)
{
    // param RxPipeline *pipeline  (in $v0)
    // param unsigned int *out  (in $v0)
    // param RxPipelineNode *in  (in $v0)
    {   // 0x0017F8E0-0x0017F9A4
    }
}

