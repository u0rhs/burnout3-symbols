// nodeClipTriangle.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int _rxPipelineGlobalsOffset;  // 0x00310AF8
unsigned int ourGlobals[4096];  // 0x004486D0
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00
RwClipInfo _rwClipInfoGlobal;  // 0x0044DD20

// ---- functions ----

// 0x00175A70-0x00176650 (3040 bytes), lines 89-722
static int PerspectiveClipProcessPacket(RxPipelineNode *Self, RxPacket *Packet)
{
    // param RxPipelineNode *Self  ($sp+332)
    // param RxPacket *Packet  ($sp+328)
    {   // 0x00175A70-0x00176650
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s0
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s0
        int RxInterpolantsStride;  // in $a0
        unsigned int ReusableVerts;  // in $v0
        unsigned short *EndIndices;  // in $a2
        unsigned short *LastOriginalIndices;  // in $a1
        float nRecipZ;  // optimised away
        float nZ;  // $sp+384
        float nY;  // optimised away
        float nX;  // optimised away
        void *resultPtr;  // in $v0
        unsigned short pivot;  // in $v0
        unsigned short firstFreeVertex;  // $sp+304
        unsigned char cAnd;  // in $v0
        unsigned char cOr;  // in $s4
        int nPntOutVerts;  // $sp+380
        int nPntInVerts;  // $sp+376
        unsigned short nClipBuffer[16];  // $sp+336
        unsigned int Tri;  // in $s7
        int j;  // in $v0
        int i;  // in $v0
        RwSky2DVertex *DevVert1;  // in $t7
        RxCamSpace3DVertex *CamVert3;  // in $v1
        RxCamSpace3DVertex *CamVert1;  // in $a2
        unsigned short Index3;  // in $v0
        unsigned short Index2;  // $sp+288
        unsigned short Index1;  // $sp+272
        unsigned short *IndexPtr;  // in $a0
        unsigned short *OriginalIndices;  // $sp+256
        unsigned int OldNumVertices;  // $sp+240
        unsigned int OldNumRxTriangles;  // in $fp
        unsigned int NumRxTriangles;  // $sp+224
        RxRenderStateVector *rsvp;  // $sp+208
        RxMeshStateVector *MeshData;  // $sp+192
        int IndicesStride;  // $sp+176
        RxCluster *RxInterpolants;  // in $s3
        RxCluster *MeshState;  // in $s4
        RxCluster *Indices;  // in $s2
        RxCluster *DevVerts;  // in $s1
        RxCluster *CamVerts;  // in $s0
        int result;  // $sp+160
        RxClipFuncs PerspClipFuncs;  // at 0x002C4020
    }
}

// 0x00176650-0x00177228 (3032 bytes), lines 726-1357
static int ParallelClipProcessPacket(RxPipelineNode *Self, RxPacket *Packet)
{
    // param RxPipelineNode *Self  ($sp+332)
    // param RxPacket *Packet  ($sp+328)
    {   // 0x00176650-0x00177228
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s0
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s0
        int RxInterpolantsStride;  // in $a0
        unsigned int ReusableVerts;  // in $v0
        unsigned short *EndIndices;  // in $a2
        unsigned short *LastOriginalIndices;  // in $a1
        float nZ;  // optimised away
        float nY;  // optimised away
        float nX;  // optimised away
        void *resultPtr;  // in $v0
        unsigned short pivot;  // in $v0
        unsigned short firstFreeVertex;  // $sp+304
        unsigned char cAnd;  // in $v0
        unsigned char cOr;  // in $s4
        int nPntOutVerts;  // $sp+380
        int nPntInVerts;  // $sp+376
        unsigned short nClipBuffer[16];  // $sp+336
        unsigned int Tri;  // in $s7
        int j;  // in $v0
        int i;  // in $v0
        RwSky2DVertex *DevVert1;  // in $a2
        RxCamSpace3DVertex *CamVert3;  // in $v1
        RxCamSpace3DVertex *CamVert1;  // in $a2
        unsigned short Index3;  // in $v0
        unsigned short Index2;  // $sp+288
        unsigned short Index1;  // $sp+272
        unsigned short *IndexPtr;  // in $a0
        unsigned short *OriginalIndices;  // $sp+256
        unsigned int OldNumVertices;  // $sp+240
        unsigned int OldNumRxTriangles;  // in $fp
        unsigned int NumRxTriangles;  // $sp+224
        RxRenderStateVector *rsvp;  // $sp+208
        RxMeshStateVector *MeshData;  // $sp+192
        int IndicesStride;  // $sp+176
        RxCluster *RxInterpolants;  // in $s3
        RxCluster *MeshState;  // in $s4
        RxCluster *Indices;  // in $s2
        RxCluster *DevVerts;  // in $s1
        RxCluster *CamVerts;  // in $s0
        int result;  // $sp+160
        RxClipFuncs ParaClipFuncs;  // at 0x002C4040
    }
}

// 0x00177230-0x0017734C (284 bytes), lines 1369-1427
static int TriangleClipNode(RxPipelineNode *self)
{
    // param RxPipelineNode *self  (in $s1)
    {   // 0x00177230-0x0017734C
        int (*func)(RxPipelineNode *, RxPacket *);  // in $s0
        RwRaster *rpRas;  // in $a1
        RwCamera *curCamera;  // in $a0
        int result;  // in $v0
        int (*ClipFunc[2])(RxPipelineNode *, RxPacket *);  // at 0x003103F0
    }
}

// 0x00177350-0x0017735C (12 bytes), lines 1615-1616
RxNodeDefinition *RxNodeDefinitionGetClipTriangle()
{
    {   // 0x00177350-0x0017735C
        RxNodeDefinition nodeClipTriangleCSL;  // at 0x002B2D00
    }
}

