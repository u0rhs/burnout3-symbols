// nodeImmInstance.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int _rxPipelineGlobalsOffset;  // 0x00310AF8
unsigned int ourGlobals[4096];  // 0x004486D0
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00

// ---- functions ----

// 0x00177C10-0x00177F84 (884 bytes), lines 69-165
static int ImmInstanceNode(RxPipelineNode *self, RxPipelineNodeParam *params)
{
    // param RxPipelineNode *self  (in $s2)
    // param RxPipelineNodeParam *params  (in $v0)
    {   // 0x00177C10-0x00177F84
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s0
        RxRenderStateVector *rsvp;  // in $a2
        RxMeshStateVector *MeshData;  // in $s4
        RxCluster *RenderState;  // in $s0
        RxCluster *MeshState;  // in $s0
        RxCluster *ObjVerts;  // in $s4
        unsigned int NumVerts;  // in $s6
        RwRGBA OpaqueWhite;  // $sp+140
        RxPacket *packet;  // in $s0
        rwIm3DPool *pool;  // in $s3
    }
}

// 0x00177F90-0x00177F9C (12 bytes), lines 280-281
RxNodeDefinition *RxNodeDefinitionGetImmInstance()
{
    {   // 0x00177F90-0x00177F9C
        RxNodeDefinition nodeImmInstanceCSL;  // at 0x002B2ED0
    }
}

