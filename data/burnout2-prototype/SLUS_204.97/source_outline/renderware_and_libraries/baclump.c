// baclump.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RpAtomic *CountAtomic(RpAtomic *, void *);
RpLight *CountLight(RpLight *, void *);
RwCamera *CountCamera(RwCamera *, void *);
RwCamera *ClumpCameraAddSize(RwCamera *, void *);
RpLight *ClumpLightAddSize(RpLight *, void *);
RpAtomic *ClumpAtomicAddSize(RpAtomic *, void *);
void ClumpTidyDestroyClump(void *, void *);  // 0x00182930
void ClumpTidyDestroyAtomic(void *, void *);  // 0x00182940
RwObjectHasFrame *AtomicSync(RwObjectHasFrame *);  // 0x00182A70
RpAtomic *AtomicDefaultRenderCallBack(RpAtomic *);  // 0x00182AC0
void *ClumpInitCameraExt(void *, int, int);  // 0x00182D00
void *ClumpDeInitCameraExt(void *, int, int);  // 0x00182D20
void *ClumpInitLightExt(void *, int, int);  // 0x00182D30
void *ClumpDeInitLightExt(void *, int, int);  // 0x00182D50
RpLight *DestroyClumpLight(RpLight *, void *);  // 0x00182D60
RwCamera *DestroyClumpCamera(RwCamera *, void *);  // 0x00182DA0
RpClump *ClumpCallBack(RpClump *, void *);  // 0x00182DE0
RpAtomic *DestroyClumpAtomic(RpAtomic *, void *);  // 0x00182DF0
static RwPluginRegistry atomicTKList;  // 0x002B3680
static RwPluginRegistry clumpTKList;  // 0x002B36A0
int _rxPipelineGlobalsOffset;  // 0x00310AF8
static int _rpClumpCameraExtOffset;  // 0x00310B20
static int _rpClumpLightExtOffset;  // 0x00310B24
unsigned int lastSeenExtraData;  // 0x00310B28
unsigned int lastSeenRightsPluginId;  // 0x00310B2C
RwModuleInfo clumpModule;  // 0x00310B30
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x00182930-0x00182938 (8 bytes), lines 215-215
static void ClumpTidyDestroyClump(void *object)
{
    // param void *object  (in $v0)
    {   // 0x00182930-0x00182938
    }
}

// 0x00182940-0x00182948 (8 bytes), lines 235-235
static void ClumpTidyDestroyAtomic(void *object)
{
    // param void *object  (in $v0)
    {   // 0x00182940-0x00182948
    }
}

// 0x00182950-0x001829C8 (120 bytes), lines 255-274
RwStream *_rpReadAtomicRights(RwStream *s, int len)
{
    // param RwStream *s  (in $s1)
    // param int len  (in $s0)
    {   // 0x00182950-0x001829C8
    }
}

// 0x001829D0-0x00182A38 (104 bytes), lines 282-304
RwStream *_rpWriteAtomicRights(RwStream *s, void *obj)
{
    // param RwStream *s  (in $s1)
    // param void *obj  (in $v0)
    {   // 0x001829D0-0x00182A38
        RpAtomic *at;  // in $s0
    }
}

// 0x00182A40-0x00182A6C (44 bytes), lines 317-325
int _rpSizeAtomicRights(void *obj)
{
    // param void *obj  (in $v0)
    {   // 0x00182A40-0x00182A6C
    }
}

// 0x00182A70-0x00182AB4 (68 bytes), lines 413-434
static RwObjectHasFrame *AtomicSync(RwObjectHasFrame *object)
{
    // param RwObjectHasFrame *object  (in $s0)
    {   // 0x00182A70-0x00182AB4
        RpAtomic *atomic;  // in $v0
    }
}

// 0x00182AC0-0x00182B20 (96 bytes), lines 448-465
RpAtomic *AtomicDefaultRenderCallBack(RpAtomic *atomic)
{
    // param RpAtomic *atomic  (in $s0)
    {   // 0x00182AC0-0x00182B20
        RxPipeline *pipeline;  // in $v0
    }
}

// 0x00182B20-0x00182D00 (480 bytes), lines 733-807
static rpGeometryList *GeometryListStreamRead(RwStream *stream, rpGeometryList *geomList)
{
    // param RwStream *stream  (in $s3)
    // param rpGeometryList *geomList  (in $s2)
    {   // 0x00182B20-0x00182D00
        RwError _rwErrorCode;  // $sp+88
        RwError _rwErrorCode;  // $sp+80
        unsigned int version;  // $sp+108
        unsigned int size;  // $sp+104
        int i;  // in $s0
        int gl;  // $sp+100
    }
}

// 0x00182D00-0x00182D1C (28 bytes), lines 827-836
static void *ClumpInitCameraExt(void *object)
{
    // param void *object  (in $v0)
    {   // 0x00182D00-0x00182D1C
        RpClumpCameraExt *cameraExt;  // in $v1
    }
}

// 0x00182D20-0x00182D28 (8 bytes), lines 864-864
static void *ClumpDeInitCameraExt(void *object)
{
    // param void *object  (in $v0)
    {   // 0x00182D20-0x00182D28
    }
}

// 0x00182D30-0x00182D4C (28 bytes), lines 879-888
static void *ClumpInitLightExt(void *object)
{
    // param void *object  (in $v0)
    {   // 0x00182D30-0x00182D4C
        RpClumpLightExt *lightExt;  // in $v1
    }
}

// 0x00182D50-0x00182D58 (8 bytes), lines 916-916
static void *ClumpDeInitLightExt(void *object)
{
    // param void *object  (in $v0)
    {   // 0x00182D50-0x00182D58
    }
}

// 0x00182D60-0x00182DA0 (64 bytes), lines 928-940
static RpLight *DestroyClumpLight(RpLight *light)
{
    // param RpLight *light  (in $s0)
    {   // 0x00182D60-0x00182DA0
    }
}

// 0x00182DA0-0x00182DE0 (64 bytes), lines 952-964
static RwCamera *DestroyClumpCamera(RwCamera *camera)
{
    // param RwCamera *camera  (in $s0)
    {   // 0x00182DA0-0x00182DE0
    }
}

// 0x00182DE0-0x00182DE8 (8 bytes), lines 1107-1107
static RpClump *ClumpCallBack(RpClump *clump)
{
    // param RpClump *clump  (in $v0)
    {   // 0x00182DE0-0x00182DE8
    }
}

// 0x00182DF0-0x00182E18 (40 bytes), lines 1119-1128
static RpAtomic *DestroyClumpAtomic(RpAtomic *atomic)
{
    // param RpAtomic *atomic  (in $s0)
    {   // 0x00182DF0-0x00182E18
    }
}

// 0x00182E20-0x0018330C (1260 bytes), lines 1303-1492
static RpAtomic *ClumpAtomicStreamRead(RwStream *stream, rwFrameList *fl, rpGeometryList *gl)
{
    // param RwStream *stream  (in $s3)
    // param rwFrameList *fl  (in $s2)
    // param rpGeometryList *gl  (in $s1)
    {   // 0x00182E20-0x0018330C
        RwError _rwErrorCode;  // $sp+192
        RwError _rwErrorCode;  // $sp+184
        RwError _rwErrorCode;  // $sp+176
        RwError _rwErrorCode;  // $sp+168
        RwError _rwErrorCode;  // $sp+160
        RwError _rwErrorCode;  // $sp+152
        RwError _rwErrorCode;  // $sp+144
        RwError _rwErrorCode;  // $sp+136
        RwError _rwErrorCode;  // $sp+128
        RwError _rwErrorCode;  // $sp+120
        RpGeometry *geom;  // in $s1
        rpAtomicBinary304 a304;  // $sp+80
        rpAtomicBinary a;  // $sp+104
        RpAtomic *atom;  // in $s0
        RwError _rwErrorCode;  // $sp+96
        unsigned int version;  // $sp+204
        unsigned int size;  // $sp+200
        int status;  // in $v0
    }
}

// 0x00183310-0x001834B4 (420 bytes), lines 1515-1585
void _rpAtomicResyncInterpolatedSphere(RpAtomic *atomic)
{
    // param RpAtomic *atomic  (in $v0)
    {   // 0x00183310-0x001834B4
        float scale;  // optimised away
        RpMorphTarget *endMorphTarget;  // in $v1
        RpMorphTarget *startMorphTarget;  // in $a1
        RpInterpolator *interpolator;  // in $a2
        RpGeometry *geom;  // in $a1
    }
}

// 0x001834C0-0x00183638 (376 bytes), lines 1620-1684
RwSphere *RpAtomicGetWorldBoundingSphere(RpAtomic *atomic)
{
    // param RpAtomic *atomic  (in $s0)
    {   // 0x001834C0-0x00183638
        float _result;  // optimised away
        RwV3d *at;  // in $v0
        RwV3d *up;  // in $v0
        float atomicScale2;  // optimised away
        float atomicZScale2;  // optimised away
        float atomicYScale2;  // optimised away
        float atomicXScale2;  // $sp+48
        RwFrame *frame;  // in $s1
        RwMatrixTag *matrix;  // in $s1
    }
}

// 0x00183640-0x001836FC (188 bytes), lines 1697-1717
void *_rpClumpClose(void *instance)
{
    // param void *instance  (in $s2)
    {   // 0x00183640-0x001836FC
    }
}

// 0x00183700-0x001837D0 (208 bytes), lines 1728-1756
void *_rpClumpOpen(void *instance, int offset)
{
    // param void *instance  (in $s2)
    // param int offset  (in $v0)
    {   // 0x00183700-0x001837D0
    }
}

// 0x001837D0-0x00183850 (128 bytes), lines 1769-1802
int _rpClumpRegisterExtensions()
{
    {   // 0x001837D0-0x00183850
    }
}

// 0x00183850-0x001838D8 (136 bytes), lines 2097-2131
RpClump *RpClumpRender(RpClump *clump)
{
    // param RpClump *clump  (in $v0)
    {   // 0x00183850-0x001838D8
        RpAtomic *apAtom;  // in $s3
        RwLLLink *end;  // in $s2
        RwLLLink *cur;  // in $s1
        RpClump *result;  // in $s0
    }
}

// 0x001838E0-0x00183964 (132 bytes), lines 2168-2202
RpClump *RpClumpForAllAtomics(RpClump *clump, RpAtomic *(*callback)(RpAtomic *, void *), void *pData)
{
    // param RpClump *clump  (in $s4)
    // param RpAtomic *(*callback)(RpAtomic *, void *)  (in $s3)
    // param void *pData  (in $s2)
    {   // 0x001838E0-0x00183964
        RwLLLink *next;  // in $s1
        RwLLLink *end;  // in $s0
        RwLLLink *cur;  // in $v0
    }
}

// 0x00183970-0x001839FC (140 bytes), lines 2234-2268
RpClump *RpClumpForAllCameras(RpClump *clump, RwCamera *(*callback)(RwCamera *, void *), void *pData)
{
    // param RpClump *clump  (in $s4)
    // param RwCamera *(*callback)(RwCamera *, void *)  (in $s3)
    // param void *pData  (in $s2)
    {   // 0x00183970-0x001839FC
        RwLLLink *next;  // in $s1
        RwLLLink *end;  // in $s0
        RwLLLink *cur;  // in $v0
    }
}

// 0x00183A00-0x00183A8C (140 bytes), lines 2300-2334
RpClump *RpClumpForAllLights(RpClump *clump, RpLight *(*callback)(RpLight *, void *), void *pData)
{
    // param RpClump *clump  (in $s4)
    // param RpLight *(*callback)(RpLight *, void *)  (in $s3)
    // param void *pData  (in $s2)
    {   // 0x00183A00-0x00183A8C
        RwLLLink *next;  // in $s1
        RwLLLink *end;  // in $s0
        RwLLLink *cur;  // in $v0
    }
}

// 0x00183A90-0x00183BA8 (280 bytes), lines 2393-2467
RpAtomic *RpAtomicCreate()
{
    {   // 0x00183A90-0x00183BA8
        RpAtomic *atomic;  // in $s0
    }
}

// 0x00183BB0-0x00183C74 (196 bytes), lines 2527-2578
RpAtomic *RpAtomicSetGeometry(RpAtomic *atomic, RpGeometry *geometry, unsigned int flags)
{
    // param RpAtomic *atomic  (in $s2)
    // param RpGeometry *geometry  (in $s1)
    // param unsigned int flags  (in $s0)
    {   // 0x00183BB0-0x00183C74
        RwFrame *frame;  // in $s0
    }
}

// 0x00183C80-0x00183D40 (192 bytes), lines 2656-2682
int RpAtomicDestroy(RpAtomic *atomic)
{
    // param RpAtomic *atomic  (in $s1)
    {   // 0x00183C80-0x00183D40
    }
}

// 0x00183D40-0x00183DF4 (180 bytes), lines 3769-3801
RpClump *RpClumpCreate()
{
    {   // 0x00183D40-0x00183DF4
        RpClump *clump;  // in $s0
    }
}

// 0x00183E00-0x00183F44 (324 bytes), lines 3835-3861
int RpClumpDestroy(RpClump *clump)
{
    // param RpClump *clump  (in $s0)
    {   // 0x00183E00-0x00183F44
        RwFrame *frame;  // in $v0
    }
}

// 0x00183F50-0x00183F84 (52 bytes), lines 4021-4039
RpClump *RpClumpRemoveLight(RpClump *clump, RpLight *light)
{
    // param RpClump *clump  (in $v0)
    // param RpLight *light  (in $v0)
    {   // 0x00183F50-0x00183F84
        RpClumpLightExt *lightExt;  // in $a1
    }
}

// 0x00183F90-0x00183FC4 (52 bytes), lines 4114-4129
RpClump *RpClumpRemoveCamera(RpClump *clump, RwCamera *camera)
{
    // param RpClump *clump  (in $v0)
    // param RwCamera *camera  (in $v0)
    {   // 0x00183F90-0x00183FC4
        RpClumpCameraExt *cameraExt;  // in $a1
    }
}

// 0x00183FD0-0x00184A7C (2732 bytes), lines 4491-4718
RpClump *RpClumpStreamRead(RwStream *stream)
{
    // param RwStream *stream  (in $s4)
    {   // 0x00183FD0-0x00184A7C
        RwError _rwErrorCode;  // $sp+256
        RwError _rwErrorCode;  // $sp+248
        RwError _rwErrorCode;  // $sp+240
        int frameIndex;  // $sp+284
        RwCamera *camera;  // in $s3
        RwError _rwErrorCode;  // $sp+232
        int frameIndex;  // $sp+280
        RpLight *light;  // in $s2
        RwError _rwErrorCode;  // $sp+224
        RwError _rwErrorCode;  // $sp+216
        RwError _rwErrorCode;  // $sp+208
        RwError _rwErrorCode;  // $sp+200
        RwError _rwErrorCode;  // $sp+192
        RwError _rwErrorCode;  // $sp+184
        RwError _rwErrorCode;  // $sp+176
        RpClumpChunkInfo33000 old;  // $sp+276
        unsigned int chunkversion;  // $sp+272
        int i;  // in $s5
        rpGeometryList gl;  // $sp+168
        rwFrameList fl;  // $sp+160
        RpClumpChunkInfo cl;  // $sp+144
        RpAtomic *atom;  // in $s1
        RpClump *clump;  // in $s0
        RwError _rwErrorCode;  // $sp+136
        unsigned int version;  // $sp+268
        unsigned int size;  // $sp+264
        int status;  // in $v0
    }
}

// 0x00184A80-0x00184AAC (44 bytes), lines 4817-4817
int RpAtomicRegisterPlugin(int size, unsigned int pluginID, void *(*constructCB)(void *, int, int), void *(*destructCB)(void *, int, int), void *(*copyCB)(void *, void *, int, int))
{
    // param int size  (in $a0)
    // param unsigned int pluginID  (in $v0)
    // param void *(*constructCB)(void *, int, int)  (in $v1)
    // param void *(*destructCB)(void *, int, int)  (in $v0)
    // param void *(*copyCB)(void *, void *, int, int)  (in $v0)
    {   // 0x00184A80-0x00184AAC
        int plug;  // in $v0
    }
}

// 0x00184AB0-0x00184ADC (44 bytes), lines 4860-4860
int RpClumpRegisterPlugin(int size, unsigned int pluginID, void *(*constructCB)(void *, int, int), void *(*destructCB)(void *, int, int), void *(*copyCB)(void *, void *, int, int))
{
    // param int size  (in $a0)
    // param unsigned int pluginID  (in $v0)
    // param void *(*constructCB)(void *, int, int)  (in $v1)
    // param void *(*destructCB)(void *, int, int)  (in $v0)
    // param void *(*copyCB)(void *, void *, int, int)  (in $v0)
    {   // 0x00184AB0-0x00184ADC
        int plug;  // in $v0
    }
}

// 0x00184AE0-0x00184B04 (36 bytes), lines 4907-4907
int RpAtomicRegisterPluginStream(unsigned int pluginID, RwStream *(*readCB)(RwStream *, int, void *, int, int), RwStream *(*writeCB)(RwStream *, int, void *, int, int), int (*getSizeCB)(void *, int, int))
{
    // param unsigned int pluginID  (in $a0)
    // param RwStream *(*readCB)(RwStream *, int, void *, int, int)  (in $v1)
    // param RwStream *(*writeCB)(RwStream *, int, void *, int, int)  (in $v0)
    // param int (*getSizeCB)(void *, int, int)  (in $v0)
    {   // 0x00184AE0-0x00184B04
        int plug;  // in $v0
    }
}

// 0x00184B10-0x00184B28 (24 bytes), lines 4946-4946
int RpAtomicSetStreamAlwaysCallBack(unsigned int pluginID, int (*alwaysCB)(void *, int, int))
{
    // param unsigned int pluginID  (in $v0)
    // param int (*alwaysCB)(void *, int, int)  (in $v0)
    {   // 0x00184B10-0x00184B28
        int plug;  // in $v0
    }
}

// 0x00184B30-0x00184B64 (52 bytes), lines 5308-5321
RpAtomic *RpAtomicSetFrame(RpAtomic *atomic, RwFrame *frame)
{
    // param RpAtomic *atomic  (in $s0)
    // param RwFrame *frame  (in $v0)
    {   // 0x00184B30-0x00184B64
    }
}

// 0x00184B70-0x00184C10 (160 bytes), lines 5580-5617
int RpAtomicInstance(RpAtomic *atomic)
{
    // param RpAtomic *atomic  (in $s1)
    {   // 0x00184B70-0x00184C10
        RpGeometry *geometry;  // in $s0
    }
}

