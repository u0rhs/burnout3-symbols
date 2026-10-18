// native.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void reDestroyCallback(RwResEntry *);  // 0x00196D60
int rwPip2WorldSectorOffset;  // 0x00310B88
int rwPip2GeometryOffset;  // 0x00310B90
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x001932A0-0x00193350 (176 bytes), lines 41-101
static int PointerToOffset(rwPS2ResEntryHeader *ps2ResHeader)
{
    // param rwPS2ResEntryHeader *ps2ResHeader  (in $v0)
    {   // 0x001932A0-0x00193350
        int qwc;  // in $t0
        int ref;  // in $v0
        int done;  // in $a3
        unsigned int *data;  // in $a2
    }
}

// 0x00193350-0x001933F0 (160 bytes), lines 107-167
static int OffsetToPointer(rwPS2ResEntryHeader *ps2ResHeader)
{
    // param rwPS2ResEntryHeader *ps2ResHeader  (in $v0)
    {   // 0x00193350-0x001933F0
        int qwc;  // in $a1
        int ref;  // in $v0
        int done;  // in $t0
        unsigned int *data;  // in $a3
    }
}

// 0x001933F0-0x001934A0 (176 bytes), lines 177-200
int _rpGeometrySkyFreeResEntry(RpGeometry *geometry)
{
    // param RpGeometry *geometry  (in $v0)
    {   // 0x001933F0-0x001934A0
        unsigned int i;  // in $s2
        unsigned int lengthOfMeshesArray;  // in $s1
        RwResEntry *repEntry;  // in $v0
        RwMeshCache *meshCache;  // in $s0
    }
}

// 0x001934A0-0x00193674 (468 bytes), lines 205-311
RwStream *_rpGeometryNativeWrite(RwStream *stream, RpGeometry *geometry)
{
    // param RwStream *stream  (in $s4)
    // param RpGeometry *geometry  (in $v0)
    {   // 0x001934A0-0x00193674
        unsigned int opaque;  // $sp+140
        unsigned int size;  // $sp+136
        rwPS2ResEntryHeader *ps2ResHeader;  // in $s2
        RwResEntry *repEntry;  // in $s1
        RwResEntry *repEntry;  // in $s2
        unsigned int i;  // in $s5
        unsigned int lengthOfMeshesArray;  // in $s6
        unsigned int size;  // in $s1
        RwMeshCache *meshCache;  // in $s0
        RwPlatformID id;  // at 0x00310470
    }
}

// 0x00193680-0x00193944 (708 bytes), lines 315-435
RpGeometry *_rpGeometryNativeRead(RwStream *stream, RpGeometry *geometry)
{
    // param RwStream *stream  (in $s0)
    // param RpGeometry *geometry  (in $s6)
    {   // 0x00193680-0x00193944
        unsigned int opaque;  // $sp+188
        unsigned int size;  // $sp+184
        rwPS2ResEntryHeader *ps2ResHeader;  // in $s4
        RwResEntry **repEntry;  // in $s3
        RwError _rwErrorCode;  // $sp+168
        RwMeshCache *meshCache;  // in $s7
        RwPlatformID id;  // $sp+180
        int i;  // in $s2
        int lengthOfMeshesArray;  // in $fp
        unsigned int version;  // $sp+176
    }
}

// 0x00193950-0x00193AF8 (424 bytes), lines 439-482
int _rpGeometryNativeSize(RpGeometry *geometry)
{
    // param RpGeometry *geometry  (in $v0)
    {   // 0x00193950-0x00193AF8
        RwResEntry *repEntry;  // in $s2
        unsigned int i;  // in $a1
        unsigned int lengthOfMeshesArray;  // in $a0
        RwMeshCache *meshCache;  // in $v1
        unsigned int size;  // in $v0
    }
}

// 0x00193B00-0x00193CE4 (484 bytes), lines 517-626
RwStream *_rpWorldSectorNativeWrite(RwStream *stream, RpWorldSector *sector)
{
    // param RwStream *stream  (in $s4)
    // param RpWorldSector *sector  (in $s0)
    {   // 0x00193B00-0x00193CE4
        unsigned int opaque;  // $sp+140
        unsigned int size;  // $sp+136
        rwPS2ResEntryHeader *ps2ResHeader;  // in $s2
        RwResEntry *repEntry;  // in $s1
        RwResEntry *repEntry;  // in $s2
        unsigned int i;  // in $s5
        unsigned int lengthOfMeshesArray;  // in $s6
        unsigned int size;  // in $s1
        RwMeshCache *meshCache;  // in $s0
        RpWorld *world;  // in $v0
        RwPlatformID id;  // at 0x00310474
    }
}

// 0x00193CF0-0x00193FCC (732 bytes), lines 630-752
RpWorldSector *_rpWorldSectorNativeRead(RwStream *stream, RpWorldSector *sector)
{
    // param RwStream *stream  (in $s0)
    // param RpWorldSector *sector  (in $s6)
    {   // 0x00193CF0-0x00193FCC
        unsigned int opaque;  // $sp+188
        unsigned int size;  // $sp+184
        rwPS2ResEntryHeader *ps2ResHeader;  // in $s4
        RwResEntry **repEntry;  // in $s3
        RwError _rwErrorCode;  // $sp+168
        RwMeshCache *meshCache;  // in $s7
        RwPlatformID id;  // $sp+180
        int i;  // in $s2
        int lengthOfMeshesArray;  // in $fp
        unsigned int version;  // $sp+176
    }
}

// 0x00193FD0-0x00194190 (448 bytes), lines 756-802
int _rpWorldSectorNativeSize(RpWorldSector *sector)
{
    // param RpWorldSector *sector  (in $s1)
    {   // 0x00193FD0-0x00194190
        RwResEntry *repEntry;  // in $s2
        unsigned int i;  // in $a0
        unsigned int lengthOfMeshesArray;  // in $v1
        RwMeshCache *meshCache;  // in $v0
        RpWorld *world;  // in $v0
        unsigned int size;  // in $s0
    }
}

