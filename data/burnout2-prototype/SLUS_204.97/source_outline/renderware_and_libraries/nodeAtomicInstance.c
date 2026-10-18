// nodeAtomicInstance.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwModuleInfo resourcesModule;  // 0x003108C8
int _rxPipelineGlobalsOffset;  // 0x00310AF8
unsigned int ourGlobals[4096];  // 0x004486D0
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00

// ---- functions ----

// 0x0018D150-0x0018D500 (944 bytes), lines 97-194
static void instanceVertPos(RxObjSpace3DVertex *instVerts, RpAtomic *atomic, RpGeometry *geom, unsigned int vertSize)
{
    // param RxObjSpace3DVertex *instVerts  (in $v0)
    // param RpAtomic *atomic  (in $v0)
    // param RpGeometry *geom  (in $v0)
    // param unsigned int vertSize  (in $v0)
    {   // 0x0018D150-0x0018D500
        RwV3d tempV;  // $sp+16
        RwV3d tempV;  // $sp+0
        RwV3d *normal2;  // in $t3
        RwV3d *normal1;  // in $t0
        float scale;  // $sp+32
        RwV3d *pos2;  // in $t2
        RwV3d *pos1;  // in $t1
        RpMorphTarget *morphTarget2;  // in $a2
        RpMorphTarget *morphTarget1;  // in $t0
        RwV3d *normal;  // in $a2
        RwV3d *pos;  // in $t0
        RpMorphTarget *morphTarget;  // in $a2
        int numVerts;  // in $v1
        int endMT;  // in $t3
        int startMT;  // in $t2
        RpInterpolator *interp;  // in $t1
        RwV3d zeroNormal;  // at 0x002C4080
    }
}

// 0x0018D500-0x0018D608 (264 bytes), lines 209-255
static void instanceVerts(RxObjSpace3DVertex *instVerts, RpAtomic *atomic, RpGeometry *geom, unsigned int vertSize)
{
    // param RxObjSpace3DVertex *instVerts  (in $v0)
    // param RpAtomic *atomic  (in $v0)
    // param RpGeometry *geom  (in $v0)
    // param unsigned int vertSize  (in $v0)
    {   // 0x0018D500-0x0018D608
        RwRGBA *preLitLum;  // in $t4
        RwTexCoords *texCoords;  // in $t3
        unsigned int geomFlags;  // in $t2
        unsigned int numVerts;  // in $t1
        RxObjSpace3DVertex *vert;  // in $t0
        RwRGBA opaqueBlack;  // at 0x002C4090
    }
}

// 0x0018D610-0x0018D8AC (668 bytes), lines 263-403
static void instanceMeshes(InstancedMesh *meshes, RpMeshHeader *meshHeader, unsigned short *dstIndices, unsigned char *dstVerts, unsigned int vertSize)
{
    // param InstancedMesh *meshes  (in $v0)
    // param RpMeshHeader *meshHeader  (in $v0)
    // param unsigned short *dstIndices  (in $v0)
    // param unsigned char *dstVerts  (in $v0)
    // param unsigned int vertSize  (in $v0)
    {   // 0x0018D610-0x0018D8AC
        unsigned int flip;  // in $t3
        unsigned short i;  // in $t7
        unsigned short i;  // in $t8
        unsigned int numInds;  // in $t3
        unsigned short *meshInds;  // in $t2
        unsigned int maxVert;  // in $t8
        unsigned int minVert;  // in $v0
        RpMesh *mesh;  // in $t1
        unsigned int numMeshes;  // in $v1
    }
}

// 0x0018D8B0-0x0018DF54 (1700 bytes), lines 419-714
static int AtomicInstanceNode(RxPipelineNode *self, RxPipelineNodeParam *params)
{
    // param RxPipelineNode *self  (in $s4)
    // param RxPipelineNodeParam *params  ($sp+300)
    {   // 0x0018D8B0-0x0018DF54
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s2
        RwTexture *texture;  // in $a0
        RpMaterial *mat;  // in $s3
        RxRenderStateVector *rsvp;  // in $v0
        RxMeshStateVector *meshData;  // in $s2
        RxCluster *renderState;  // in $s2
        RxCluster *meshState;  // in $s2
        RxCluster *indices;  // in $s3
        RxCluster *objVerts;  // in $fp
        RxPacket *packet;  // in $s2
        unsigned int dirtyFlags;  // in $v0
        unsigned int vertSize;  // in $s2
        unsigned int geomFlags;  // $sp+240
        unsigned int totalNumTris;  // $sp+224
        InstancedMesh *instancedMesh;  // in $s1
        RpInterpolator *interpolator;  // $sp+208
        unsigned int numVerts;  // in $fp
        unsigned int numMeshes;  // in $s0
        RpMeshHeader *meshHeader;  // in $s3
        RxObjSpace3DVertex *dstVerts;  // in $s5
        unsigned short *dstIndices;  // $sp+192
        InstancedAtomic *instancedAtomic;  // in $s6
        void *owner;  // $sp+188
        RwResEntry **repEntryOwner;  // $sp+160
        RwResEntry *repEntry;  // in $v0
        RpGeometry *geom;  // in $s1
        RpAtomic *atomic;  // in $s7
    }
}

// 0x0018DF60-0x0018DF6C (12 bytes), lines 871-872
RxNodeDefinition *RxNodeDefinitionGetAtomicInstance()
{
    {   // 0x0018DF60-0x0018DF6C
        RxNodeDefinition nodeAtomicInstanceCSL;  // at 0x002B38C0
    }
}

