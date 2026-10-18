// bageomet.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static RwPluginRegistry geometryTKList;  // 0x002B36C0
RwModuleInfo geometryModule;  // 0x00310B38
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x00184C10-0x00184CA0 (144 bytes), lines 149-183
static int GeometryAnnihilate(RpGeometry *geometry)
{
    // param RpGeometry *geometry  (in $s0)
    {   // 0x00184C10-0x00184CA0
    }
}

// 0x00184CA0-0x00184CBC (28 bytes), lines 205-212
void *_rpGeometryOpen(void *instance, int offset)
{
    // param void *instance  (in $v0)
    // param int offset  (in $v0)
    {   // 0x00184CA0-0x00184CBC
    }
}

// 0x00184CC0-0x00184CD4 (20 bytes), lines 228-232
void *_rpGeometryClose(void *instance)
{
    // param void *instance  (in $v0)
    {   // 0x00184CC0-0x00184CD4
    }
}

// 0x00184CE0-0x00184E6C (396 bytes), lines 506-564
RpMorphTarget *RpMorphTargetCalcBoundingSphere(RpMorphTarget *morphTarget, RwSphere *boundingSphere)
{
    // param RpMorphTarget *morphTarget  (in $s2)
    // param RwSphere *boundingSphere  (in $s1)
    {   // 0x00184CE0-0x00184E6C
        float _result;  // $sp+128
        float nDist;  // $sp+128
        RwBBox boundBox;  // $sp+96
        float sphere_radius;  // $sp+128
        RwSphere sphere;  // $sp+80
        int numVerts;  // in $s0
        RwV3d *vert;  // in $v1
    }
}

// 0x00184E70-0x001850E4 (628 bytes), lines 602-715
int RpGeometryAddMorphTargets(RpGeometry *geometry, int mtcount)
{
    // param RpGeometry *geometry  (in $s3)
    // param int mtcount  (in $s2)
    {   // 0x00184E70-0x001850E4
        RpMorphTarget *aMorph;  // in $v0
        RpMorphTarget *aMorph;  // in $t1
        RwError _rwErrorCode;  // $sp+88
        RwError _rwErrorCode;  // $sp+80
        int len;  // in $a3
        unsigned char *dst;  // in $a2
        unsigned char *src;  // in $a1
        RwV3d *vertexData;  // in $t0
        RpMorphTarget *morphTarget;  // in $v0
        unsigned int bytes;  // in $s1
        unsigned int mtsize;  // in $s0
        int i;  // in $v1
    }
}

// 0x001850F0-0x00185104 (20 bytes), lines 1412-1417
RpGeometry *RpGeometryTriangleSetVertexIndices(RpGeometry *geometry, RpTriangle *triangle, unsigned short vert1, unsigned short vert2, unsigned short vert3)
{
    // param RpGeometry *geometry  (in $v0)
    // param RpTriangle *triangle  (in $v0)
    // param unsigned short vert1  (in $v0)
    // param unsigned short vert2  (in $v0)
    // param unsigned short vert3  (in $v0)
    {   // 0x001850F0-0x00185104
    }
}

// 0x00185110-0x0018518C (124 bytes), lines 1451-1485
RpGeometry *RpGeometryTriangleSetMaterial(RpGeometry *geometry, RpTriangle *triangle, RpMaterial *material)
{
    // param RpGeometry *geometry  (in $s2)
    // param RpTriangle *triangle  (in $s1)
    // param RpMaterial *material  (in $s0)
    {   // 0x00185110-0x0018518C
        int i;  // in $v0
    }
}

// 0x00185190-0x00185230 (160 bytes), lines 1667-1693
RpGeometry *RpGeometryForAllMaterials(RpGeometry *geometry, RpMaterial *(*fpCallBack)(RpMaterial *, void *), void *pData)
{
    // param RpGeometry *geometry  (in $s5)
    // param RpMaterial *(*fpCallBack)(RpMaterial *, void *)  (in $s4)
    // param void *pData  (in $s3)
    {   // 0x00185190-0x00185230
        int i;  // in $s1
        int numMaterials;  // in $s0
    }
}

// 0x00185230-0x00185284 (84 bytes), lines 1721-1743
RpGeometry *RpGeometryLock(RpGeometry *geometry, int lockMode)
{
    // param RpGeometry *geometry  (in $s0)
    // param int lockMode  (in $v0)
    {   // 0x00185230-0x00185284
    }
}

// 0x00185290-0x001853B4 (292 bytes), lines 1777-1849
RpGeometry *RpGeometryUnlock(RpGeometry *geometry)
{
    // param RpGeometry *geometry  (in $s3)
    {   // 0x00185290-0x001853B4
        RpMaterial *material;  // in $v0
        RpTriangle *triangle;  // in $s4
        int i;  // in $s1
        RpMeshHeader *newMesh;  // in $v0
        RpBuildMesh *buildMesh;  // in $s0
    }
}

// 0x001853C0-0x001857AC (1004 bytes), lines 1977-2142
RpGeometry *RpGeometryCreate(int numVerts, int numTriangles, unsigned int format)
{
    // param int numVerts  (in $s2)
    // param int numTriangles  (in $s1)
    // param unsigned int format  (in $s0)
    {   // 0x001853C0-0x001857AC
        int i;  // in $v1
        unsigned int i;  // in $a1
        RwError _rwErrorCode;  // $sp+168
        int flags;  // in $a2
        unsigned int gsize;  // in $v0
        unsigned char *goffset;  // in $a0
        RpGeometry *geometry;  // in $s3
    }
}

// 0x001857B0-0x001857C4 (20 bytes), lines 2165-2168
RpGeometry *_rpGeometryAddRef(RpGeometry *geometry)
{
    // param RpGeometry *geometry  (in $v0)
    {   // 0x001857B0-0x001857C4
    }
}

// 0x001857D0-0x001858A8 (216 bytes), lines 2196-2223
int RpGeometryDestroy(RpGeometry *geometry)
{
    // param RpGeometry *geometry  (in $s0)
    {   // 0x001857D0-0x001858A8
        int result;  // in $v0
    }
}

// 0x001858B0-0x001858DC (44 bytes), lines 2263-2263
int RpGeometryRegisterPlugin(int size, unsigned int pluginID, void *(*constructCB)(void *, int, int), void *(*destructCB)(void *, int, int), void *(*copyCB)(void *, void *, int, int))
{
    // param int size  (in $a0)
    // param unsigned int pluginID  (in $v0)
    // param void *(*constructCB)(void *, int, int)  (in $v1)
    // param void *(*destructCB)(void *, int, int)  (in $v0)
    // param void *(*copyCB)(void *, void *, int, int)  (in $v0)
    {   // 0x001858B0-0x001858DC
        int plug;  // in $v0
    }
}

// 0x001858E0-0x00185904 (36 bytes), lines 2311-2311
int RpGeometryRegisterPluginStream(unsigned int pluginID, RwStream *(*readCB)(RwStream *, int, void *, int, int), RwStream *(*writeCB)(RwStream *, int, void *, int, int), int (*getSizeCB)(void *, int, int))
{
    // param unsigned int pluginID  (in $a0)
    // param RwStream *(*readCB)(RwStream *, int, void *, int, int)  (in $v1)
    // param RwStream *(*writeCB)(RwStream *, int, void *, int, int)  (in $v0)
    // param int (*getSizeCB)(void *, int, int)  (in $v0)
    {   // 0x001858E0-0x00185904
        int plug;  // in $v0
    }
}

// 0x00185910-0x001860C4 (1972 bytes), lines 2802-3092
RpGeometry *RpGeometryStreamRead(RwStream *stream)
{
    // param RwStream *stream  (in $s0)
    {   // 0x00185910-0x001860C4
        RwError _rwErrorCode;  // $sp+160
        RpMorphTarget *morphTarget;  // in $s3
        _rpMorphTarget kf;  // $sp+112
        int i;  // in $s2
        _rpTriangle *srceTri;  // in $s2
        unsigned short lo;  // in $v0
        unsigned short hi;  // in $v0
        unsigned int size;  // in $s4
        int numTris;  // in $v0
        RpTriangle *destTri;  // in $v0
        unsigned int sizeTC;  // in $s3
        int i;  // in $s2
        unsigned int sizeLum;  // in $s2
        RwError _rwErrorCode;  // $sp+152
        unsigned int version;  // $sp+172
        RwSurfaceProperties surfProps;  // $sp+136
        RpGeometryChunkInfo geom;  // $sp+96
        RpGeometry *geometry;  // in $s1
    }
}

