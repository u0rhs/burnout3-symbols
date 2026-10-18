// bamesh.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static RpMeshStatic MeshStatic;  // 0x00310444
RwModuleInfo meshModule;  // 0x00310B50
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x00187490-0x001874A4 (20 bytes), lines 138-138
RpMeshHeader *_rpMeshHeaderCreate(unsigned int size)
{
    // param unsigned int size  (in $v0)
    {   // 0x00187490-0x001874A4
        RpMeshHeader *meshHeader;  // in $v0
    }
}

// 0x001874B0-0x00187510 (96 bytes), lines 153-166
void *_rpMeshClose(void *instance)
{
    // param void *instance  (in $s1)
    {   // 0x001874B0-0x00187510
    }
}

// 0x00187510-0x00187668 (344 bytes), lines 178-228
void *_rpMeshOpen(void *instance, int offset)
{
    // param void *instance  (in $s2)
    // param int offset  (in $v0)
    {   // 0x00187510-0x00187668
    }
}

// 0x00187670-0x0018777C (268 bytes), lines 239-280
RpBuildMesh *_rpBuildMeshCreate(unsigned int bufferSize)
{
    // param unsigned int bufferSize  (in $s4)
    {   // 0x00187670-0x0018777C
        RwError _rwErrorCode;  // $sp+104
        RwError _rwErrorCode;  // $sp+96
        unsigned int size;  // in $s1
        RpBuildMesh *mesh;  // in $s0
    }
}

// 0x00187780-0x001877E0 (96 bytes), lines 291-305
int _rpBuildMeshDestroy(RpBuildMesh *mesh)
{
    // param RpBuildMesh *mesh  (in $s0)
    {   // 0x00187780-0x001877E0
    }
}

// 0x001877E0-0x00187848 (104 bytes), lines 316-330
int _rpMeshDestroy(RpMeshHeader *mesh)
{
    // param RpMeshHeader *mesh  (in $v0)
    {   // 0x001877E0-0x00187848
    }
}

// 0x00187850-0x001879C4 (372 bytes), lines 345-389
RpBuildMesh *_rpBuildMeshAddTriangle(RpBuildMesh *mesh, RpMaterial *material, int vert1, int vert2, int vert3)
{
    // param RpBuildMesh *mesh  (in $s5)
    // param RpMaterial *material  (in $s4)
    // param int vert1  (in $s3)
    // param int vert2  (in $s2)
    // param int vert3  (in $s1)
    {   // 0x00187850-0x001879C4
        RwError _rwErrorCode;  // $sp+120
        unsigned int size;  // in $s0
        RpBuildMeshTriangle *newMeshTriangles;  // in $v0
    }
}

// 0x001879D0-0x00187A64 (148 bytes), lines 484-510
RpMeshHeader *_rpMeshHeaderForAllMeshes(RpMeshHeader *meshHeader, RpMesh *(*fpCallBack)(RpMesh *, RpMeshHeader *, void *), void *pData)
{
    // param RpMeshHeader *meshHeader  (in $s3)
    // param RpMesh *(*fpCallBack)(RpMesh *, RpMeshHeader *, void *)  (in $s2)
    // param void *pData  (in $s1)
    {   // 0x001879D0-0x00187A64
        RpMesh *mesh;  // in $s4
        int numMeshes;  // in $s0
    }
}

// 0x00187A70-0x00187CD8 (616 bytes), lines 528-617
RwStream *_rpMeshWrite(RpMeshHeader *meshHeader, void *object, RwStream *stream, RpMaterialList *matList)
{
    // param RpMeshHeader *meshHeader  (in $s0)
    // param void *object  (in $s6)
    // param RwStream *stream  (in $s5)
    // param RpMaterialList *matList  (in $s7)
    {   // 0x00187A70-0x00187CD8
        unsigned int i;  // in $a1
        unsigned int IndexBuffer[256];  // $sp+144
        unsigned short *meshIndices;  // in $s3
        unsigned int numIndices;  // in $s2
        binMesh bm;  // $sp+1192
        RpMesh *mesh;  // in $s1
        unsigned int numMeshes;  // in $s0
        binMeshHeader bmh;  // $sp+1176
    }
}

// 0x00187CE0-0x00187F64 (644 bytes), lines 633-737
RpMeshHeader *_rpMeshRead(RwStream *stream, void *object, RpMaterialList *matList)
{
    // param RwStream *stream  (in $s6)
    // param void *object  (in $s7)
    // param RpMaterialList *matList  ($sp+172)
    {   // 0x00187CE0-0x00187F64
        unsigned int readIndices;  // in $v0
        int *source;  // in $s4
        unsigned int IndexBuffer[256];  // $sp+176
        unsigned int remainingIndices;  // in $s3
        binMesh bm;  // $sp+1224
        unsigned int numMeshes;  // in $s2
        unsigned short *meshIndices;  // in $s1
        RpMesh *mesh;  // in $s0
        unsigned int size;  // in $v0
        binMeshHeader bmh;  // $sp+1208
    }
}

// 0x00187F70-0x00187FE4 (116 bytes), lines 757-777
int _rpMeshSize(RpMeshHeader *meshHeader, void *object)
{
    // param RpMeshHeader *meshHeader  (in $v0)
    // param void *object  (in $v0)
    {   // 0x00187F70-0x00187FE4
        unsigned int size;  // in $v0
    }
}

