// fastim3d.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int RwIm3DPS2AllObjectSetupCallBack(RxPS2AllPipeData *, RwMatrixTag **);  // 0x0019FD30
RwResEntry *RwIm3DPS2AllResEntryAllocCallBack(RxPS2AllPipeData *, RwResEntry **, unsigned int, void (*)(RwResEntry *));  // 0x0019FEA0
int RwIm3DPS2AllInstanceCallBack(RxPS2AllPipeData *, void **, unsigned int);  // 0x0019FF50
int RwIm3DPS2AllBridgeCallBack(RxPS2AllPipeData *);  // 0x0019FF60
RxClusterDefinition RxClPS2xyz;  // 0x002B49D0
RxClusterDefinition RxClPS2uv;  // 0x002B49E0
RxClusterDefinition RxClPS2rgba;  // 0x002B49F0
RxClusterDefinition RxClPS2normal;  // 0x002B4A00
RwModuleInfo _rwIm3DModule;  // 0x00310AF0
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x00190C90-0x00190CE4 (84 bytes), lines 67-112
static int PS2Im3DFastTransformNodeBody(RxPipelineNodeParam *params)
{
    // param RxPipelineNodeParam *params  (in $v0)
    {   // 0x00190C90-0x00190CE4
        rwIm3DPool *pool;  // in $v1
    }
}

// 0x00190CF0-0x00190DA4 (180 bytes), lines 160-200
static RxPipeline *fastIm3DTransformPipeCreate()
{
    {   // 0x00190CF0-0x00190DA4
        RwError _rwErrorCode;  // $sp+40
        RxPipeline *lpipe;  // in $v0
        RxPipeline *pipe;  // in $s0
    }
}

// 0x00190DB0-0x00190F30 (384 bytes), lines 208-307
static RxPipeline *CreateIm3DPS2ManagerRenderPipeline()
{
    {   // 0x00190DB0-0x00190F30
        RwError _rwErrorCode;  // $sp+88
        RxPipelineNode *plnode;  // in $s2
        RxNodeDefinition *manager;  // in $s1
        RxPipeline *lpipe;  // in $s1
        RxPipeline *pipe;  // in $s0
    }
}

// 0x00190F30-0x00191054 (292 bytes), lines 569-630
static RxPipeline *CreateIm3DPS2AllRenderPipeline(RxPipeline *ps2AllMatPipe)
{
    // param RxPipeline *ps2AllMatPipe  (in $s0)
    {   // 0x00190F30-0x00191054
        RwError _rwErrorCode;  // $sp+88
        RxPipelineNode *plnode;  // in $s2
        RxNodeDefinition *ps2all;  // in $s2
        RxPipeline *lpipe;  // in $s2
        RxPipeline *pipe;  // in $s1
    }
}

// 0x00191060-0x00191240 (480 bytes), lines 637-754
static RxPipeline *CreateIm3DPS2AllMatPipeline(int lines)
{
    // param int lines  (in $s0)
    {   // 0x00191060-0x00191240
        RwError _rwErrorCode;  // $sp+104
        RxPipelineNode *plnode;  // in $s3
        RxNodeDefinition *ps2allmat;  // in $s2
        RxPipeline *lpipe;  // in $s2
        RxPipeline *pipe;  // in $s1
    }
}

// 0x00191240-0x001913F8 (440 bytes), lines 844-919
int _rwfastIm3DPipesOpen()
{
    {   // 0x00191240-0x001913F8
        RxPipeline *ps2AllMatLineRenderPipe;  // in $s5
        RxPipeline *ps2AllMatTriangleRenderPipe;  // in $s4
        RxPipeline *ps2AllLineRenderPipe;  // in $s3
        RxPipeline *ps2AllTriangleRenderPipe;  // in $s2
        RxPipeline *ps2ManagerRenderPipe;  // in $s1
        RxPipeline *transformPipe;  // in $s0
    }
}

// 0x00191400-0x00191540 (320 bytes), lines 923-957
void _rwfastIm3DPipesClose()
{
    {   // 0x00191400-0x00191540
    }
}

