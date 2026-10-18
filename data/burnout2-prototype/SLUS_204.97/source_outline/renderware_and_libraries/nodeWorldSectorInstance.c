// nodeWorldSectorInstance.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwModuleInfo resourcesModule;  // 0x003108C8
int _rxPipelineGlobalsOffset;  // 0x00310AF8
unsigned int ourGlobals[4096];  // 0x004486D0
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00

// ---- functions ----

// 0x00190220-0x00190408 (488 bytes), lines 93-170
static void instanceVerts(RxObjSpace3DVertex *instVerts, RpWorldSector *sector, unsigned int vertSize)
{
    // param RxObjSpace3DVertex *instVerts  (in $v0)
    // param RpWorldSector *sector  (in $v0)
    // param unsigned int vertSize  (in $v0)
    {   // 0x00190220-0x00190408
        RwV3d *pos;  // in $a1
        RwV3d tempV;  // $sp+0
        RpVertexNormal *normal;  // in $t1
        RwRGBA *preLitLum;  // in $t4
        RwTexCoords *texCoords;  // in $t2
        unsigned int worldFlags;  // in $v1
        unsigned int numVerts;  // in $t1
        RxObjSpace3DVertex *vert;  // in $t0
        RwRGBA opaqueBlack;  // at 0x002C40A0
    }
}

// 0x00190410-0x001906C0 (688 bytes), lines 176-316
static void instanceMeshes(InstancedMesh *meshes, RpMeshHeader *meshHeader, unsigned short *dstIndices, unsigned char *dstVerts, unsigned int vertSize)
{
    // param InstancedMesh *meshes  (in $v0)
    // param RpMeshHeader *meshHeader  (in $v0)
    // param unsigned short *dstIndices  (in $v0)
    // param unsigned char *dstVerts  (in $v0)
    // param unsigned int vertSize  (in $v0)
    {   // 0x00190410-0x001906C0
        unsigned int flip;  // in $t4
        unsigned short i;  // in $t3
        unsigned short i;  // in $s1
        unsigned int numInds;  // in $t4
        unsigned short *meshInds;  // in $t3
        unsigned int maxVert;  // in $t2
        unsigned int minVert;  // in $v0
        RpMesh *mesh;  // in $t1
        unsigned int numMeshes;  // in $v1
    }
}

// 0x001906C0-0x00190C74 (1460 bytes), lines 332-576
static int WorldSectorInstanceNodeFn(RxPipelineNode *self, RxPipelineNodeParam *params)
{
    // param RxPipelineNode *self  (in $s0)
    // param RxPipelineNodeParam *params  ($sp+236)
    {   // 0x001906C0-0x00190C74
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s3
        RwTexture *texture;  // in $a1
        RpMaterial *mat;  // in $v1
        RxRenderStateVector *rsvp;  // in $v1
        RxMeshStateVector *meshData;  // in $v0
        RxCluster *renderState;  // in $s3
        RxCluster *meshState;  // in $s3
        RxCluster *indices;  // in $s6
        RxCluster *objVerts;  // in $s7
        RxPacket *packet;  // in $s3
        unsigned int vertSize;  // in $s4
        unsigned int worldFlags;  // in $fp
        unsigned int totalNumTris;  // in $s7
        InstancedMesh *instancedMesh;  // in $s2
        unsigned int numVerts;  // $sp+176
        unsigned int numMeshes;  // in $s1
        RpMeshHeader *meshHeader;  // in $s2
        RxObjSpace3DVertex *dstVerts;  // in $t7
        InstancedSector *instancedSector;  // in $s6
        RwResEntry *repEntry;  // in $v0
        RpWorld *world;  // $sp+160
        RpWorldSector *sector;  // in $s3
    }
}

// 0x00190C80-0x00190C8C (12 bytes), lines 736-737
RxNodeDefinition *RxNodeDefinitionGetWorldSectorInstance()
{
    {   // 0x00190C80-0x00190C8C
        RxNodeDefinition nodeWorldSectorInstanceCSL;  // at 0x002B3C60
    }
}

