// nodeLight.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00

// ---- functions ----

// 0x0018F620-0x0018F924 (772 bytes), lines 260-327
static int _LightFn(RxPipelineNode *self)
{
    // param RxPipelineNode *self  (in $s0)
    {   // 0x0018F620-0x0018F924
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s1
        float _result;  // optimised away
        float invscale;  // $sp+144
        RwMatrixTag *inverse;  // in $s2
        unsigned int n;  // in $v0
        RxMeshStateVector *meshstate;  // in $s1
        RxPacket *packet;  // in $v0
    }
}

// 0x0018F930-0x0018F93C (12 bytes), lines 436-437
RxNodeDefinition *RxNodeDefinitionGetLight()
{
    {   // 0x0018F930-0x0018F93C
        RxNodeDefinition nodeLightCSL;  // at 0x002B39A0
    }
}

