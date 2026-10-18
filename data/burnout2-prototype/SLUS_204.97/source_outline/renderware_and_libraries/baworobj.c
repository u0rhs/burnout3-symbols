// baworobj.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwCamera *WorldRemoveClumpCamera(RwCamera *, void *);
RpLight *WorldRemoveClumpLight(RpLight *, void *);
RpAtomic *WorldRemoveClumpAtomic(RpAtomic *, void *);
RwStream *_rpReadWorldRights(RwStream *, int, void *, int, int);  // 0x001826B0
RwStream *_rpWriteWorldRights(RwStream *, int, void *, int, int);  // 0x00182730
int _rpSizeWorldRights(void *, int, int);  // 0x001827A0
RwStream *_rpReadSectRights(RwStream *, int, void *, int, int);  // 0x001827D0
RwStream *_rpWriteSectRights(RwStream *, int, void *, int, int);  // 0x00182850
int _rpSizeSectRights(void *, int, int);  // 0x001828C0
RwStream *_rpReadAtomicRights(RwStream *, int, void *, int, int);  // 0x00182950
RwStream *_rpWriteAtomicRights(RwStream *, int, void *, int, int);  // 0x001829D0
int _rpSizeAtomicRights(void *, int, int);  // 0x00182A40
void *WorldObjectOpen(void *, int, int);  // 0x0018B170
void *WorldObjectClose(void *, int, int);  // 0x0018B250
RwCamera *WorldCameraBeginUpdate(RwCamera *);  // 0x0018B2F0
RwCamera *WorldCameraEndUpdate(RwCamera *);  // 0x0018B320
RwObjectHasFrame *WorldCameraSync(RwObjectHasFrame *);  // 0x0018B340
void *WorldInitCameraExt(void *, int, int);  // 0x0018B3E0
void *WorldCopyCameraExt(void *, void *, int, int);  // 0x0018B440
void *WorldDeInitCameraExt(void *, int, int);  // 0x0018B490
RwObjectHasFrame *WorldAtomicSync(RwObjectHasFrame *);  // 0x0018B740
void *WorldInitAtomicExt(void *, int, int);  // 0x0018B840
void *WorldCopyAtomicExt(void *, void *, int, int);  // 0x0018B880
void *WorldDeInitAtomicExt(void *, int, int);  // 0x0018B890
void *WorldInitClumpExt(void *, int, int);  // 0x0018B960
void *WorldCopyClumpExt(void *, void *, int, int);  // 0x0018B980
void *WorldDeInitClumpExt(void *, int, int);  // 0x0018B9C0
RwObjectHasFrame *WorldLightSync(RwObjectHasFrame *);  // 0x0018B9D0
void *WorldInitLightExt(void *, int, int);  // 0x0018BCB0
void *WorldCopyLightExt(void *, void *, int, int);  // 0x0018BCE0
void *WorldDeInitLightExt(void *, int, int);  // 0x0018BD20
RpAtomic *WorldAddClumpAtomic(RpAtomic *, void *);  // 0x0018C150
RpLight *WorldAddClumpLight(RpLight *, void *);  // 0x0018C180
RwCamera *WorldAddClumpCamera(RwCamera *, void *);  // 0x0018C1B0
RwStream *writeGeometryMesh(RwStream *, int, void *, int, int);  // 0x0018C1E0
RwStream *readGeometryMesh(RwStream *, int, void *, int, int);  // 0x0018C200
int sizeGeometryMesh(void *, int, int);  // 0x0018C250
RwStream *writeGeometryNative(RwStream *, int, void *, int, int);  // 0x0018C260
RwStream *readGeometryNative(RwStream *, int, void *, int, int);  // 0x0018C270
int sizeGeometryNative(void *, int, int);  // 0x0018C2A0
RwStream *writeWorldSectorNative(RwStream *, int, void *, int, int);  // 0x0018C2B0
RwStream *readWorldSectorNative(RwStream *, int, void *, int, int);  // 0x0018C2C0
int sizeWorldSectorNative(void *, int, int);  // 0x0018C2F0
RwStream *writeSectorMesh(RwStream *, int, void *, int, int);  // 0x0018C300
RwStream *readSectorMesh(RwStream *, int, void *, int, int);  // 0x0018C350
int sizeSectorMesh(void *, int, int);  // 0x0018C3B0
static int cameraExtOffset;  // 0x00310B68
static int atomicExtOffset;  // 0x00310B6C
static int clumpExtOffset;  // 0x00310B70
static int lightExtOffset;  // 0x00310B74
RwModuleInfo worldObjModule;  // 0x00310B78
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x0018B170-0x0018B248 (216 bytes), lines 175-208
static void *WorldObjectOpen(void *instance, int offset)
{
    // param void *instance  (in $s2)
    // param int offset  (in $v0)
    {   // 0x0018B170-0x0018B248
    }
}

// 0x0018B250-0x0018B2EC (156 bytes), lines 222-244
static void *WorldObjectClose(void *instance)
{
    // param void *instance  (in $s2)
    {   // 0x0018B250-0x0018B2EC
    }
}

// 0x0018B2F0-0x0018B320 (48 bytes), lines 349-362
static RwCamera *WorldCameraBeginUpdate(RwCamera *camera)
{
    // param RwCamera *camera  (in $v0)
    {   // 0x0018B2F0-0x0018B320
        RpWorldCameraExt *cameraExt;  // in $v1
    }
}

// 0x0018B320-0x0018B340 (32 bytes), lines 377-387
static RwCamera *WorldCameraEndUpdate(RwCamera *camera)
{
    // param RwCamera *camera  (in $v0)
    {   // 0x0018B320-0x0018B340
        RpWorldCameraExt *cameraExt;  // in $v0
    }
}

// 0x0018B340-0x0018B3D4 (148 bytes), lines 401-437
static RwObjectHasFrame *WorldCameraSync(RwObjectHasFrame *object)
{
    // param RwObjectHasFrame *object  (in $s0)
    {   // 0x0018B340-0x0018B3D4
        int (*HintRenderF2BFunc)(void *, void *, int);  // in $s2
        RpWorld *world;  // in $s1
        RwCamera *camera;  // in $v0
        RpWorldCameraExt *cameraExt;  // in $s1
    }
}

// 0x0018B3E0-0x0018B43C (92 bytes), lines 453-476
static void *WorldInitCameraExt(void *object)
{
    // param void *object  (in $v0)
    {   // 0x0018B3E0-0x0018B43C
        RwCamera *camera;  // in $v0
        RpWorldCameraExt *cameraExt;  // in $t0
    }
}

// 0x0018B440-0x0018B490 (80 bytes), lines 492-517
static void *WorldCopyCameraExt(void *dstObject, void *srcObject)
{
    // param void *dstObject  (in $s0)
    // param void *srcObject  (in $v0)
    {   // 0x0018B440-0x0018B490
        RpWorldCameraExt *dstCameraExt;  // in $v1
    }
}

// 0x0018B490-0x0018B504 (116 bytes), lines 532-557
static void *WorldDeInitCameraExt(void *object)
{
    // param void *object  (in $s0)
    {   // 0x0018B490-0x0018B504
        RwCamera *camera;  // in $v0
        RpWorldCameraExt *cameraExt;  // in $s1
    }
}

// 0x0018B510-0x0018B740 (560 bytes), lines 649-762
static void WorldAttachAtomicSphere(RpWorld *world, RpAtomic *atomic)
{
    // param RpWorld *world  (in $s0)
    // param RpAtomic *atomic  (in $s2)
    {   // 0x0018B510-0x0018B740
        RpPlaneSector *pspPlane;  // in $a0
        RpTie *tie;  // in $v0
        RwSphere *worldSphere;  // in $v0
        RwV3d sup;  // $sp+336
        RwV3d inf;  // $sp+320
        int nStack;  // in $s1
        RpSector *spaStack[64];  // $sp+64
        RpSector *spSect;  // in $s0
    }
}

// 0x0018B740-0x0018B838 (248 bytes), lines 775-806
static RwObjectHasFrame *WorldAtomicSync(RwObjectHasFrame *type)
{
    // param RwObjectHasFrame *type  (in $s3)
    {   // 0x0018B740-0x0018B838
        RpWorld *world;  // in $s0
        RpWorldAtomicExt *atomicExt;  // in $s0
        RpAtomic *atomic;  // in $v0
    }
}

// 0x0018B840-0x0018B87C (60 bytes), lines 823-841
static void *WorldInitAtomicExt(void *object)
{
    // param void *object  (in $v0)
    {   // 0x0018B840-0x0018B87C
        RpAtomic *atomic;  // in $v0
        RpWorldAtomicExt *atomicExt;  // in $a2
    }
}

// 0x0018B880-0x0018B888 (8 bytes), lines 870-870
static void *WorldCopyAtomicExt(void *dstObject)
{
    // param void *dstObject  (in $v0)
    {   // 0x0018B880-0x0018B888
    }
}

// 0x0018B890-0x0018B958 (200 bytes), lines 885-909
static void *WorldDeInitAtomicExt(void *object)
{
    // param void *object  (in $s3)
    {   // 0x0018B890-0x0018B958
        RpAtomic *atomic;  // in $v0
        RpWorldAtomicExt *atomicExt;  // in $s0
    }
}

// 0x0018B960-0x0018B974 (20 bytes), lines 932-935
static void *WorldInitClumpExt(void *object)
{
    // param void *object  (in $v0)
    {   // 0x0018B960-0x0018B974
    }
}

// 0x0018B980-0x0018B9C0 (64 bytes), lines 950-966
static void *WorldCopyClumpExt(void *dstObject, void *srcObject)
{
    // param void *dstObject  (in $s0)
    // param void *srcObject  (in $v0)
    {   // 0x0018B980-0x0018B9C0
    }
}

// 0x0018B9C0-0x0018B9C8 (8 bytes), lines 1001-1001
static void *WorldDeInitClumpExt(void *object)
{
    // param void *object  (in $v0)
    {   // 0x0018B9C0-0x0018B9C8
    }
}

// 0x0018B9D0-0x0018BCA8 (728 bytes), lines 1046-1174
static RwObjectHasFrame *WorldLightSync(RwObjectHasFrame *object)
{
    // param RwObjectHasFrame *object  (in $s4)
    {   // 0x0018B9D0-0x0018BCA8
        RwError _rwErrorCode;  // $sp+424
        RpPlaneSector *pspPlane;  // in $v1
        RpLightTie *tie;  // in $v0
        float radius;  // optimised away
        RwV3d sup;  // $sp+408
        RwV3d inf;  // $sp+392
        int nStack;  // in $s1
        RpSector *spaStack[64];  // $sp+128
        RpSector *sect;  // in $s0
        RpLightType type;  // in $v0
        RwFrame *lightFrame;  // in $s0
        RpWorld *world;  // in $s5
        RpWorldLightExt *lightExt;  // in $s0
        RpLight *light;  // in $v0
    }
}

// 0x0018BCB0-0x0018BCD8 (40 bytes), lines 1191-1205
static void *WorldInitLightExt(void *object)
{
    // param void *object  (in $v0)
    {   // 0x0018BCB0-0x0018BCD8
        RpWorldLightExt *lightExt;  // in $a2
        RpLight *light;  // in $v0
    }
}

// 0x0018BCE0-0x0018BD20 (64 bytes), lines 1221-1237
static void *WorldCopyLightExt(void *dstObject, void *srcObject)
{
    // param void *dstObject  (in $s0)
    // param void *srcObject  (in $v0)
    {   // 0x0018BCE0-0x0018BD20
    }
}

// 0x0018BD20-0x0018BDC4 (164 bytes), lines 1252-1277
static void *WorldDeInitLightExt(void *object)
{
    // param void *object  (in $s2)
    {   // 0x0018BD20-0x0018BDC4
        RpLight *light;  // in $v0
    }
}

// 0x0018BDD0-0x0018C150 (896 bytes), lines 1296-1429
static RpWorld *WorldSyncCamera(RpWorld *world, RwCamera *camera)
{
    // param RpWorld *world  (in $fp)
    // param RwCamera *camera  (in $s3)
    {   // 0x0018BDD0-0x0018C150
        int viewPointIsHigher;  // in $a1
        RwSplitBits sbRight;  // $sp+492
        RwSplitBits sbLeft;  // $sp+488
        RpPlaneSector *pspPlane;  // in $a0
        RwSplitBits sbSide;  // $sp+484
        RwV3d *base;  // in $v1
        RpWorldSector *worldSector;  // in $v0
        int i;  // in $v0
        int outside;  // in $a2
        int position;  // in $s2
        int nStack;  // in $s1
        int goBackToFront;  // in $s6
        RpWorldCameraExt *cameraExt;  // in $s0
        RwFrustumPlane *plpPlanes;  // in $s7
        RwV3d sup;  // $sp+456
        RwV3d inf;  // $sp+440
        RwV3d vViewPoint;  // $sp+424
        RpSector *spSect;  // in $v0
        RpSector *spaStack[64];  // $sp+160
    }
}

// 0x0018C150-0x0018C180 (48 bytes), lines 1441-1450
static RpAtomic *WorldAddClumpAtomic(RpAtomic *atomic, void *data)
{
    // param RpAtomic *atomic  (in $s0)
    // param void *data  (in $v0)
    {   // 0x0018C150-0x0018C180
    }
}

// 0x0018C180-0x0018C1B0 (48 bytes), lines 1493-1502
static RpLight *WorldAddClumpLight(RpLight *light, void *data)
{
    // param RpLight *light  (in $s0)
    // param void *data  (in $v0)
    {   // 0x0018C180-0x0018C1B0
    }
}

// 0x0018C1B0-0x0018C1E0 (48 bytes), lines 1544-1553
static RwCamera *WorldAddClumpCamera(RwCamera *camera, void *data)
{
    // param RwCamera *camera  (in $s0)
    // param void *data  (in $v0)
    {   // 0x0018C1B0-0x0018C1E0
    }
}

// 0x0018C1E0-0x0018C1F8 (24 bytes), lines 1606-1614
static RwStream *writeGeometryMesh(RwStream *stream, void *object)
{
    // param RwStream *stream  (in $v0)
    // param void *object  (in $v0)
    {   // 0x0018C1E0-0x0018C1F8
        RpGeometry *geometry;  // in $v0
    }
}

// 0x0018C200-0x0018C248 (72 bytes), lines 1636-1654
static RwStream *readGeometryMesh(RwStream *stream, void *object)
{
    // param RwStream *stream  (in $s1)
    // param void *object  (in $v0)
    {   // 0x0018C200-0x0018C248
        RpGeometry *geometry;  // in $s0
    }
}

// 0x0018C250-0x0018C25C (12 bytes), lines 1677-1677
static int sizeGeometryMesh(void *object)
{
    // param void *object  (in $v0)
    {   // 0x0018C250-0x0018C25C
    }
}

// 0x0018C260-0x0018C268 (8 bytes), lines 1705-1705
static RwStream *writeGeometryNative(RwStream *stream, void *object)
{
    // param RwStream *stream  (in $v0)
    // param void *object  (in $v0)
    {   // 0x0018C260-0x0018C268
    }
}

// 0x0018C270-0x0018C2A0 (48 bytes), lines 1726-1741
static RwStream *readGeometryNative(RwStream *stream, void *object)
{
    // param RwStream *stream  (in $s0)
    // param void *object  (in $v0)
    {   // 0x0018C270-0x0018C2A0
    }
}

// 0x0018C2A0-0x0018C2A8 (8 bytes), lines 1764-1764
static int sizeGeometryNative(void *object)
{
    // param void *object  (in $v0)
    {   // 0x0018C2A0-0x0018C2A8
    }
}

// 0x0018C2B0-0x0018C2B8 (8 bytes), lines 1792-1792
static RwStream *writeWorldSectorNative(RwStream *stream, void *object)
{
    // param RwStream *stream  (in $v0)
    // param void *object  (in $v0)
    {   // 0x0018C2B0-0x0018C2B8
    }
}

// 0x0018C2C0-0x0018C2F0 (48 bytes), lines 1813-1828
static RwStream *readWorldSectorNative(RwStream *stream, void *object)
{
    // param RwStream *stream  (in $s0)
    // param void *object  (in $v0)
    {   // 0x0018C2C0-0x0018C2F0
    }
}

// 0x0018C2F0-0x0018C2F8 (8 bytes), lines 1850-1850
static int sizeWorldSectorNative(void *object)
{
    // param void *object  (in $v0)
    {   // 0x0018C2F0-0x0018C2F8
    }
}

// 0x0018C300-0x0018C348 (72 bytes), lines 1872-1884
static RwStream *writeSectorMesh(RwStream *stream, void *object)
{
    // param RwStream *stream  (in $s1)
    // param void *object  (in $v0)
    {   // 0x0018C300-0x0018C348
        RpWorld *world;  // in $v0
        RpWorldSector *sector;  // in $s0
    }
}

// 0x0018C350-0x0018C3A4 (84 bytes), lines 1905-1925
static RwStream *readSectorMesh(RwStream *stream, void *object)
{
    // param RwStream *stream  (in $s1)
    // param void *object  (in $v0)
    {   // 0x0018C350-0x0018C3A4
        RpWorld *world;  // in $v0
        RpWorldSector *sector;  // in $s0
    }
}

// 0x0018C3B0-0x0018C3E0 (48 bytes), lines 1942-1950
static int sizeSectorMesh(void *object)
{
    // param void *object  (in $v0)
    {   // 0x0018C3B0-0x0018C3E0
        RpWorldSector *sector;  // in $s0
    }
}

// 0x0018C3E0-0x0018C6C8 (744 bytes), lines 1963-2102
int _rpWorldObjRegisterExtensions()
{
    {   // 0x0018C3E0-0x0018C6C8
        int status;  // in $s0
    }
}

// 0x0018C6D0-0x0018C718 (72 bytes), lines 2132-2161
RpWorld *RpWorldAddCamera(RpWorld *world, RwCamera *camera)
{
    // param RpWorld *world  (in $s1)
    // param RwCamera *camera  (in $v0)
    {   // 0x0018C6D0-0x0018C718
        RpWorldCameraExt *cameraExt;  // in $s0
        RwFrame *frame;  // in $v0
    }
}

// 0x0018C720-0x0018C768 (72 bytes), lines 2292-2318
RpWorld *RpWorldAddAtomic(RpWorld *world, RpAtomic *atomic)
{
    // param RpWorld *world  (in $s1)
    // param RpAtomic *atomic  (in $v0)
    {   // 0x0018C720-0x0018C768
        RpWorldAtomicExt *atomicExt;  // in $s0
        RwFrame *frame;  // in $v0
    }
}

// 0x0018C770-0x0018C780 (16 bytes), lines 2407-2408
RpWorld *RpAtomicGetWorld(RpAtomic *atomic)
{
    // param RpAtomic *atomic  (in $v0)
    {   // 0x0018C770-0x0018C780
    }
}

// 0x0018C780-0x0018C87C (252 bytes), lines 2792-2842
RpWorld *RpWorldAddClump(RpWorld *world, RpClump *clump)
{
    // param RpWorld *world  (in $s2)
    // param RpClump *clump  (in $s1)
    {   // 0x0018C780-0x0018C87C
        RwError _rwErrorCode;  // $sp+72
        RwFrame *clumpFrame;  // in $s0
        RpWorldClumpExt *clumpExt;  // in $t0
    }
}

// 0x0018C880-0x0018C920 (160 bytes), lines 3334-3378
RpWorld *RpWorldAddLight(RpWorld *world, RpLight *light)
{
    // param RpWorld *world  (in $s1)
    // param RpLight *light  (in $s0)
    {   // 0x0018C880-0x0018C920
        RwFrame *frame;  // in $v0
    }
}

