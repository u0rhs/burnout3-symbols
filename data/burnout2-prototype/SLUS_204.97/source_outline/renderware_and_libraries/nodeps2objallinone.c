// nodeps2objallinone.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RpLight *_sectorDoApplyLight(RpLight *, void *);  // 0x0019CAB0
RpLight *_atomicDoApplyLight(RpLight *, void *);  // 0x0019CB00
RpLight *_atomicDoApplyLightFrame(RpLight *, void *);  // 0x0019CB40
void _rxWorldLightingDefaultCallback(int, void *);  // 0x0019D660
u_long128 nullLightBlock[2];  // 0x002A3390
int skyCameraExt;  // 0x00310A70
unsigned char skyTransType;  // 0x00310AC4
int _rxPipelineGlobalsOffset;  // 0x00310AF8
unsigned int _skyLightQWordsWritten;  // 0x00310B80
float *_skyLightFillPos;  // 0x00310B84
int rwPip2WorldSectorOffset;  // 0x00310B88
int rwPip2AtomicOffset;  // 0x00310B8C
int rwPip2GeometryOffset;  // 0x00310B90
unsigned int ourGlobals[4096];  // 0x004486D0
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00
u_long128 lightBuffer[129];  // 0x0044DD50

// ---- functions ----

// 0x0019C4E0-0x0019C500 (32 bytes), lines 128-138
int _rwPS2ObjAllInOnePipelineNodeInit(RxPipelineNode *self)
{
    // param RxPipelineNode *self  (in $v0)
    {   // 0x0019C4E0-0x0019C500
        RxPipelineNodePS2ObjAllInOneData *data;  // in $a0
    }
}

// 0x0019C500-0x0019CAA4 (1444 bytes), lines 169-313
void RxPipelineNodePS2ManagerApplyLight(RpLight *light, RwMatrixTag *inverseMat, float invScale, float recipInvScale)
{
    // param RpLight *light  (in $s1)
    // param RwMatrixTag *inverseMat  (in $v0)
    // param float invScale  ($sp+80)
    // param float recipInvScale  ($sp+80)
    {   // 0x0019C500-0x0019CAA4
        RwMatrixTag *matrix;  // in $v0
        RwV3d *at;  // in $a0
        RwV3d *pos;  // in $v1
        RwFrame *frame;  // in $v0
        RwRGBAReal *color;  // in $s3
        RpLightType type;  // in $s2
    }
}

// 0x0019CAB0-0x0019CAF4 (68 bytes), lines 326-337
static RpLight *_sectorDoApplyLight(RpLight *light)
{
    // param RpLight *light  (in $s0)
    {   // 0x0019CAB0-0x0019CAF4
    }
}

// 0x0019CB00-0x0019CB3C (60 bytes), lines 350-368
static RpLight *_atomicDoApplyLight(RpLight *light, void *pData)
{
    // param RpLight *light  (in $s0)
    // param void *pData  (in $v0)
    {   // 0x0019CB00-0x0019CB3C
        rpAtomicLightData *lightingData;  // in $v0
    }
}

// 0x0019CB40-0x0019CBA8 (104 bytes), lines 381-404
static RpLight *_atomicDoApplyLightFrame(RpLight *light, void *pData)
{
    // param RpLight *light  (in $s0)
    // param void *pData  (in $v0)
    {   // 0x0019CB40-0x0019CBA8
        rpAtomicLightData *lightingData;  // in $v0
    }
}

// 0x0019CBB0-0x0019D090 (1248 bytes), lines 413-787
int _rwRabinsObjAllInOneCode(RxPS2DMASessionRecord *DMASessionRecord, RxPipelineNodePS2ObjAllInOneData *pvtData)
{
    // param RxPS2DMASessionRecord *DMASessionRecord  (in $s2)
    // param RxPipelineNodePS2ObjAllInOneData *pvtData  (in $s1)
    {   // 0x0019CBB0-0x0019D090
        u_long128 ___ltmp;  // in $v1
        RpAtomic *apAtom;  // in $v0
        RpWorldSector *worldSector;  // in $v0
        RwMatrixTag *mpLocalToWorld;  // in $v0
        float dot;  // optimised away
        unsigned int numPlanes;  // in $a2
        RwSphere *sphere;  // in $v0
        RwFrustumPlane *frustPlane;  // in $a0
        RpGeometry *geom;  // in $v1
        RpAtomic *apAtom;  // in $s3
        float dot;  // optimised away
        unsigned int numPlanes;  // in $a0
        RwFrustumPlane *frustPlane;  // in $v1
        RpWorldSector *worldSector;  // in $t0
        unsigned int primCode;  // in $s4
        int success;  // in $v0
        RwMatrixTag *pxForm;  // in $s3
        RwMatrixTag xForm;  // $sp+128
        RpMeshHeader *meshHeader;  // in $s0
    }
}

// 0x0019D090-0x0019D250 (448 bytes), lines 796-967
int _rwIm3DObjAllInOneCode(RxPS2DMASessionRecord *DMASessionRecord, RxPipelineNodePS2ObjAllInOneData *pvtData)
{
    // param RxPS2DMASessionRecord *DMASessionRecord  (in $s3)
    // param RxPipelineNodePS2ObjAllInOneData *pvtData  (in $s2)
    {   // 0x0019D090-0x0019D250
        RwMatrixTag *viewMatrix;  // in $v0
        RwMatrixTag *mpLocalToWorld;  // in $v0
        int success;  // in $v0
        unsigned int primCode;  // in $v0
        _rwIm3DPoolStash *stash;  // in $s1
        RwMatrixTag *pxForm;  // in $s0
        RwMatrixTag xForm;  // $sp+80
    }
}

// 0x0019D250-0x0019D638 (1000 bytes), lines 981-1173
static int PS2ObjAllInOneNodeBody(RxPipelineNode *self, void *data, int objType)
{
    // param RxPipelineNode *self  (in $s6)
    // param void *data  (in $s2)
    // param int objType  (in $s7)
    {   // 0x0019D250-0x0019D638
        RxCluster *clMesh;  // in $s5
        RxCluster *clDMASessionRecord;  // in $fp
        RxPipeline *fromPipeline;  // in $fp
        unsigned int exitCode;  // in $v0
        RxPipeline *destPipeline;  // in $s4
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $fp
        unsigned int n;  // in $s3
        RxPacket *pk;  // in $s5
        RpMesh *mesh;  // in $s2
        RwMeshCache *meshCache;  // $sp+208
        RpMeshHeader *meshHeader;  // in $s1
        int numVerts;  // in $v0
        RpGeometry *geom;  // in $s0
        RpInterpolator *interpolator;  // $sp+192
        RxPipeline *defaultPipeline;  // $sp+176
        RxPS2Mesh PS2Mesh;  // $sp+256
        RxPS2DMASessionRecord DMASessionRecord;  // $sp+224
        RxPipelineNodePS2ObjAllInOneData *pvtData;  // $sp+160
    }
}

// 0x0019D640-0x0019D64C (12 bytes), lines 1191-1191
static int PS2ObjAllInOneWorldSectorNodeBody(RxPipelineNode *self, RxPipelineNodeParam *params)
{
    // param RxPipelineNode *self  (in $v0)
    // param RxPipelineNodeParam *params  (in $v0)
    {   // 0x0019D640-0x0019D64C
        int result;  // in $v0
    }
}

// 0x0019D650-0x0019D65C (12 bytes), lines 1212-1212
static int PS2ObjAllInOneAtomicNodeBody(RxPipelineNode *self, RxPipelineNodeParam *params)
{
    // param RxPipelineNode *self  (in $v0)
    // param RxPipelineNodeParam *params  (in $v0)
    {   // 0x0019D650-0x0019D65C
        int result;  // in $v0
    }
}

// 0x0019D660-0x0019D79C (316 bytes), lines 1223-1302
void _rxWorldLightingDefaultCallback(int objectType, void *object)
{
    // param int objectType  (in $v0)
    // param void *object  (in $s0)
    {   // 0x0019D660-0x0019D79C
        float _result;  // optimised away
        float temp;  // $sp+128
        RwMatrixTag *frameMat;  // in $s1
        rpAtomicLightData lightingData;  // $sp+48
        RwLLLink *end;  // in $s0
        RwLLLink *cur;  // in $s1
        RpAtomic *apAtom;  // in $v0
        RpWorld *world;  // in $v1
    }
}

// 0x0019D7A0-0x0019D7B0 (16 bytes), lines 1353-1356
RxPipelineNode *RxPS2ObjAllInOneSetGrouping(RxPipelineNode *node, int groupMeshes)
{
    // param RxPipelineNode *node  (in $v0)
    // param int groupMeshes  (in $v0)
    {   // 0x0019D7A0-0x0019D7B0
    }
}

// 0x0019D7B0-0x0019D7E8 (56 bytes), lines 1512-1601
RxNodeDefinition *RxNodeDefinitionGetPS2ObjAllInOne(int objType)
{
    // param int objType  (in $v0)
    {   // 0x0019D7B0-0x0019D7E8
        RxNodeDefinition *result;  // in $v0
        RxNodeDefinition AtomicNodeDefiniton;  // at 0x002B4580
        RxNodeDefinition WorldNodeDefinition;  // at 0x002B44F0
    }
}

