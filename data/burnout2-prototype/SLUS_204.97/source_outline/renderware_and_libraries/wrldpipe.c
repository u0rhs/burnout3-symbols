// wrldpipe.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RxClusterDefinition RxClPS2DMAChain;
RxClusterDefinition RxClPS2LightsBlock;
RxClusterDefinition RxClPS2uv2;
RxClusterDefinition RxClPS2user3;
RxClusterDefinition RxClPS2user4;
int RpAtomicPS2AllObjectSetupCallBack(RxPS2AllPipeData *, RwMatrixTag **);  // 0x0019E1D0
int RpMeshPS2AllMeshInstanceTestCallBack(RxPS2AllPipeData *);  // 0x0019E400
RwResEntry *RpMeshPS2AllResEntryAllocCallBack(RxPS2AllPipeData *, RwResEntry **, unsigned int, void (*)(RwResEntry *));  // 0x0019E4C0
int RpMeshPS2AllInstanceCallBack(RxPS2AllPipeData *, void **, unsigned int);  // 0x0019E590
int RpMeshPS2AllBridgeCallBack(RxPS2AllPipeData *);  // 0x0019E5D0
int RpWorldSectorPS2AllObjectSetupCallBack(RxPS2AllPipeData *, RwMatrixTag **);  // 0x001A15A0
void *_pluginObjectCreate(void *, int, int);  // 0x001A2100
void *_pluginObjectDestroy(void *, int, int);  // 0x001A2110
void *_pluginGeometryCopy(void *, void *, int, int);  // 0x001A2150
void *_pluginAtomicCopy(void *, void *, int, int);  // 0x001A21D0
void *_pluginSectorCopy(void *, void *, int, int);  // 0x001A2260
int _initAtomicMeshCache(void *, int, int);  // 0x001A22E0
int _initSectorMeshCache(void *, int, int);  // 0x001A23A0
static char _PS2DMASessionRecord_csl[24];  // 0x002B4920
static char _PS2Mesh_csl[12];  // 0x002B4938
static char _PS2xyz_csl[11];  // 0x002B4948
static char _PS2uv_csl[10];  // 0x002B4958
static char _PS2rgba_csl[12];  // 0x002B4968
static char _PS2normal_csl[14];  // 0x002B4978
static char _PS2user1_csl[13];  // 0x002B4988
static char _PS2user2_csl[13];  // 0x002B4998
RxClusterDefinition RxClPS2DMASessionRecord;  // 0x002B49B0
RxClusterDefinition RxClPS2Mesh;  // 0x002B49C0
RxClusterDefinition RxClPS2xyz;  // 0x002B49D0
RxClusterDefinition RxClPS2uv;  // 0x002B49E0
RxClusterDefinition RxClPS2rgba;  // 0x002B49F0
RxClusterDefinition RxClPS2normal;  // 0x002B4A00
RxClusterDefinition RxClPS2user1;  // 0x002B4A10
RxClusterDefinition RxClPS2user2;  // 0x002B4A20
char RxPS2AttributeSet[4];  // 0x00310530
int _rxPipelineGlobalsOffset;  // 0x00310AF8
int rwPip2WorldSectorOffset;  // 0x00310B88
int rwPip2AtomicOffset;  // 0x00310B8C
int rwPip2GeometryOffset;  // 0x00310B90
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x001A2100-0x001A2110 (16 bytes), lines 360-363
static void *_pluginObjectCreate(void *object, int offsetInObject)
{
    // param void *object  (in $v0)
    // param int offsetInObject  (in $v0)
    {   // 0x001A2100-0x001A2110
    }
}

// 0x001A2110-0x001A214C (60 bytes), lines 373-388
static void *_pluginObjectDestroy(void *object, int offsetInObject)
{
    // param void *object  (in $s0)
    // param int offsetInObject  (in $v0)
    {   // 0x001A2110-0x001A214C
        RwMeshCache *p;  // in $v0
    }
}

// 0x001A2150-0x001A21C8 (120 bytes), lines 399-424
static void *_pluginGeometryCopy(void *dstObject, int offsetInObject)
{
    // param void *dstObject  (in $s0)
    // param int offsetInObject  (in $v0)
    {   // 0x001A2150-0x001A21C8
        RpGeometry *dstGeom;  // in $v0
    }
}

// 0x001A21D0-0x001A225C (140 bytes), lines 435-470
static void *_pluginAtomicCopy(void *dstObject, int offsetInObject)
{
    // param void *dstObject  (in $s0)
    // param int offsetInObject  (in $v0)
    {   // 0x001A21D0-0x001A225C
        RpGeometry *dstGeom;  // in $v0
        RpAtomic *dst;  // in $v0
    }
}

// 0x001A2260-0x001A22D8 (120 bytes), lines 481-507
static void *_pluginSectorCopy(void *dstObject, int offsetInObject)
{
    // param void *dstObject  (in $s0)
    // param int offsetInObject  (in $v0)
    {   // 0x001A2260-0x001A22D8
        RpWorldSector *dst;  // in $v0
    }
}

// 0x001A22E0-0x001A23A0 (192 bytes), lines 526-555
static int _initAtomicMeshCache(void *object)
{
    // param void *object  (in $v0)
    {   // 0x001A22E0-0x001A23A0
        RpGeometry *geom;  // in $a1
        RpAtomic *atomic;  // in $v0
    }
}

// 0x001A23A0-0x001A2408 (104 bytes), lines 572-587
static int _initSectorMeshCache(void *object)
{
    // param void *object  (in $v0)
    {   // 0x001A23A0-0x001A2408
        RpWorldSector *sector;  // in $v0
    }
}

// 0x001A2410-0x001A2528 (280 bytes), lines 595-642
int _rxWorldDevicePluginAttach()
{
    {   // 0x001A2410-0x001A2528
        int status;  // in $s1
        int result;  // in $s0
    }
}

// 0x001A2530-0x001A262C (252 bytes), lines 649-702
static RxPipeline *CreatePS2AllWorldSectorPipeline()
{
    {   // 0x001A2530-0x001A262C
        RwError _rwErrorCode;  // $sp+56
        RxPipelineNode *plnode;  // in $s1
        RxNodeDefinition *ps2all;  // in $s1
        RxPipeline *lpipe;  // in $s1
        RxPipeline *pipe;  // in $s0
    }
}

// 0x001A2630-0x001A27B0 (384 bytes), lines 706-793
static RxPipeline *CreatePS2ManagerWorldSectorPipeline()
{
    {   // 0x001A2630-0x001A27B0
        RwError _rwErrorCode;  // $sp+88
        RxPipelineNode *plnode;  // in $s2
        RxNodeDefinition *manager;  // in $s1
        RxPipeline *lpipe;  // in $s1
        RxPipeline *pipe;  // in $s0
    }
}

// 0x001A27B0-0x001A2964 (436 bytes), lines 797-894
static RxPipeline *CreateAllInOneWorldSectorPipeline()
{
    {   // 0x001A27B0-0x001A2964
        RwError _rwErrorCode;  // $sp+104
        RxPipelineNode *plnode;  // in $s3
        RxNodeDefinition *bridge;  // in $s1
        RxNodeDefinition *instance;  // in $s3
        RxNodeDefinition *objallinone;  // in $s2
        RxPipeline *lpipe;  // in $s1
        RxPipeline *pipe;  // in $s0
    }
}

// 0x001A2970-0x001A2A6C (252 bytes), lines 1239-1292
static RxPipeline *CreatePS2AllAtomicPipeline()
{
    {   // 0x001A2970-0x001A2A6C
        RwError _rwErrorCode;  // $sp+56
        RxPipelineNode *plnode;  // in $s1
        RxNodeDefinition *ps2all;  // in $s1
        RxPipeline *lpipe;  // in $s1
        RxPipeline *pipe;  // in $s0
    }
}

// 0x001A2A70-0x001A2BF0 (384 bytes), lines 1296-1383
static RxPipeline *CreatePS2ManagerAtomicPipeline()
{
    {   // 0x001A2A70-0x001A2BF0
        RwError _rwErrorCode;  // $sp+88
        RxPipelineNode *plnode;  // in $s2
        RxNodeDefinition *manager;  // in $s1
        RxPipeline *lpipe;  // in $s1
        RxPipeline *pipe;  // in $s0
    }
}

// 0x001A2BF0-0x001A2DA4 (436 bytes), lines 1387-1484
static RxPipeline *CreateAllInOneAtomicPipeline()
{
    {   // 0x001A2BF0-0x001A2DA4
        RwError _rwErrorCode;  // $sp+104
        RxPipelineNode *plnode;  // in $s3
        RxNodeDefinition *bridge;  // in $s1
        RxNodeDefinition *instance;  // in $s3
        RxNodeDefinition *objallinone;  // in $s2
        RxPipeline *lpipe;  // in $s1
        RxPipeline *pipe;  // in $s0
    }
}

// 0x001A2DB0-0x001A2F74 (452 bytes), lines 1822-1926
static RxPipeline *CreatePS2AllMatMaterialPipeline()
{
    {   // 0x001A2DB0-0x001A2F74
        RwError _rwErrorCode;  // $sp+88
        RxPipelineNode *plnode;  // in $s2
        RxNodeDefinition *ps2allmat;  // in $s1
        RxPipeline *lpipe;  // in $s1
        RxPipeline *pipe;  // in $s0
    }
}

// 0x001A2F80-0x001A30FC (380 bytes), lines 1930-2021
static RxPipeline *CreateVanillaMaterialPipeline()
{
    {   // 0x001A2F80-0x001A30FC
        RwError _rwErrorCode;  // $sp+88
        RxPipelineNode *plnode;  // in $s2
        RxNodeDefinition *bridge;  // in $s1
        RxNodeDefinition *instance;  // in $s2
        RxPipeline *lpipe;  // in $s1
        RxPipeline *pipe;  // in $s0
    }
}

// 0x001A3100-0x001A3188 (136 bytes), lines 2240-2259
void _rpDestroyPlatformMaterialPipelines()
{
    {   // 0x001A3100-0x001A3188
    }
}

// 0x001A3190-0x001A3288 (248 bytes), lines 2263-2301
int _rpCreatePlatformMaterialPipelines()
{
    {   // 0x001A3190-0x001A3288
        RwError _rwErrorCode;  // $sp+56
    }
}

// 0x001A3290-0x001A3368 (216 bytes), lines 2347-2378
void _rpDestroyPlatformWorldSectorPipelines()
{
    {   // 0x001A3290-0x001A3368
    }
}

// 0x001A3370-0x001A3584 (532 bytes), lines 2382-2412
int _rpCreatePlatformWorldSectorPipelines()
{
    {   // 0x001A3370-0x001A3584
        RwError _rwErrorCode;  // $sp+64
    }
}

// 0x001A3590-0x001A3668 (216 bytes), lines 2458-2489
void _rpDestroyPlatformAtomicPipelines()
{
    {   // 0x001A3590-0x001A3668
    }
}

// 0x001A3670-0x001A3884 (532 bytes), lines 2493-2523
int _rpCreatePlatformAtomicPipelines()
{
    {   // 0x001A3670-0x001A3884
        RwError _rwErrorCode;  // $sp+64
    }
}

