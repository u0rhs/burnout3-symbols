// nodeClipLine.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int _rxPipelineGlobalsOffset;  // 0x00310AF8
unsigned int ourGlobals[4096];  // 0x004486D0
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00
RwClipInfo _rwClipInfoGlobal;  // 0x0044DD20

// ---- functions ----

// 0x001747D0-0x00175088 (2232 bytes), lines 67-567
static int PerspectiveClipProcessPacket(RxPipelineNode *Self, RxPacket *Packet)
{
    // param RxPipelineNode *Self  ($sp+284)
    // param RxPacket *Packet  ($sp+280)
    {   // 0x001747D0-0x00175088
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s0
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s0
        unsigned short *LastOriginalLine;  // in $a0
        RwSky2DVertex *DevVertex;  // in $t7
        float nRecipZ;  // optimised away
        float nZ;  // $sp+336
        float nY;  // optimised away
        float nX;  // optimised away
        unsigned char cAnd;  // in $v0
        unsigned char cOr;  // in $s6
        int nPntOutVerts;  // $sp+332
        int nPntInVerts;  // $sp+328
        unsigned short nClipBuffer[16];  // $sp+288
        unsigned int CurLine;  // in $s4
        int j;  // in $v1
        int i;  // in $v1
        RxCamSpace3DVertex *CamVert1;  // in $v0
        unsigned short Index2;  // $sp+240
        unsigned short Index1;  // in $v0
        unsigned short *OriginalIndices;  // $sp+224
        unsigned int OldNumVertices;  // in $v0
        unsigned int OldNumLines;  // in $s3
        unsigned int NumLines;  // $sp+208
        RxRenderStateVector *rsvp;  // $sp+192
        RxMeshStateVector *MeshData;  // $sp+176
        int LinesStride;  // $sp+160
        RxCluster *MeshState;  // in $v0
        RxCluster *Indices;  // in $s2
        RxCluster *DevVerts;  // in $s1
        RxCluster *CamVerts;  // in $s0
        int result;  // in $s7
        RxClipFuncs PerspClipFuncs;  // at 0x002C3FE0
    }
}

// 0x00175090-0x00175940 (2224 bytes), lines 572-1068
static int ParallelClipProcessPacket(RxPipelineNode *Self, RxPacket *Packet)
{
    // param RxPipelineNode *Self  ($sp+284)
    // param RxPacket *Packet  ($sp+280)
    {   // 0x00175090-0x00175940
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s0
        unsigned int exitCode;  // in $v0
        RxPipelineNode *nextNode;  // in $v0
        RxPipeline *curPipeline;  // in $s0
        unsigned short *LastOriginalLine;  // in $a0
        RwSky2DVertex *DevVertex;  // in $a2
        float nZ;  // optimised away
        float nY;  // optimised away
        float nX;  // optimised away
        unsigned char cAnd;  // in $v0
        unsigned char cOr;  // in $s6
        int nPntOutVerts;  // $sp+332
        int nPntInVerts;  // $sp+328
        unsigned short nClipBuffer[16];  // $sp+288
        unsigned int CurLine;  // in $s4
        int j;  // in $v1
        int i;  // in $a3
        RxCamSpace3DVertex *CamVert1;  // in $v0
        unsigned short Index2;  // $sp+240
        unsigned short Index1;  // in $v0
        unsigned short *OriginalLine;  // $sp+224
        unsigned int OldNumVertices;  // in $v0
        unsigned int OldNumLines;  // in $s3
        unsigned int NumLines;  // $sp+208
        RxRenderStateVector *rsvp;  // $sp+192
        RxMeshStateVector *MeshData;  // $sp+176
        int LinesStride;  // $sp+160
        RxCluster *MeshState;  // in $v0
        RxCluster *Indices;  // in $s2
        RxCluster *DevVerts;  // in $s1
        RxCluster *CamVerts;  // in $s0
        int result;  // in $s7
        RxClipFuncs ParaClipFuncs;  // at 0x002C4000
    }
}

// 0x00175940-0x00175A5C (284 bytes), lines 1080-1138
static int LineClipNode(RxPipelineNode *self)
{
    // param RxPipelineNode *self  (in $s1)
    {   // 0x00175940-0x00175A5C
        int (*func)(RxPipelineNode *, RxPacket *);  // in $s0
        RwRaster *rpRas;  // in $a1
        RwCamera *curCamera;  // in $a0
        int result;  // in $v0
        int (*ClipFunc[2])(RxPipelineNode *, RxPacket *);  // at 0x003103E0
    }
}

// 0x00175A60-0x00175A6C (12 bytes), lines 1307-1308
RxNodeDefinition *RxNodeDefinitionGetClipLine()
{
    {   // 0x00175A60-0x00175A6C
        RxNodeDefinition nodeClipLineCSL;  // at 0x002B2BC0
    }
}

