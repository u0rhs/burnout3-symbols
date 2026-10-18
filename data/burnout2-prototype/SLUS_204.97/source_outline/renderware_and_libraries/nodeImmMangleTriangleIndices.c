// nodeImmMangleTriangleIndices.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00

// ---- functions ----

// 0x00178470-0x00178BDC (1900 bytes), lines 81-334
static int _ImmMangleTriangleIndicesNode(RxPipelineNode *self, RxPipelineNodeParam *params)
{
    // param RxPipelineNode *self  (in $s0)
    // param RxPipelineNodeParam *params  (in $s3)
    {   // 0x00178470-0x00178BDC
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s1
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s1
        unsigned short *newInd;  // in $t0
        unsigned short *oldInd;  // in $s2
        unsigned short ind1;  // in $v0
        unsigned short ind0;  // in $v0
        unsigned short *newIndices;  // in $v0
        unsigned int flip;  // in $a3
        unsigned int i;  // in $a2
        unsigned short *newInd;  // in $a0
        unsigned short *oldInd;  // in $s3
        unsigned short ind0;  // in $s2
        unsigned short *newIndices;  // in $v0
        unsigned int i;  // in $v1
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s1
        unsigned int j;  // in $v1
        unsigned int i;  // in $a1
        unsigned int numIndices;  // in $s1
        unsigned short *indexData;  // in $a0
        RxMeshStateVector *MeshData;  // in $s1
        RxPacket *packet;  // in $v0
        unsigned int numRxTriangles;  // in $v0
        RxCluster *Indices;  // in $v0
        RxCluster *MeshState;  // in $v0
    }
}

// 0x00178BE0-0x00178BEC (12 bytes), lines 452-453
RxNodeDefinition *RxNodeDefinitionGetImmMangleTriangleIndices()
{
    {   // 0x00178BE0-0x00178BEC
        RxNodeDefinition NodeDefinition;  // at 0x002B3030
    }
}

