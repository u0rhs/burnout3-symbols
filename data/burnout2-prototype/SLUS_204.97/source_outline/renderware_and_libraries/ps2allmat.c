// ps2allmat.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void *skyVU1Transforms[32];  // 0x002A3400
char RxPS2AttributeSet[];  // 0x00310530
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x001A0850-0x001A08B8 (104 bytes), lines 128-158
static int PS2AllMatPipelineNodeInit(RxPipelineNode *self)
{
    // param RxPipelineNode *self  (in $v0)
    {   // 0x001A0850-0x001A08B8
        int result;  // in $v0
        rxNodePS2AllMatPvtData *pvtData;  // in $s0
    }
}

// 0x001A08C0-0x001A08C8 (8 bytes), lines 173-173
static int PS2AllMatNodeBody()
{
    {   // 0x001A08C0-0x001A08C8
    }
}

// 0x001A08D0-0x001A0D24 (1108 bytes), lines 615-846
static int PS2AllMatProcessInitData(RxPipelineNode *self)
{
    // param RxPipelineNode *self  (in $v0)
    {   // 0x001A08D0-0x001A0D24
        char string2[32];  // $sp+1392
        char string[256];  // $sp+1136
        char string[256];  // $sp+880
        char string[256];  // $sp+624
        char string[256];  // $sp+368
        char string[256];  // $sp+112
        RxClusterDefinition *cluster;  // in $t8
        unsigned int CL_code;  // in $t7
        int result;  // in $v0
        unsigned int numRequiredClusters;  // in $s1
        rxNodePS2AllMatInitData *initData;  // in $v0
        rxNodePS2AllMatPvtData *pvtdata;  // in $s0
    }
}

// 0x001A0D30-0x001A1040 (784 bytes), lines 927-1053
RxPipelineNode *RxPipelineNodePS2AllMatGenerateCluster(RxPipelineNode *self, RxClusterDefinition *cluster2generate, unsigned int type)
{
    // param RxPipelineNode *self  (in $s2)
    // param RxClusterDefinition *cluster2generate  (in $s1)
    // param unsigned int type  (in $s0)
    {   // 0x001A0D30-0x001A1040
        rxNodePS2AllMatInitData *data;  // in $v0
    }
}

// 0x001A1040-0x001A11EC (428 bytes), lines 1122-1177
RxPipelineNode *RxPipelineNodePS2AllMatSetTriangleVUBufferSizes(RxPipelineNode *self, int strideOfInputVertex, int vuTSVertexMaxCount, int vuTLTriMaxCount)
{
    // param RxPipelineNode *self  (in $s3)
    // param int strideOfInputVertex  (in $s2)
    // param int vuTSVertexMaxCount  (in $s1)
    // param int vuTLTriMaxCount  (in $s0)
    {   // 0x001A1040-0x001A11EC
        rxNodePS2AllMatInitData *data;  // in $v0
    }
}

// 0x001A11F0-0x001A1398 (424 bytes), lines 1248-1303
RxPipelineNode *RxPipelineNodePS2AllMatSetLineVUBufferSizes(RxPipelineNode *self, int strideOfInputVertex, int vuLSVertexMaxCount, int vuLLLineMaxCount)
{
    // param RxPipelineNode *self  (in $s3)
    // param int strideOfInputVertex  (in $s2)
    // param int vuLSVertexMaxCount  (in $s1)
    // param int vuLLLineMaxCount  (in $s0)
    {   // 0x001A11F0-0x001A1398
        rxNodePS2AllMatInitData *data;  // in $v0
    }
}

// 0x001A13A0-0x001A13D4 (52 bytes), lines 1535-1550
RxPipelineNode *RxPipelineNodePS2AllMatSetVIFOffset(RxPipelineNode *self, int vifOffset)
{
    // param RxPipelineNode *self  (in $v0)
    // param int vifOffset  (in $v0)
    {   // 0x001A13A0-0x001A13D4
    }
}

// 0x001A13E0-0x001A14AC (204 bytes), lines 1792-1860
RxPipelineNode *RxPipelineNodePS2AllMatSetCallBack(RxPipelineNode *self, RxPipelineNodePS2AllMatCallBackType type, void *func)
{
    // param RxPipelineNode *self  (in $v0)
    // param RxPipelineNodePS2AllMatCallBackType type  (in $v0)
    // param void *func  (in $v0)
    {   // 0x001A13E0-0x001A14AC
        rxNodePS2AllMatPvtData *data;  // in $v0
    }
}

// 0x001A14B0-0x001A14BC (12 bytes), lines 1963-1964
RxNodeDefinition *RxNodeDefinitionGetPS2AllMat()
{
    {   // 0x001A14B0-0x001A14BC
        RxNodeDefinition nodePS2AllMatCSL;  // at 0x002B48E0
    }
}

