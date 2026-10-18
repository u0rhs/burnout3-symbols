// bacamera.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwObjectHasFrame *CameraSync(RwObjectHasFrame *);  // 0x00151F40
RwCamera *CameraEndUpdate(RwCamera *);  // 0x00151FB0
RwCamera *CameraBeginUpdate(RwCamera *);  // 0x00152010
RwPluginRegistry cameraTKList;  // 0x002A2A20
RwModuleInfo cameraModule;  // 0x003108F0
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x00150D40-0x00150E08 (200 bytes), lines 128-197
static RwCamera *CameraUpdateZShiftScale(RwCamera *camera)
{
    // param RwCamera *camera  (in $s0)
    {   // 0x00150D40-0x00150E08
        float zDelta;  // optimised away
        float zScale;  // optimised away
        float zInSup;  // optimised away
        float zInInf;  // optimised away
        float zOutSup;  // $sp+48
        float zOutInf;  // optimised away
    }
}

// 0x00150E10-0x001516B4 (2212 bytes), lines 236-355
static void CameraBuildPerspClipPlanes(RwCamera *camera)
{
    // param RwCamera *camera  (in $v0)
    {   // 0x00150E10-0x001516B4
        float _result;  // $sp+16
        float length2;  // $sp+16
        float _result;  // $sp+16
        float length2;  // optimised away
        float _result;  // $sp+16
        float length2;  // $sp+16
        float _result;  // $sp+16
        float length2;  // optimised away
        RwV3d *target;  // in $t4
        RwFrustumPlane *frustumPlanes;  // in $a1
        RwV3d *frustumVerts;  // in $v1
        int i;  // in $t3
        float scale;  // optimised away
        RwMatrixTag *cameraLTM;  // in $t2
        RwV3d vTmp;  // $sp+0
    }
}

// 0x001516C0-0x00151854 (404 bytes), lines 368-454
static RwCamera *CameraBuildPerspViewMatrix(RwCamera *camera)
{
    // param RwCamera *camera  (in $s0)
    {   // 0x001516C0-0x00151854
        RwMatrixTag *viewMatrix;  // in $v0
        RwMatrixTag *cameraLTM;  // in $v0
        float scale;  // optimised away
    }
}

// 0x00151860-0x00151DA8 (1352 bytes), lines 482-595
static void CameraBuildParallelClipPlanes(RwCamera *camera)
{
    // param RwCamera *camera  (in $v0)
    {   // 0x00151860-0x00151DA8
        float _result;  // $sp+64
        float length2;  // $sp+64
        float _result;  // $sp+64
        float length2;  // optimised away
        RwFrustumPlane *frustumPlanes;  // in $s1
        RwMatrixTag *cameraLTM;  // in $s2
        RwV3d *frustumVerts;  // in $s0
        float offset;  // optimised away
        float offsety;  // optimised away
        float offsetx;  // $sp+64
        float farPlane;  // optimised away
        float nearPlane;  // optimised away
        float height;  // optimised away
        float width;  // optimised away
    }
}

// 0x00151DB0-0x00151F40 (400 bytes), lines 608-694
static RwCamera *CameraBuildParallelViewMatrix(RwCamera *camera)
{
    // param RwCamera *camera  (in $s0)
    {   // 0x00151DB0-0x00151F40
        RwMatrixTag *viewMatrix;  // in $v0
        RwMatrixTag *cameraLTM;  // in $v0
        float scale;  // optimised away
    }
}

// 0x00151F40-0x00151FA8 (104 bytes), lines 707-731
static RwObjectHasFrame *CameraSync(RwObjectHasFrame *type)
{
    // param RwObjectHasFrame *type  (in $s0)
    {   // 0x00151F40-0x00151FA8
        RwCamera *camera;  // in $v0
    }
}

// 0x00151FB0-0x0015200C (92 bytes), lines 746-772
static RwCamera *CameraEndUpdate(RwCamera *camera)
{
    // param RwCamera *camera  (in $s1)
    {   // 0x00151FB0-0x0015200C
    }
}

// 0x00152010-0x00152078 (104 bytes), lines 786-832
static RwCamera *CameraBeginUpdate(RwCamera *camera)
{
    // param RwCamera *camera  (in $s1)
    {   // 0x00152010-0x00152078
    }
}

// 0x00152080-0x001520F4 (116 bytes), lines 851-865
void *_rwCameraClose(void *instance)
{
    // param void *instance  (in $s1)
    {   // 0x00152080-0x001520F4
    }
}

// 0x00152100-0x00152184 (132 bytes), lines 878-898
void *_rwCameraOpen(void *instance, int offset)
{
    // param void *instance  (in $s1)
    // param int offset  (in $v0)
    {   // 0x00152100-0x00152184
    }
}

// 0x00152190-0x0015219C (12 bytes), lines 934-934
RwCamera *RwCameraEndUpdate(RwCamera *camera)
{
    // param RwCamera *camera  (in $v0)
    {   // 0x00152190-0x0015219C
        RwCamera *result;  // in $v0
    }
}

// 0x001521A0-0x001521AC (12 bytes), lines 976-976
RwCamera *RwCameraBeginUpdate(RwCamera *camera)
{
    // param RwCamera *camera  (in $v0)
    {   // 0x001521A0-0x001521AC
    }
}

// 0x001521B0-0x001521F8 (72 bytes), lines 1053-1072
RwCamera *RwCameraSetViewOffset(RwCamera *camera, RwV2d *offset)
{
    // param RwCamera *camera  (in $s0)
    // param RwV2d *offset  (in $v0)
    {   // 0x001521B0-0x001521F8
        RwFrame *frame;  // in $v0
    }
}

// 0x00152200-0x00152240 (64 bytes), lines 1260-1283
RwCamera *RwCameraSetNearClipPlane(RwCamera *camera, float nearClip)
{
    // param RwCamera *camera  (in $s0)
    // param float nearClip  ($sp+32)
    {   // 0x00152200-0x00152240
        RwFrame *frame;  // in $v0
    }
}

// 0x00152240-0x00152280 (64 bytes), lines 1353-1375
RwCamera *RwCameraSetFarClipPlane(RwCamera *camera, float farClip)
{
    // param RwCamera *camera  (in $s0)
    // param float farClip  ($sp+32)
    {   // 0x00152240-0x00152280
        RwFrame *frame;  // in $v0
    }
}

// 0x00152280-0x001522B8 (56 bytes), lines 1640-1661
RwCamera *RwCameraClear(RwCamera *camera, RwRGBA *color, int clearMode)
{
    // param RwCamera *camera  (in $s0)
    // param RwRGBA *color  (in $v0)
    // param int clearMode  (in $v0)
    {   // 0x00152280-0x001522B8
    }
}

// 0x001522C0-0x001522F0 (48 bytes), lines 1690-1704
RwCamera *RwCameraShowRaster(RwCamera *camera, void *dev, unsigned int flags)
{
    // param RwCamera *camera  (in $s0)
    // param void *dev  (in $v0)
    // param unsigned int flags  (in $v0)
    {   // 0x001522C0-0x001522F0
    }
}

// 0x001522F0-0x00152378 (136 bytes), lines 1741-1776
RwCamera *RwCameraSetProjection(RwCamera *camera, RwCameraProjection projection)
{
    // param RwCamera *camera  (in $s0)
    // param RwCameraProjection projection  (in $v0)
    {   // 0x001522F0-0x00152378
        RwError _rwErrorCode;  // $sp+40
        RwFrame *frame;  // in $v0
    }
}

// 0x00152380-0x001523EC (108 bytes), lines 1845-1868
RwCamera *RwCameraSetViewWindow(RwCamera *camera, RwV2d *viewWindow)
{
    // param RwCamera *camera  (in $s0)
    // param RwV2d *viewWindow  (in $v0)
    {   // 0x00152380-0x001523EC
        RwFrame *frame;  // in $v0
    }
}

// 0x001523F0-0x0015241C (44 bytes), lines 1977-1977
int RwCameraRegisterPlugin(int size, unsigned int pluginID, void *(*constructCB)(void *, int, int), void *(*destructCB)(void *, int, int), void *(*copyCB)(void *, void *, int, int))
{
    // param int size  (in $a0)
    // param unsigned int pluginID  (in $v0)
    // param void *(*constructCB)(void *, int, int)  (in $v1)
    // param void *(*destructCB)(void *, int, int)  (in $v0)
    // param void *(*copyCB)(void *, void *, int, int)  (in $v0)
    {   // 0x001523F0-0x0015241C
        int plug;  // in $v0
    }
}

// 0x00152420-0x0015247C (92 bytes), lines 2141-2156
int RwCameraDestroy(RwCamera *camera)
{
    // param RwCamera *camera  (in $s0)
    {   // 0x00152420-0x0015247C
    }
}

// 0x00152480-0x00152570 (240 bytes), lines 2212-2262
RwCamera *RwCameraCreate()
{
    {   // 0x00152480-0x00152570
        RwCamera *camera;  // in $s0
    }
}

