// baaplylt.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- functions ----

// 0x0018DF70-0x0018E178 (520 bytes), lines 56-111
static void _rwApplyAmbientLight(RxPipelineNode *self, RxPacket *packet, void *voidLight, RwSurfaceProperties *surfaceProps)
{
    // param RxPipelineNode *self  (in $v0)
    // param RxPacket *packet  (in $s2)
    // param void *voidLight  (in $v0)
    // param RwSurfaceProperties *surfaceProps  (in $s1)
    {   // 0x0018DF70-0x0018E178
        float scale;  // optimised away
        RpLight *light;  // in $s0
        int numVert;  // in $a0
        unsigned char *vstep;  // in $v0
        RxCamSpace3DVertex *camVert;  // in $v1
        RxCluster *clcamvert;  // in $v0
    }
}

// 0x0018E180-0x0018E53C (956 bytes), lines 131-231
static void _rwApplyDirectionalLight(RxPipelineNode *self, RxPacket *packet, void *voidLight, RwMatrixTag *inverseMat, RwSurfaceProperties *surfaceProps)
{
    // param RxPipelineNode *self  (in $a0)
    // param RxPacket *packet  (in $s0)
    // param void *voidLight  (in $v0)
    // param RwMatrixTag *inverseMat  (in $s6)
    // param RwSurfaceProperties *surfaceProps  (in $s7)
    {   // 0x0018E180-0x0018E53C
        unsigned int spin;  // in $v1
        float lum;  // optimised away
        RwV3d objNormal;  // $sp+176
        unsigned int spin;  // in $v1
        float lum;  // optimised away
        RwV3d objNormal;  // $sp+160
        RwFrame *lightFrame;  // in $v0
        float dot;  // $sp+192
        float scale;  // optimised away
        RwV3d vertToLight;  // $sp+144
        RpLight *light;  // in $s4
        int numVert;  // in $s3
        unsigned char *vstep;  // in $v0
        RxCamSpace3DVertex *camVert;  // in $s2
        RxObjSpace3DVertex *objVert;  // in $s1
        unsigned int objVertStride;  // in $s0
        RxCluster *clcamvert;  // in $v0
    }
}

// 0x0018E540-0x0018EA44 (1284 bytes), lines 249-397
static void _rwApplyPointLight(RxPipelineNode *self, RxPacket *packet, void *voidLight, RwMatrixTag *inverseMat, float invScale, RwSurfaceProperties *surfaceProps)
{
    // param RxPipelineNode *self  (in $a0)
    // param RxPacket *packet  (in $s0)
    // param void *voidLight  (in $v0)
    // param RwMatrixTag *inverseMat  (in $s6)
    // param float invScale  (optimised away)
    // param RwSurfaceProperties *surfaceProps  (in $s7)
    {   // 0x0018E540-0x0018EA44
        unsigned int spin;  // in $v1
        float _result;  // optimised away
        float lum;  // optimised away
        float dist2;  // optimised away
        float dot;  // optimised away
        RwV3d objNormal;  // $sp+224
        RwV3d objVertex;  // $sp+208
        unsigned int spin;  // in $v1
        float _result;  // optimised away
        float lum;  // optimised away
        float dist2;  // optimised away
        float dot;  // optimised away
        RwV3d objNormal;  // $sp+192
        RwV3d objVertex;  // $sp+176
        float scaledRad;  // optimised away
        float radSquared;  // optimised away
        RwV3d lightPos;  // $sp+160
        float recipRad;  // optimised away
        float scale;  // $sp+240
        RpLight *light;  // in $s4
        int numVert;  // in $s3
        unsigned char *vstep;  // in $v0
        RxCamSpace3DVertex *camVert;  // in $s2
        RxObjSpace3DVertex *objVert;  // in $s1
        unsigned int objVertStride;  // in $s0
        RxCluster *clcamvert;  // in $v0
    }
}

// 0x0018EA50-0x0018F008 (1464 bytes), lines 416-580
static void _rwApplySpotLight(RxPipelineNode *self, RxPacket *packet, void *voidLight, RwMatrixTag *inverseMat, float invScale, RwSurfaceProperties *surfaceProps)
{
    // param RxPipelineNode *self  (in $a0)
    // param RxPacket *packet  (in $s0)
    // param void *voidLight  (in $v0)
    // param RwMatrixTag *inverseMat  (in $s6)
    // param float invScale  (optimised away)
    // param RwSurfaceProperties *surfaceProps  (in $s7)
    {   // 0x0018EA50-0x0018F008
        unsigned int spin;  // in $v1
        float lum;  // optimised away
        float _result;  // optimised away
        float dist2;  // optimised away
        float dot;  // optimised away
        RwV3d objNormal;  // $sp+256
        RwV3d objVertex;  // $sp+240
        float scale;  // $sp+272
        unsigned int spin;  // in $v1
        float lum;  // optimised away
        float _result;  // optimised away
        float dist2;  // optimised away
        float dot;  // optimised away
        RwV3d objNormal;  // $sp+224
        RwV3d objVertex;  // $sp+208
        float scale;  // $sp+272
        float scaledRad;  // optimised away
        RwV3d at;  // $sp+192
        RwV3d lightPos;  // $sp+176
        float radSquared;  // optimised away
        float recipRad;  // optimised away
        RpLight *light;  // in $s4
        int numVert;  // in $s3
        unsigned char *vstep;  // in $v0
        RxCamSpace3DVertex *camVert;  // in $s2
        RxObjSpace3DVertex *objVert;  // in $s1
        unsigned int objVertStride;  // in $s0
        RxCluster *clcamvert;  // in $v0
    }
}

// 0x0018F010-0x0018F620 (1552 bytes), lines 598-793
static void _rwApplySpotSoftLight(RxPipelineNode *self, RxPacket *packet, void *voidLight, RwMatrixTag *inverseMat, float invScale, RwSurfaceProperties *surfaceProps)
{
    // param RxPipelineNode *self  (in $a0)
    // param RxPacket *packet  (in $s0)
    // param void *voidLight  (in $v0)
    // param RwMatrixTag *inverseMat  (in $s6)
    // param float invScale  (optimised away)
    // param RwSurfaceProperties *surfaceProps  (in $s7)
    {   // 0x0018F010-0x0018F620
        unsigned int spin;  // in $v1
        float normalise;  // optimised away
        float lum;  // optimised away
        float _result;  // optimised away
        float proj;  // optimised away
        float compare;  // optimised away
        float dist2;  // optimised away
        float dot;  // optimised away
        RwV3d objNormal;  // $sp+256
        RwV3d objVertex;  // $sp+240
        float scale;  // $sp+272
        unsigned int spin;  // in $v1
        float normalise;  // optimised away
        float lum;  // optimised away
        float _result;  // optimised away
        float proj;  // optimised away
        float compare;  // optimised away
        float dist2;  // optimised away
        float dot;  // optimised away
        RwV3d objNormal;  // $sp+224
        RwV3d objVertex;  // $sp+208
        float scale;  // $sp+272
        float scaledRad;  // optimised away
        RwV3d at;  // $sp+192
        RwV3d lightPos;  // $sp+176
        float radSquared;  // optimised away
        float recipRad;  // optimised away
        RpLight *light;  // in $s4
        int numVert;  // in $s3
        unsigned char *vstep;  // in $v0
        RxCamSpace3DVertex *camVert;  // in $s2
        RxObjSpace3DVertex *objVert;  // in $s1
        unsigned int objVertStride;  // in $s0
        RxCluster *clcamvert;  // in $v0
    }
}

