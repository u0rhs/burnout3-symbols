// bameshop.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int SortPolygons(void *, void *);  // 0x00187FF0
RpMesh *SortPolygonsInTriListMesh(RpMesh *, RpMeshHeader *, void *);  // 0x001881D0
RpMeshHeader *RpBuildMeshGenerateDefaultTriStrip(RpBuildMesh *, void *);  // 0x0018A720
RpMeshHeader *_rpTriListMeshGenerate(RpBuildMesh *, void *);  // 0x0018A770
static RpMeshopStatic MeshopStatic;  // 0x002B3730
RwModuleInfo meshModule;  // 0x00310B50
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x00187FF0-0x001881C4 (468 bytes), lines 208-313
static int SortPolygons(void *pA, void *pB)
{
    // param void *pA  (in $v0)
    // param void *pB  (in $v0)
    {   // 0x00187FF0-0x001881C4
        unsigned int orderB;  // in $t3
        unsigned int orderA;  // in $t2
        RwTexture *textureB;  // in $v0
        RwTexture *textureA;  // in $v0
        RxPipeline *pipelineB;  // in $v0
        RxPipeline *pipelineA;  // in $v0
        RwRaster *rasterB;  // in $v0
        RwRaster *rasterA;  // in $v0
        RpMaterial *materialB;  // in $v0
        RpMaterial *materialA;  // in $v0
    }
}

// 0x001881D0-0x001884D0 (768 bytes), lines 326-430
static RpMesh *SortPolygonsInTriListMesh(RpMesh *mesh)
{
    // param RpMesh *mesh  (in $s6)
    {   // 0x001881D0-0x001884D0
        unsigned short *testInds;  // in $t1
        unsigned int count;  // in $a2
        char *cs;  // in $a1
        unsigned int inIndex;  // in $t0
        unsigned int outIndex;  // in $a3
        unsigned int arraySize;  // in $s7
        unsigned short *oldIndices;  // in $s3
        unsigned short *indices;  // in $s2
        unsigned int numTriangles;  // in $s1
        unsigned int i;  // in $t2
        unsigned int maxVertex;  // in $t1
        unsigned int *vertexTagBuffer;  // in $s0
    }
}

// 0x001884D0-0x001885D4 (260 bytes), lines 446-483
static Edge *TriStripAddEdge(RwFreeList *edgeFreeList, Edge **edgelist, unsigned short v1, unsigned short v2, unsigned int tri, TriBinEntry **binEntryArray)
{
    // param RwFreeList *edgeFreeList  (in $v0)
    // param Edge **edgelist  (in $s4)
    // param unsigned short v1  (in $s3)
    // param unsigned short v2  (in $s2)
    // param unsigned int tri  (in $s1)
    // param TriBinEntry **binEntryArray  (in $s0)
    {   // 0x001884D0-0x001885D4
        Edge *newEdge;  // in $v0
        Edge *temp;  // in $v0
    }
}

// 0x001885E0-0x001886D0 (240 bytes), lines 490-530
static TriBinEntry **TriStripBinEntryArrayDestroy(unsigned int numTris, MeshOpFreeLists *meshOpFreeLists, Edge *edge, TriBinEntry **binEntryArray)
{
    // param unsigned int numTris  (in $s5)
    // param MeshOpFreeLists *meshOpFreeLists  (in $s4)
    // param Edge *edge  (in $v0)
    // param TriBinEntry **binEntryArray  (in $s3)
    {   // 0x001885E0-0x001886D0
        Edge *next;  // in $s0
        unsigned int i;  // in $s0
    }
}

// 0x001886D0-0x00188884 (436 bytes), lines 544-582
static TriBinEntry **TriStripBinEntryArrayCreate(unsigned int numTris, MeshOpFreeLists *meshOpFreeLists, Edge **edgelist, RpBuildMeshTriangle *triList)
{
    // param unsigned int numTris  ($sp+204)
    // param MeshOpFreeLists *meshOpFreeLists  (in $s5)
    // param Edge **edgelist  (in $s4)
    // param RpBuildMeshTriangle *triList  ($sp+200)
    {   // 0x001886D0-0x00188884
        unsigned int i;  // in $s1
        TriBinEntry **binEntryArray;  // in $s0
    }
}

// 0x00188890-0x00188950 (192 bytes), lines 600-620
static Edge *TriStripGetTriEdge(TriBinEntry *binEntry, unsigned short v1, unsigned short v2)
{
    // param TriBinEntry *binEntry  (in $v0)
    // param unsigned short v1  (in $v0)
    // param unsigned short v2  (in $v0)
    {   // 0x00188890-0x00188950
    }
}

// 0x00188950-0x00188B18 (456 bytes), lines 641-737
static void TriStripMarkTriUsed(TriBinEntry *tri, TriBinList *binListArray, int currentAttempt)
{
    // param TriBinEntry *tri  (in $v0)
    // param TriBinList *binListArray  (in $v0)
    // param int currentAttempt  (in $v0)
    {   // 0x00188950-0x00188B18
        TriBinEntry *newTri;  // in $a2
        unsigned char i;  // in $v1
    }
}

// 0x00188B20-0x00188FE4 (1220 bytes), lines 837-1033
static unsigned int TriStripFollow(TriStripListEntry *strip, Edge *nextEdge, TriBinList *binListArray, RpBuildMeshTriangle *triList, int currentAttempt)
{
    // param TriStripListEntry *strip  (in $s1)
    // param Edge *nextEdge  (in $v0)
    // param TriBinList *binListArray  (in $s0)
    // param RpBuildMeshTriangle *triList  (in $t9)
    // param int currentAttempt  (in $t8)
    {   // 0x00188B20-0x00188FE4
        unsigned short v3;  // in $t7
        unsigned short v2;  // in $t6
        unsigned short v1;  // in $s2
        TriBinEntry *bestTri;  // in $t5
        int turnResult;  // in $v0
        Edge *otherEdge;  // in $t4
        Edge *prevEdge;  // in $t1
        unsigned int addedTris;  // in $t3
    }
}

// 0x00188FF0-0x00189C1C (3116 bytes), lines 1047-1399
static int TriStripStripTris(RpBuildMeshTriangle *triList, unsigned int numTris, TriStripList *stripList, int preprocess)
{
    // param RpBuildMeshTriangle *triList  ($sp+268)
    // param unsigned int numTris  (in $s4)
    // param TriStripList *stripList  ($sp+264)
    // param int preprocess  ($sp+260)
    {   // 0x00188FF0-0x00189C1C
        RpBuildMeshTriangle *source;  // in $v1
        unsigned int tri;  // in $s3
        int testResult;  // in $v0
        unsigned int bestSize;  // $sp+204
        int currentAttempt;  // in $s2
        int bestOffset;  // $sp+200
        MeshOpFreeLists meshOpFreeLists;  // $sp+288
        unsigned int cacheOffset;  // in $fp
        unsigned int offset;  // in $v0
        Edge *firstEdge;  // in $s6
        Edge *nextEdge;  // $sp+176
        TriBinEntry **binEntryArray;  // $sp+172
        TriBinList binListArray[4];  // $sp+272
        unsigned int trisUsedTemp;  // $sp+168
        unsigned int trisUsed;  // in $s1
        unsigned int j;  // in $v0
        unsigned int i;  // in $a0
        TriStripListEntry *revBuildStrip;  // in $s0
        TriStripListEntry *buildStrip;  // in $s5
        TriStripListEntry *newStrip;  // in $s2
        Edge *edgelist;  // $sp+300
    }
}

// 0x00189C20-0x0018A044 (1060 bytes), lines 1726-1895
static int TriStripJoin(TriStripList *stripList, int maintainWinding)
{
    // param TriStripList *stripList  (in $s1)
    // param int maintainWinding  (in $s0)
    {   // 0x00189C20-0x0018A044
        TriStripListEntry *tempStrip2;  // in $v1
        TriStripListEntry *tempStrip;  // in $s3
        TriStripListEntry *next;  // in $v0
        TriStripListEntry *stripPtr;  // in $a0
        TriStripListEntry *newStrip;  // in $s2
        unsigned int j;  // in $a1
        unsigned int i;  // in $a1
    }
}

// 0x0018A050-0x0018A71C (1740 bytes), lines 1909-2142
static RpMeshHeader *TriStripMeshGenerate(RpBuildMesh *mesh, int preprocess, int maintainWinding)
{
    // param RpBuildMesh *mesh  (in $s2)
    // param int preprocess  ($sp+264)
    // param int maintainWinding  ($sp+260)
    {   // 0x0018A050-0x0018A71C
        RpMaterial *lastMat;  // in $v1
        unsigned int totalIndices;  // in $s2
        RpMesh *outMeshInfo;  // $sp+204
        RpMesh **outMeshes;  // in $s1
        unsigned short *stripMeshInds;  // in $s0
        unsigned short numOutMeshes;  // in $s0
        TriStripListEntry *stripPtr;  // in $v0
        TriStripList stripList;  // $sp+268
        RpBuildMeshTriangle *triList;  // $sp+200
        RpBuildMeshTriangle **tempTriPtr;  // $sp+176
        unsigned int meshSize;  // in $v0
        unsigned int numMats;  // in $s3
        unsigned int j;  // in $a2
        unsigned int i;  // in $a0
        RpMesh *meshEl;  // in $v0
        RpBuildMeshTriangle **triPointers;  // $sp+172
        RpMeshHeader *result;  // $sp+168
    }
}

// 0x0018A720-0x0018A72C (12 bytes), lines 3192-3192
RpMeshHeader *RpBuildMeshGenerateDefaultTriStrip(RpBuildMesh *buildMesh)
{
    // param RpBuildMesh *buildMesh  (in $v0)
    {   // 0x0018A720-0x0018A72C
    }
}

// 0x0018A730-0x0018A768 (56 bytes), lines 3956-3968
int RpMeshSetTriStripMethod(RpMeshHeader *(*callback)(RpBuildMesh *, void *), void *data)
{
    // param RpMeshHeader *(*callback)(RpBuildMesh *, void *)  (in $v0)
    // param void *data  (in $v0)
    {   // 0x0018A730-0x0018A768
    }
}

// 0x0018A770-0x0018AA34 (708 bytes), lines 4047-4171
RpMeshHeader *_rpTriListMeshGenerate(RpBuildMesh *buildMesh)
{
    // param RpBuildMesh *buildMesh  (in $s4)
    {   // 0x0018A770-0x0018AA34
        RwError _rwErrorCode;  // $sp+120
        RwError _rwErrorCode;  // $sp+112
        RpMaterial *lastMat;  // in $a0
        unsigned short *meshTriInds;  // in $v1
        RpMesh *meshEl;  // in $v0
        unsigned int meshSize;  // in $s2
        unsigned int numMats;  // in $v1
        unsigned int i;  // in $a0
        RpMeshHeader *result;  // in $s1
        RpBuildMeshTriangle **triPointers;  // in $s0
    }
}

// 0x0018AA40-0x0018AAD8 (152 bytes), lines 4197-4244
RpMeshHeader *_rpMeshOptimise(RpBuildMesh *mesh, unsigned int flags)
{
    // param RpBuildMesh *mesh  (in $s1)
    // param unsigned int flags  (in $v0)
    {   // 0x0018AA40-0x0018AAD8
        RpMeshHeader *newMesh;  // in $s0
        void *data;  // in $v0
        RpMeshHeader *(*func)(RpBuildMesh *, void *);  // in $v0
    }
}

