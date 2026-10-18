// nodeImmMangleLineIndices.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00

// ---- functions ----

// 0x00177FA0-0x00178460 (1216 bytes), lines 79-220
static int _ImmMangleLineIndicesNode(RxPipelineNode *self, RxPipelineNodeParam *params)
{
    // param RxPipelineNode *self  (in $s1)
    // param RxPipelineNodeParam *params  (in $s4)
    {   // 0x00177FA0-0x00178460
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s2
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s2
        unsigned short *line;  // in $a0
        unsigned short *ind;  // in $s4
        unsigned short *newIndices;  // in $v0
        unsigned int i;  // in $v1
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s2
        unsigned int i;  // in $a1
        unsigned int numIndices;  // in $s2
        unsigned short *indexData;  // in $a0
        RxMeshStateVector *MeshData;  // in $s3
        RxPacket *packet;  // in $v0
        unsigned int numLines;  // in $s2
        RxCluster *MeshState;  // in $v0
        RxCluster *Indices;  // in $v0
    }
}

// 0x00178460-0x0017846C (12 bytes), lines 331-332
RxNodeDefinition *RxNodeDefinitionGetImmMangleLineIndices()
{
    {   // 0x00178460-0x0017846C
        RxNodeDefinition nodeImmMangleLineIndicesCSL;  // at 0x002B2F80
    }
}

