// nodePostLight.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00

// ---- functions ----

// 0x0018FA90-0x00190050 (1472 bytes), lines 66-202
static int _PostLightFn(RxPipelineNode *self)
{
    // param RxPipelineNode *self  (in $s1)
    {   // 0x0018FA90-0x00190050
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s2
        RwRGBAReal *col;  // in $t2
        unsigned int spin;  // in $t1
        int n;  // in $v0
        RwRGBA MatCol;  // $sp+104
        unsigned int vstepInc;  // in $v1
        unsigned char fakeVStep;  // $sp+111
        unsigned char *vstep;  // in $v0
        RwSky2DVertex *devVert;  // in $t1
        RxCluster *cldevvert;  // in $v0
        RxCluster *clcamvert;  // in $s3
        RxMeshStateVector *meshstate;  // in $s2
        RxPacket *packet;  // in $v0
        float maxlum;  // at 0x002C4098
    }
}

// 0x00190050-0x0019005C (12 bytes), lines 308-309
RxNodeDefinition *RxNodeDefinitionGetPostLight()
{
    {   // 0x00190050-0x0019005C
        RxNodeDefinition nodePostLightCSL;  // at 0x002B3B10
    }
}

