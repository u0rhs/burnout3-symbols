// p2altmdl.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RxHeap *_rxHeapGlobal;  // 0x00310B00
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00

// ---- functions ----

// 0x0017AB50-0x0017AC70 (288 bytes), lines 117-166
static void rxPacketCrossPipelineAlignClusters(RxPacket *packet, RxPipeline *toPipeline, RxPacket *oldPacket)
{
    // param RxPacket *packet  (in $v0)
    // param RxPipeline *toPipeline  (in $v0)
    // param RxPacket *oldPacket  (in $v0)
    {   // 0x0017AB50-0x0017AC70
        RxPipelineRequiresCluster *reqdCluster;  // in $t3
        unsigned int j;  // in $t2
        unsigned int i;  // in $v1
    }
}

// 0x0017AC70-0x0017ACE8 (120 bytes), lines 174-201
void _rxEmbeddedPacketBetweenPipelines(RxPipeline *fromPipeline, RxPipeline *toPipeline)
{
    // param RxPipeline *fromPipeline  (in $v0)
    // param RxPipeline *toPipeline  (in $s1)
    {   // 0x0017AC70-0x0017ACE8
        RxPacket *newPacket;  // in $s0
        RxPacket *oldPacket;  // in $v0
    }
}

// 0x0017ACF0-0x0017AE80 (400 bytes), lines 210-218
RxPipelineNode *_rxEmbeddedPacketBetweenNodes(RxPipeline *pipeline, RxPipelineNode *nodeFrom, unsigned int whichOutput)
{
    // param RxPipeline *pipeline  (in $fp)
    // param RxPipelineNode *nodeFrom  (in $v0)
    // param unsigned int whichOutput  (in $v0)
    {   // 0x0017ACF0-0x0017AE80
        unsigned int n;  // in $s2
        unsigned int outputMask;  // $sp+160
        RxPipelineNode *nodeTo;  // in $s1
        RxPacket *packet;  // in $s0
        unsigned int outputIndex;  // in $a0
        RxPipelineNode *result;  // in $v0
    }
}

// 0x0017AE80-0x0017AF20 (160 bytes), lines 248-278
void _rxPacketDestroy(RxPacket *packet)
{
    // param RxPacket *packet  (in $s1)
    {   // 0x0017AE80-0x0017AF20
        RxCluster *cl;  // in $s0
        unsigned int n;  // in $s2
    }
}

