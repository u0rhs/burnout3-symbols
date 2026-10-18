// p2core.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int _rxHeapInitialSize;  // 0x00310430
int _rxPipelineMaxNodes;  // 0x00310434
int _rxPipelineGlobalsOffset;  // 0x00310AF8
int RxPipelineInstanced;  // 0x00310AFC
RxHeap *_rxHeapGlobal;  // 0x00310B00
unsigned int ourGlobals[4096];  // 0x004486D0
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00

// ---- functions ----

// 0x0017CD30-0x0017CDAC (124 bytes), lines 173-193
int _rxPipelineClose()
{
    {   // 0x0017CD30-0x0017CDAC
    }
}

// 0x0017CDB0-0x0017CE9C (236 bytes), lines 199-251
int _rxPipelineOpen()
{
    {   // 0x0017CDB0-0x0017CE9C
    }
}

// 0x0017CEA0-0x0017D210 (880 bytes), lines 256-428
RxPipelineNode *PipelineNodeDestroy(RxPipelineNode *node, RxPipeline *pipeline)
{
    // param RxPipelineNode *node  (in $s3)
    // param RxPipeline *pipeline  (in $s2)
    {   // 0x0017CEA0-0x0017D210
        unsigned int j;  // in $a0
        unsigned int i;  // in $s5
        unsigned int *nextOutput;  // in $s4
        unsigned int *output;  // in $v0
        RxPipelineNodeTopSortData *nextTopSortData;  // in $s1
        RxPipelineNodeTopSortData *topSortData;  // in $v0
        int nodeIndex;  // in $v0
    }
}

// 0x0017D210-0x0017D218 (8 bytes), lines 727-727
RxHeap *RxHeapGetGlobalHeap()
{
    {   // 0x0017D210-0x0017D218
    }
}

// 0x0017D220-0x0017D258 (56 bytes), lines 766-774
RxPacket *RxPacketCreate(RxPipelineNode *self)
{
    // param RxPipelineNode *self  (in $v0)
    {   // 0x0017D220-0x0017D258
        RxPacket *createdPacket;  // in $v0
    }
}

// 0x0017D260-0x0017D2F4 (148 bytes), lines 883-916
RxCluster *RxClusterSetExternalData(RxCluster *cluster, void *data, int stride, int numElements)
{
    // param RxCluster *cluster  (in $s0)
    // param void *data  (in $s3)
    // param int stride  (in $s2)
    // param int numElements  (in $s1)
    {   // 0x0017D260-0x0017D2F4
    }
}

// 0x0017D300-0x0017D394 (148 bytes), lines 973-1009
RxCluster *RxClusterSetData(RxCluster *cluster, void *data, int stride, int numElements)
{
    // param RxCluster *cluster  (in $s0)
    // param void *data  (in $s3)
    // param int stride  (in $s2)
    // param int numElements  (in $s1)
    {   // 0x0017D300-0x0017D394
    }
}

// 0x0017D3A0-0x0017D438 (152 bytes), lines 1048-1089
RxCluster *RxClusterInitializeData(RxCluster *cluster, unsigned int numElements, unsigned short stride)
{
    // param RxCluster *cluster  (in $s2)
    // param unsigned int numElements  (in $s1)
    // param unsigned short stride  (in $s0)
    {   // 0x0017D3A0-0x0017D438
        unsigned int size;  // in $s3
        void *allocResult;  // in $v0
    }
}

// 0x0017D440-0x0017D4B4 (116 bytes), lines 1121-1178
RxCluster *RxClusterResizeData(RxCluster *cluster, unsigned int numElements)
{
    // param RxCluster *cluster  (in $s1)
    // param unsigned int numElements  (in $s0)
    {   // 0x0017D440-0x0017D4B4
        void *allocresult;  // in $v0
    }
}

// 0x0017D4C0-0x0017D628 (360 bytes), lines 1414-1506
RxCluster *RxClusterLockWrite(RxPacket *packet, unsigned int clusterIndex)
{
    // param RxPacket *packet  (in $v0)
    // param unsigned int clusterIndex  (in $v0)
    {   // 0x0017D4C0-0x0017D628
        unsigned int numUsed;  // in $s3
        unsigned int numAlloced;  // in $s2
        void *p;  // in $s1
        RxPipelineCluster *pipelineClusterRef;  // in $v0
        RxCluster *cluster;  // in $s0
        unsigned int slot;  // in $v1
    }
}

// 0x0017D630-0x0017D6FC (204 bytes), lines 2124-2172
RxPipeline *RxPipelineExecute(RxPipeline *pipeline, void *data, int heapReset)
{
    // param RxPipeline *pipeline  (in $s1)
    // param void *data  (in $s2)
    // param int heapReset  (in $v0)
    {   // 0x0017D630-0x0017D6FC
        unsigned int exitCode;  // in $v0
        RxPipelineNode *node;  // in $v0
    }
}

// 0x0017D700-0x0017D784 (132 bytes), lines 2231-2262
RxPipeline *RxPipelineCreate()
{
    {   // 0x0017D700-0x0017D784
        RwError _rwErrorCode;  // $sp+40
        RxPipeline *pipeline;  // in $s0
    }
}

// 0x0017D790-0x0017D84C (188 bytes), lines 2266-2308
void _rxPipelineDestroy(RxPipeline *Pipeline)
{
    // param RxPipeline *Pipeline  (in $s0)
    {   // 0x0017D790-0x0017D84C
        RxPipelineNode *Node;  // in $s3
        unsigned int i;  // in $s2
        unsigned int numNodes;  // in $s1
    }
}

