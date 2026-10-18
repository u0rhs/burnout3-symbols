// Every class, struct, union and enum in the debug information of SLUS_204.97
// Burnout 2 prototype, 29 July 2002
// Offsets are in /* */ before each member; sizes in bytes. Types appear once per distinct layout:
// a name with more than one layout is marked VARIANT (headers changed between files, or two
// different types share the name). Base classes are listed with their offsets.
// u_long128 is the EE's 128-bit integer. MW CodeWarrior did not record const, typedefs or
// member functions in the types; the functions of each class are listed from the code.

// declared in 1 file(s), e.g. baimage.c
struct __rwImage {  // size 0x010
    /* 0x000 */ int width;
    /* 0x004 */ int height;
    /* 0x008 */ int depth;
    /* 0x00C */ int stride;
};

// declared in 1 file(s), e.g. babinary.c
struct __rwMark {  // size 0x00C
    /* 0x000 */ unsigned int type;
    /* 0x004 */ unsigned int length;
    /* 0x008 */ unsigned int libraryID;
};

// declared in 1 file(s), e.g. basky.c
struct __rwSkyNativeRaster {  // size 0x040
    /* 0x000 */ int width;
    /* 0x004 */ int height;
    /* 0x008 */ int depth;
    /* 0x00C */ unsigned short format;
    /* 0x00E */ unsigned short version;
    /* 0x010 */ unsigned int lsb;
    /* 0x014 */ unsigned int msb;
    /* 0x018 */ unsigned int palOffset;
    /* 0x01C */ unsigned int maxMipLevel;
    /* 0x020 */ unsigned int miptbp1Lsb;
    /* 0x024 */ unsigned int miptbp1Msb;
    /* 0x028 */ unsigned int miptbp2Lsb;
    /* 0x02C */ unsigned int miptbp2Msb;
    /* 0x030 */ unsigned int sysMemSize;
    /* 0x034 */ unsigned int sysMemPalSize;
    /* 0x038 */ unsigned int texCacheSize;
    /* 0x03C */ unsigned int mipmapKL;
};

// declared in 1 file(s), e.g. basky.c
struct __rwSkyNativeTexture {  // size 0x008
    /* 0x000 */ unsigned char id[4];
    /* 0x004 */ int filterAndAddress;
};

// declared in 1 file(s), e.g. bafsys.c
struct __sbuf {  // size 0x008
    /* 0x000 */ unsigned char *_base;
    /* 0x004 */ int _size;
};

// declared in 1 file(s), e.g. bafsys.c
struct __sFILE {  // size 0x058
    /* 0x000 */ unsigned char *_p;
    /* 0x004 */ int _r;
    /* 0x008 */ int _w;
    /* 0x00C */ short _flags;
    /* 0x00E */ short _file;
    /* 0x010 */ __sbuf _bf;
    /* 0x018 */ int _lbfsize;
    /* 0x01C */ void *_cookie;
    /* 0x020 */ int (*_read)(void *, char *, int);
    /* 0x024 */ int (*_write)(void *, char *, int);
    /* 0x028 */ long (*_seek)(void *, long, int);
    /* 0x02C */ int (*_close)(void *);
    /* 0x030 */ __sbuf _ub;
    /* 0x038 */ unsigned char *_up;
    /* 0x03C */ int _ur;
    /* 0x040 */ unsigned char _ubuf[3];
    /* 0x043 */ unsigned char _nbuf[1];
    /* 0x044 */ __sbuf _lb;
    /* 0x04C */ int _blksize;
    /* 0x050 */ int _offset;
    /* 0x054 */ _reent *_data;
};

// declared in 1 file(s), e.g. bafsys.c
struct _atexit {  // size 0x088
    /* 0x000 */ _atexit *_next;
    /* 0x004 */ int _ind;
    /* 0x008 */ void (*_fns[32])();
};

// declared in 1 file(s), e.g. bafsys.c
struct _Bigint {  // size 0x018
    /* 0x000 */ _Bigint *_next;
    /* 0x004 */ int _k;
    /* 0x008 */ int _maxwds;
    /* 0x00C */ int _sign;
    /* 0x010 */ int _wds;
    /* 0x014 */ unsigned int _x[1];
};

// declared in 1 file(s), e.g. basky.c
struct _clearPkt {  // size 0x0D0
    /* 0x000 */ struct {  // size 0x010
        /* 0x000 */ unsigned long NLOOP : 15;  // bit offset 0
        /* 0x000 */ unsigned long EOP : 1;  // bit offset 15
        /* 0x000 */ unsigned long pad16 : 16;  // bit offset 16
        /* 0x000 */ unsigned long id : 14;  // bit offset 32
        /* 0x000 */ unsigned long PRE : 1;  // bit offset 46
        /* 0x000 */ unsigned long PRIM : 11;  // bit offset 47
        /* 0x000 */ unsigned long FLG : 2;  // bit offset 58
        /* 0x000 */ unsigned long NREG : 4;  // bit offset 60
        /* 0x008 */ unsigned long REGS0 : 4;  // bit offset 0
        /* 0x008 */ unsigned long REGS1 : 4;  // bit offset 4
        /* 0x008 */ unsigned long REGS2 : 4;  // bit offset 8
        /* 0x008 */ unsigned long REGS3 : 4;  // bit offset 12
        /* 0x008 */ unsigned long REGS4 : 4;  // bit offset 16
        /* 0x008 */ unsigned long REGS5 : 4;  // bit offset 20
        /* 0x008 */ unsigned long REGS6 : 4;  // bit offset 24
        /* 0x008 */ unsigned long REGS7 : 4;  // bit offset 28
        /* 0x008 */ unsigned long REGS8 : 4;  // bit offset 32
        /* 0x008 */ unsigned long REGS9 : 4;  // bit offset 36
        /* 0x008 */ unsigned long REGS10 : 4;  // bit offset 40
        /* 0x008 */ unsigned long REGS11 : 4;  // bit offset 44
        /* 0x008 */ unsigned long REGS12 : 4;  // bit offset 48
        /* 0x008 */ unsigned long REGS13 : 4;  // bit offset 52
        /* 0x008 */ unsigned long REGS14 : 4;  // bit offset 56
        /* 0x008 */ unsigned long REGS15 : 4;  // bit offset 60
    } giftag;
    /* 0x010 */ unsigned long alpha;
    /* 0x018 */ unsigned long alphaadr;
    /* 0x020 */ unsigned long frame;
    /* 0x028 */ unsigned long frameadr;
    /* 0x030 */ unsigned long prmodecont;
    /* 0x038 */ unsigned long prmodecontadr;
    /* 0x040 */ unsigned long scissor;
    /* 0x048 */ unsigned long scissoradr;
    /* 0x050 */ unsigned long test;
    /* 0x058 */ unsigned long testadr;
    /* 0x060 */ unsigned long xyoffset;
    /* 0x068 */ unsigned long xyoffsetadr;
    /* 0x070 */ unsigned long zbuf;
    /* 0x078 */ unsigned long zbufadr;
    /* 0x080 */ unsigned long prim;
    /* 0x088 */ unsigned long primadr;
    /* 0x090 */ unsigned long rgbaqa;
    /* 0x098 */ unsigned long rgbaqadra;
    /* 0x0A0 */ unsigned long xyza;
    /* 0x0A8 */ unsigned long xyzadra;
    /* 0x0B0 */ unsigned long rgbaqb;
    /* 0x0B8 */ unsigned long rgbaqadrb;
    /* 0x0C0 */ unsigned long xyzb;
    /* 0x0C8 */ unsigned long xyzadrb;
};

// declared in 1 file(s), e.g. bafsys.c
struct _glue {  // size 0x00C
    /* 0x000 */ _glue *_next;
    /* 0x004 */ int _niobs;
    /* 0x008 */ __sFILE *_iobs;
};

// declared in 1 file(s), e.g. baimage.c
struct _imageReadData {  // size 0x008
    /* 0x000 */ RwImage *(*readImage)(char *);
    /* 0x004 */ RwImage *image;
};

// declared in 1 file(s), e.g. babintex.c
struct _nativeTextureWriteInfo {  // size 0x008
    /* 0x000 */ _unionStreamSize u;
    /* 0x004 */ int allOK;
};

// declared in 3 file(s), e.g. gamesource\Render\CCoronas.cpp
class _packL {  // size 0x010
public:
    /* 0x000 */ float floats[4];
    /* 0x000 */ int ints[4];
    /* 0x000 */ u_long128 pack;
};

// declared in 1 file(s), e.g. bafsys.c
struct _reent {  // size 0x2F0
    /* 0x000 */ int _errno;
    /* 0x004 */ __sFILE *_stdin;
    /* 0x008 */ __sFILE *_stdout;
    /* 0x00C */ __sFILE *_stderr;
    /* 0x010 */ int _inc;
    /* 0x014 */ char _emergency[25];
    /* 0x030 */ int _current_category;
    /* 0x034 */ char *_current_locale;
    /* 0x038 */ int __sdidinit;
    /* 0x03C */ void (*__cleanup)(_reent *);
    /* 0x040 */ _Bigint *_result;
    /* 0x044 */ int _result_k;
    /* 0x048 */ _Bigint *_p5s;
    /* 0x04C */ _Bigint **_freelist;
    /* 0x050 */ int _cvtlen;
    /* 0x054 */ char *_cvtbuf;
    /* 0x058 */ union {  // size 0x0F0
        /* 0x000 */ struct {  // size 0x058
            /* 0x000 */ unsigned int _unused_rand;
            /* 0x004 */ char *_strtok_last;
            /* 0x008 */ char _asctime_buf[26];
            /* 0x024 */ tm _localtime_buf;
            /* 0x048 */ int _gamma_signgam;
            /* 0x050 */ unsigned long long _rand_next;
        } _reent;
        /* 0x000 */ struct {  // size 0x0F0
            /* 0x000 */ unsigned char *_nextf[30];
            /* 0x078 */ unsigned int _nmalloc[30];
        } _unused;
    } _new;
    /* 0x148 */ _atexit *_atexit;
    /* 0x14C */ _atexit _atexit0;
    /* 0x1D4 */ void (**_sig_func)(int);
    /* 0x1D8 */ _glue __sglue;
    /* 0x1E4 */ __sFILE __sf[3];
};

// declared in 1 file(s), e.g. bageomet.c
struct _rpMorphTarget {  // size 0x018
    /* 0x000 */ RwSphere boundingSphere;
    /* 0x010 */ int pointsPresent;
    /* 0x014 */ int normalsPresent;
};

// declared in 1 file(s), e.g. bageomet.c
struct _rpTriangle {  // size 0x008
    /* 0x000 */ unsigned int vertex01;
    /* 0x004 */ unsigned int vertex2Mat;
};

// declared in 1 file(s), e.g. bameshop.c
struct _rpTriStripTunnelStack {  // size 0x00C
    /* 0x000 */ RpTriStripEdge *edge;
    /* 0x004 */ RpTriStripPolygon *polygon;
    /* 0x008 */ unsigned int length;
};

// declared in 1 file(s), e.g. balight.c
union _rwIEEEFloatShapeType {  // size 0x004
    /* 0x000 */ float value;
    /* 0x000 */ unsigned int word;
};

// declared in 9 file(s), e.g. baim3d.c
struct _rwIm3DPoolStash {  // size 0x030
    /* 0x000 */ unsigned int flags;
    /* 0x004 */ RwMatrixTag *ltm;
    /* 0x008 */ unsigned int numVerts;
    /* 0x00C */ RxObjSpace3DVertex *objVerts;
    /* 0x010 */ RxCamSpace3DVertex *camVerts;
    /* 0x014 */ RwSky2DVertex *devVerts;
    /* 0x018 */ RxMeshStateVector *meshState;
    /* 0x01C */ RxRenderStateVector *renderState;
    /* 0x020 */ RxPipeline *pipeline;
    /* 0x024 */ RwPrimitiveType primType;
    /* 0x028 */ unsigned short *indices;
    /* 0x02C */ unsigned int numIndices;
};

// declared in 3 file(s), e.g. ps2allatomic.c
struct _rwPS2AllNormalLUTs {  // size 0x005
    /* 0x000 */ unsigned char counterGen;
    /* 0x001 */ unsigned char startIndOffset;
    /* 0x002 */ unsigned char shiftMask[1];
    /* 0x003 */ unsigned char shiftMask2[1];
    /* 0x004 */ unsigned char vertInc[1];
};

// declared in 3 file(s), e.g. ps2allatomic.c
struct _rwPS2AllTriFanLUTs {  // size 0x00B
    /* 0x000 */ unsigned char counterGen;
    /* 0x001 */ unsigned char startIndOffset;
    /* 0x002 */ unsigned char shiftMask[3];
    /* 0x005 */ unsigned char shiftMask2[3];
    /* 0x008 */ unsigned char vertInc[3];
};

// declared in 1 file(s), e.g. nodeps2matinstance.c
struct _rwPS2normalLUTs {  // size 0x005
    /* 0x000 */ unsigned char counterGen;
    /* 0x001 */ unsigned char startIndOffset;
    /* 0x002 */ unsigned char shiftMask[1];
    /* 0x003 */ unsigned char shiftMask2[1];
    /* 0x004 */ unsigned char vertInc[1];
};

// declared in 1 file(s), e.g. nodeps2matinstance.c
struct _rwPS2polyLineLUTs {  // size 0x008
    /* 0x000 */ unsigned char counterGen;
    /* 0x001 */ unsigned char startIndOffset;
    /* 0x002 */ unsigned char shiftMask[2];
    /* 0x004 */ unsigned char shiftMask2[2];
    /* 0x006 */ unsigned char vertInc[2];
};

// declared in 1 file(s), e.g. nodeps2matinstance.c
struct _rwPS2triFanLUTs {  // size 0x00B
    /* 0x000 */ unsigned char counterGen;
    /* 0x001 */ unsigned char startIndOffset;
    /* 0x002 */ unsigned char shiftMask[3];
    /* 0x005 */ unsigned char shiftMask2[3];
    /* 0x008 */ unsigned char vertInc[3];
};

// declared in 1 file(s), e.g. babinfrm.c
struct _rwStreamFrame {  // size 0x038
    /* 0x000 */ RwV3d right;
    /* 0x00C */ RwV3d up;
    /* 0x018 */ RwV3d at;
    /* 0x024 */ RwV3d pos;
    /* 0x030 */ int parentIndex;
    /* 0x034 */ unsigned int data;
};

// declared in 1 file(s), e.g. babinfrm.c
struct _rwStreamFrameList {  // size 0x004
    /* 0x000 */ int numFrames;
};

// declared in 1 file(s), e.g. babintex.c
struct _rwStreamTexDictionary {  // size 0x004
    /* 0x000 */ int numTextures;
};

// declared in 1 file(s), e.g. babintex.c
struct _rwStreamTexture {  // size 0x004
    /* 0x000 */ unsigned int filterAndAddress;
};

// declared in 3 file(s), e.g. gamesource\Sound\CMusic.cpp
class _sif_client_data {  // size 0x028
public:
    /* 0x000 */ _sif_rpc_data rpcd;
    /* 0x010 */ unsigned int command;
    /* 0x014 */ void *buff;
    /* 0x018 */ void *cbuff;
    /* 0x01C */ void (*func)(void *);
    /* 0x020 */ void *para;
    /* 0x024 */ _sif_serve_data *serve;
};

// declared in 3 file(s), e.g. gamesource\Sound\CMusic.cpp
class _sif_queue_data {  // size 0x018
public:
    /* 0x000 */ int key;
    /* 0x004 */ int active;
    /* 0x008 */ _sif_serve_data *link;
    /* 0x00C */ _sif_serve_data *start;
    /* 0x010 */ _sif_serve_data *end;
    /* 0x014 */ _sif_queue_data *next;
};

// declared in 3 file(s), e.g. gamesource\Sound\CMusic.cpp
class _sif_rpc_data {  // size 0x010
public:
    /* 0x000 */ void *paddr;
    /* 0x004 */ unsigned int pid;
    /* 0x008 */ int tid;
    /* 0x00C */ unsigned int mode;
};

// declared in 3 file(s), e.g. gamesource\Sound\CMusic.cpp
class _sif_serve_data {  // size 0x044
public:
    /* 0x000 */ unsigned int command;
    /* 0x004 */ void *(*func)(unsigned int, void *, int);
    /* 0x008 */ void *buff;
    /* 0x00C */ int size;
    /* 0x010 */ void *(*cfunc)(unsigned int, void *, int);
    /* 0x014 */ void *cbuff;
    /* 0x018 */ int csize;
    /* 0x01C */ _sif_client_data *client;
    /* 0x020 */ void *paddr;
    /* 0x024 */ unsigned int fno;
    /* 0x028 */ void *receive;
    /* 0x02C */ int rsize;
    /* 0x030 */ int rmode;
    /* 0x034 */ unsigned int rid;
    /* 0x038 */ _sif_serve_data *link;
    /* 0x03C */ _sif_serve_data *next;
    /* 0x040 */ _sif_queue_data *base;
};

// declared in 2 file(s), e.g. gamesource\Race\CStreamedWorld.cpp
class _SkyCameraExt {  // size 0x0D8
public:
    /* 0x000 */ RwV3d largeFrustumVerts[8];
    /* 0x060 */ RwFrustumPlane largeFrustumPlanes[6];
};

// declared in 1 file(s), e.g. skyinst.c
struct _skyImDispatchModel {  // size 0x00C
    /* 0x000 */ int (*openPacket)(unsigned int, unsigned int, unsigned int, unsigned int, void *, RwMatrixTag *);
    /* 0x004 */ void *vu1LineCode;
    /* 0x008 */ void *vu1TriCode;
};

// declared in 3 file(s), e.g. basky.c  // VARIANT 1 of 2
struct _SkyMemBlock {  // size 0x00C
    /* 0x000 */ RwRaster *raster;
    /* 0x004 */ unsigned int address;
    /* 0x008 */ unsigned int size;
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp  // VARIANT 2 of 2
class _SkyMemBlock {  // size 0x000
public:
};

// declared in 4 file(s), e.g. gamesource\Render\CSun.cpp  // VARIANT 1 of 2
class _SkyRasterExt {  // size 0x05C
public:
    /* 0x000 */ int dmaRefCount;
    /* 0x004 */ int dmaClrCount;
    /* 0x008 */ unsigned int lsb;
    /* 0x00C */ unsigned int msb;
    /* 0x010 */ unsigned int palOffset;
    /* 0x014 */ unsigned short mipmapKL;
    /* 0x016 */ unsigned char maxMipLevel;
    /* 0x017 */ unsigned char bLocked;
    /* 0x018 */ unsigned int miptbp1Lsb;
    /* 0x01C */ unsigned int miptbp1Msb;
    /* 0x020 */ unsigned int miptbp2Lsb;
    /* 0x024 */ unsigned int miptbp2Msb;
    /* 0x028 */ unsigned int sysMemSize;
    /* 0x02C */ unsigned int sysMemPalSize;
    /* 0x030 */ unsigned int nTexCacheSize;
    /* 0x034 */ unsigned char cachePkts;
    /* 0x035 */ unsigned char lockedMipLevel;
    /* 0x036 */ unsigned char flags;
    /* 0x037 */ unsigned char pad[1];
    /* 0x038 */ u_long128 *palUploadPkt;
    /* 0x03C */ u_long128 *mipUploadPkts[7];
    /* 0x058 */ _SkyMemBlock *mpCacheEntry;
};

// declared in 1 file(s), e.g. gamesource\Race\CRaceCar.cpp  // VARIANT 2 of 2
class _SkyRasterExt {  // size 0x05C
public:
    /* 0x000 */ int dmaRefCount;
    /* 0x004 */ int dmaClrCount;
    /* 0x008 */ unsigned int lsb;
    /* 0x00C */ unsigned int msb;
    /* 0x010 */ unsigned int palOffset;
    /* 0x014 */ unsigned short mipmapKL;
    /* 0x016 */ unsigned char maxMipLevel;
    /* 0x017 */ unsigned char bLocked;
    /* 0x018 */ unsigned int miptbp1Lsb;
    /* 0x01C */ unsigned int miptbp1Msb;
    /* 0x020 */ unsigned int miptbp2Lsb;
    /* 0x024 */ unsigned int miptbp2Msb;
    /* 0x028 */ unsigned int sysMemSize;
    /* 0x02C */ unsigned int sysMemPalSize;
    /* 0x030 */ unsigned int nTexCacheSize;
    /* 0x034 */ unsigned char cachePkts;
    /* 0x035 */ unsigned char lockedMipLevel;
    /* 0x036 */ unsigned char flags;
    /* 0x037 */ unsigned char pad[1];
    /* 0x038 */ void *palUploadPkt;
    /* 0x03C */ void *mipUploadPkts[7];
    /* 0x058 */ void *mpCacheEntry;
};

// declared in 1 file(s), e.g. texcache.c
struct _SkyTexCache {  // size 0x040
    /* 0x000 */ int enabled;
    /* 0x004 */ unsigned int ringStart;
    /* 0x008 */ unsigned int ringEnd;
    /* 0x00C */ unsigned int ringSize;
    /* 0x010 */ unsigned int lockedStart;
    /* 0x014 */ _SkyMemBlock *ring;
    /* 0x018 */ int startAddr;
    /* 0x01C */ int totalSize;
    /* 0x020 */ void (*uploadRaster)(RwRaster *, int);
    /* 0x024 */ RwRaster *currentRaster;
    /* 0x028 */ int context;
    /* 0x02C */ unsigned int context1Index;
    /* 0x030 */ unsigned int context2Index;
    /* 0x034 */ int originalStart;
};

// declared in 1 file(s), e.g. babintex.c
union _unionStreamSize {  // size 0x004
    /* 0x000 */ RwStream *stream;
    /* 0x000 */ unsigned int size;
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class AISegmentData {  // size 0x020
public:
    /* 0x000 */ EAISegmentTypes meSegmentType;
    /* 0x004 */ unsigned char muResetHereType8;
    /* 0x005 */ unsigned char muSector8;
    /* 0x006 */ short mnPad16;
    /* 0x008 */ unsigned short muChangeLaneIndices16[6];
    /* 0x014 */ unsigned short muChangeLaneSegments16[6];
};

// declared in 57 file(s), e.g. gamesource\Hud\CHud.cpp
class B22dBoxTag {  // size 0x010
public:
    /* 0x000 */ RwV2d mTopLeft;
    /* 0x008 */ RwV2d mSize;
};

// declared in 72 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class B22dFrameAnimatablesTag {  // size 0x020
public:
    /* 0x000 */ RwV2d mPos;
    /* 0x008 */ RwV2d mScale;
    /* 0x010 */ RwRGBAReal mColour;
};

// declared in 15 file(s), e.g. gamesource\Hud\CHudComponentBonus.cpp
class B22dFXAnimatablesTag {  // size 0x020
public:
    /* 0x000 */ RwV2d mPos;
    /* 0x008 */ RwV2d mScale;
    /* 0x010 */ unsigned char maCustom[16];
};

// declared in 48 file(s), e.g. gamesource\Hud\CHud.cpp
class B22dObjectAnimatablesTag {  // size 0x040
public:
    /* 0x000 */ B22dBoxTag mBoundingBox;
    /* 0x010 */ RwRGBAReal mColour;
    /* 0x020 */ unsigned char maCustom[32];
};

// declared in 1 file(s), e.g. gamesource\Hud\CHud.cpp  // VARIANT 1 of 2
class B22dObjectCustomDataBurnTag {  // size 0x000
public:
};

// declared in 1 file(s), e.g. gamesource\Hud\CHudComponentBurn.cpp  // VARIANT 2 of 2
class B22dObjectCustomDataBurnTag {  // size 0x014
public:
    /* 0x000 */ float mrBurnLevel;
    /* 0x004 */ RwRaster *mpBurnBarRaster;
    /* 0x008 */ RwRaster *mpFireRaster;
    /* 0x00C */ float mrAlpha;
    /* 0x010 */ float mrWhoosh;
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentPanel.cpp
class B22dObjectCustomDataCarStatBarTag {  // size 0x01C
public:
    /* 0x000 */ RwRGBAReal mFillColourScalar;
    /* 0x010 */ RwV2d mBorder;
    /* 0x018 */ float mrFill;
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentCar.cpp
class B22dObjectCustomDataCarTag {  // size 0x018
public:
    /* 0x000 */ float mrRotation;
    /* 0x004 */ float mrAltitude;
    /* 0x008 */ RwV2d mViewWindow;
    /* 0x010 */ CCarData *mpCarData;
    /* 0x014 */ float mrCameraPan;
};

// declared in 1 file(s), e.g. gamesource\Hud\CHud.cpp  // VARIANT 1 of 2
class B22dObjectCustomDataCountdownTag {  // size 0x000
public:
};

// declared in 1 file(s), e.g. gamesource\Hud\CHudComponentCountdown.cpp  // VARIANT 2 of 2
class B22dObjectCustomDataCountdownTag {  // size 0x014
public:
    /* 0x000 */ int mnNumber;
    /* 0x004 */ C2dFont *mpFont;
    /* 0x008 */ float mrWidthScale;
    /* 0x00C */ RwV2d mShadowOffset;
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentFlag.cpp
class B22dObjectCustomDataFlagTag {  // size 0x010
public:
    /* 0x000 */ RwRaster *mpRaster;
    /* 0x004 */ float mrAngle1;
    /* 0x008 */ float mrAngle2;
    /* 0x00C */ float mrLeftU;
};

// declared in 1 file(s), e.g. gamesource\Hud\CHudComponentMessage.cpp
class B22dObjectCustomDataFlamingTextTag {  // size 0x01C
public:
    /* 0x000 */ B22dObjectCustomDataTextTag mTextData;
    /* 0x014 */ int mnRasterID;
    /* 0x018 */ float mrWhoosh;
};

// declared in 1 file(s), e.g. gamesource\Hud\CHud.cpp  // VARIANT 1 of 2
class B22dObjectCustomDataHealthTag {  // size 0x000
public:
};

// declared in 1 file(s), e.g. gamesource\Hud\CHudComponentHealth.cpp  // VARIANT 2 of 2
class B22dObjectCustomDataHealthTag {  // size 0x010
public:
    /* 0x000 */ RwRaster *mpRaster;
    /* 0x004 */ int mnNumLit;
    /* 0x008 */ int mnNumFlashing;
    /* 0x00C */ float mrFlashTime;
};

// declared in 1 file(s), e.g. gamesource\Hud\CHud.cpp  // VARIANT 1 of 2
class B22dObjectCustomDataLapHistoryTag {  // size 0x000
public:
};

// declared in 1 file(s), e.g. gamesource\Hud\CHudComponentLapHistory.cpp  // VARIANT 2 of 2
class B22dObjectCustomDataLapHistoryTag {  // size 0x01C
public:
    /* 0x000 */ float marTimes[5];
    /* 0x014 */ unsigned char mnFirstLap;
    /* 0x015 */ unsigned char mnBestLap;
    /* 0x016 */ unsigned char mnNumLaps;
    /* 0x017 */ unsigned char mnCurrentLap;
    /* 0x018 */ C2dFont *mpFont;
};

// declared in 1 file(s), e.g. gamesource\Hud\CHud.cpp  // VARIANT 1 of 2
class B22dObjectCustomDataLapTimesTag {  // size 0x000
public:
};

// declared in 1 file(s), e.g. gamesource\Hud\CHudComponentLapTimes.cpp  // VARIANT 2 of 2
class B22dObjectCustomDataLapTimesTag {  // size 0x020
public:
    /* 0x000 */ float marTimes[3];
    /* 0x00C */ unsigned char *mapcLegends[3];
    /* 0x018 */ C2dFont *mpFont;
    /* 0x01C */ int mbNewRecord;
};

// declared in 1 file(s), e.g. gamesource\Hud\CHud.cpp  // VARIANT 1 of 2
class B22dObjectCustomDataScoreTag {  // size 0x000
public:
};

// declared in 1 file(s), e.g. gamesource\Hud\CHudComponentScore.cpp  // VARIANT 2 of 2
class B22dObjectCustomDataScoreTag {  // size 0x018
public:
    /* 0x000 */ int mnScore;
    /* 0x004 */ C2dFont *mpFont;
    /* 0x008 */ float mrWidthScale;
    /* 0x00C */ int mnMinDigits;
    /* 0x010 */ int mnMaxDigits;
    /* 0x014 */ float mrSize;
};

// declared in 1 file(s), e.g. gamesource\Hud\CHud.cpp  // VARIANT 1 of 2
class B22dObjectCustomDataSpeedoTag {  // size 0x000
public:
};

// declared in 1 file(s), e.g. gamesource\Hud\CHudComponentSpeedo.cpp  // VARIANT 2 of 2
class B22dObjectCustomDataSpeedoTag {  // size 0x018
public:
    /* 0x000 */ RwRaster *mpRaster;
    /* 0x004 */ C2dFont *mpFont;
    /* 0x008 */ float mrRPM;
    /* 0x00C */ float mrRPMBlur;
    /* 0x010 */ float mrMPH;
    /* 0x014 */ unsigned char mcGear;
    /* 0x015 */ unsigned char mcTransmission;
    /* 0x016 */ unsigned char mbRevLimiter;
    /* 0x017 */ unsigned char mbAlternateLayout;
};

// declared in 1 file(s), e.g. gamesource\Hud\CHud.cpp  // VARIANT 1 of 2
class B22dObjectCustomDataSplitTimeTag {  // size 0x000
public:
};

// declared in 1 file(s), e.g. gamesource\Hud\CHudComponentSplitTimes.cpp  // VARIANT 2 of 2
class B22dObjectCustomDataSplitTimeTag {  // size 0x020
public:
    /* 0x000 */ RwRaster *mpLeadCarRaster;
    /* 0x004 */ RwRaster *mpFollowingCarRaster;
    /* 0x008 */ float mrTimeDifference;
    /* 0x00C */ C2dFont *mpFont;
    /* 0x010 */ unsigned char mnLeadCarRed;
    /* 0x011 */ unsigned char mnLeadCarGreen;
    /* 0x012 */ unsigned char mnLeadCarBlue;
    /* 0x013 */ unsigned char mnFollowingCarRed;
    /* 0x014 */ unsigned char mnFollowingCarGreen;
    /* 0x015 */ unsigned char mnFollowingCarBlue;
    /* 0x016 */ unsigned char macLeadCarLabel[3];
    /* 0x019 */ unsigned char macFollowingCarLabel[3];
    /* 0x01C */ int pad;
};

// declared in 1 file(s), e.g. gamesource\Hud\CHud.cpp  // VARIANT 1 of 2
class B22dObjectCustomDataStatTag {  // size 0x000
public:
};

// declared in 1 file(s), e.g. gamesource\Hud\CHudComponentBonus.cpp  // VARIANT 2 of 2
class B22dObjectCustomDataStatTag {  // size 0x020
public:
    /* 0x000 */ C2dFont *mpFont;
    /* 0x004 */ unsigned char *mpcLegend;
    /* 0x008 */ int mnValue;
    /* 0x00C */ unsigned char macUnits[4];
    /* 0x010 */ float mrWidthScale;
    /* 0x014 */ unsigned char mcPrefix;
    /* 0x015 */ unsigned char pad1;
    /* 0x016 */ unsigned char pad2;
    /* 0x017 */ unsigned char pad3;
    /* 0x018 */ float mrOutlineOffsetX;
    /* 0x01C */ float mrOutlineOffsetY;
};

// declared in 8 file(s), e.g. gamesource\Hud\CHudComponentCrashDamageScore.cpp
class B22dObjectCustomDataTextTag {  // size 0x014
public:
    /* 0x000 */ C2dFont *mpFont;
    /* 0x004 */ unsigned char *mpcString;
    /* 0x008 */ float mrRecipWidth;
    /* 0x00C */ RwV2d mOffset;
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentTrackMap.cpp
class B22dObjectCustomDataTrackMapTag {  // size 0x010
public:
    /* 0x000 */ RwRaster *mpMiddleRaster;
    /* 0x004 */ RwRaster *mpSideRaster;
    /* 0x008 */ RwRaster *mpTopRaster;
    /* 0x00C */ RwRaster *mpBottomRaster;
};

// declared in 17 file(s), e.g. gamesource\Hud\CHudComponentBonus.cpp
class B22dSpriteTag {  // size 0x034
public:
    /* 0x000 */ RwRGBAReal mColour;
    /* 0x010 */ RwV2d mTopLeftPos;
    /* 0x018 */ RwV2d mBottomRightPos;
    /* 0x020 */ B22dTexAreaTag mTexArea;
    /* 0x030 */ RwRaster *mpRaster;
};

// declared in 48 file(s), e.g. gamesource\Hud\CHudComponentBonus.cpp
class B22dTexAreaTag {  // size 0x010
public:
    /* 0x000 */ RwTexCoords mTopLeftUV;
    /* 0x008 */ RwTexCoords mBottomRightUV;
};

// declared in 16 file(s), e.g. gamesource\Hud\CHudComponentBonus.cpp
class B22dTriStripTag {  // size 0x110
public:
    /* 0x000 */ B22dVertexTag maVerts[8];
    /* 0x100 */ int mnNumVerts;
    /* 0x104 */ RwRaster *mpRaster;
};

// declared in 16 file(s), e.g. gamesource\Hud\CHudComponentBonus.cpp
class B22dVertexTag {  // size 0x020
public:
    /* 0x000 */ RwRGBAReal mColour;
    /* 0x010 */ RwV2d mPos;
    /* 0x018 */ RwTexCoords mUV;
};

// declared in 69 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class B2BlobbyShadow {  // size 0x030
public:
    /* 0x000 */ RwV3d mPosition;
    /* 0x00C */ float mrAtSize;
    /* 0x010 */ RwV3d mRight;
    /* 0x01C */ float mrRightSize;
    /* 0x020 */ RwV3d mNormal;
    /* 0x02C */ float mrIntensity;
};

// declared in 1 file(s), e.g. gamesource\Render\CCoronas.cpp
class B2CoronaDescriptionTag {  // size 0x03C
public:
    /* 0x000 */ EInGameCoronaType meType;
    /* 0x004 */ float mrSize;
    /* 0x008 */ float mrReflectionSizeScale;
    /* 0x00C */ float mrZShift;
    /* 0x010 */ float mrRed;
    /* 0x014 */ float mrGreen;
    /* 0x018 */ float mrBlue;
    /* 0x01C */ float mrViewDistance;
    /* 0x020 */ float mrCosConeAngle;
    /* 0x024 */ float mrPosOffset;
    /* 0x028 */ unsigned int mnFlashType;
    /* 0x02C */ float mrFlashFrequency;
    /* 0x030 */ float mrFlashPhase;
    /* 0x034 */ float mrFlashFrequencyIncrement;
    /* 0x038 */ float mrFlashPhaseIncrement;
};

// declared in 76 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class B2CoronaTag {  // size 0x030
public:
    /* 0x000 */ RwV3d mPos;
    /* 0x00C */ float mrViewDistance;
    /* 0x010 */ float mrSizeX;
    /* 0x014 */ class {  // size 0x004
    public:
        /* 0x000 */ float mrSizeY;
        /* 0x000 */ float mrZShift;
    } u1;
    /* 0x018 */ float mrFlashFrequency;
    /* 0x01C */ float mrFlashPhase;
    /* 0x020 */ float mrRed;
    /* 0x024 */ float mrGreen;
    /* 0x028 */ float mrBlue;
    /* 0x02C */ unsigned int mnFlashType;
};

// declared in 1 file(s), e.g. gamesource\Render\CCoronas.cpp
class B2CoronaTypeParamsTag {  // size 0x00C
public:
    /* 0x000 */ int mnNumStaticCoronas;
    /* 0x004 */ int mnNumDynamicCoronas;
    /* 0x008 */ char *mpcTextureName;
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentCar.cpp
class B2MenuGfxCarBloomParamsTag {  // size 0x010
public:
    /* 0x000 */ int mnSub;
    /* 0x004 */ int mnAdd;
    /* 0x008 */ int mnOffX;
    /* 0x00C */ int mnOffY;
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentTrackMap.cpp
class B2MenuGfxTrackMapInfoTag {  // size 0x01C
public:
    /* 0x000 */ RwV2d mTopLeft;
    /* 0x008 */ RwV2d mBottomRight;
    /* 0x010 */ RwRaster *mpRaster;
    /* 0x014 */ float mrYAdjust;
    /* 0x018 */ float mrZoomAdjust;
};

// declared in 1 file(s), e.g. gamesource\Render\CParticles.cpp
class B2ParticleBatchParamsTag {  // size 0x090
public:
    /* 0x000 */ int mnNumParticles;
    /* 0x004 */ char *macTextureName;
    /* 0x008 */ float mrMinNearClip;
    /* 0x00C */ EParticleBlendMode meBlendMode;
    /* 0x010 */ int mbZWrite;
    /* 0x020 */ B2ParticlesVUDataTag mVUData;
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class B2ParticlesVUDataTag {  // size 0x070
public:
    /* 0x000 */ float mrMidTime;
    /* 0x004 */ float mrLifeTime;
    /* 0x008 */ float mrNearFade;
    /* 0x00C */ float mrMinAlpha;
    /* 0x010 */ RwRGBAReal mStartColour;
    /* 0x020 */ RwRGBAReal mMidColour;
    /* 0x030 */ RwRGBAReal mEndColour;
    /* 0x040 */ float mrStartSize;
    /* 0x044 */ float mrCapSize;
    /* 0x048 */ float mrMidSize;
    /* 0x04C */ float mrEndSize;
    /* 0x050 */ RwV3d mAcceleration;
    /* 0x05C */ float mrCurrentTime;
    /* 0x060 */ unsigned int mnType;
    /* 0x064 */ unsigned int mnGifA;
    /* 0x068 */ unsigned long long mnGifB;
};

// declared in 46 file(s), e.g. gamesource\Game\CLessonLogic.cpp  // VARIANT 1 of 2
class B2ParticleTag {  // size 0x000
public:
};

// declared in 1 file(s), e.g. gamesource\Render\CParticles.cpp  // VARIANT 2 of 2
class B2ParticleTag {  // size 0x030
public:
    /* 0x000 */ RwV3d mPos;
    /* 0x00C */ float mrSpawnTime;
    /* 0x010 */ RwV3d mVel;
    /* 0x01C */ float mrRotVel;
    /* 0x020 */ float mrLightingRed;
    /* 0x024 */ float mrLightingGreen;
    /* 0x028 */ float mrLightingBlue;
    /* 0x02C */ float mrScale;
};

// declared in 1 file(s), e.g. gamesource\Render\CParticles.cpp
class B2ParticleTypeParamsTag {  // size 0x034
public:
    /* 0x000 */ EParticleBatch meBatch;
    /* 0x004 */ float mrNumParticlesPerMetre;
    /* 0x008 */ int mnSpawnCap;
    /* 0x00C */ float mrLightingVariation;
    /* 0x010 */ float mrRed;
    /* 0x014 */ float mrGreen;
    /* 0x018 */ float mrBlue;
    /* 0x01C */ float mrSizeScale;
    /* 0x020 */ float mrSizeVariation;
    /* 0x024 */ float mrVelocityInheritance;
    /* 0x028 */ float mrVelocitySpread;
    /* 0x02C */ float mrAngularVelocitySpread;
    /* 0x030 */ float mrKickup;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class B2PropObject {  // size 0x040
public:
    /* 0x000 */ RwV3d mRight;
    /* 0x00C */ unsigned int mMatrixFlagsDONOTTOUCH;
    /* 0x010 */ RwV3d mUp;
    /* 0x01C */ float mrCollisionWorldIntensity;
    /* 0x020 */ RwV3d mAt;
    /* 0x02C */ int mnPropObjectID;
    /* 0x030 */ RwV3d mPos;
    /* 0x03C */ unsigned int mnPropLTMArrayIndex;
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class B2RainVUDataTag {  // size 0x0A0
public:
    /* 0x000 */ RwV4d mViewRight;
    /* 0x010 */ RwV4d mViewUp;
    /* 0x020 */ RwV4d mViewAt;
    /* 0x030 */ RwV4d mViewPos;
    /* 0x040 */ unsigned int mnColourRed;
    /* 0x044 */ unsigned int mnColourGreen;
    /* 0x048 */ unsigned int mnColourBlue;
    /* 0x04C */ unsigned int pad1;
    /* 0x050 */ RwV3d mOrigin;
    /* 0x05C */ float mrClipWindowX;
    /* 0x060 */ RwV3d mStreak;
    /* 0x06C */ float mrClipWindowY;
    /* 0x070 */ RwTexCoords mUV1;
    /* 0x078 */ RwTexCoords mUV2;
    /* 0x080 */ int mnNumParticles;
    /* 0x084 */ unsigned int mnGifA;
    /* 0x088 */ unsigned long long mnGifB;
    /* 0x090 */ unsigned long long mnSetupGifA;
    /* 0x098 */ unsigned long long mnSetupGifB;
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class B2SnowVUDataTag {  // size 0x080
public:
    /* 0x000 */ RwV4d mViewRight;
    /* 0x010 */ RwV4d mViewUp;
    /* 0x020 */ RwV4d mViewAt;
    /* 0x030 */ RwV4d mViewPos;
    /* 0x040 */ RwRGBAReal mColour;
    /* 0x050 */ RwV2d mViewWindow;
    /* 0x058 */ float mrNearClip;
    /* 0x05C */ float mrFarClip;
    /* 0x060 */ RwV3d mOrigin;
    /* 0x06C */ float mrSize;
    /* 0x070 */ int mnNumParticles;
    /* 0x074 */ unsigned int mnGifA;
    /* 0x078 */ unsigned long long mnGifB;
};

// declared in 1 file(s), e.g. gamesource\Render\CSparks.cpp
class B2SparkPosVelTag {  // size 0x020
public:
    /* 0x000 */ float mrPosX;
    /* 0x004 */ float mrPosY;
    /* 0x008 */ float mrPosZ;
    /* 0x00C */ float mrPosY2;
    /* 0x010 */ float mrVelX;
    /* 0x014 */ float mrVelY;
    /* 0x018 */ float mrVelZ;
    /* 0x01C */ float mrVelY2;
};

// declared in 46 file(s), e.g. gamesource\Game\CLessonLogic.cpp  // VARIANT 1 of 2
class B2SparksTag {  // size 0x000
public:
};

// declared in 1 file(s), e.g. gamesource\Render\CSparks.cpp  // VARIANT 2 of 2
class B2SparksTag {  // size 0x090
public:
    /* 0x000 */ float marTimes[4];
    /* 0x010 */ B2SparkPosVelTag maPosVel[4];
};

// declared in 1 file(s), e.g. gamesource\Sound\CMusic.cpp
class B2StreamInitParams {  // size 0x010
public:
    /* 0x000 */ int mnCore;
    /* 0x004 */ char manVoices[7];
    /* 0x00C */ int mnSPU2RamAddress;
};

// declared in 1 file(s), e.g. bamesh.c
struct binMesh {  // size 0x008
    /* 0x000 */ unsigned int numIndices;
    /* 0x004 */ int matIndex;
};

// declared in 1 file(s), e.g. bamesh.c
struct binMeshHeader {  // size 0x00C
    /* 0x000 */ unsigned int flags;
    /* 0x004 */ unsigned int numMeshes;
    /* 0x008 */ unsigned int totalIndicesInMesh;
};

// declared in 113 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class BoundingHull {  // size 0x310
public:
    /* 0x000 */ RwV4d maVertices[24];
    /* 0x180 */ RwV4d maPlanes[20];
    /* 0x2C0 */ HullEdge maEdges[32];
    /* 0x300 */ int mnNumVertices;
    /* 0x304 */ int mnNumEdges;
    /* 0x308 */ int mnNumPlanes;
    /* 0x30C */ unsigned int muPad;
};

// declared in 3 file(s), e.g. batextur.c
struct box {  // size 0x008
    /* 0x000 */ RwRGBA col0;
    /* 0x004 */ RwRGBA col1;
};

// declared in 3 file(s), e.g. batextur.c
struct BranchNode {  // size 0x040
    /* 0x000 */ OctNode *dir[16];
};

// declared in 38 file(s), e.g. gamesource\Hud\CHud.cpp
class C2dFont {  // size 0x119C
public:
    /* 0x000 */ C2dFontStreamData mData;
    /* 0x1190 */ RwRaster *mpRaster;
    /* 0x1194 */ float mrWidthScale;
    /* 0x1198 */ C2dFontChar *mpCharIndex;
};

// declared in 38 file(s), e.g. gamesource\Hud\CHud.cpp
class C2dFontChar {  // size 0x014
public:
    /* 0x000 */ RwTexCoords mTopLeftUV;
    /* 0x008 */ float mrWidth;
    /* 0x00C */ float mrKernLeft;
    /* 0x010 */ float mrKernRight;
};

// declared in 38 file(s), e.g. gamesource\Hud\CHud.cpp
class C2dFontStreamData {  // size 0x1190
public:
    /* 0x000 */ unsigned short mnRasterWidth;
    /* 0x002 */ unsigned short mnRasterHeight;
    /* 0x004 */ float mrHeight;
    /* 0x008 */ float mrBaseline;
    /* 0x00C */ float mrXHeight;
    /* 0x010 */ C2dFontChar maChars[224];
};

// declared in 72 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class C2dFrame : public CAnimatable {  // size 0x05C
public:
    // base CAnimatable at 0x000
    /* 0x00C */ B22dFrameAnimatablesTag mAnimated;
    /* 0x02C */ B22dFrameAnimatablesTag mBase;
    /* 0x04C */ GtLListTag mChildList;
    /* 0x054 */ C2dFrame *mpParentFrame;
    /* 0x058 */ C2dFrameHierarchy *mpHierarchy;
};

// declared in 72 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class C2dFrameHierarchy {  // size 0x03C
public:
    /* 0x000 */ C2dFrame *mpRootFrame;
    /* 0x004 */ GtLListPoolTag mFrameListPool;
    /* 0x020 */ GtLListPoolTag mAnimListPool;
};

// declared in 15 file(s), e.g. gamesource\Hud\CHudComponentBonus.cpp
class C2dFX : public CAnimatable {  // size 0x06C
public:
    // base CAnimatable at 0x000
    /* 0x00C */ B22dFXAnimatablesTag mAnimated;
    /* 0x02C */ B22dFXAnimatablesTag mBase;
    /* 0x04C */ void (*mfpApplySprite)(B22dFXAnimatablesTag *, B22dSpriteTag *, C2dFX **);
    /* 0x050 */ void (*mfpApplySpriteUntextured)(B22dFXAnimatablesTag *, B22dSpriteTag *, C2dFX **);
    /* 0x054 */ void (*mfpApplyTriStrip)(B22dFXAnimatablesTag *, B22dTriStripTag *, C2dFX **);
    /* 0x058 */ void (*mfpApplyTriStripUntextured)(B22dFXAnimatablesTag *, B22dTriStripTag *, C2dFX **);
    /* 0x05C */ C2dFrame *mpFrame;
    /* 0x060 */ C2dLayer *mpLayer;
    /* 0x064 */ int mnPriority;
    /* 0x068 */ int mnCull;
};

// declared in 72 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class C2dLayer {  // size 0x018
public:
    /* 0x000 */ unsigned int mnProperties;
    /* 0x004 */ GtLListTag mObjectList;
    /* 0x00C */ GtLListTag mFXList;
    /* 0x014 */ C2dFrame *mpClipFrame;
};

// declared in 48 file(s), e.g. gamesource\Hud\CHud.cpp
class C2dObject : public CAnimatable {  // size 0x0A0
public:
    // base CAnimatable at 0x000
    /* 0x010 */ B22dObjectAnimatablesTag mAnimated;
    /* 0x050 */ B22dObjectAnimatablesTag mBase;
    /* 0x090 */ C2dFrame *mpFrame;
    /* 0x094 */ C2dLayer *mpLayer;
    /* 0x098 */ void (*mpfRender)(B22dObjectAnimatablesTag *);

    // functions of this class with code in this build:
    // void C2dObject::MakeTextOutline(float lrPosX, float lrPosY, float lrHandleX, float lrHandleY, float lrHeight, RwRGBAReal *lpColour, C2dFont *lpFont, char *lpcString, float lrShadowOffsetX, float lrShadowOffsetY)  [0x001D0140]
    // void C2dObject::MakeTextItalicOutline(float lrPosX, float lrPosY, float lrHandleX, float lrHandleY, float lrHeight, RwRGBAReal *lpColour, C2dFont *lpFont, char *lpcString, float lrShadowOffsetX, float lrShadowOffsetY)  [0x001E8C60]
    // void C2dObject::MakeTextSoftDropShadow(float lrPosX, float lrPosY, float lrHandleX, float lrHandleY, float lrHeight, RwRGBAReal *lpColour, C2dFont *lpFont, char *lpcString, float lrShadowOffsetX, float lrShadowOffsetY)  [0x001FC9A0]
};

// declared in 71 file(s), e.g. gamesource\Game\CLessonLogic.cpp  // VARIANT 1 of 2
class C2dScene : public C2dFrameHierarchy {  // size 0x07C
public:
    // base C2dFrameHierarchy at 0x000
    /* 0x03C */ GtLListPoolTag mObjectListPool;
    /* 0x058 */ GtLListPoolTag mFXListPool;
    /* 0x074 */ C2dLayer *maLayers;
    /* 0x078 */ int mnNumLayers;
};

// declared in 18 file(s), e.g. gamesource\Game\CSettings.cpp  // VARIANT 2 of 2
class C2dScene {  // size 0x000
public:
};

// declared in 113 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CacheFriendlyTriangle {  // size 0x040
public:
    /* 0x000 */ RwV4d mVertices[3];
    /* 0x030 */ RwV3d mNormal;
    /* 0x03C */ int mTag;
};

// declared in 57 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CAIArbitrator {  // size 0x048
public:
    /* 0x000 */ RwV3d mDesiredPosition;
    /* 0x00C */ RwV3d mDesiredDirection;
    /* 0x018 */ int mbWantToDrift;
    /* 0x01C */ int mbWantToStartDrift;
    /* 0x020 */ CAICar *mpAICar;
    /* 0x024 */ CAICarPhysics *mpPhysics;
    /* 0x028 */ CLane *mpTargetLane;
    /* 0x02C */ unsigned int mnTargetSegmentIndex;
    /* 0x030 */ unsigned int mnCurrentSegmentIndex;
    /* 0x034 */ float mrTargetLeftFrac;
    /* 0x038 */ float mrCurrentLeftFrac;
    /* 0x03C */ float mrTargetFwdFrac;
    /* 0x040 */ float mrCurrentFwdFrac;
    /* 0x044 */ int mbUseFrac;

    // functions of this class with code in this build:
    // void CAIArbitrator::Update(int lbForceTarget)  [0x00216F20]
    // void CAIArbitrator::Reset()  [0x00217620]
    // int CAIArbitrator::Init()  [0x00217690]
};

// declared in 57 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CAIAvoidance {  // size 0xE98
public:
    /* 0x000 */ CAICar *mpAICar;
    /* 0x004 */ CAICarPhysics *mpPhysics;
    /* 0x008 */ RwV3d mDesiredPosition;
    /* 0x014 */ float mrCurrentSteerAngle;
    /* 0x018 */ RwV3d mDesiredDirection;
    /* 0x024 */ float mrDesiredSpeed;
    /* 0x028 */ float mrAggression;
    /* 0x02C */ float mrCarLength;
    /* 0x030 */ float mrLeftRisk;
    /* 0x034 */ float mrRightRisk;
    /* 0x038 */ float mrTotalLeftRisk;
    /* 0x03C */ float mrTotalRightRisk;
    /* 0x040 */ ELaneDirection meDecision;
    /* 0x044 */ int mnRightAvoidLane;
    /* 0x048 */ int mnLeftAvoidLane;
    /* 0x04C */ RwV3d mSplineFwd;
    /* 0x058 */ RwV3d mSplineFwd1;
    /* 0x064 */ RwV3d mSplineFwd2;
    /* 0x070 */ RwV3d mApexSplineFwd;
    /* 0x07C */ RwV3d mApexSplineFwd1;
    /* 0x088 */ RwV3d mApexSplineFwd2;
    /* 0x094 */ RwV3d mSplineLeft;
    /* 0x0A0 */ RwV3d mSplineLeft2;
    /* 0x0AC */ RwV3d mApexSplineLeft2;
    /* 0x0B8 */ RwV3d mSplinePos;
    /* 0x0C4 */ int mbSquareCornerSplineValid;
    /* 0x0C8 */ RwV3d mApexSplinePos;
    /* 0x0D4 */ RwV3d mSquareCornerSplinePos;
    /* 0x0E0 */ RwV3d mSquareCornerSplineFwd2;
    /* 0x0EC */ RwV3d mSquareCornerSplineLeft2;
    /* 0x0F8 */ RwV3d mAICarPos;
    /* 0x104 */ RwV3d mPos0;
    /* 0x110 */ RwV3d mPos1;
    /* 0x11C */ RwV3d mPos2;
    /* 0x128 */ RwV3d mPos3;
    /* 0x134 */ RwV3d mPos4;
    /* 0x140 */ RwV3d mPos5;
    /* 0x14C */ int mbRecordSquareCornerPos;
    /* 0x150 */ RwV3d mSquareCornerPos0;
    /* 0x15C */ RwV3d mSquareCornerPos1;
    /* 0x168 */ RwV3d mSquareCornerPos2;
    /* 0x174 */ RwV3d mSquareCornerPos3;
    /* 0x180 */ RwV3d mSquareCornerPos4;
    /* 0x18C */ RwV3d mSquareCornerPos5;
    /* 0x198 */ int mnTargetDesiredLane;
    /* 0x19C */ int mnUpdateTimer;
    /* 0x1A0 */ int mbInHalo;
    /* 0x1A4 */ int mnCarLeftLane;
    /* 0x1A8 */ int mnCarRightLane;
    /* 0x1AC */ float mrNearHaloSize;
    /* 0x1B0 */ RwV3d mNearLeftPos;
    /* 0x1BC */ float mrLeftCarHaloOffset;
    /* 0x1C0 */ RwV3d mNearRightPos;
    /* 0x1CC */ float mrRightCarHaloOffset;
    /* 0x1D0 */ float marLaneRiskTime[256];
    /* 0x5D0 */ eAIAvoidanceRiskType maeLaneRiskType[256];
    /* 0x9D0 */ float marLaneDistance[256];
    /* 0xDD0 */ int mnNumLanes;
    /* 0xDD4 */ float mrLaneSize;
    /* 0xDD8 */ float mrOOLaneSize;
    /* 0xDDC */ RwV2d mModelRadius;
    /* 0xDE4 */ int mCarWidthLanes;
    /* 0xDE8 */ RwV3d maOutOfRangeTrafficPositions[6];
    /* 0xE30 */ RwV3d maOutOfRangeTrafficDirections[6];
    /* 0xE78 */ CLane *mapOutOfRangeTrafficLanes[6];
    /* 0xE90 */ int mnNumOutOfRangeTrafficVehicles;
    /* 0xE94 */ float mrTrafDensity;

    // functions of this class with code in this build:
    // void CAIAvoidance::DrawDebugInfo()  [0x00217750]
    // void CAIAvoidance::CalculateSpline(int *lanIndices, CLane *lpLane, float *larFrac, RwV3d *lpFwd0, RwV3d *lpFwd1, RwV3d *lpFwd2, RwV3d *lpPos)  [0x002182F0]
    // void CAIAvoidance::CalculateSplineVectors()  [0x00218960]
    // void CAIAvoidance::GetLaneRisk(int lnLane, float *lprResultAvgRiskTime, float *lprResultAccRiskTime, float *lprResultMaxRiskTime) const  [0x00219A60]
    // eAIAvoidanceRiskType CAIAvoidance::CalcRiskOfPosition(CLane *lpTargetLane, int lnTargetSegIndex, RwV3d *lpTargetPosition, float *lprResultAvgRiskTime, float *lprResultAccRiskTime, float *lprResultMaxRiskTime) const  [0x00219CC0]
    // void CAIAvoidance::ClampToWithinDesiredLanes(RwV3d *lpInputVector, CLane *lpLane, unsigned short lunSegIndex16, RwV3d *lpResultVector) const  [0x00219EF0]
    // void CAIAvoidance::CalculateInterpolatedPosition(CLane *lpLane, int lnSegmentIndex, float lrOffset, RwV3d *lpResultVector) const  [0x0021A290]
    // void CAIAvoidance::GetSidePosition(CLane *lpLane, int lnSegmentIndex, ELaneDirection leSideWanted, RwV3d *lpResultVector) const  [0x0021A410]
    // void CAIAvoidance::Update(int lbForceUpdate)  [0x0021A590]
    // void CAIAvoidance::CheckNoGoZones()  [0x0021AE60]
    // void CAIAvoidance::FillInNoGoData(CLane *lpLane, int lnSegIndex, eAIAvoidanceRiskType leLaneRiskType, float lrTime, float lrDistance)  [0x0021B3C0]
    // int CAIAvoidance::GetSafestArea()  [0x0021B690]
    // void CAIAvoidance::GenerateTarget()  [0x0021B7F0]
    // void CAIAvoidance::CheckTrafficOutOfRange()  [0x0021C860]
    // void CAIAvoidance::AddCarToLanes(eAIAvoidanceRiskType leRiskType, float lrDistAhead, float lrRelDist, float lrTimeAhead, RwV3d *lpStartPos, RwV3d *lpEndPos, RwV3d *lpStartCarAt, RwV3d *lpEndCarAt, SRCBBox *lpBBox)  [0x0021C9F0]
    // void CAIAvoidance::CheckTraffic()  [0x0021DB40]
    // void CAIAvoidance::CheckRaceCar()  [0x0021E3C0]
    // void CAIAvoidance::Reset()  [0x0021EAB0]
    // int CAIAvoidance::Init()  [0x0021EF10]
};

// declared in 57 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CAICar : public CRaceCar {  // size 0x4C80
public:
    // base CRaceCar at 0x000
    /* 0x2E00 */ CAICarPhysics mPhysicsObject;
    /* 0x3C00 */ CAITarget mAITarget;
    /* 0x3CDC */ CAIArbitrator mAIArbitrator;
    /* 0x3D24 */ CAIAvoidance mAIAvoidance;
    /* 0x4BBC */ CAIDriver mAIDriver;
    /* 0x4C14 */ int mCarIndex;
    /* 0x4C18 */ RwV3d mDesiredDirection;
    /* 0x4C24 */ RwV3d mLastDesiredDirection;
    /* 0x4C30 */ int mbIsInPlayerRange;
    /* 0x4C34 */ int mbSpeedHasBeenHacked;
    /* 0x4C38 */ float mrSequenceChangeTime;
    /* 0x4C3C */ float mrResetSequenceStartTime;
    /* 0x4C40 */ int mbStartedResetSequence;
    /* 0x4C44 */ int mnResetImmmunity;
    /* 0x4C48 */ int mbPursuitCatchupOperating;
    /* 0x4C4C */ float mrPursuitCatchupAheadDistance;
    /* 0x4C50 */ float mrPursuitRamSpeedupDuration;
    /* 0x4C54 */ float mrPursuitSpeedDiffToSlowCarAhead;
    /* 0x4C58 */ float mrPursuitDistanceAheadToSlowSuspect;

    // functions of this class with code in this build:
    // void CAICar::UpdateResetSequence()  [0x0021F2C0]
    // RwMatrixTag *CAICar::GetMatrix()  [0x0021F450]
    // void CAICar::DrawDebug(EDebugModes CurrentMode)  [0x00220E00]
    // void CAICar::UpdateProfileVars()  [0x00221070]
    // void CAICar::ResetVarsFromProfile()  [0x002212C0]
    // void CAICar::RegisterValues()  [0x00221530]
    // void CAICar::UpdateOutOfRange()  [0x00221CE0]
    // void CAICar::SetAIInRange()  [0x00222DB0]
    // void CAICar::SetAIOutOfRange()  [0x00222E10]
    // void CAICar::Update()  [0x00222E50]
    // void CAICar::UpdateAttributes()  [0x00223200]
    // int CAICar::Shutdown()  [0x00223B90]
    // int CAICar::ResetAfterCrash(int lnNodesAhead)  [0x00223BD0]
    // int CAICar::Reset(RwV3d *StartPos, RwV3d *StartDir)  [0x00223E30]
    // int CAICar::Setup(int lnIndex, int lbIsFrontEnd)  [0x00223FB0]
    // void CAICar::Init()  [0x00224040]
};

// declared in 57 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CAICarPhysics : public CRaceCarPhysics {  // size 0xE00
public:
    // base CRaceCarPhysics at 0x000
    /* 0xDC0 */ CAICar *mpAICar;
    /* 0xDC4 */ float mChangeUpAngularVel;
    /* 0xDC8 */ float mChangeDownAngularVel;
    /* 0xDCC */ float mMaxDecell;
    /* 0xDD0 */ float mMaxRealSteerAngle;
    /* 0xDD4 */ float mMaxSteerAngleLeft;
    /* 0xDD8 */ float mMaxSteerAngleRight;
    /* 0xDDC */ float mDebugVar1;
    /* 0xDE0 */ float mDebugAngle;
    /* 0xDE4 */ float mDebugDesSpeed;
    /* 0xDE8 */ RwV3d mDebugPosition;
};

// declared in 1 file(s), e.g. gamesource\Race\CGameData.cpp
class CAICheckPoint : public CTrigger {  // size 0x018
public:
    // base CTrigger at 0x000
};

// declared in 57 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CAIDriver {  // size 0x058
public:
    /* 0x000 */ CAICar *mpAICar;
    /* 0x004 */ CAICarPhysics *mpPhysics;
    /* 0x008 */ float mrCurrentSteerAngle;
    /* 0x00C */ RwV3d mDesiredPosition;
    /* 0x018 */ float mrDesiredSpeed;
    /* 0x01C */ RwV3d mDesiredDirection;
    /* 0x028 */ float mrPrevSteerAngle;
    /* 0x02C */ RwV3d mDesiredPositionDirection;
    /* 0x038 */ int mbBoostStart;
    /* 0x03C */ int mbWantToDriftFacingLeft;
    /* 0x040 */ int mbWantToDriftFacingRight;
    /* 0x044 */ int mbForceDrift;
    /* 0x048 */ int mbDriftOverride;
    /* 0x04C */ int mbIgnoreAvoidanceSpeed;
    /* 0x050 */ float mrActualMaxSpeed;
    /* 0x054 */ int mbWantToBoost;

    // functions of this class with code in this build:
    // void CAIDriver::DrawDebugInfo()  [0x00224080]
    // void CAIDriver::CalculateDesiredSpeed()  [0x002246B0]
    // void CAIDriver::CalculateSteerAngle()  [0x002248B0]
    // void CAIDriver::CheckForDrift()  [0x00224CA0]
    // void CAIDriver::Update()  [0x00224F10]
    // void CAIDriver::Reset()  [0x002251F0]
    // int CAIDriver::Init()  [0x002253E0]
};

// declared in 3 file(s), e.g. gamesource\Race\CAICar.cpp
class CAIProfile {  // size 0x01C
public:
    /* 0x000 */ float mrDifficulty;
    /* 0x004 */ float mrAggression;
    /* 0x008 */ float mrAltRouteUsage;
    /* 0x00C */ float mrDriftUsage;
    /* 0x010 */ float mrOncomingUsage;
    /* 0x014 */ float mrPursuitDifficulty;
    /* 0x018 */ float mrDesiredDirectionScaleFactor;
};

// declared in 57 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CAITarget {  // size 0x0DC
public:
    /* 0x000 */ RwV3d mTargetPosition;
    /* 0x00C */ float mrDesiredSpeed;
    /* 0x010 */ RwV3d mTargetDirection;
    /* 0x01C */ int mbWantToDrift;
    /* 0x020 */ int mbWantToStartDrift;
    /* 0x024 */ int mbWillWantToDrift;
    /* 0x028 */ CLane *mpLane;
    /* 0x02C */ int mnCurrentSegmentIndex;
    /* 0x030 */ int mnTargetSegmentIndex;
    /* 0x034 */ int mnCurrentSector;
    /* 0x038 */ float mrEndFrac;
    /* 0x03C */ float mrCarWidth;
    /* 0x040 */ EAITargetTurnType meCornerDirection;
    /* 0x044 */ EAITargetPositionWithinCorner mePositionWithinCorner;
    /* 0x048 */ EAITargetCornerState meCornerState;
    /* 0x04C */ int mbOncomingIsOK;
    /* 0x050 */ int mbSoftNoGoIsOK;
    /* 0x054 */ int mbDetourIsOK;
    /* 0x058 */ int mbWillCrossSoftNoGo;
    /* 0x05C */ int mbWillCrossOncoming;
    /* 0x060 */ int mbWillCrossDetour;
    /* 0x064 */ float mrTimeBeforeTurnOnOncoming;
    /* 0x068 */ float mrTimeBeforeTurnOffOncoming;
    /* 0x06C */ float mrMaxDriftRacingLineRadius;
    /* 0x070 */ short mnStartLaneIndex;
    /* 0x072 */ short mnStartSegIndex;
    /* 0x074 */ ELaneDirection meDirectionToStartLane;
    /* 0x078 */ short mnApexLaneIndex;
    /* 0x07A */ short mnApexSegIndex;
    /* 0x07C */ ELaneDirection meDirectionToApexLane;
    /* 0x080 */ short mnEndLaneIndex;
    /* 0x082 */ short mnEndSegIndex;
    /* 0x084 */ ELaneDirection meDirectionToEndLane;
    /* 0x088 */ int mbSquareCorner;
    /* 0x08C */ CAICar *mpAICar;
    /* 0x090 */ CAICarPhysics *mpPhysics;
    /* 0x094 */ int mnTurnStartSegmentIndex;
    /* 0x098 */ int mnTurnApexSegmentIndex;
    /* 0x09C */ int mnTurnEndSegmentIndex;
    /* 0x0A0 */ float mrCornerRacingLineRadius;
    /* 0x0A4 */ float mrCornerRadius;
    /* 0x0A8 */ float mrCornerAngle;
    /* 0x0AC */ RwV3d mStartCornerTargetPosition;
    /* 0x0B8 */ RwV3d mApexCornerTargetPosition;
    /* 0x0C4 */ RwV3d mEndCornerTargetPosition;
    /* 0x0D0 */ int mbFirstUpdate;
    /* 0x0D4 */ int mnOrigTurnStartIndex;
    /* 0x0D8 */ int mnOrigTurnEndIndex;

    // functions of this class with code in this build:
    // void CAITarget::DrawDebugInfo()  [0x00225540]
    // void CAITarget::TestForDrift()  [0x00225C10]
    // int CAITarget::LanesAreSideBySide(CLane *lpLaneA, CLane *lpLaneB, int lnStartIndexA, int lnNumSegsToCheck) const  [0x00225CB0]
    // float CAITarget::GetWidthOfDesirableLanes(CLane *lpLane, int lnCurrentSegmentIndex, int lnSegmentIndex) const  [0x00225E60]
    // int CAITarget::LaneIsUndesirable(unsigned short lunLaneIndex16, int lnStartSegmentIndex, int lnEndSegmentIndex) const  [0x002261B0]
    // int CAITarget::LaneIsUndesirable(CLane *lpLane, int lnStartSegmentIndex, int lnEndSegmentIndex) const  [0x00226270]
    // float CAITarget::GetFwdFrac(CLane *lpLane, int lnCurrentSegmentIndex, RwV3d *lpPosition) const  [0x002264B0]
    // float CAITarget::GetCurrentFwdFrac() const  [0x00226610]
    // float CAITarget::GetLeftFrac(CLane *lpLane, int lnCurrentSegmentIndex, RwV3d *lpPosition, float lrOffset) const  [0x00226710]
    // float CAITarget::GetCurrentLeftFrac() const  [0x00226850]
    // void CAITarget::CalculateFractionTargetPosition(int lnSegmentIndex, float lrOffset, RwV3d *lpResultVector) const  [0x002269B0]
    // void CAITarget::CalculateEdgePosition(int lnSegmentIndex, int lnCurrentSegmentIndex, ELaneDirection leSideWanted, RwV3d *lpResultVector, short *lpnResultLaneIndex16, short *lpnResultSegIndex16)  [0x00226B00]
    // void CAITarget::CalculateNearEdgePosition(int lnSegmentIndex, int lnCurrentSegmentIndex, ELaneDirection leSideWanted, RwV3d *lpResultVector, short *lpnResultLaneIndex16, short *lpnResultSegIndex16)  [0x00227170]
    // int CAITarget::FindNextCorner(CLane *lpLane, int lnCurrentSegmentIndex, int *lpnTurnStartSegmentIndex, int *lpnTurnApexSegmentIndex, int *lpnTurnEndSegmentIndex, float *lprCornerRacingLineRadius, float *lprCornerRadius, float *lprCornerAngle, EAITargetTurnType *lpeCornerDirection, EAITargetCornerState *lpeCornerState, int *lpbWillWantToDrift, int *lpbSquareCorner)  [0x00227730]
    // void CAITarget::CalculateNextTargetPosition()  [0x00227EA0]
    // void CAITarget::FillInTargetPosition()  [0x002288A0]
    // int CAITarget::UpdateCurrentSegment()  [0x00228B50]
    // void CAITarget::Update()  [0x00229200]
    // void CAITarget::ResetCornerStatus()  [0x00229D60]
    // void CAITarget::Reset()  [0x00229E20]
    // int CAITarget::Init()  [0x00229F00]
};

// declared in 72 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CAnimatable {  // size 0x00C
public:
    /* 0x000 */ GtLListTag mAnimList;
    /* 0x008 */ int mnDeletionCount;
};

// declared in 3 file(s), e.g. gamesource\Race\CRaceCar.cpp
class CarSetupDataTag {  // size 0x080
public:
    /* 0x000 */ RwMatrixTag mPass2Matrix;
    /* 0x040 */ RwV4d mSpecularVectorAndPower;
    /* 0x050 */ RwV4d mDeformationSphere;
    /* 0x060 */ RwRaster *mpRaster;
    /* 0x064 */ void *mpVUCode;
    /* 0x068 */ unsigned int mxRenderedBits;
    /* 0x06C */ unsigned int mxIlluminatedBits;
    /* 0x070 */ int mbCulled;
    /* 0x074 */ RwRaster *mpRaster2;
    /* 0x078 */ float mrEnvMapIntensity;
    /* 0x07C */ RwMatrixTag *mpLTMMatrix;
};

// declared in 2 file(s), e.g. gamesource\Race\CRaceCar.cpp
class CarShadowDataTag {  // size 0x020
public:
    /* 0x000 */ RwV4d mDeformationSphere;
    /* 0x010 */ RwMatrixTag *mpLTMMatrix;
    /* 0x014 */ void *mpVUCode;
    /* 0x018 */ unsigned int mShadowColour;
};

// declared in 7 file(s), e.g. gamesource\Race\CGameData.cpp
class CAsyncLoadManager {  // size 0x518
public:
    /* 0x000 */ PendingFileRequestTag maRequests[16];
    /* 0x500 */ CGTFile *mpCurrentStream;
    /* 0x504 */ int mbAbortInProgress;
    /* 0x508 */ int mbPendingRead;
    /* 0x50C */ unsigned int munHead;
    /* 0x510 */ unsigned int munTail;
    /* 0x514 */ unsigned int munCurrentId;
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentResultsTable.cpp
class CB22dObjectCustomDataNText : public B22dObjectCustomDataTextTag {  // size 0x018
public:
    // base B22dObjectCustomDataTextTag at 0x000
    /* 0x014 */ unsigned int munNumChars;
};

// declared in 69 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class CBlobbyShadowManager {  // size 0x1810
public:
    /* 0x000 */ RwRaster *mpBlobbyShadowRaster;
    /* 0x004 */ int mnNumShadows;
    /* 0x010 */ B2BlobbyShadow maBlobbyShadows[128];

    // functions of this class with code in this build:
    // void CBlobbyShadowManager::Render(int lnWorldIndex)  [0x0022A420]
    // int CBlobbyShadowManager::AddShadow(RwV3d *lpPosition, RwV3d *lpAt, RwV3d *lpRight, float lrAtSize, float lrRightSize)  [0x0022AB00]
    // int CBlobbyShadowManager::Reset()  [0x0022AC90]
    // void CBlobbyShadowManager::Shutdown()  [0x0022ACA0]
    // int CBlobbyShadowManager::Setup()  [0x0022ACB0]
    // void CBlobbyShadowManager::Init()  [0x0022AD00]
};

// declared in 87 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CBurn {  // size 0x02C
public:
    /* 0x000 */ float mrBurnLevel;
    /* 0x004 */ float mrBurnoutBonus;
    /* 0x008 */ int mbBurnoutPotential;
    /* 0x00C */ int mbUsingBurn;
    /* 0x010 */ float mrTimeToBurn;
    /* 0x014 */ unsigned int munNumberOfBurnouts;
    /* 0x018 */ float mrLastBurnoutTime;
    /* 0x01C */ int mnCurrentBurnoutsInChain;
    /* 0x020 */ int mnLastBurnoutsInChain;
    /* 0x024 */ int mnLongestBurnoutChain;
    /* 0x028 */ int mbInfiniteBurn;

    // functions of this class with code in this build:
    // void CBurn::NotUsingBurn()  [0x0022AD10]
    // void CBurn::UseBurn()  [0x0022AD50]
    // void CBurn::Update(CRaceCar *pRaceCar)  [0x0022ADB0]
    // void CBurn::AddBurn(float lrPoints)  [0x0022AF90]
    // void CBurn::Reset()  [0x0022B000]
    // void CBurn::Destroy()  [0x0022B060]
    // void CBurn::Init()  [0x0022B070]
};

// declared in 92 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CCamera {  // size 0x3F0
public:
    /* 0x000 */ RwCamera *mpRwCamera;
    /* 0x004 */ float mrAspectRatio;
    /* 0x008 */ CFrameBufferEffects mFrameBufferEffects;
    /* 0x020 */ int mWidth;
    /* 0x024 */ int mHeight;
    /* 0x030 */ CScreenFade mScreenFade;
    /* 0x150 */ int mbCrashReplay;
    /* 0x154 */ float mrReplayChangeCount;
    /* 0x158 */ ReplayCamera *mpCurrentReplayCamera;
    /* 0x15C */ ReplayCamera *mpStartCamera;
    /* 0x160 */ int mbReplaySwitchZone;
    /* 0x164 */ ReplayCamera *mpStartZone;
    /* 0x168 */ int mnStackDepth;
    /* 0x16C */ CCameraData maStackData[2];
    /* 0x2E4 */ int mbSwitched;
    /* 0x2F0 */ CRandom mRandom;
    /* 0x3E0 */ ECameraMode meLastMode;
    /* 0x3E4 */ CCollidingBody *mpOutOfViewBody;
    /* 0x3E8 */ float mrNextSwitchCamera;
};

// declared in 92 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CCameraData {  // size 0x0BC
public:
    /* 0x000 */ ECameraMode meMode;
    /* 0x004 */ RwMatrixTag *mpMatrix;
    /* 0x008 */ float mrFocalLength;
    /* 0x00C */ float mrNearClipDistance;
    /* 0x010 */ float mrFOV;
    /* 0x014 */ float marData[8];
    /* 0x034 */ int manIData[4];
    /* 0x044 */ RwV3d maVectors[10];
};

// declared in 4 file(s), e.g. gamesource\Menu\CMenuPageDrivingLessonSummary.cpp
class CCameraSpline {  // size 0x038
public:
    /* 0x000 */ RwV3d mvSplineP0;
    /* 0x00C */ RwV3d mvSplineP1;
    /* 0x018 */ RwV3d mvSplineP2;
    /* 0x024 */ RwV3d mvSplineP3;
    /* 0x030 */ float mrLength;
    /* 0x034 */ CRandom *mpRandom;
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CCarData {  // size 0x090
public:
    /* 0x000 */ ECarID meID;
    /* 0x004 */ char *mpcName;
    /* 0x008 */ unsigned char mnSpeed;
    /* 0x009 */ unsigned char mnAcceleration;
    /* 0x00A */ unsigned char mnHandling;
    /* 0x00B */ unsigned char mnNumColours;
    /* 0x00C */ unsigned char mnPlayerColour[4];
    /* 0x010 */ unsigned short mnPad;
    /* 0x012 */ RwRGBA maColours[29];
    /* 0x088 */ CPlayerCar *mpRenderableCar;
    /* 0x08C */ int mnFrameLock;
};

// declared in 72 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CChampionshipProgression {  // size 0xE58
public:
    /* 0x000 */ EStageID meCurrentStage;
    /* 0x004 */ CGrandPrixTable maCurrentGrandPrixTables[22];
    /* 0xD14 */ int mabCarsLocked[22];
    /* 0xD6C */ int mabTracksLocked[30];
    /* 0xDE4 */ int mabStagesLocked[22];
    /* 0xE3C */ int mabCheatsLocked[2];
    /* 0xE44 */ int mbPursuitLocked;
    /* 0xE48 */ int mbCustomSeriesLocked;
    /* 0xE4C */ ECredits meAvailableCredits;
    /* 0xE50 */ int man2PlayerPoints[2];
};

// declared in 6 file(s), e.g. gamesource\Menu\CMenuGfxComponentGrandPrixSummary.cpp
class CChampionshipReward {  // size 0x00C
public:
    /* 0x000 */ ERewardType meType;
    /* 0x004 */ int mData;
    /* 0x008 */ ERewardThreshold meThreshold;
};

// declared in 6 file(s), e.g. gamesource\Menu\CMenuGfxComponentGrandPrixSummary.cpp
class CChampionshipStage {  // size 0x09C
public:
    /* 0x000 */ EStageType meType;
    /* 0x004 */ int mnNumTracks;
    /* 0x008 */ ETrackID maeTrackIDs[7];
    /* 0x024 */ ECarID maeCarIDs[3];
    /* 0x030 */ int mnNumRewards;
    /* 0x034 */ CChampionshipReward maRewards[8];
    /* 0x094 */ EStageID mNextStage;
    /* 0x098 */ int mnTypeIndex;
};

// declared in 2 file(s), e.g. gamesource\Menu\CMenuGfxComponentPanel.cpp
class CChampionshipStats {  // size 0x018
public:
    /* 0x000 */ int mnNumMedalsGold;
    /* 0x004 */ int mnNumMedalsSilver;
    /* 0x008 */ int mnNumMedalsBronze;
    /* 0x00C */ int mnNumTrophies;
    /* 0x010 */ int mnRacesCompleted;
    /* 0x014 */ int mnNumRaces;
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuResultsScreens.cpp
class CChampionshipUnlockedStats {  // size 0x01C
public:
    /* 0x000 */ int mnNumLockedRewards;
    /* 0x004 */ int mnNumUnlockedCars;
    /* 0x008 */ int mnNumUnlockedCheats;
    /* 0x00C */ int mnNumUnlockedGameModes;
    /* 0x010 */ int mnNumUnlockedStages;
    /* 0x014 */ int mnNumUnlockedTracks;
    /* 0x018 */ int mnTotalNewUnlocked;
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageChampionshipSelect.cpp
class CChampSelectStageData {  // size 0x010
public:
    /* 0x000 */ EStageID meStageID;
    /* 0x004 */ EStringID meStageStringID;
    /* 0x008 */ EStringID meStageBriefStringID;
    /* 0x00C */ RwRGBAReal *mCarouselIconColour;
};

// declared in 3 file(s), e.g. gamesource\Race\CAICar.cpp
class CChaseLogic : public CRaceLogic {  // size 0x02C
public:
    // base CRaceLogic at 0x000
    /* 0x004 */ float mrLastRamTime;
    /* 0x008 */ float mrCarsStoppedTime;
    /* 0x00C */ int mbCarsStopped;
    /* 0x010 */ int mbPoliceHitCrashingSuspect;
    /* 0x014 */ float mrLastSuspectHealth;
    /* 0x018 */ float mrTakeOffSuspectHealth;
    /* 0x01C */ float mrSuspectFatalCollisionTime;
    /* 0x020 */ float mrTimeSuspectLostHealthBehind;
    /* 0x024 */ int mbSuspectIsBehindPolice;
    /* 0x028 */ EChaseState meCurrentState;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class CCheckPoint : public CTriggerGroup {  // size 0x01C
public:
    // base CTriggerGroup at 0x000

    // functions of this class with code in this build:
    // int CCheckPoint::TestNoRadius(CRaceCar *lpRaceCar, int lnPrevNode, int *lpnAddTime)  [0x0022B0D0]
    // int CCheckPoint::Test(CRaceCar *lpRaceCar, int *lpnAddTime)  [0x0022B4E0]
};

// declared in 113 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CCollidingBody {  // size 0x5A0
public:
    /* 0x000 */ RwMatrixTag *mpMatrix;
    /* 0x010 */ RwMatrixTag mOwnedMatrix;
    /* 0x050 */ RwV3d mLinearVelocity;
    /* 0x05C */ float mrPad1;
    /* 0x060 */ RwV3d mVelocityDir;
    /* 0x06C */ float mrPad2;
    /* 0x070 */ RwV3d mTotalImpulse;
    /* 0x07C */ float mrPad3;
    /* 0x080 */ RwV3d mTotalImpulseAngular;
    /* 0x08C */ float mrPad4;
    /* 0x090 */ RwV3d mDrawTranslation;
    /* 0x09C */ float mrPad5;
    /* 0x0A0 */ RwV3d mTotalForce;
    /* 0x0AC */ float mrPad6;
    /* 0x0B0 */ RwV3d mTotalTorque;
    /* 0x0BC */ float mrPad7;
    /* 0x0C0 */ RwV3d mAngularVelocity;
    /* 0x0CC */ float mrPad8;
    /* 0x0D0 */ RwV3d mAngularMomentum;
    /* 0x0DC */ float mrPad9;
    /* 0x0E0 */ RwV3d mPreviousPosition;
    /* 0x0EC */ float mrPad10;
    /* 0x0F0 */ CMatrix3 mInverseInertiaTensorLocal;
    /* 0x120 */ float mrMass;
    /* 0x124 */ float mrLinearSpeed;
    /* 0x130 */ RwMatrixTag mInverseMatrix;
    /* 0x170 */ CMatrix3 mInverseInertiaTensorWorld;
    /* 0x1A0 */ int mbCrashing;
    /* 0x1A4 */ RwSphere mDeformationSphere;
    /* 0x1B4 */ float mrTargetDeformation;
    /* 0x1B8 */ int mnCurrentUnit;
    /* 0x1BC */ int mbWorldCollision;
    /* 0x1C0 */ int mbWorldImpulse;
    /* 0x1C4 */ int mnCollisionID;
    /* 0x1C8 */ float mrWorldLineHeight;
    /* 0x1CC */ float mrWorldCollTriHeight;
    /* 0x1D0 */ int mnCollisionWorldIndex;
    /* 0x1D4 */ ECollisionTag meLastWorldCollisionSurface;
    /* 0x1D8 */ RwV3d mLastWorldCollisionNormal;
    /* 0x1E4 */ RwV3d mLastWorldCollisionPoint;
    /* 0x1F0 */ RwV3d mLastBodyCollisionPoint;
    /* 0x1FC */ RwV3d mLastBodyCollisionNormal;
    /* 0x208 */ int mbBodyCollision;
    /* 0x20C */ float mrCoeffOfRestitution;
    /* 0x210 */ float mrCoeffOfFriction;
    /* 0x214 */ ECollidingBodyType mType;
    /* 0x218 */ CCollidingBodyWorldTriangleData *mpCollisionCache;
    /* 0x21C */ void *mpHostObject;
    /* 0x220 */ EBoundingVolume meBoundingVolume;
    /* 0x224 */ RwSphere mBoundingSphere;
    /* 0x240 */ SRCBBox mBoundingBox;
    /* 0x260 */ BoundingHull mBoundingHull;
    /* 0x570 */ int mbConstrainedMotion;
    /* 0x574 */ RwV3d mConstrainingNormal;
    /* 0x580 */ RwV3d mTotalTranslation;
    /* 0x58C */ float mrImpulseMagnitude;
    /* 0x590 */ RwV3d mImpulse;
};

// declared in 113 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CCollidingBodyWorldTriangleData {  // size 0x1040
public:
    /* 0x000 */ CacheFriendlyTriangle mTriangles[64];
    /* 0x1000 */ int mnNumTriangles;
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CCollidingTrafficPhysics : public CVehiclePhysics {  // size 0xD00
public:
    // base CVehiclePhysics at 0x000
    /* 0xAA0 */ CTrafficVehicle *mpTrafficVehicle;
    /* 0xAB0 */ RwMatrixTag maFlyingMatrices[3];
    /* 0xB70 */ int mbNotInPileUp;
    /* 0xB80 */ RwMatrixTag maWheelMatrices[6];
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentResultsTable.cpp
class CComponentTable {  // size 0x31C
public:
    /* 0x000 */ CMenuComponentResultsTable *mpTable;
    /* 0x004 */ C2dObject *mapObjects[128];
    /* 0x204 */ C2dFrame *mpRootFrame;
    /* 0x208 */ float mrAnimTime;
    /* 0x20C */ int mnBaseLayer;
    /* 0x210 */ CMenuResultsTableColumn *mpCountUpColumn;
    /* 0x214 */ float mrCountTime;
    /* 0x218 */ char macCountUpStrings[4][12];
    /* 0x248 */ char macCountDownStrings[4][12];
    /* 0x278 */ CSortData maSortData[4];
    /* 0x308 */ float marSortYPositions[4];
    /* 0x318 */ unsigned int munCurrentSortItem;

    // functions of this class with code in this build:
    // void CComponentTable::UpdateCounts(float lrTimestep)  [0x001D6360]
    // void CComponentTable::Reset()  [0x001D6930]
    // char *CComponentTable::MakeNTextOutline(C2dObject *lpObject, float lrPosX, float lrPosY, float lrHandleX, float lrHandleY, float lrWidth, float lrHeight, RwRGBAReal *lpColour, C2dFont *lpFont, char *lpcString, float lrShadowOffsetX, float lrShadowOffsetY)  [0x001D69C0]
    // void CComponentTable::_RenderNTextOutline(B22dObjectAnimatablesTag *lpData)  [0x001D6BB0]
    // void CComponentTable::DestroySortFrames()  [0x001D6E60]
    // void CComponentTable::UpdateSort(float krTimestep)  [0x001D6EE0]
    // void CComponentTable::SetupSort()  [0x001D7020]
    // void CComponentTable::SetData(CMenuComponentResultsTable *lpTable, int lnBaseLayer)  [0x001D7340]
};

// declared in 81 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CControllerMapping {  // size 0x090
public:
    /* 0x000 */ int mnPadIndex;
    /* 0x004 */ CPS2Pad mPad;
    /* 0x01C */ CPS2Wheel mWheel;
    /* 0x02C */ CMenuPad mMenuPad;
    /* 0x088 */ float mrLastStart;
    /* 0x08C */ float mrLastSelect;
};

// declared in 72 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CControllerSettings {  // size 0x010
public:
    /* 0x000 */ int mbVibrate;
    /* 0x004 */ int mbForceFeedback;
    /* 0x008 */ int mbAnalogButtons;
    /* 0x00C */ int mbDefaultViewInternal;

    // functions of this class with code in this build:
    // void CControllerSettings::SetDefaultViewInternal(int lbDefaultViewInternal)  [0x0020E7B0]
    // void CControllerSettings::SetAnalogButtons(int lbAnalogButtons)  [0x0020E7C0]
    // void CControllerSettings::SetForceFeedback(int lbForceFeedback)  [0x0020E7D0]
    // void CControllerSettings::SetVibrate(int lbVibrate)  [0x0020E7E0]
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CCoronaManager {  // size 0x12C
public:
    /* 0x000 */ CCoronas maCoronas[5];

    // functions of this class with code in this build:
    // void CCoronaManager::AddWorldCoronas(EInGameCoronaType leType, B2CoronaTag *lpaCoronas, int lnNumCoronas)  [0x002027B0]
    // void CCoronaManager::AddTrafficLights(CTrafficLight *lpTrafficLights, int lnNumTrafficLights)  [0x002028C0]
    // void CCoronaManager::AddTrafficVehicleCoronas(CTrafficVehicle *lpTraf)  [0x00202A60]
    // void CCoronaManager::AddRaceCarCoronas(CRaceCar *lpCar)  [0x00202FD0]
    // void CCoronaManager::Render(int lbPreWorld)  [0x00203790]
    // void CCoronaManager::EndUpdate()  [0x00203D50]
    // void CCoronaManager::BeginUpdate()  [0x00203DF0]
    // int CCoronaManager::Reset()  [0x00203E50]
    // int CCoronaManager::Setup()  [0x00203EB0]
    // void CCoronaManager::Init()  [0x00203F30]
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CCoronas {  // size 0x03C
public:
    /* 0x000 */ void *mpAlloc;
    /* 0x004 */ B2CoronaTag *mpaCoronasStatic;
    /* 0x008 */ B2CoronaTag *mapaCoronasDynamic[2];
    /* 0x010 */ void *mapRenderData[2];
    /* 0x018 */ B2CoronaTag *mpaCurrentCoronasDynamic;
    /* 0x01C */ RwRaster *mpRaster;
    /* 0x020 */ int mnCurrentBuffer;
    /* 0x024 */ int mnNumStaticCoronas;
    /* 0x028 */ int mnNextStaticCorona;
    /* 0x02C */ int mnNumDynamicCoronas;
    /* 0x030 */ int mnNextDynamicCorona;
    /* 0x034 */ int manLastDirtyCorona[2];

    // functions of this class with code in this build:
    // void CCoronas::Reset()  [0x00203FA0]
    // void CCoronas::Create(B2CoronaTypeParamsTag *lpParams)  [0x00204030]
};

// declared in 7 file(s), e.g. gamesource\Game\CCrashForCashData.cpp
class CCrashForCashData : public CCrashForCashDataSave {  // size 0x048
public:
    // base CCrashForCashDataSave at 0x000
    /* 0x03C */ ECrashMedal meLastMedal;
    /* 0x040 */ int mbNewGroupAvailable;
    /* 0x044 */ ECrashGroup meNewGroup;

    // functions of this class with code in this build:
    // float CCrashForCashData::GetMedalThreshold(ECrashZone leZoneID, ECrashMedalThreshold leThreshold)  [0x001F79B0]
    // ETrackID CCrashForCashData::GetCrashZoneTrack(ECrashZone leZoneID)  [0x001F79E0]
    // int CCrashForCashData::IsNewGroupAvailable()  [0x001F7A00]
    // int CCrashForCashData::IsGroupAvailable(ECrashGroup leGroupID)  [0x001F7A10]
    // ECrashMedal CCrashForCashData::GetLastMedal()  [0x001F7A70]
    // ECrashMedal CCrashForCashData::GetMedal(ECrashZone leZoneID)  [0x001F7A80]
    // ECrashMedal CCrashForCashData::CheckNewScore(ECrashZone leZoneID, float lrScore)  [0x001F7A90]
    // void CCrashForCashData::Initialise()  [0x001F7C10]
};

// declared in 7 file(s), e.g. gamesource\Game\CCrashForCashData.cpp
class CCrashForCashDataSave {  // size 0x03C
public:
    /* 0x000 */ ECrashMedal meZoneMedal[15];

    // functions of this class with code in this build:
    // void CCrashForCashDataSave::SetAllLocked(int lbLock)  [0x001F7CB0]
    // int CCrashForCashDataSave::GetNumMedals(ECrashMedal leMedal)  [0x001F7D00]
    // void CCrashForCashDataSave::InitSave()  [0x001F7D40]
};

// declared in 1 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CCrashForCashLogic : public CGameLogic {  // size 0x004
public:
    // base CGameLogic at 0x000

    // functions of this class with code in this build:
    // void CCrashForCashLogic::Destroy()  [0x001FB230]
    // void CCrashForCashLogic::Shutdown()  [0x001FB240]
    // void CCrashForCashLogic::GameOver()  [0x001FB250]
    // void CCrashForCashLogic::RaceFinished()  [0x001FB260]
    // void CCrashForCashLogic::Update(int lbOverrideReplaying)  [0x001FB2E0]
    // void CCrashForCashLogic::UpdateCameras(int lnPlayerIndex, int lnRaceCarIndex, int lbOverridePause)  [0x001FB2F0]
    // void CCrashForCashLogic::Reset()  [0x001FB300]
    // void CCrashForCashLogic::Setup()  [0x001FB310]
    // void CCrashForCashLogic::Init()  [0x001FB320]
};

// declared in 1 file(s), e.g. gamesource\Render\CCrashReplayCamera.cpp
class CCrashReplayCamera {  // size 0x114
public:
    /* 0x000 */ int mbCrashStarted;
    /* 0x004 */ int mbCarnageCam;
    /* 0x008 */ CCamera *mpParentCamera;
    /* 0x00C */ CCameraData *mpaStackData;
    /* 0x010 */ CRaceCar *mpCar;
    /* 0x014 */ ECrashCamType meType;
    /* 0x018 */ RwV3d mDesiredPosition;
    /* 0x024 */ RwV3d mDesiredAt;
    /* 0x030 */ RwV3d mOffset;
    /* 0x03C */ CInterestOMeter mInterestOMeter;
    /* 0x04C */ int mbCut;
    /* 0x050 */ int mnCameraID;
    /* 0x054 */ int mabCameraAvailable[32];
    /* 0x0D4 */ int mbTargetRaceCar;
    /* 0x0D8 */ CRaceCar *mpTargetCar;
    /* 0x0DC */ CTrafficVehicle *mpTargetTraffic;
    /* 0x0E0 */ int mbTrackingCamera;
    /* 0x0E4 */ float mrStartTime;
    /* 0x0E8 */ float mrCurrentTime;
    /* 0x0EC */ RwV3d mStartCollisionPos;
    /* 0x0F8 */ float mrStartNode;
    /* 0x0FC */ int mbUseLeftEdge;
    /* 0x100 */ int mbCarnageFinished;
    /* 0x104 */ float mrCameraDistance;
    /* 0x108 */ CCollidingBody *mpOldCollidingBody;
    /* 0x10C */ CCollidingBody *mpNewCollidingBody;
    /* 0x110 */ float mrPanToNewCar;

    // functions of this class with code in this build:
    // void CCrashReplayCamera::UpdateCarnageCam()  [0x00208E80]
    // void CCrashReplayCamera::UpdateInterestPan()  [0x0020A700]
    // void CCrashReplayCamera::UpdateInterestTrack()  [0x0020AA00]
    // void CCrashReplayCamera::UpdatePlayerPan()  [0x0020AD10]
    // void CCrashReplayCamera::UpdatePlayerTrack()  [0x0020B0B0]
    // void CCrashReplayCamera::UpdateCamera()  [0x0020B4D0]
    // void CCrashReplayCamera::SelectCameraFromList()  [0x0020B8C0]
    // void CCrashReplayCamera::UpdateCameraList()  [0x0020BBF0]
    // void CCrashReplayCamera::Update(CRaceCar *lpCar, CCamera *lpParentCamera, CCameraData *lpaStackData)  [0x0020BD00]
    // void CCrashReplayCamera::RegisterValues()  [0x0020BF50]
    // int CCrashReplayCamera::Init(CCamera *lpParentCamera, CCameraData *lpaStackData)  [0x0020C020]
};

// declared in 3 file(s), e.g. gamesource\Game\CTimeAttackLogic.cpp
class CCrashReplayTempStorage {  // size 0x11B0
public:
    /* 0x000 */ RwMatrixTag mStoredCarMatrix[4];
    /* 0x100 */ RwMatrixTag mStoredWheelMatrices[4][4];
    /* 0x500 */ RwV3d mStoredWheelPositions[4][4];
    /* 0x5C0 */ RwV3d mStoredWheelRoadPositions[4][4];
    /* 0x680 */ RwV3d mStoredOldWheelPos[4][4];
    /* 0x740 */ RwV3d mStoredOldWorldPos[4][4];
    /* 0x800 */ EWheelState meStoredWheelState[4][4];
    /* 0x840 */ EGlassState mStoredGlassState[4];
    /* 0x850 */ float mStoredPrevBrake[4];
    /* 0x860 */ RwSphere mStoredSphere[4];
    /* 0x8A0 */ int mStoredCurrentUnit[4];
    /* 0x8B0 */ RwV3d mStoredLinearVelocity[4];
    /* 0x8E0 */ float mStoredLinearSpeed[4];
    /* 0x8F0 */ RwV3d mStoredVelocityDir[4];
    /* 0x920 */ int mStoredBodyworkAttached[4][8];
    /* 0x9A0 */ RwMatrixTag mStoredFlyingMatrices[4][8];
    /* 0x11A0 */ unsigned int mStoredRenderedBits;
};

// declared in 3 file(s), e.g. gamesource\Physics\CVehiclePhysics.cpp
class CDebugManager {  // size 0x1694
public:
    /* 0x000 */ CControllerMapping *mpController;
    /* 0x004 */ EDebugModes mDebugMode;
    /* 0x008 */ int mbStepping;
    /* 0x00C */ int mbPlay;
    /* 0x010 */ int mbShowTraffic;
    /* 0x014 */ RwRaster *mpRaster[4];
    /* 0x024 */ int mnCameraCurrentCar;
    /* 0x028 */ int mProfileInformation[14];
    /* 0x060 */ char mDebugMessage[256];
    /* 0x160 */ int mMessageTime;
    /* 0x164 */ RwCamera *mpAboveCamera;
    /* 0x168 */ RwRaster *mpAboveRaster;
    /* 0x16C */ int mbWatchAICarsDrive;
    /* 0x170 */ CPUMonitor mCPUMonitor[64];
    /* 0x1570 */ int mnActiveCPUMonitors;
    /* 0x1574 */ int mnCurrentCPUMonitorPage;
    /* 0x1578 */ int mbTuningAI;
    /* 0x157C */ float *mprTuneValue;
    /* 0x1580 */ float mrTuneValue;
    /* 0x1584 */ float mrTuneDiff;
    /* 0x1588 */ float mrLastResultTime;
    /* 0x158C */ int mbFoundDirection;
    /* 0x1590 */ float mrPastValues[32];
    /* 0x1610 */ float mrPastTimes[32];
    /* 0x1690 */ int mnPastValuesIndex;
};

// declared in 127 file(s), e.g. gamesource\Game\CCrashForCashData.cpp
class CDefaultRecordsTable {  // size 0x008
public:
    /* 0x000 */ float mrBest;
    /* 0x004 */ float mrWorst;
};

// declared in 127 file(s), e.g. gamesource\Game\CCrashForCashData.cpp
class CDefaultTrackRecord {  // size 0x030
public:
    /* 0x000 */ float mrBestLapTime;
    /* 0x004 */ float mrWorstLapTime;
    /* 0x008 */ float mrBestTotalTime;
    /* 0x00C */ float mrWorstTotalTime;
    /* 0x010 */ int mnScore;
    /* 0x014 */ int mnCombo;
    /* 0x018 */ float mrAir;
    /* 0x01C */ float mrDrift;
    /* 0x020 */ float mrOnComing;
    /* 0x024 */ int mnBurnouts;
    /* 0x028 */ float mrCrash;
    /* 0x02C */ float mrCrashTotal;
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CDrivingControls {  // size 0x018
public:
    /* 0x000 */ unsigned int mxGearFlags;
    /* 0x004 */ float mrAcceleration;
    /* 0x008 */ float mrBraking;
    /* 0x00C */ float mrSteering;
    /* 0x010 */ float mrRawAcceleration;
    /* 0x014 */ float mrDriftScale;
};

// declared in 8 file(s), e.g. gamesource\Game\CDrivingLessonProgression.cpp
class CDrivingLesson {  // size 0x018
public:
    /* 0x000 */ float marMedalThresholds[3];
    /* 0x00C */ ELessonID meLessonID;
    /* 0x010 */ ETrackID meTrackID;
    /* 0x014 */ float mrInitialBurn;

    // functions of this class with code in this build:
    // ELessonObjective CDrivingLesson::GetLessonObjective() const  [0x001F3530]
};

// declared in 72 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CDrivingLessonProgression : public CDrivingLessonProgressionSave {  // size 0x034
public:
    // base CDrivingLessonProgressionSave at 0x000
    /* 0x020 */ ELessonID meCurrentLesson;
    /* 0x024 */ ELessonMedal meLastAttemptMedal;
    /* 0x028 */ float mrPlayerScore;
    /* 0x02C */ int mbPlayerCrashed;
    /* 0x030 */ int mbPlayerTimedOut;

    // functions of this class with code in this build:
    // void CDrivingLessonProgression::RegisterValues()  [0x001F2FB0]
    // void CDrivingLessonProgression::LessonFinished()  [0x001F3040]
    // void CDrivingLessonProgression::Init()  [0x001F3370]
    // ELessonMedal CDrivingLessonProgression::GetMedal(ELessonID leLessonID)  [0x001F3480]
    // void CDrivingLessonProgression::SetCurrentLesson(ELessonID leLessonID)  [0x001F3490]
    // float CDrivingLessonProgression::GetLastAttemptScore()  [0x001F34A0]
    // ELessonMedal CDrivingLessonProgression::GetLastAttemptMedal()  [0x001F34B0]
    // ELessonObjective CDrivingLessonProgression::GetCurrentLessonObjective()  [0x001F34C0]
    // ELessonID CDrivingLessonProgression::GetCurrentLessonID()  [0x001F34E0]
    // CDrivingLesson *CDrivingLessonProgression::GetCurrentLesson()  [0x001F34F0]
    // CDrivingLesson *CDrivingLessonProgression::GetLesson(ELessonID leLessonID)  [0x001F3510]
};

// declared in 72 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CDrivingLessonProgressionSave {  // size 0x020
public:
    /* 0x000 */ ELessonMedal maeMedalAchieved[6];
    /* 0x018 */ int mbAllPassed;
    /* 0x01C */ int mbAllGold;

    // functions of this class with code in this build:
    // void CDrivingLessonProgressionSave::InitSave()  [0x001F33A0]
    // void CDrivingLessonProgressionSave::SetAllLocked(int lbLock)  [0x001F33E0]
    // int CDrivingLessonProgressionSave::GetNumMedals(ELessonMedal leMedal)  [0x001F3440]
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CDrivingModelControlStuff {  // size 0x030
public:
    /* 0x000 */ float mPrevAccel;
    /* 0x004 */ float mPrevBrake;
    /* 0x008 */ float mPrevSteering;
    /* 0x00C */ float mTimeSinceLastAccel;
    /* 0x010 */ float mTimeCarHasBeenDrifting;
    /* 0x014 */ float mPrevDriftScale;
    /* 0x018 */ float mSteeringOverride;
    /* 0x01C */ float mOverSteerTime;
    /* 0x020 */ int mbBoosting;
    /* 0x024 */ float mTimeCarHasAir;
    /* 0x028 */ int mbPreviousAir;
    /* 0x02C */ int mbBoostStart;
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CEffectsManager {  // size 0x4400
public:
    /* 0x000 */ CTrailSystem mTrailSystem;
    /* 0x2C20 */ CSparks mSparks;
    /* 0x2D30 */ CCoronaManager maCoronaManager[2];
    /* 0x2F90 */ CParticleManager mParticleManager;
    /* 0x3B50 */ CSnow maSnow[2];
    /* 0x3F30 */ CRain maRain[2];
    /* 0x43F0 */ RwV3d mWind;
    /* 0x43FC */ int mnRenderPlayer;
};

// declared in 8 file(s), e.g. gamesource\Game\CTwoPlayerSSGameMode.cpp
class CForceFeedback {  // size 0x134
public:
    /* 0x000 */ float mCurrentSmallActuator;
    /* 0x004 */ float mCurrentLargeActuator;
    /* 0x008 */ float mCurrentRumbling;
    /* 0x00C */ float mCurrentSmallJoltTime;
    /* 0x010 */ float mCurrentLargeJoltTime;
    /* 0x014 */ float mPauseSmallActuator;
    /* 0x018 */ float mPauseLargeActuator;
    /* 0x01C */ float mPauseRumbling;
    /* 0x020 */ float mPauseSmallJoltTime;
    /* 0x024 */ float mPauseLargeJoltTime;
    /* 0x028 */ int mbUsingWheel;
    /* 0x02C */ int mbPaused;
    /* 0x030 */ GtPadLogitechWheelForceData mWheelSpringData;
    /* 0x070 */ GtPadLogitechWheelForceData mWheelRumbleData;
    /* 0x0B0 */ GtPadLogitechWheelForceData mWheelSmallJoltData;
    /* 0x0F0 */ GtPadLogitechWheelForceData mWheelLargeJoltData;
    /* 0x130 */ int mPadID;
};

// declared in 92 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CFrameBufferEffects {  // size 0x018
public:
    /* 0x000 */ int mbRenderBlur;
    /* 0x004 */ float mMaxBlur;
    /* 0x008 */ float mActualBlur;
    /* 0x00C */ int mHeight;
    /* 0x010 */ int mVStart;
    /* 0x014 */ int mVEnd;
};

// declared in 2 file(s), e.g. gamesource\Race\CAICar.cpp
class CFrontEnd : public CGameMode {  // size 0x04C
public:
    // base CGameMode at 0x000
    /* 0x03C */ ECarID meSelectedCar;
    /* 0x040 */ ETrackID meSelectedTrack;
    /* 0x044 */ EGameMode meSelectedGameMode;
    /* 0x048 */ int mnCurrentControl;
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CFrontEndCarBuffer {  // size 0x018
public:
    /* 0x000 */ int mnFrameCount;
    /* 0x004 */ CCarData *mpNextCarData;
    /* 0x008 */ CCarData *mapCarData[2];
    /* 0x010 */ SlotState maeStates[2];
};

// declared in 72 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CGame {  // size 0x4DD0
public:
    /* 0x000 */ EGameMode meCurrentGameMode;
    /* 0x004 */ CGameMode *mpCurrentGameMode;
    /* 0x008 */ CGameMode *mpLastGameMode;
    /* 0x00C */ CGameMode *mpPushGameMode;
    /* 0x010 */ CPlayer maPlayers[4];
    /* 0x070 */ CRecords mRecords;
    /* 0x3C34 */ CProfile mProfile;
    /* 0x3DB0 */ CSettings mSettings;
    /* 0x3DFC */ CChampionshipProgression mChampionshipProgression;
    /* 0x4C54 */ CDrivingLessonProgression mDrivingLessonProgression;
    /* 0x4C88 */ CTimer mTimer;
    /* 0x4CB0 */ CRandom mRandom;
    /* 0x4DA0 */ int mb50Hz;
    /* 0x4DA4 */ CText mText;
    /* 0x4DC4 */ int mApplicationInstance;
    /* 0x4DC8 */ void *mWindowHandle;
};

// declared in 68 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class CGameData {  // size 0x008
public:
    /* 0x000 */ int mbDataLoaded;
    /* 0x004 */ char *mpacBuffer;

    // functions of this class with code in this build:
    // int CGameData::Reset()  [0x0022B640]
    // int CGameData::Setup(EGameModeUniqueTypes leType, signed char lnVariant8, void *lpBuffer)  [0x0022C500]
};

// declared in 72 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CGameLogic {  // size 0x004
public:
};

// declared in 72 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CGameMode {  // size 0x03C
public:
    /* 0x000 */ CGameMode *mpNextMode;
    /* 0x004 */ int mbPaused;
    /* 0x008 */ int mbRequestPause;
    /* 0x00C */ int mbRequestRestart;
    /* 0x010 */ int mbRestartReplay;
    /* 0x014 */ CGameLogic *mpLogic;
    /* 0x018 */ int mbLoaded;
    /* 0x01C */ int mbFinishedFirstLoad;
    /* 0x020 */ EControllerRemoved meControllerRemoved;
    /* 0x024 */ int mabWheelConnected[4];
    /* 0x034 */ int mnNumFramesLeftTilProperlyDrawn;
};

// declared in 30 file(s), e.g. gamesource\Hud\CHudComponentBonus.cpp
class CGameSound {  // size 0x0D0
public:
    /* 0x000 */ RwaWaveDict *m_Dictionaries[9];
    /* 0x024 */ int m_bInitialised;
    /* 0x028 */ RwaSPU2Output *m_Output;
    /* 0x02C */ RwaListener *m_Listener;
    /* 0x030 */ RwV3d m_PrevListenerPosition;
    /* 0x03C */ int m_PrevUpdateTime;
    /* 0x040 */ float m_SFXVolume;
    /* 0x044 */ float m_MusicVolume;
    /* 0x048 */ int m_Mode;
    /* 0x04C */ float m_PursuitGap;
    /* 0x050 */ CVoiceManager *m_VoiceManager;
    /* 0x054 */ CSoundFrontEnd *m_SoundFrontEnd;
    /* 0x058 */ cSoundCrash *m_SoundCrash;
    /* 0x05C */ CSoundValueDatabase *m_ValueDB;
    /* 0x060 */ CSoundTraffic *m_Traffic;
    /* 0x064 */ CHudSound *m_Hud;
    /* 0x068 */ int mabFileLoadCompletion[8];
    /* 0x088 */ int mnNumFileLoads;
    /* 0x08C */ int mnFileBufferOffset;
    /* 0x090 */ int manFileLoadOffsets[8];
    /* 0x0B0 */ int manFileLoadLengths[8];

    // functions of this class with code in this build:
    // void CGameSound::Impact(eCrashType impact_type, float Impulse, RwV3d *Pos, int MaterialType)  [0x001FCB70]
    // void CGameSound::DoScrape(float Impulse, RwV3d *Pos, int MaterialType, int WhichCar, float LinVel)  [0x001FCD60]
    // int CGameSound::FinishLoadRaceDictionaries()  [0x001FCE10]
    // RwaWaveDict *CGameSound::GetDictionary(EWaveDictionary dictionary_id)  [0x001FCF50]
    // void CGameSound::UnloadBank(RwaWaveDict *dictionary)  [0x001FCF60]
    // RwaWaveDict *CGameSound::FinishLoadBank(int lnBankID)  [0x001FCF80]
    // int CGameSound::QueueLoadBank(char *lpcFileName, int lbSearchFirst)  [0x001FD0A0]
    // int CGameSound::RWAInit()  [0x001FD210]
    // float CGameSound::GetPursuitGap()  [0x001FD320]
    // CSoundValueDatabase *CGameSound::GetValueDB()  [0x001FD330]
    // float CGameSound::GetListenerRolloffFactor()  [0x001FD340]
    // void CGameSound::GetListenerPosition(RwV3d *retval)  [0x001FD350]
    // void CGameSound::StopSound(CManagedVoice *voice)  [0x001FD370]
    // CManagedVoice *CGameSound::PlaySound(CPlaySoundParams *params)  [0x001FD390]
    // int CGameSound::ReserveSpuChannel(int reverb)  [0x001FD3A0]
    // void CGameSound::UpdateTraffic(int player, CTrafficSoundData *engines, CTrafficSoundData *horns, CTrafficSoundData *special, int num_engines, int num_horns, int num_special)  [0x001FD3B0]
    // void CGameSound::DestroyRaceCar(void *vehicle)  [0x001FD440]
    // void CGameSound::UpdateRaceCar(void *vehicle, CRaceCarPhysics *physics)  [0x001FD450]
    // int CGameSound::ResetRaceCar(void *vehicle)  [0x001FD4B0]
    // void *CGameSound::CreateRaceCar(ESoundCarType type, ECarID id, CRaceCar *racecar, char *buffer, int buffer_size)  [0x001FD4C0]
    // int CGameSound::SetListenerPosition(RwMatrixTag *matrix)  [0x001FD500]
    // float CGameSound::GetSFXVolume()  [0x001FD6D0]
    // float CGameSound::GetMusicVolume()  [0x001FD6E0]
    // void CGameSound::SetVolume(float sfx_level, float music_level)  [0x001FD6F0]
    // void CGameSound::Pause()  [0x001FD780]
    // void CGameSound::Update()  [0x001FD790]
    // void CGameSound::HUDEvent(eHudSFXEvent EventType, float data, float data2, int StereoFlip)  [0x001FD830]
    // void CGameSound::UIEvent(eFrontEndSFXEvent EventType, float data, int StereoFlip)  [0x001FDAA0]
    // void CGameSound::Frontend_Shutdown()  [0x001FDD60]
    // int CGameSound::Frontend_Setup()  [0x001FDDE0]
    // void CGameSound::Shutdown()  [0x001FE000]
    // int CGameSound::Reset()  [0x001FE090]
    // int CGameSound::Setup()  [0x001FE120]
    // int CGameSound::Init()  [0x001FE220]
    // void *CGameSound::CGameSound()  [0x001FE2C0]
};

// declared in 4 file(s), e.g. gamesource\Game\CTimeAttackLogic.cpp
class CGhostCar {  // size 0x9B0
public:
    /* 0x000 */ CGhostCarFrame *mpReplayGhostFrames;
    /* 0x004 */ int mnNumReplayGhostFrames;
    /* 0x008 */ CGhostCarFrame *mpGhostFrames;
    /* 0x00C */ int mnNumGhostFrames;
    /* 0x010 */ int mnCurrGhostFrame;
    /* 0x014 */ float mrCurrGhostInterp;
    /* 0x018 */ float mrCurrGhostTime;
    /* 0x01C */ CGhostCarFrame *mpPlayerFrames;
    /* 0x020 */ int mnNumPlayerFrames;
    /* 0x024 */ int mnCurrPlayerFrame;
    /* 0x028 */ int mnMaxPossibleFrames;
    /* 0x02C */ int mbPlayerCarWasFatal;
    /* 0x030 */ int mnLastLapsCompleted;
    /* 0x034 */ RwV3d mCarPrevFrameAt;
    /* 0x040 */ CGhostCarSpline mPositionInterpolate;
    /* 0x070 */ CGhostCarSpline mAtInterpolate;
    /* 0x0A0 */ CGhostCarSpline mBodyworkPosInterpolate[8];
    /* 0x220 */ CGhostCarSpline mBodyworkAtInterpolate[8];
    /* 0x3A0 */ CGhostCarSpline mWheelPosInterpolate[6];
    /* 0x4C0 */ CGhostCarSpline mWheelAtInterpolate[6];
    /* 0x5E0 */ RwV3d mGhostCarPosition;
    /* 0x5F0 */ CInterpolatedRaceCar mInterpRaceCar;

    // functions of this class with code in this build:
    // void CGhostCar::InterpolateCreate(CInterpolatedRaceCar *lpInterpData, float lrInterp)  [0x0022C690]
    // void CGhostCar::InterpolateUpdate()  [0x0022D760]
    // void CGhostCar::CreateRotation(RwMatrixTag *lpMatrix, float lrWheelAngle)  [0x0022EDC0]
    // void CGhostCar::Destroy()  [0x0022EF60]
    // void CGhostCar::Render()  [0x0022EF70]
    // void CGhostCar::Reset()  [0x0022F1B0]
    // void CGhostCar::AddCurrentRecordingToPlayBack()  [0x0022F230]
    // void CGhostCar::Update()  [0x0022F2E0]
    // int CGhostCar::Init()  [0x0022F750]
};

// declared in 5 file(s), e.g. gamesource\Game\CTimeAttackLogic.cpp
class CGhostCarFrame {  // size 0x130
public:
    /* 0x000 */ float mNextFrameRatio;
    /* 0x004 */ RwV3d m_mpPhysicsObject_mpFrame_Matrix_pos;
    /* 0x010 */ CSmallVec m_mpPhysicsObject_mpFrame_Matrix_at;
    /* 0x013 */ CSmallVec m_mpPhysicsObject_mpFrame_Matrix_up;
    /* 0x018 */ RwV3d m_mFlyingMatrices_pos[8];
    /* 0x078 */ CSmallVec m_mFlyingMatrices_at[8];
    /* 0x090 */ CSmallVec m_mFlyingMatrices_up[8];
    /* 0x0A8 */ RwV3d m_mWheelMatrices_pos[6];
    /* 0x0F0 */ CSmallVec m_mWheelMatrices_at[6];
    /* 0x102 */ CSmallVec m_mWheelMatrices_up[6];
    /* 0x114 */ float m_mWheelAngle[6];
    /* 0x12C */ unsigned char m_mpPhysicsObject_mCurrentUnit;
    /* 0x12D */ signed char m_mpPhysicsObject_mSteeringAngle;
    /* 0x12E */ signed char m_mpPhysicsObject_mControlStuff_mPrevBrake;
    /* 0x12F */ signed char mPad1;

    // functions of this class with code in this build:
    // void CGhostCarFrame::CreateFrame(CRaceCar *lpRaceCar)  [0x0022F810]
};

// declared in 4 file(s), e.g. gamesource\Game\CTimeAttackLogic.cpp
class CGhostCarSpline {  // size 0x030
public:
    /* 0x000 */ RwV3d mA;
    /* 0x00C */ RwV3d mB;
    /* 0x018 */ RwV3d mC;
    /* 0x024 */ RwV3d mD;
};

// declared in 73 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CGrandPrixTable {  // size 0x098
public:
    /* 0x000 */ CRaceResult maRaceResults[7];
    /* 0x070 */ int manTotalPoints[4];
    /* 0x080 */ signed char manPointsOrder[4];
    /* 0x084 */ int mnRacesRaced;
    /* 0x088 */ int mnChosenCar;
    /* 0x08C */ int mnChosenCarColour;
    /* 0x090 */ int mbChosenMT;
    /* 0x094 */ int mbCompleted;

    // functions of this class with code in this build:
    // void CGrandPrixTable::RaceFinished()  [0x001D1220]
    // void CGrandPrixTable::Setup()  [0x001D1420]
    // void CGrandPrixTable::Init()  [0x001D14B0]
};

// declared in 69 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class CGt2dMatrix {  // size 0x018
public:
    /* 0x000 */ RwV2d mUp;
    /* 0x008 */ RwV2d mRight;
    /* 0x010 */ RwV2d mPos;
};

// declared in 98 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CGTFile {  // size 0x028
public:
    /* 0x004 */ CGTFileSystem *mpFileSys;
    /* 0x008 */ long long mnFileLength;
    /* 0x010 */ long long mnFilePosition;
    /* 0x018 */ EFileStatus mnStatus;
    /* 0x01C */ EFileError mnError;
    /* 0x020 */ int mbAsynchronousFile;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\GTFileSystemPS2DVD.cpp
class CGTFileBufferPS2DVD {  // size 0x800
public:
    /* 0x000 */ char mBuffer[2048];
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\GTFileSystemPS2DVD.cpp
class CGTFilePS2DVD : public CGTFile {  // size 0x038
public:
    // base CGTFile at 0x000
    /* 0x028 */ int mnIOPFile;
    /* 0x02C */ int mnCompletionSemaphore;
    /* 0x030 */ int mnBufferOffset;
    /* 0x034 */ CGTFileBufferPS2DVD *mpBuffer;

    // functions of this class with code in this build:
    // int CGTFilePS2DVD::Abort()  [0x001FBB70]
    // EFileStatus CGTFilePS2DVD::Sync(int lbBlock)  [0x001FBC30]
    // long long CGTFilePS2DVD::SetPosition(long long lnOffset, EFileMoveMethod ePosition)  [0x001FBC90]
    // unsigned int CGTFilePS2DVD::Write()  [0x001FBE30]
    // unsigned int CGTFilePS2DVD::Read(void *pBuffer, unsigned int lnBytesToRead)  [0x001FBE40]
    // void CGTFilePS2DVD::Close()  [0x001FC1D0]
    // EFileSystemError CGTFilePS2DVD::Open(CGTFileSystem *pFileSystem, char *lpFilename, unsigned int nOpenFlags)  [0x001FC250]
    // EFileStatus CGTFilePS2DVD::GetStatus()  [0x001FC390]
};

// declared in 98 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CGTFileSystem {  // size 0x010
public:
    /* 0x004 */ EFileSystemStatus mnStatus;
    /* 0x008 */ EFileSystemError mnLastError;
    /* 0x00C */ unsigned int mnNumFiles;

    // functions of this class with code in this build:
    // int CGTFileSystem::FExist(char *name)  [0x001FB330]
    // int CGTFileSystem::FFlush()  [0x001FB380]
    // int CGTFileSystem::FSeek(void *fptr, long offset, int origin)  [0x001FB390]
    // int CGTFileSystem::FEof(void *fptr)  [0x001FB420]
    // int CGTFileSystem::FPuts()  [0x001FB440]
    // char *CGTFileSystem::FGets()  [0x001FB450]
    // unsigned int CGTFileSystem::FWrite(void *addr, unsigned int size, unsigned int count, void *fptr)  [0x001FB460]
    // unsigned int CGTFileSystem::FRead(void *addr, unsigned int size, unsigned int count, void *fptr)  [0x001FB4B0]
    // int CGTFileSystem::FClose(void *fptr)  [0x001FB500]
    // void *CGTFileSystem::FOpen(char *name, char *access)  [0x001FB530]
    // CGTFile *CGTFileSystem::Open(char *sFilename, unsigned int nOpenFlags)  [0x001FB5F0]
    // int CGTFileSystem::Init(unsigned int nMaxOpenFiles, char *sRWName)  [0x001FB6E0]
    // void CGTFileSystem::SetAsDefaultFilesystem()  [0x001FB7B0]
    // char *CGTFileSystem::BuildFileName(char *lpBuffer, int nBufferLength, char *lpDriveName, char *lpFilePath, char cSeparator)  [0x001FB7C0]
    // char *CGTFileSystem::GetFileNameFromDeviceName(char *spName)  [0x001FB8A0]
    // CGTFileSystem *CGTFileSystem::GetFileSystemFromFileName(char *spName)  [0x001FB8E0]
    // int CGTFileSystem::InstallToRenderWare()  [0x001FB9A0]
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\GTFileSystemPS2DVD.cpp
class CGTFileSystemPS2DVD : public CGTFileSystem {  // size 0x018
public:
    // base CGTFileSystem at 0x000
    /* 0x010 */ CGTFilePS2DVD *mpFileArray;
    /* 0x014 */ CGTFileBufferPS2DVD *mpBufferArray;

    // functions of this class with code in this build:
    // void CGTFileSystemPS2DVD::CmdErrorHandler(void *pCmdHeader, void *pData)  [0x001FBAC0]
    // void CGTFileSystemPS2DVD::CmdReadCompleteHandler(void *pCmdHeader, void *pData)  [0x001FBB20]
    // EFileSystemStatus CGTFileSystemPS2DVD::GetStatus()  [0x001FBB50]
    // int CGTFileSystemPS2DVD::FileExists()  [0x001FBB60]
    // CGTFile *CGTFileSystemPS2DVD::GetFileObject(unsigned int nIndex)  [0x001FC3A0]
    // int CGTFileSystemPS2DVD::Init(unsigned int nMaxOpenFiles, CGTFilePS2DVD *pFileArray, CGTFileBufferPS2DVD *pBufferArray, char *sRWName, GtsConfigTag *lpConfig)  [0x001FC3C0]
};

// declared in 57 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CGTMpegDecoder {  // size 0x309BC0
public:
    /* 0x000 */ sceIpuRGB32 maDecodeBuffer[1280];
    /* 0x140000 */ u_long128 maStreamBuffer[24576];
    /* 0x1A0000 */ unsigned char maDecodeWorkArea[1480552];
    /* 0x309770 */ u_long128 maRingBufferTags[33];
    /* 0x309980 */ sceMpeg mMpegDecoder;
    /* 0x3099C8 */ ViBuf mRingBuffer;
    /* 0x309A28 */ CGTFile *mpMpegStream;
    /* 0x309A2C */ int mnReadSize;
    /* 0x309A30 */ CGTMpegImage maImages[2];
    /* 0x309B80 */ unsigned int mnImageBuffer;
    /* 0x309B84 */ int mbInterlace;
    /* 0x309B88 */ int mbPlaying;
    /* 0x309B8C */ int mbCompleted;
    /* 0x309B90 */ int mbStop;
    /* 0x309B94 */ int mbLoop;
    /* 0x309B98 */ int mbEOF;
    /* 0x309B9C */ int mbAbort;
    /* 0x309BA0 */ int mnCurrentFrame;
    /* 0x309BA4 */ float mrSyncTime;
    /* 0x309BA8 */ float mrTimestep;
    /* 0x309BAC */ int mnSkipFrames;

    // functions of this class with code in this build:
    // int CGTMpegDecoder::Update()  [0x0027C6A0]
    // void CGTMpegDecoder::Destroy(CGTMpegManager *lpManager)  [0x0027CE60]
    // void CGTMpegDecoder::Init(CGTMpegManager *lpManager, float lrTimestep)  [0x0027CF40]
    // int CGTMpegDecoder::NodataCallback(void *lpData)  [0x0027D110]
    // int CGTMpegDecoder::ConvertToRasters()  [0x0027D340]
    // int CGTMpegDecoder::RestartDMA(void *lpDecoder)  [0x0027D580]
    // int CGTMpegDecoder::StopDMA(void *lpDecoder)  [0x0027D5B0]
};

// declared in 57 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CGTMpegImage {  // size 0x0A8
public:
    /* 0x000 */ RwRaster *mpaRasters[40];
    /* 0x0A0 */ unsigned int mnNumTilesX;
    /* 0x0A4 */ unsigned int mnNumTilesY;
};

// declared in 57 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CGTMpegManager {  // size 0x004
public:
    /* 0x000 */ CGTMpegDecoder *mpDecoder;

    // functions of this class with code in this build:
    // int CGTMpegManager::IsComplete()  [0x0027C590]
    // CGTMpegImage *CGTMpegManager::GetLastFrame()  [0x0027C5B0]
    // int CGTMpegManager::Update()  [0x0027C5F0]
    // void CGTMpegManager::Play(CGTFile *lpMpegStream, int lbLoop)  [0x0027C620]
    // void CGTMpegManager::Close()  [0x0027C680]
    // void CGTMpegManager::Open()  [0x0027C690]
};

// declared in 30 file(s), e.g. gamesource\Hud\CHudComponentBonus.cpp
class CHardwareVoice {  // size 0x010
public:
    /* 0x000 */ RwaSPU2Voice *m_OsVoice;
    /* 0x004 */ CManagedVoice *m_AssignedTo;
    /* 0x008 */ int m_Reserved;
    /* 0x00C */ int m_Stopping;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class CHotspot : public CTriggerTarget {  // size 0x0BC
public:
    // base CTriggerTarget at 0x000
    /* 0x004 */ HotspotData *mpData;
    /* 0x008 */ int mnLap;
    /* 0x00C */ float marPosition[4];
    /* 0x01C */ float marClearMinParam[4];
    /* 0x02C */ float marClearMaxParam[4];
    /* 0x03C */ float maarVehicleParams[4][8];

    // functions of this class with code in this build:
    // float CHotspot::GetDistFromParam(float lrParamAlong, int lnLaneIndex)  [0x0022FDC0]
    // float CHotspot::GetParamFromDist(float lrDistance, int lnLaneIndex)  [0x0022FE70]
    // void CHotspot::Generate(int lnLaneIndex, int lnPatternIndex)  [0x0022FF20]
    // void CHotspot::OnTrigger()  [0x002301F0]
    // void CHotspot::Init()  [0x00230370]
};

// declared in 48 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CHud {  // size 0x098
public:
    /* 0x000 */ C2dScene *mpScene;
    /* 0x008 */ unsigned long long mxActiveComponents;
    /* 0x010 */ CHudComponent *mapComponents[33];

    // functions of this class with code in this build:
    // void CHud::Render()  [0x001D8020]
    // void CHud::Update()  [0x001D8140]
    // float CHud::ResetTwoPlayerPursuit16_9()  [0x001D81D0]
    // float CHud::ResetTwoPlayerPursuit()  [0x001D8830]
    // float CHud::ResetTwoPlayerRace16_9()  [0x001D8E90]
    // float CHud::ResetTwoPlayerRace()  [0x001D94F0]
    // float CHud::ResetOnePlayerPursuit()  [0x001D9B50]
    // float CHud::ResetOnePlayerCrashDamages()  [0x001D9EB0]
    // void CHud::Clear()  [0x001D9FD0]
    // void CHud::Reset()  [0x001DA000]
    // void CHud::Initialise()  [0x001DAE00]
};

// declared in 2 file(s), e.g. gamesource\Hud\CHud.cpp
class CHudBonusStat {  // size 0x014
public:
    /* 0x000 */ C2dObject *mpObject;
    /* 0x004 */ B22dObjectCustomDataStatTag *mpObjectData;
    /* 0x008 */ float mrFadeTime;
    /* 0x00C */ float mrCurrentTime;
    /* 0x010 */ float mrY;
};

// declared in 27 file(s), e.g. gamesource\Game\CLessonLogic.cpp  // VARIANT 1 of 2
class CHudComponent {  // size 0x000
public:
};

// declared in 21 file(s), e.g. gamesource\Hud\CHud.cpp  // VARIANT 2 of 2
class CHudComponent {  // size 0x00C
public:
    /* 0x000 */ int mnRaceCarIndex;
    /* 0x004 */ int mnBaseLayer;
};

// declared in 2 file(s), e.g. gamesource\Hud\CHud.cpp
class CHudComponentBonus : public CHudComponent {  // size 0x084
public:
    // base CHudComponent at 0x000
    /* 0x00C */ C2dFrame *mpFrame;
    /* 0x010 */ CHudBonusStat mDriftStat;
    /* 0x024 */ CHudBonusStat mOncomingStat;
    /* 0x038 */ CHudBonusStat mAirStat;
    /* 0x04C */ CHudBonusStat mNearMissStat;
    /* 0x060 */ int mnFlags;
    /* 0x064 */ float mrDistScale;
    /* 0x068 */ unsigned char *mpcUnits;
    /* 0x06C */ float mrLastAirTime;
    /* 0x070 */ int mnNumNearMissesInChain;
    /* 0x074 */ int mbNearMissWaitingForSound;
    /* 0x078 */ int mnLRCcount;
    /* 0x07C */ float mrCenterX;
    /* 0x080 */ float mrRightX;

    // functions of this class with code in this build:
    // void CHudComponentBonus::Update(float lrTimestep)  [0x001E4180]
    // int CHudComponentBonus::Create(float lrPosX, float lrPosY, float lrSize, unsigned int lnFlags, void *lpData)  [0x001E4E10]
    // void CHudComponentBonus::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)  [0x001E4FA0]
};

// declared in 2 file(s), e.g. gamesource\Hud\CHud.cpp
class CHudComponentBurn : public CHudComponent {  // size 0x020
public:
    // base CHudComponent at 0x000
    /* 0x00C */ C2dObject *mpObject;
    /* 0x010 */ B22dObjectCustomDataBurnTag *mpObjectData;
    /* 0x014 */ int mnCurrentFireRaster;
    /* 0x018 */ float mrTime;
    /* 0x01C */ float mrPrevBurn;

    // functions of this class with code in this build:
    // void CHudComponentBurn::Update(float lrTimestep)  [0x001E3670]
    // int CHudComponentBurn::Create(float lrPosX, float lrPosY, float lrSize, unsigned int lnFlags, void *lpData)  [0x001E3920]
    // void CHudComponentBurn::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x001E3A60]
};

// declared in 2 file(s), e.g. gamesource\Hud\CHud.cpp
class CHudComponentCountdown : public CHudComponent {  // size 0x03C
public:
    // base CHudComponent at 0x000
    /* 0x00C */ int mnFlags;
    /* 0x010 */ C2dFrame *mpFrame;
    /* 0x014 */ C2dObject *mpCountdownObject;
    /* 0x018 */ C2dObject *mpGetReadyGoObject;
    /* 0x01C */ B22dObjectCustomDataCountdownTag *mpCountdownObjectData;
    /* 0x020 */ float mrPrevTime;
    /* 0x024 */ float mrTimeDifference;
    /* 0x028 */ char macGetReadyText[16];
    /* 0x038 */ float mrGetReadyShowTime;

    // functions of this class with code in this build:
    // void CHudComponentCountdown::Update(float lrTimestep)  [0x001E2AD0]
    // int CHudComponentCountdown::Create(float lrPosX, float lrPosY, float lrSize, unsigned int lnFlags, void *lpData)  [0x001E3050]
    // void CHudComponentCountdown::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)  [0x001E3210]
};

// declared in 2 file(s), e.g. gamesource\Hud\CHud.cpp
class CHudComponentCrashDamageScore : public CHudComponent {  // size 0x760
public:
    // base CHudComponent at 0x000
    /* 0x00C */ unsigned int munNumCrashingCars;
    /* 0x010 */ char macValueTextBuffer[7][256];
    /* 0x710 */ C2dObject *mapTextObject[7];
    /* 0x72C */ C2dObject *mpImageObject;
    /* 0x730 */ float mrPopupTimes[3];
    /* 0x73C */ float mrPopupValue[3];
    /* 0x748 */ float mrOldTotalCrashCost;
    /* 0x74C */ float mrNewTotalCrashCost;
    /* 0x750 */ float mrPosX;
    /* 0x754 */ float mrPosY;
    /* 0x758 */ unsigned int munBonusMultiplier;
    /* 0x75C */ float mrNextPopUpTime;

    // functions of this class with code in this build:
    // void CHudComponentCrashDamageScore::CreatePopUp(char *lpcCarTitle, float lrCrashValue)  [0x00261750]
    // void CHudComponentCrashDamageScore::Update(float lrTimeStep)  [0x002618A0]
    // int CHudComponentCrashDamageScore::Create(float lrPosX, float lrPosY, float lrSize, void *lpData)  [0x00261C70]
    // void CHudComponentCrashDamageScore::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)  [0x00262020]
    // void CHudComponentCrashDamageScore::Reset()  [0x00262050]
    // void CHudComponentCrashDamageScore::Initialise(int lnLayer)  [0x00262100]
};

// declared in 2 file(s), e.g. gamesource\Hud\CHud.cpp
class CHudComponentCrashScore : public CHudComponent {  // size 0x11C
public:
    // base CHudComponent at 0x000
    /* 0x00C */ char macScoreTextBuffer[256];
    /* 0x10C */ C2dObject *mapTextObject[2];
    /* 0x114 */ float mrLastCrashScore;
    /* 0x118 */ float mrPosX;

    // functions of this class with code in this build:
    // char *CHudComponentCrashScore::GetMoneyString(unsigned int lunValue)  [0x001FC5C0]
    // void CHudComponentCrashScore::Update()  [0x001FC690]
    // int CHudComponentCrashScore::Create(float lrPosX, float lrPosY, float lrSize, void *lpData)  [0x001FC7C0]
    // void CHudComponentCrashScore::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)  [0x001FCAD0]
    // void CHudComponentCrashScore::Initialise(int lnLayer)  [0x001FCB00]
};

// declared in 2 file(s), e.g. gamesource\Hud\CHud.cpp
class CHudComponentCrashValue : public CHudComponent {  // size 0x050
public:
    // base CHudComponent at 0x000
    /* 0x00C */ unsigned int munNumCrashingCars;
    /* 0x010 */ float marFadingAlpha[3];
    /* 0x01C */ char macValueTextBuffer[3][9];
    /* 0x038 */ C2dObject *mapTextObject[3];
    /* 0x044 */ RwMatrixTag *mapCarMatrices[3];

    // functions of this class with code in this build:
    // ECrashValueText CHudComponentCrashValue::AddNewValue(float lrPosX, float lrPosY, unsigned int lunValue)  [0x001EA780]
    // void CHudComponentCrashValue::UpdateFadingText(float lrTimeStep)  [0x001EA900]
    // void CHudComponentCrashValue::DetectCrashes()  [0x001EAA80]
    // void CHudComponentCrashValue::Update(float lrTimeStep)  [0x001EACD0]
    // int CHudComponentCrashValue::Create(void *lpData)  [0x001EAD10]
    // void CHudComponentCrashValue::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)  [0x001EAD50]
    // void CHudComponentCrashValue::Initialise(int lnLayer)  [0x001EAD80]
};

// declared in 2 file(s), e.g. gamesource\Hud\CHud.cpp
class CHudComponentEscapeDistance : public CHudComponent {  // size 0x140
public:
    // base CHudComponent at 0x000
    /* 0x00C */ C2dObject *mapTextObject[2];
    /* 0x014 */ CRaceCar *mpReferenceCar;
    /* 0x018 */ CRaceCar *mpTargetCar;
    /* 0x01C */ int mnReferenceLapsCompleted;
    /* 0x020 */ int mnTargetLapsCompleted;
    /* 0x024 */ int mnLastReferenceLaneNode;
    /* 0x028 */ int mnLastTargetLaneNode;
    /* 0x02C */ char macGapText[256];
    /* 0x12C */ float mrPosX;
    /* 0x130 */ float mrPosY;
    /* 0x134 */ float mrHeight;
    /* 0x138 */ float mrOutlineSize;
    /* 0x13C */ float mrRaceLength;

    // functions of this class with code in this build:
    // char *CHudComponentEscapeDistance::GetDistanceString(float lrDistance)  [0x00263040]
    // void CHudComponentEscapeDistance::Update()  [0x00263110]
    // int CHudComponentEscapeDistance::Create(float lrPosX, float lrPosY, float lrSize, void *lpData)  [0x00263360]
    // void CHudComponentEscapeDistance::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)  [0x002635F0]
    // void CHudComponentEscapeDistance::Initialise()  [0x00263620]
};

// declared in 2 file(s), e.g. gamesource\Hud\CHud.cpp
class CHudComponentHealth : public CHudComponent {  // size 0x020
public:
    // base CHudComponent at 0x000
    /* 0x00C */ C2dObject *mpTextObject;
    /* 0x010 */ C2dObject *mpHealthObject;
    /* 0x014 */ B22dObjectCustomDataHealthTag *mpHealthData;
    /* 0x018 */ int mnPrevLit;
    /* 0x01C */ int mnFlags;

    // functions of this class with code in this build:
    // void CHudComponentHealth::Update(float lrTimestep)  [0x002621B0]
    // int CHudComponentHealth::Create(float lrPosX, float lrPosY, float lrSize, unsigned int lnFlags, void *lpData)  [0x002623E0]
    // void CHudComponentHealth::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x00262640]
};

// declared in 2 file(s), e.g. gamesource\Hud\CHud.cpp
class CHudComponentIndicator : public CHudComponent {  // size 0x028
public:
    // base CHudComponent at 0x000
    /* 0x00C */ C2dFrame *mpIndicatorFrame;
    /* 0x010 */ C2dObject *mpIndicatorObject;
    /* 0x014 */ float mrIndicatorTime;
    /* 0x018 */ float mbIndicatorPosX;
    /* 0x01C */ int mbIndicatorActive;
    /* 0x020 */ float mrWarningSignTime;
    /* 0x024 */ C2dObject *mpWarningSignObject;

    // functions of this class with code in this build:
    // void CHudComponentIndicator::Update(float lrTimestep)  [0x001FAB00]
    // int CHudComponentIndicator::Create(float lrPosX, float lrPosY, float lrSize, void *lpData)  [0x001FAC80]
    // void CHudComponentIndicator::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)  [0x001FAE70]
};

// declared in 2 file(s), e.g. gamesource\Hud\CHud.cpp
class CHudComponentLapHistory : public CHudComponent {  // size 0x014
public:
    // base CHudComponent at 0x000
    /* 0x00C */ C2dObject *mpObject;
    /* 0x010 */ B22dObjectCustomDataLapHistoryTag *mpObjectData;

    // functions of this class with code in this build:
    // void CHudComponentLapHistory::Update()  [0x001DEB00]
    // int CHudComponentLapHistory::Create(float lrPosX, float lrPosY, float lrSize, void *lpData)  [0x001DEC30]
    // void CHudComponentLapHistory::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x001DED70]
};

// declared in 2 file(s), e.g. gamesource\Hud\CHud.cpp
class CHudComponentLapTimes : public CHudComponent {  // size 0x014
public:
    // base CHudComponent at 0x000
    /* 0x00C */ C2dObject *mpObject;
    /* 0x010 */ B22dObjectCustomDataLapTimesTag *mpObjectData;

    // functions of this class with code in this build:
    // void CHudComponentLapTimes::Update()  [0x00201EA0]
    // int CHudComponentLapTimes::Create(float lrPosX, float lrPosY, float lrSize, void *lpData)  [0x00201F40]
    // void CHudComponentLapTimes::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x002020F0]
};

// declared in 2 file(s), e.g. gamesource\Hud\CHud.cpp
class CHudComponentLessonInfo : public CHudComponent {  // size 0x060
public:
    // base CHudComponent at 0x000
    /* 0x00C */ C2dObject *mpMedalTextObject;
    /* 0x010 */ C2dObject *mpMedalValueObject;
    /* 0x014 */ C2dObject *mpPlayerOverallTextObject;
    /* 0x018 */ C2dObject *mpPlayerOverallValueObject;
    /* 0x01C */ ELessonObjective meLessonObjective;
    /* 0x020 */ ELessonMedal meCurrentMedal;
    /* 0x024 */ float marMedalThresholds[3];
    /* 0x030 */ char *mpUnitString;
    /* 0x034 */ void *mpScoreValue;
    /* 0x038 */ unsigned int mnFlags;
    /* 0x03C */ char macMedalString[15];
    /* 0x04B */ char macScoreString[15];
    /* 0x05C */ int mbGotGold;

    // functions of this class with code in this build:
    // void CHudComponentLessonInfo::Update()  [0x001F6130]
    // int CHudComponentLessonInfo::Create(float lrSize, unsigned int lnFlags, void *lpData)  [0x001F7100]
    // void CHudComponentLessonInfo::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x001F7990]
};

// declared in 2 file(s), e.g. gamesource\Hud\CHud.cpp
class CHudComponentMessage : public CHudComponent {  // size 0x060
public:
    // base CHudComponent at 0x000
    /* 0x00C */ C2dObject *mpObject;
    /* 0x010 */ RwV2d mPos;
    /* 0x018 */ float mrScale;
    /* 0x01C */ int mnFlags;
    /* 0x020 */ float mrObjectLifetime;
    /* 0x024 */ int mnPrevCheckpoint;
    /* 0x028 */ int mnPrevLap;
    /* 0x02C */ int mbPerfectLap;
    /* 0x030 */ float mrPrevBurnLevel;
    /* 0x034 */ unsigned int munPrevNumberOfBurnouts;
    /* 0x038 */ float mrWrongWayTime;
    /* 0x03C */ float mrPrevWrongWayDist;
    /* 0x040 */ char macLocalString[32];

    // functions of this class with code in this build:
    // void CHudComponentMessage::Update(float lrTimestep)  [0x001E8410]
    // int CHudComponentMessage::Create(float lrPosX, float lrPosY, float lrSize, unsigned int lnFlags, void *lpData)  [0x001E8D90]
    // void CHudComponentMessage::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x001E8E00]
};

// declared in 2 file(s), e.g. gamesource\Hud\CHud.cpp
class CHudComponentPos : public CHudComponent {  // size 0x020
public:
    // base CHudComponent at 0x000
    /* 0x00C */ C2dObject *mpTextObject;
    /* 0x010 */ C2dObject *mpPosObject;
    /* 0x014 */ C2dObject *mpNumRacersObject;
    /* 0x018 */ char macNumRacersString[2];
    /* 0x01A */ char macPosString[4];

    // functions of this class with code in this build:
    // void CHudComponentPos::Update()  [0x001E9CE0]
    // int CHudComponentPos::Create(float lrPosX, float lrPosY, float lrSize, void *lpData)  [0x001E9D10]
    // void CHudComponentPos::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x001EA070]
};

// declared in 2 file(s), e.g. gamesource\Hud\CHud.cpp
class CHudComponentScore : public CHudComponent {  // size 0x018
public:
    // base CHudComponent at 0x000
    /* 0x00C */ C2dObject *mpTextObject;
    /* 0x010 */ C2dObject *mpScoreObject;
    /* 0x014 */ B22dObjectCustomDataScoreTag *mpScoreData;

    // functions of this class with code in this build:
    // void CHudComponentScore::Update()  [0x001EA090]
    // int CHudComponentScore::Create(float lrPosX, float lrPosY, float lrSize, void *lpData)  [0x001EA0C0]
    // void CHudComponentScore::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x001EA330]
};

// declared in 2 file(s), e.g. gamesource\Hud\CHud.cpp
class CHudComponentSeparator : public CHudComponent {  // size 0x010
public:
    // base CHudComponent at 0x000
    /* 0x00C */ C2dObject *mpObject;

    // functions of this class with code in this build:
    // void CHudComponentSeparator::Update()  [0x0027B6A0]
    // int CHudComponentSeparator::Create(float lrPosX, float lrPosY, float lrSize, unsigned int lnFlags)  [0x0027B6B0]
    // void CHudComponentSeparator::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x0027B810]
};

// declared in 2 file(s), e.g. gamesource\Hud\CHud.cpp
class CHudComponentSpeedo : public CHudComponent {  // size 0x030
public:
    // base CHudComponent at 0x000
    /* 0x00C */ C2dObject *mpObject;
    /* 0x010 */ B22dObjectCustomDataSpeedoTag *mpObjectData;
    /* 0x014 */ float mrPosX;
    /* 0x018 */ float mrPosY;
    /* 0x01C */ float mrSize;
    /* 0x020 */ int mnFlags;
    /* 0x024 */ float mrGearChangeDelay;
    /* 0x028 */ int mnCurrentGear;
    /* 0x02C */ float mrPrevTachoAngle;

    // functions of this class with code in this build:
    // void CHudComponentSpeedo::Update(float lrTimestep)  [0x001DB030]
    // int CHudComponentSpeedo::Create(float lrPosX, float lrPosY, float lrSize, unsigned int lnFlags, void *lpData)  [0x001DB420]
    // void CHudComponentSpeedo::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x001DB450]
};

// declared in 2 file(s), e.g. gamesource\Hud\CHud.cpp
class CHudComponentSplitTimes : public CHudComponent {  // size 0x038
public:
    // base CHudComponent at 0x000
    /* 0x00C */ float mrPosX;
    /* 0x010 */ float mrPosY;
    /* 0x014 */ float mrSize;
    /* 0x018 */ int manPrevCheckpoints[4];
    /* 0x028 */ int mbAlone;
    /* 0x02C */ C2dObject *mpSplitObject;
    /* 0x030 */ B22dObjectCustomDataSplitTimeTag *mpSplitData;
    /* 0x034 */ float mrTimeUntilFade;

    // functions of this class with code in this build:
    // void CHudComponentSplitTimes::Update(float lrTimestep)  [0x001E5570]
    // int CHudComponentSplitTimes::Create(float lrPosX, float lrPosY, float lrSize, void *lpData)  [0x001E5AC0]
    // void CHudComponentSplitTimes::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x001E5B50]
};

// declared in 2 file(s), e.g. gamesource\Hud\CHud.cpp
class CHudComponentText : public CHudComponent {  // size 0x014
public:
    // base CHudComponent at 0x000
    /* 0x00C */ C2dObject *mpTextObject;
    /* 0x010 */ int mbFlash;

    // functions of this class with code in this build:
    // void CHudComponentText::Update()  [0x00267D50]
    // int CHudComponentText::Create(float lrPosX, float lrPosY, float lrSize, unsigned int lnFlags, void *lpData)  [0x00267E10]
    // void CHudComponentText::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x00267F10]
};

// declared in 2 file(s), e.g. gamesource\Hud\CHud.cpp
class CHudComponentTotalTime : public CHudComponent {  // size 0x118
public:
    // base CHudComponent at 0x000
    /* 0x00C */ C2dObject *mpTextObject;
    /* 0x010 */ C2dObject *mpTimeObject;
    /* 0x014 */ char macTimeText[256];
    /* 0x114 */ int mnRaceCarIndex;

    // functions of this class with code in this build:
    // void CHudComponentTotalTime::RenderTextDropShadow(B22dObjectAnimatablesTag *lpData)  [0x00262910]
    // char *CHudComponentTotalTime::GetTimeString(float lrTime)  [0x00262C40]
    // void CHudComponentTotalTime::Update()  [0x00262D40]
    // int CHudComponentTotalTime::Create(float lrPosX, float lrPosY, float lrSize, void *lpData)  [0x00262DA0]
    // void CHudComponentTotalTime::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x00262FE0]
    // void CHudComponentTotalTime::Initialise(int lnLayer)  [0x00263000]
};

// declared in 27 file(s), e.g. gamesource\Hud\CHudComponentBonus.cpp  // VARIANT 1 of 2
class CHudSound {  // size 0x000
public:

    // functions of this class with code in this build:
    // void CHudSound::FinalLap()  [0x00267F30]
    // void CHudSound::PerfectLap()  [0x00267FC0]
    // void CHudSound::CheckPoint()  [0x00268050]
    // void CHudSound::VolumeTick()  [0x002680E0]
    // void CHudSound::Cancel()  [0x00268170]
    // void CHudSound::Selection()  [0x00268200]
    // void CHudSound::MenuMove()  [0x00268290]
    // void CHudSound::BoostReady()  [0x00268320]
    // void CHudSound::AirtimeFinish()  [0x002683B0]
    // void CHudSound::AirtimeTick(float PitchOffset)  [0x00268450]
    // void CHudSound::NearMiss(int LeftOrRight, int PitchOffset)  [0x002684F0]
    // void CHudSound::DriftFinish()  [0x002685A0]
    // void CHudSound::DriftTick(float lrTick)  [0x002685B0]
    // void CHudSound::OncomingFinish()  [0x00268690]
    // void CHudSound::OncomingTick(float lrTick)  [0x002686A0]
    // void CHudSound::SplitTime()  [0x00268780]
    // void CHudSound::TimerCountDown(int TimeLeft)  [0x00268810]
    // void CHudSound::TimeAdded()  [0x002688F0]
    // void CHudSound::Go()  [0x002689B0]
    // void CHudSound::One()  [0x00268A40]
    // void CHudSound::Two()  [0x00268AD0]
    // void CHudSound::Three()  [0x00268B60]
    // void CHudSound::Update()  [0x00268BF0]
    // int CHudSound::Reset()  [0x00268C10]
    // int CHudSound::Init(int HudMenuBank)  [0x00268CB0]
    // void *CHudSound::~CHudSound()  [0x00268CE0]
    // void *CHudSound::CHudSound()  [0x00268D30]
};

// declared in 3 file(s), e.g. gamesource\Hud\CHudComponentCountdown.cpp  // VARIANT 2 of 2
class CHudSound {  // size 0x068
public:
    /* 0x000 */ int mWasDrifting;
    /* 0x004 */ int mWasOncoming;
    /* 0x008 */ int mWasAiring;
    /* 0x00C */ RwaSPU2Wave *m_Waves[17];
    /* 0x050 */ float mDriftTickTimer;
    /* 0x054 */ float mOncomingTimer;
    /* 0x058 */ int mOncomingPriorityTimer;
    /* 0x05C */ int mCountupDamper;
    /* 0x060 */ int mbFoundWaves;
    /* 0x064 */ int mnHudMenuBank;
};

// declared in 2 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CInGameCamera {  // size 0x008
public:
    /* 0x000 */ CCamera *mpParentCamera;
    /* 0x004 */ CCameraData *mpaStackData;

    // functions of this class with code in this build:
    // void CInGameCamera::UpdatePursuitEnd(CRaceCar *lpCar, CCamera *lpParentCamera, CCameraData *lpaStackData)  [0x002042E0]
    // void CInGameCamera::UpdatePursuitStartLine(CRaceCar *lpCar, CCamera *lpParentCamera, CCameraData *lpaStackData)  [0x00204D80]
    // void CInGameCamera::UpdateDebugTopdownLower(CRaceCar *lpCar, CCamera *lpParentCamera, CCameraData *lpaStackData)  [0x002058E0]
    // void CInGameCamera::UpdateDebugTopdown(CRaceCar *lpCar, CCamera *lpParentCamera, CCameraData *lpaStackData)  [0x00205F80]
    // void CInGameCamera::UpdateUserControlled(CRaceCar *lpCar, CCamera *lpParentCamera, CCameraData *lpaStackData)  [0x00206700]
    // void CInGameCamera::UpdateBumper(CRaceCar *lpCar, CCamera *lpParentCamera, CCameraData *lpaStackData)  [0x00206DA0]
    // void CInGameCamera::UpdateFollow(CRaceCar *lpCar, CCamera *lpParentCamera, CCameraData *lpaStackData)  [0x00207300]
    // void CInGameCamera::UpdateLookback(CRaceCar *lpCar, CCamera *lpParentCamera, CCameraData *lpaStackData)  [0x00208210]
    // void CInGameCamera::Update(CRaceCar *lpCar, CCamera *lpParentCamera, CCameraData *lpaStackData)  [0x00208620]
    // int CInGameCamera::Init(CCamera *lpParentCamera, CCameraData *lpaStackData)  [0x00208740]
    // void CInGameCamera::RegisterValues()  [0x00208760]
};

// declared in 8 file(s), e.g. gamesource\Game\CTwoPlayerSSGameMode.cpp
class CInput {  // size 0x13C0
public:
    /* 0x000 */ char mInputBuffer[4096];
    /* 0x1000 */ CControllerMapping mControllers[2];
    /* 0x1120 */ CForceFeedback mForceFeedback[2];
};

// declared in 2 file(s), e.g. gamesource\Race\CInterestOMeter.cpp
class CInterestOMeter {  // size 0x010
public:
    /* 0x000 */ float mrMostInterest;
    /* 0x004 */ RwV3d mvMostInteresting;

    // functions of this class with code in this build:
    // float CInterestOMeter::CalculateInterest(RwV3d *lpResult, CTrafficVehicle *lpVehicle)  [0x0027B920]
    // float CInterestOMeter::CalculateInterest(RwV3d *lpResult, CRaceCar *lpCar)  [0x0027B9E0]
    // int CInterestOMeter::Update(CRaceCar **lppResultRaceCar, CTrafficVehicle **lppResultTrafficCar, CRaceCar *lpCar)  [0x0027BC10]
};

// declared in 5 file(s), e.g. gamesource\Game\CTimeAttackLogic.cpp
class CInterpolatedRaceCar {  // size 0x3C0
public:
    /* 0x000 */ CRaceCar *mpRaceCar;
    /* 0x010 */ RwMatrixTag mMatrix;
    /* 0x050 */ RwV3d mLinearVelocity;
    /* 0x05C */ RwSphere mSphere;
    /* 0x070 */ RwMatrixTag mWheelMatrices[4];
    /* 0x170 */ EWheelState meWheelState[4];
    /* 0x180 */ signed char mPrevBrake;
    /* 0x181 */ signed char meGlassState;
    /* 0x182 */ signed char mnCurrentUnit;
    /* 0x183 */ signed char mIndex;
    /* 0x184 */ int mabBodyworkAttached[8];
    /* 0x1B0 */ RwMatrixTag mFlyingMatrices[8];
    /* 0x3B0 */ unsigned int mxRenderedBits;
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CLane {  // size 0x010
public:
    /* 0x000 */ LaneData *mpData;
    /* 0x004 */ CTrafficParam **mpapNextTrafficParamArray;
    /* 0x008 */ CTrafficParam *mpLastTrafficParam;
    /* 0x00C */ unsigned short muGlobalSegmentIndex16;

    // functions of this class with code in this build:
    // int CLane::LaneIsDriveable(LaneData *lpLaneData, unsigned short lunStartSegIndex16, short lnSegsToCheck16)  [0x00230440]
    // int CLane::LaneIsDriveable(CLane *lpLane, unsigned short lunStartSegIndex16, short lnSegsToCheck16)  [0x002304D0]
    // int CLane::LaneIsDriveable(unsigned short lunLaneIndex16, unsigned short lunStartSegIndex16, short lnSegsToCheck16)  [0x00230570]
    // int CLane::IntersectLineSegment(int lnSegmentIndex, RwV3d *lpPosition, RwV3d *lpDirection, float *lprHeight, RwV3d *lpPolyUp)  [0x002305B0]
    // float CLane::GetRacingDistance(float lrStartNode, float lrLaneNode, int lnLap, RwV3d *lpTrackPosition)  [0x00230890]
    // float CLane::GetSignedBackwardDistBetweenParams(float lrParamAlong1, float lrParamAlong2)  [0x00230BA0]
    // float CLane::GetSignedForwardDistBetweenParams(float lrParamAlong1, float lrParamAlong2)  [0x00230CD0]
    // float CLane::GetDistFromParam(float lrParamAlong)  [0x00230E00]
    // int CLane::SegmentAIsInfrontOfSegmentB(int lnSegmentAIndex, int lnSegmentBIndex) const  [0x00230E60]
    // float CLane::GetDistanceBetweenSegments(int lnStartSegmentIndex, int lnEndSegmentIndex) const  [0x00230EF0]
    // float CLane::GetDistFromStartOfSegment(RwV3d *lpPosition, int lnSegmentIndex) const  [0x00230FA0]
    // float CLane::GetTotalWidth(int lnSegmentIndex, int lnSegmentNodeIndex) const  [0x002310D0]
    // float CLane::GetWidth(int lnSegmentNodeIndex) const  [0x00231400]
    // void CLane::GetSegmentMidPoint(int lnSegmentNumber, RwV3d *lpResultVector) const  [0x002314B0]
    // void CLane::GetAvgRightwardsVector(int lnSegmentNumber, RwV3d *lpResultVector) const  [0x00231540]
    // void CLane::GetRightwardsVector(int lnSegmentNumber, RwV3d *lpResultVector) const  [0x002315D0]
    // void CLane::GetAvgLeftwardsVector(int lnSegmentNumber, RwV3d *lpResultVector) const  [0x00231680]
    // void CLane::GetLeftwardsVector(int lnSegmentNumber, RwV3d *lpResultVector) const  [0x00231710]
    // void CLane::GetBackwardsVector(int lnSegmentNumber, RwV3d *lpResultVector) const  [0x002317C0]
    // void CLane::GetAvgForwardsVector(int lnSegmentNumber, RwV3d *lpResultVector) const  [0x00231870]
    // void CLane::GetForwardsVector(int lnSegmentNumber, RwV3d *lpResultVector) const  [0x00231AA0]
    // int CLane::IsInSegment(RwV3d *lpPosition, int lnSegmentIndex) const  [0x00231B50]
    // int CLane::IsInSegment(RwV3d *lpPosition, int lnSegmentIndex, float lrClearanceWanted) const  [0x00231E00]
    // int CLane::UpdateCurrentRacingLaneSegment(int *lpnResultSegmentIndex, int *lpnResultSector, RwV3d *lpPosition)  [0x002322C0]
    // int CLane::UpdateCurrentAILaneSegment(CLane **lppResultLane, int *lpnResultSegmentIndex, int *lpnResultSector, RwV3d *lpPosition)  [0x00232490]
    // void CLane::FindClosestRacingLaneSegment(int *lpnResultSegmentIndex, int *lpnResultSector, RwV3d *lpPosition, int lnCurrentSector)  [0x00232870]
    // void CLane::FindClosestDriveableAILaneSegment(CLane **lppResultLane, int *lpnResultSegmentIndex, int *lpnResultSector, RwV3d *lpPosition, int lnCurrentSector)  [0x00232A40]
    // void CLane::FindClosestAILaneSegment(CLane **lppResultLane, int *lpnResultSegmentIndex, int *lpnResultSector, RwV3d *lpPosition, int lnCurrentSector)  [0x00232C90]
    // void CLane::Reset()  [0x00232EC0]
};

// declared in 3 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CLessonLogic : public CGameLogic {  // size 0x008
public:
    // base CGameLogic at 0x000
    /* 0x004 */ int mbLessonReplayFinished;

    // functions of this class with code in this build:
    // void CLessonLogic::Destroy()  [0x001F4510]
    // void CLessonLogic::Shutdown()  [0x001F4520]
    // void CLessonLogic::RaceFinished()  [0x001F4530]
    // void CLessonLogic::Update(int lbOverrideReplaying)  [0x001F4540]
    // void CLessonLogic::UpdateCameras(int lnPlayerIndex, int lnRaceCarIndex, int lbOverridePause, int lbOverrideUpdate)  [0x001F45B0]
    // void CLessonLogic::Reset()  [0x001F4B10]
    // void CLessonLogic::Setup()  [0x001F4B90]
    // void CLessonLogic::Init()  [0x001F4BA0]
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CLoadingScreen {  // size 0x004
public:
    /* 0x000 */ float mrFadeTime;
};

// declared in 30 file(s), e.g. gamesource\Hud\CHudComponentBonus.cpp  // VARIANT 1 of 2
class CManagedVoice {  // size 0x078
public:
    /* 0x000 */ CPlaySoundParams m_Params;
    /* 0x03C */ RwV3d m_Position;
    /* 0x048 */ RwV3d m_Velocity;
    /* 0x054 */ int m_InUse;
    /* 0x058 */ int m_JustStarted;
    /* 0x05C */ float m_Pitch;
    /* 0x060 */ float m_Volume;
    /* 0x064 */ unsigned int m_WavePosition;
    /* 0x068 */ unsigned int m_SampleLength;
    /* 0x06C */ unsigned int m_SampleRate;
    /* 0x070 */ int m_HardwareVoiceIdx;
    /* 0x074 */ int m_ToUseHardwareVoiceIdx;

    // functions of this class with code in this build:
    // float CManagedVoice::Audibility() const  [0x00279770]
    // int CManagedVoice::IsPlaying()  [0x002798D0]
    // void CManagedVoice::SetPitch(float pitch)  [0x002798E0]
    // void CManagedVoice::SetVolume(float volume)  [0x002798F0]
    // void CManagedVoice::SetPosition(RwV3d *position, RwV3d *velocity)  [0x00279900]
    // void *CManagedVoice::CManagedVoice()  [0x00279950]
};

// declared in 1 file(s), e.g. gamesource\Sound\SoundCarEngine.cpp  // VARIANT 2 of 2
class CManagedVoice {  // size 0x000
public:
};

// declared in 113 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CMatrix3 {  // size 0x030
public:
    /* 0x000 */ float a;
    /* 0x004 */ float b;
    /* 0x008 */ float c;
    /* 0x00C */ float pad1;
    /* 0x010 */ float d;
    /* 0x014 */ float e;
    /* 0x018 */ float f;
    /* 0x01C */ float pad2;
    /* 0x020 */ float g;
    /* 0x024 */ float h;
    /* 0x028 */ float i;
    /* 0x02C */ float pad3;
};

// declared in 2 file(s), e.g. gamesource\Menu\CMenuPageMemoryCard.cpp
class CMemoryCard {  // size 0x540
public:
    /* 0x000 */ unsigned int munAutoSaveProfile;
    /* 0x004 */ CMemoryCardFile maAllFiles[4];
    /* 0x044 */ CMemoryCardFile maMinFiles[1];
    /* 0x054 */ EMemoryCardOperation meMemoryCardOperation;
    /* 0x058 */ EMemDevStatus meCurrentCommand;
    /* 0x05C */ CMemoryCardFile *mpEndFile;
    /* 0x060 */ CMemoryCardFile *mpCurrentFile;
    /* 0x064 */ unsigned int munProfile;
    /* 0x068 */ unsigned int mnFreeSpace;
    /* 0x06C */ EMemoryCardCheckResult meCheckResult;
    /* 0x070 */ unsigned int munRequiredSaveBytes;
    /* 0x080 */ CMemoryDevicePS2 mMemoryDevice;
    /* 0x140 */ sceMcIconSys mMcIconSys;
};

// declared in 2 file(s), e.g. gamesource\Menu\CMenuPageMemoryCard.cpp
class CMemoryCardFile {  // size 0x010
public:
    /* 0x000 */ char *mpacFileName;
    /* 0x004 */ void *mpData;
    /* 0x008 */ unsigned int munSize;
    /* 0x00C */ int mbUsesMemory;
};

// declared in 3 file(s), e.g. gamesource\Menu\CMenuPageMemoryCard.cpp
class CMemoryDeviceBase {  // size 0x001
public:
};

// declared in 3 file(s), e.g. gamesource\Menu\CMenuPageMemoryCard.cpp
class CMemoryDevicePS2 : public CMemoryDeviceBase {  // size 0x0C0
public:
    // base CMemoryDeviceBase at 0x000
    /* 0x000 */ EMemDevError meLastError;
    /* 0x004 */ int mnFileDescriptor;
    /* 0x040 */ sceMcTblGetDir mMcTblGetDir;
    /* 0x080 */ int mnInfoType;
    /* 0x084 */ int mnInfoFree;
    /* 0x088 */ int mbInfoIsFormatted;

    // functions of this class with code in this build:
    // EMemDevStatus CMemoryDevicePS2::GetFinishStatus(int lnSyncCmd, int lnSyncResult, int *lpnSyncInfo)  [0x0020CAF0]
    // EMemDevStatus CMemoryDevicePS2::FinishedGetInfo(int lnSyncResult)  [0x0020D0C0]
    // EMemDevStatus CMemoryDevicePS2::GetRunStatus(int lnSyncCmd)  [0x0020D1F0]
    // EMemDevStatus CMemoryDevicePS2::Sync(EMemDevPollOrWait lePollOrWait, int *lpnSyncInfo)  [0x0020D2C0]
    // int CMemoryDevicePS2::MkDir(char *lpacDirname)  [0x0020D430]
    // int CMemoryDevicePS2::Format()  [0x0020D4A0]
    // int CMemoryDevicePS2::Write(char *lpacBuffer, unsigned int lunLengthInBytes, unsigned int lunOffsetInBytes)  [0x0020D530]
    // int CMemoryDevicePS2::Read(char *lpacBuffer, unsigned int lunLengthInBytes, unsigned int lunOffsetInBytes)  [0x0020D5F0]
    // int CMemoryDevicePS2::CloseFile()  [0x0020D6B0]
    // int CMemoryDevicePS2::OpenFile(char *lpacFilename, unsigned int lunMode)  [0x0020D740]
    // int CMemoryDevicePS2::GetFreeSpace()  [0x0020D830]
    // int CMemoryDevicePS2::GetFileSize(char *lpacFilename)  [0x0020D850]
    // EMemDevError CMemoryDevicePS2::GetError()  [0x0020D8C0]
    // int CMemoryDevicePS2::Init()  [0x0020D8D0]
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CMenuAudio {  // size 0x001
public:
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CMenuCarousel {  // size 0x014
public:
    /* 0x000 */ int mnType;
    /* 0x004 */ int mbLoop;
    /* 0x008 */ int mnNumEntries;
    /* 0x00C */ int mnCurrentEntry;
    /* 0x010 */ CMenuCarouselEntry *maEntries;
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CMenuCarouselEntry {  // size 0x014
public:
    /* 0x000 */ int mnFlags;
    /* 0x004 */ void *mpData1;
    /* 0x008 */ void *mpData2;
    /* 0x00C */ class {  // size 0x004
    public:
        /* 0x000 */ CCarData *mpCar;
        /* 0x000 */ RwRGBA mColour;
        /* 0x000 */ char *mpcText;
        /* 0x000 */ ETrackID meTrackID;
    } uData;
    /* 0x010 */ RwRGBAReal *mpColour;
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentButtons.cpp
class CMenuComponentButtons {  // size 0x00C
public:
    /* 0x000 */ char *mpcConfirm;
    /* 0x004 */ char *mpcBack;
    /* 0x008 */ char *mpcTest;
};

// declared in 57 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CMenuComponentResultsTable {  // size 0x024
public:
    /* 0x000 */ RwV2d mPos;
    /* 0x008 */ unsigned int munNumColumns;
    /* 0x00C */ unsigned int munNumRows;
    /* 0x010 */ float mrTextSize;
    /* 0x014 */ CMenuResultsTableColumn *mpColumns;
    /* 0x018 */ CMenuResultsTableRow *mpRows;
    /* 0x01C */ CMenuResultsTableEntry *mpEntrys;
    /* 0x020 */ EStringID meEndHeadingID;

    // functions of this class with code in this build:
    // void CMenuComponentResultsTable::SetAllRows(unsigned int lunType, float lrHeight, unsigned int lunAlign)  [0x001EA670]
    // void CMenuComponentResultsTable::SetAllColumns(unsigned int lunType, unsigned int lunAlign)  [0x001EA6D0]
    // void CMenuComponentResultsTable::Clear()  [0x001EA720]
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CMenuGfx {  // size 0x3AC
public:
    /* 0x000 */ RwRaster *mpCamSubRaster;
    /* 0x004 */ RwRaster *mpCamSubZRaster;
    /* 0x008 */ RwRaster *mpGameOnlyTrophy;
    /* 0x00C */ C2dScene *mpScene;
    /* 0x010 */ C2dFrame *mpClipFrame;
    /* 0x014 */ C2dFrame *mpPanFrame;
    /* 0x018 */ CMenuGfxController mPanController;
    /* 0x030 */ int mxLayoutFlags;
    /* 0x034 */ float mrGlowTime;
    /* 0x038 */ float mrGlowIntensity;
    /* 0x03C */ float mrNewFlashTime;
    /* 0x040 */ RwRGBAReal mNewFlashColour;
    /* 0x050 */ CMenuGfxComponent *mapComponents[27];
    /* 0x0BC */ RwTexDictionary *mpFrontEndOnlyTexDic;
    /* 0x0C0 */ RwRaster *mapRasters[187];
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentButtons.cpp
class CMenuGfxButton {  // size 0x01C
public:
    /* 0x000 */ C2dObject *mpButtonObject;
    /* 0x004 */ C2dObject *mpTextObject;
    /* 0x008 */ float mrFadeTime;
    /* 0x00C */ EButtonImage meCurrentImage;
    /* 0x010 */ EButtonImage meNextImage;
    /* 0x014 */ char *mpcCurrentText;
    /* 0x018 */ char *mpcNextText;
};

// declared in 57 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CMenuGfxComponent {  // size 0x00C
public:
    /* 0x000 */ int mbActive;
    /* 0x004 */ int mnBaseLayer;
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentButtonList.cpp
class CMenuGfxComponentButtonList : public CMenuGfxComponent {  // size 0x0B0
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ CMenuTableColumn *mpColumn;
    /* 0x010 */ C2dFrame *mpRootFrame;
    /* 0x014 */ C2dFrame *mpBarFrame;
    /* 0x018 */ C2dFrame *mpClipFrame;
    /* 0x01C */ C2dObject *mpBar;
    /* 0x020 */ C2dObject *mapLines[2];
    /* 0x028 */ C2dObject *mpButton;
    /* 0x02C */ C2dObject *maapTextObjects[2][6];
    /* 0x05C */ CMenuGfxController mEntryController;
    /* 0x074 */ unsigned int maxEntryFlags[6];
    /* 0x08C */ CMenuPanel mPanel;
    /* 0x0AC */ float mrBottomItemAlignMidX;

    // functions of this class with code in this build:
    // void CMenuGfxComponentButtonList::SetData(void *lpData)  [0x001C5300]
    // void CMenuGfxComponentButtonList::Update(float lrTimestep)  [0x001C5CC0]
    // void CMenuGfxComponentButtonList::Reset()  [0x001C5ED0]
    // void CMenuGfxComponentButtonList::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)  [0x001C5F70]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentButtons.cpp
class CMenuGfxComponentButtons : public CMenuGfxComponent {  // size 0x064
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ CMenuGfxButton mConfirmButton;
    /* 0x028 */ CMenuGfxButton mBackButton;
    /* 0x044 */ CMenuGfxButton mTestButton;
    /* 0x060 */ C2dFont *mpFont;

    // functions of this class with code in this build:
    // void CMenuGfxComponentButtons::SetData(void *lpData)  [0x001CF6B0]
    // void CMenuGfxComponentButtons::Update(float lrTimestep)  [0x001CF770]
    // void CMenuGfxComponentButtons::Reset()  [0x001D0270]
    // void CMenuGfxComponentButtons::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x001D02F0]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentCar.cpp
class CMenuGfxComponentCar : public CMenuGfxComponent {  // size 0x0BC
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ C2dObject *mpCarObject;
    /* 0x010 */ B22dObjectCustomDataCarTag *mpCarObjectData;
    /* 0x014 */ CMenuCarousel *mpCurrentCarousel;
    /* 0x018 */ CCarData *mpCurrentCar;
    /* 0x01C */ float mrCarAlpha;
    /* 0x020 */ RwRGBA *mpCurrentColour;
    /* 0x024 */ RwRGBAReal mRGBAStart;
    /* 0x034 */ RwRGBAReal mRGBAEnd;
    /* 0x044 */ RwRGBAReal mRGBACurrent;
    /* 0x054 */ float mrRGBAInterp;
    /* 0x058 */ float mrDestroyDelay;
    /* 0x05C */ CMenuGfxController mCameraRotationController;
    /* 0x074 */ CMenuGfxController mCameraAltitudeController;
    /* 0x08C */ CMenuGfxController mCameraZoomController;
    /* 0x0A4 */ CMenuGfxController mCameraPanController;

    // functions of this class with code in this build:
    // void CMenuGfxComponentCar::SetData(void *lpData)  [0x001D26D0]
    // void CMenuGfxComponentCar::Update(float lrTimestep)  [0x001D2700]
    // void CMenuGfxComponentCar::Reset()  [0x001D3080]
    // void CMenuGfxComponentCar::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x001D31B0]
    // void CMenuGfxComponentCar::CarObjectRender(B22dObjectAnimatablesTag *lpData)  [0x001D31D0]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentCarousel.cpp
class CMenuGfxComponentCarousel : public CMenuGfxComponent {  // size 0x380
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ CMenuCarousel *mpCarousel;
    /* 0x010 */ C2dFrame *mpClipFrame;
    /* 0x014 */ C2dObject *mapBar[3];
    /* 0x020 */ C2dObject *mapLines[2];
    /* 0x028 */ C2dObject *mapArrows[2];
    /* 0x030 */ C2dObject *mpSelection;
    /* 0x034 */ C2dFrame *mpSlideFrame;
    /* 0x038 */ C2dObject *maapIconObjects[4][50];
    /* 0x358 */ void (*mapfRenderFunctions[4])(B22dObjectAnimatablesTag *);
    /* 0x368 */ CMenuGfxController mEntryController;

    // functions of this class with code in this build:
    // void CMenuGfxComponentCarousel::SetData(void *lpData)  [0x001D45F0]
    // void CMenuGfxComponentCarousel::Update(float lrTimestep)  [0x001D5BA0]
    // void CMenuGfxComponentCarousel::Reset()  [0x001D5D50]
    // void CMenuGfxComponentCarousel::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)  [0x001D5DF0]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentFlag.cpp
class CMenuGfxComponentFlag : public CMenuGfxComponent {  // size 0x018
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ C2dObject *mpFlagObject;
    /* 0x010 */ B22dObjectCustomDataFlagTag *mpFlagData;
    /* 0x014 */ int mbShow;

    // functions of this class with code in this build:
    // void CMenuGfxComponentFlag::RenderFlagObject(B22dObjectAnimatablesTag *lpData)  [0x00267480]
    // void CMenuGfxComponentFlag::SetData(void *lpData)  [0x00267AB0]
    // void CMenuGfxComponentFlag::Update(float lrTimestep)  [0x00267AE0]
    // void CMenuGfxComponentFlag::Reset()  [0x00267CF0]
    // void CMenuGfxComponentFlag::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x00267D30]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentGrandPrixSummary.cpp
class CMenuGfxComponentGrandPrixSummary : public CMenuGfxComponent {  // size 0x0E8
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ C2dFrame *mpRootFrame;
    /* 0x010 */ C2dFrame *mpClipFrame;
    /* 0x014 */ EStageID meStage;
    /* 0x018 */ C2dObject *mpBullet;
    /* 0x01C */ C2dObject *mapTableObjects[7][6];
    /* 0x0C4 */ int mnCurrentEntry;
    /* 0x0C8 */ float mrMoveTimer;
    /* 0x0CC */ int mbScrollDown;
    /* 0x0D0 */ CMenuGfxController mScrollController;

    // functions of this class with code in this build:
    // void CMenuGfxComponentGrandPrixSummary::Destroy()  [0x001D1530]
    // void CMenuGfxComponentGrandPrixSummary::InitObjects()  [0x001D1600]
    // void CMenuGfxComponentGrandPrixSummary::Create()  [0x001D1B80]
    // void CMenuGfxComponentGrandPrixSummary::SetData(void *lpData)  [0x001D1F00]
    // void CMenuGfxComponentGrandPrixSummary::Update(float lrTimestep)  [0x001D1F80]
    // void CMenuGfxComponentGrandPrixSummary::Reset()  [0x001D2160]
    // void CMenuGfxComponentGrandPrixSummary::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)  [0x001D21D0]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentHeading.cpp
class CMenuGfxComponentHeading : public CMenuGfxComponent {  // size 0x030
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ C2dObject *mpHeadingObject;
    /* 0x010 */ char *mpcString;
    /* 0x014 */ char *mpcNextString;
    /* 0x018 */ CMenuGfxController mController;

    // functions of this class with code in this build:
    // void CMenuGfxComponentHeading::SetData(void *lpData)  [0x001C4C80]
    // void CMenuGfxComponentHeading::Update(float lrTimestep)  [0x001C4CC0]
    // void CMenuGfxComponentHeading::Reset()  [0x001C4EE0]
    // void CMenuGfxComponentHeading::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x001C4F10]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentIntroMessage.cpp
class CMenuGfxComponentIntroMessage : public CMenuGfxComponent {  // size 0x120
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ C2dObject *mpTextObject;
    /* 0x010 */ C2dObject *mpCursorObject;
    /* 0x014 */ char *mpcString;
    /* 0x018 */ char macDisplayedString[255];
    /* 0x118 */ int mnDisplayChars;
    /* 0x11C */ float mrPulseTime;

    // functions of this class with code in this build:
    // void CMenuGfxComponentIntroMessage::SetData(void *lpData)  [0x00269020]
    // void CMenuGfxComponentIntroMessage::Update(float lrTimestep)  [0x002690B0]
    // void CMenuGfxComponentIntroMessage::Reset()  [0x00269450]
    // void CMenuGfxComponentIntroMessage::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x00269490]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentLessonInfo.cpp
class CMenuGfxComponentLessonInfo : public CMenuGfxComponent {  // size 0x01C
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ C2dObject *mpaTextObject[3];
    /* 0x018 */ ELessonID meLesson;

    // functions of this class with code in this build:
    // void CMenuGfxComponentLessonInfo::SetData(void *lpData)  [0x001FA040]
    // void CMenuGfxComponentLessonInfo::Update()  [0x001FA300]
    // void CMenuGfxComponentLessonInfo::Reset()  [0x001FA310]
    // void CMenuGfxComponentLessonInfo::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x001FA360]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentLessonIntroMessage.cpp
class CMenuGfxComponentLessonIntroMessage : public CMenuGfxComponent {  // size 0x010
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ C2dObject *mpTextObject;

    // functions of this class with code in this build:
    // void CMenuGfxComponentLessonIntroMessage::SetData(void *lpData)  [0x0027AAE0]
    // void CMenuGfxComponentLessonIntroMessage::Update()  [0x0027AD00]
    // void CMenuGfxComponentLessonIntroMessage::Reset()  [0x0027ADC0]
    // void CMenuGfxComponentLessonIntroMessage::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x0027ADE0]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentLoading.cpp
class CMenuGfxComponentLoading : public CMenuGfxComponent {  // size 0x098
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ C2dObject *mapObjects[34];
    /* 0x094 */ float mrCurrentPos;

    // functions of this class with code in this build:
    // void CMenuGfxComponentLoading::SetData(void *lpData)  [0x0027B090]
    // void CMenuGfxComponentLoading::Update(float lrTimestep)  [0x0027B4F0]
    // void CMenuGfxComponentLoading::Reset()  [0x0027B650]
    // void CMenuGfxComponentLoading::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x0027B680]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentMpeg.cpp
class CMenuGfxComponentMpeg : public CMenuGfxComponent {  // size 0x0B8
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ C2dObject *mapMpegObjects[40];
    /* 0x0AC */ C2dFrame *mpRootFrame;
    /* 0x0B0 */ CGTMpegImage *mpMpegImage;
    /* 0x0B4 */ float mnNumObjects;

    // functions of this class with code in this build:
    // void CMenuGfxComponentMpeg::SetData(void *lpData)  [0x0027E2A0]
    // void CMenuGfxComponentMpeg::Update()  [0x0027E2D0]
    // void CMenuGfxComponentMpeg::Reset()  [0x0027E580]
    // void CMenuGfxComponentMpeg::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)  [0x0027E5B0]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentNameEntryText.cpp
class CMenuGfxComponentNameEntryText : public CMenuGfxComponent {  // size 0x024
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ C2dObject *mpTextObject;
    /* 0x010 */ C2dObject *mapObjects[5];

    // functions of this class with code in this build:
    // void CMenuGfxComponentNameEntryText::_RenderNameEntryObject(B22dObjectAnimatablesTag *lpData)  [0x001E9660]
    // void CMenuGfxComponentNameEntryText::SetData(void *lpData)  [0x001E9910]
    // void CMenuGfxComponentNameEntryText::Update()  [0x001E9C80]
    // void CMenuGfxComponentNameEntryText::Reset()  [0x001E9C90]
    // void CMenuGfxComponentNameEntryText::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x001E9CC0]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentPanel.cpp
class CMenuGfxComponentPanel : public CMenuGfxComponent {  // size 0x1CC
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ CMenuPanel *mapPanel[2];
    /* 0x014 */ C2dFrame *mpPanelFrame;
    /* 0x018 */ C2dObject *maapObjects[2][27];
    /* 0x0F0 */ CMenuGfxController maControllers[3];
    /* 0x138 */ char macHeadingString[32];
    /* 0x158 */ char maacBuiltStrings[3][32];
    /* 0x1B8 */ char *mapacStrings[5];

    // functions of this class with code in this build:
    // void CMenuGfxComponentPanel::GetTrackSelectText()  [0x0025E1C0]
    // EMenuRaster CMenuGfxComponentPanel::GetMedalTargetCrashTextAndColour(RwRGBAReal **lppOutColour)  [0x0025E510]
    // EMenuRaster CMenuGfxComponentPanel::GetMedalTargetLessonTextAndColour(RwRGBAReal **lppOutColour, int lbAward)  [0x0025E610]
    // void CMenuGfxComponentPanel::MakeNumberString(char *lpacOutString, float lrNumber)  [0x0025E830]
    // void CMenuGfxComponentPanel::InitObjects(unsigned int lunPanel)  [0x0025E950]
    // void CMenuGfxComponentPanel::CreatePanelObjects(unsigned int lunPanel)  [0x00260DC0]
    // void CMenuGfxComponentPanel::SetData(void *lpData)  [0x00260EC0]
    // void CMenuGfxComponentPanel::Update(float lrTimestep)  [0x00261250]
    // void CMenuGfxComponentPanel::Reset()  [0x00261460]
    // void CMenuGfxComponentPanel::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)  [0x002614A0]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentPressStart.cpp
class CMenuGfxComponentPressStart : public CMenuGfxComponent {  // size 0x02C
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ C2dObject *mpPressStartObject;
    /* 0x010 */ C2dObject *mpLogoObject;
    /* 0x014 */ C2dFrame *mpRootFrame;
    /* 0x018 */ RwRGBAReal mrColour;
    /* 0x028 */ float mrTime;

    // functions of this class with code in this build:
    // void CMenuGfxComponentPressStart::SetData(void *lpData)  [0x0027E5E0]
    // void CMenuGfxComponentPressStart::Update(float lrTimestep)  [0x0027E660]
    // void CMenuGfxComponentPressStart::Reset()  [0x0027E8D0]
    // void CMenuGfxComponentPressStart::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)  [0x0027E900]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentProfileView.cpp
class CMenuGfxComponentProfileView : public CMenuGfxComponent {  // size 0x330
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ C2dFrame *mpRootFrame;
    /* 0x010 */ C2dFrame *mpClipFrame;
    /* 0x014 */ C2dObject *mapTableObjects[27][4];
    /* 0x1C4 */ int mnCurrentEntry;
    /* 0x1C8 */ float mrMoveTimer;
    /* 0x1CC */ int mbScrollDown;
    /* 0x1D0 */ CMenuGfxController mScrollController;
    /* 0x1E8 */ float mrPosY;
    /* 0x1EC */ char macValueStrings[27][12];

    // functions of this class with code in this build:
    // void CMenuGfxComponentProfileView::Destroy()  [0x0027EFB0]
    // void CMenuGfxComponentProfileView::InitObjects()  [0x0027F060]
    // void CMenuGfxComponentProfileView::Create()  [0x00281380]
    // void CMenuGfxComponentProfileView::SetData(void *lpData)  [0x00281560]
    // void CMenuGfxComponentProfileView::Update(float lrTimestep)  [0x002815D0]
    // void CMenuGfxComponentProfileView::Reset()  [0x00281780]
    // void CMenuGfxComponentProfileView::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)  [0x00281820]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentReplayR.cpp
class CMenuGfxComponentReplayR : public CMenuGfxComponent {  // size 0x014
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ C2dObject *mpReplayRObject;
    /* 0x010 */ float mrCurrentTime;

    // functions of this class with code in this build:
    // void CMenuGfxComponentReplayR::SetData()  [0x0027BDC0]
    // void CMenuGfxComponentReplayR::Update(float lrTimestep)  [0x0027BDD0]
    // void CMenuGfxComponentReplayR::Reset()  [0x0027BE20]
    // void CMenuGfxComponentReplayR::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x0027BE30]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentResultsTable.cpp
class CMenuGfxComponentResultsTable : public CMenuGfxComponent {  // size 0x32C
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ unsigned int munNumTables;
    /* 0x010 */ CComponentTable maComponentTables[1];

    // functions of this class with code in this build:
    // void CMenuGfxComponentResultsTable::SetData(void *lpData)  [0x001D7DB0]
    // void CMenuGfxComponentResultsTable::Update(float lrTimestep)  [0x001D7E90]
    // void CMenuGfxComponentResultsTable::Reset()  [0x001D7F90]
    // void CMenuGfxComponentResultsTable::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)  [0x001D7FF0]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentScreenAdjust.cpp
class CMenuGfxComponentScreenAdjust : public CMenuGfxComponent {  // size 0x020
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ int mbCreated;
    /* 0x010 */ C2dObject *mapObjects[4];

    // functions of this class with code in this build:
    // void CMenuGfxComponentScreenAdjust::SetData(void *lpData)  [0x0027AE00]
    // void CMenuGfxComponentScreenAdjust::Update()  [0x0027B030]
    // void CMenuGfxComponentScreenAdjust::Reset()  [0x0027B040]
    // void CMenuGfxComponentScreenAdjust::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x0027B070]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentSettingsList.cpp
class CMenuGfxComponentSettingsList : public CMenuGfxComponent {  // size 0x21C
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ CMenuSettingsList *mpSettingsList;
    /* 0x010 */ C2dFrame *mpRootFrame;
    /* 0x014 */ C2dFrame *mpBarFrame;
    /* 0x018 */ C2dFrame *mpBarClipFrame;
    /* 0x01C */ C2dObject *mpBar;
    /* 0x020 */ C2dObject *mapLines[2];
    /* 0x028 */ C2dFrame *mpFlashingFrame;
    /* 0x02C */ C2dObject *maapmFlashingObjects[2];
    /* 0x034 */ float mrFirstItemAlignMidY;
    /* 0x038 */ C2dObject *maapEntryObjects[3][4];
    /* 0x068 */ C2dObject *maapItemObjects[18][4];
    /* 0x188 */ C2dFrame *mpPanelClipFrame;
    /* 0x18C */ C2dFrame *mapItemFrames[4];
    /* 0x19C */ C2dObject *mpPanelObject;
    /* 0x1A0 */ float mrFlashTime;
    /* 0x1A4 */ CMenuGfxController mEntryController;
    /* 0x1BC */ CMenuGfxController maItemControllers[4];

    // functions of this class with code in this build:
    // void CMenuGfxComponentSettingsList::Destroy()  [0x0025BE30]
    // void CMenuGfxComponentSettingsList::UpdateFlashingButtons(float lrTimestep, int lbBarIsMoving)  [0x0025BFC0]
    // void CMenuGfxComponentSettingsList::InitObjects()  [0x0025C230]
    // void CMenuGfxComponentSettingsList::InitControllers()  [0x0025C930]
    // void CMenuGfxComponentSettingsList::Create()  [0x0025CAB0]
    // void CMenuGfxComponentSettingsList::SetData(void *lpData)  [0x0025D100]
    // void CMenuGfxComponentSettingsList::Update(float lrTimestep)  [0x0025D240]
    // void CMenuGfxComponentSettingsList::Reset()  [0x0025D530]
    // void CMenuGfxComponentSettingsList::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)  [0x0025D600]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentSplashScreen.cpp
class CMenuGfxComponentSplashScreen : public CMenuGfxComponent {  // size 0x030
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ C2dObject *mpSplashScreenObject;
    /* 0x010 */ C2dFrame *mpRootFrame;
    /* 0x014 */ RwRaster *mpCurrentRaster;
    /* 0x018 */ RwRaster *mpNextRaster;
    /* 0x01C */ float mrAlpha;
    /* 0x020 */ RwRGBAReal mrColour;

    // functions of this class with code in this build:
    // void CMenuGfxComponentSplashScreen::SetData(void *lpData)  [0x0027BE50]
    // void CMenuGfxComponentSplashScreen::Update(float lrTimestep)  [0x0027BE80]
    // void CMenuGfxComponentSplashScreen::Reset()  [0x0027C090]
    // void CMenuGfxComponentSplashScreen::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)  [0x0027C0C0]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentSubHeading.cpp
class CMenuGfxComponentSubHeading : public CMenuGfxComponent {  // size 0x01C
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ char *mpcString;
    /* 0x010 */ C2dObject *mpTextObject;
    /* 0x014 */ C2dObject *mpBarObject;
    /* 0x018 */ C2dObject *mpLineObject;

    // functions of this class with code in this build:
    // void CMenuGfxComponentSubHeading::SetData(void *lpData)  [0x001F9C80]
    // void CMenuGfxComponentSubHeading::Update()  [0x001F9FF0]
    // void CMenuGfxComponentSubHeading::Reset()  [0x001FA000]
    // void CMenuGfxComponentSubHeading::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)  [0x001FA020]
};

// declared in 3 file(s), e.g. gamesource\Menu\CMenuGfxComponentSummary.cpp
class CMenuGfxComponentSummary : public CMenuGfxComponent {  // size 0x858
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ C2dFrame *mpMasterFrame;
    /* 0x010 */ C2dFrame *mapSummaryItemFrame[15];
    /* 0x04C */ C2dObject *mapSummaryItemObjects[15];
    /* 0x088 */ int mbNewSummary;
    /* 0x08C */ float mrFade;
    /* 0x090 */ CMenuGfxComponentSummaryText maSummaryText[15];
    /* 0x414 */ CMenuGfxComponentSummaryImage maSummaryImage[15];
    /* 0x84C */ unsigned int munNumTexts;
    /* 0x850 */ unsigned int munNumImages;
    /* 0x854 */ unsigned int munNumItems;

    // functions of this class with code in this build:
    // void CMenuGfxComponentSummary::Create()  [0x001FA380]
    // C2dFrame *CMenuGfxComponentSummary::GetSummaryItemFrame(unsigned int lunItemID)  [0x001FA690]
    // C2dObject *CMenuGfxComponentSummary::GetSummaryItemObject(unsigned int lunItemID)  [0x001FA6A0]
    // void CMenuGfxComponentSummary::Update(float lrTimestep)  [0x001FA6B0]
    // void CMenuGfxComponentSummary::SetData(void *lpData)  [0x001FA820]
    // void CMenuGfxComponentSummary::Reset()  [0x001FAA80]
    // void CMenuGfxComponentSummary::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)  [0x001FAAD0]
};

// declared in 4 file(s), e.g. gamesource\Menu\CMenuGfxComponentSummary.cpp
class CMenuGfxComponentSummaryImage : public CMenuGfxComponentSummaryItem {  // size 0x048
public:
    // base CMenuGfxComponentSummaryItem at 0x000
    /* 0x02C */ EMenuRaster meRaster;
    /* 0x030 */ B22dTexAreaTag mTexArea;
    /* 0x040 */ RwV2d mSize;

    // functions of this class with code in this build:
    // void CMenuGfxComponentSummaryImage::SetImage(EMenuRaster leRaster, RwV2d *lpPos, RwV2d *lpAlignment, RwV2d *lpSize, int lnLayer, RwRGBAReal *lpColour, B22dTexAreaTag *lpTexArea)  [0x00269540]
    // void CMenuGfxComponentSummaryImage::Initialise()  [0x002695F0]
};

// declared in 2 file(s), e.g. gamesource\Menu\CMenuGfxComponentSummaryItalicText.cpp
class CMenuGfxComponentSummaryItalicText : public CMenuGfxComponentSummaryText {  // size 0x03C
public:
    // base CMenuGfxComponentSummaryText at 0x000

    // functions of this class with code in this build:
    // void CMenuGfxComponentSummaryItalicText::SetText(char *lpcString, RwV2d *lpPos, RwV2d *lpAlignment, float lrSize, int lnLayer, RwRGBAReal *lpColour, EMenuFont leFont, float lrWidth)  [0x0027AA60]
    // void CMenuGfxComponentSummaryItalicText::Initialise()  [0x0027AAD0]
};

// declared in 8 file(s), e.g. gamesource\Menu\CMenuGfxComponentSummary.cpp
class CMenuGfxComponentSummaryItem {  // size 0x02C
public:
    /* 0x004 */ ESummaryItem meItem;
    /* 0x008 */ RwV2d mPos;
    /* 0x010 */ RwV2d mAlignment;
    /* 0x018 */ int mnLayer;
    /* 0x01C */ RwRGBAReal mColour;

    // functions of this class with code in this build:
    // ESummaryItem CMenuGfxComponentSummaryItem::GetItemType()  [0x002694B0]
    // void CMenuGfxComponentSummaryItem::SetItem(ESummaryItem leItem, RwV2d *lpPos, RwV2d *lpAlignment, int lnLayer, RwRGBAReal *lpColour)  [0x002694C0]
    // void CMenuGfxComponentSummaryItem::Initialise()  [0x00269510]
};

// declared in 6 file(s), e.g. gamesource\Menu\CMenuGfxComponentSummary.cpp
class CMenuGfxComponentSummaryText : public CMenuGfxComponentSummaryItem {  // size 0x03C
public:
    // base CMenuGfxComponentSummaryItem at 0x000
    /* 0x02C */ char *mpcString;
    /* 0x030 */ float mrSize;
    /* 0x034 */ EMenuFont meFont;
    /* 0x038 */ float mrWidth;

    // functions of this class with code in this build:
    // void CMenuGfxComponentSummaryText::SetText(char *lpcString, RwV2d *lpPos, RwV2d *lpAlignment, float lrSize, int lnLayer, RwRGBAReal *lpColour, EMenuFont leFont, float lrWidth)  [0x00263B30]
    // void CMenuGfxComponentSummaryText::Initialise()  [0x00263BA0]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentTrackMap.cpp
class CMenuGfxComponentTrackMap : public CMenuGfxComponent {  // size 0x094
public:
    // base CMenuGfxComponent at 0x000
    /* 0x00C */ C2dFrame *mpRootFrame;
    /* 0x010 */ C2dFrame *mpFrame;
    /* 0x014 */ C2dObject *mpMapObject;
    /* 0x018 */ C2dObject *mpTrackObject;
    /* 0x01C */ C2dObject *mpGlowObject;
    /* 0x020 */ C2dObject *mpTrackIconObject;
    /* 0x024 */ C2dObject *mpReverseIconObject;
    /* 0x028 */ int mnCurrentTrack;
    /* 0x02C */ CMenuGfxController mCarouselController;
    /* 0x044 */ CMenuGfxController mXController;
    /* 0x05C */ CMenuGfxController mYController;
    /* 0x074 */ CMenuGfxController mZoomController;
    /* 0x08C */ CMenuCarousel *mpCurrentCarousel;
    /* 0x090 */ CMenuCarousel *mpNextCarousel;

    // functions of this class with code in this build:
    // void CMenuGfxComponentTrackMap::SetData(void *lpData)  [0x001CC4E0]
    // void CMenuGfxComponentTrackMap::Update(float lrTimestep)  [0x001CC510]
    // void CMenuGfxComponentTrackMap::Reset()  [0x001CCFD0]
    // void CMenuGfxComponentTrackMap::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)  [0x001CD140]
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CMenuGfxController {  // size 0x018
public:
    /* 0x000 */ float mrPosition;
    /* 0x004 */ float mrTarget;
    /* 0x008 */ float mrVelocity;
    /* 0x00C */ float mrAcceleration;
    /* 0x010 */ float mrDeceleration;
    /* 0x014 */ float mrMaxVelocity;
};

// declared in 31 file(s), e.g. gamesource\Hud\CHudComponentHealth.cpp
class CMenuImageData {  // size 0x010
public:
    /* 0x000 */ float mrSizeU;
    /* 0x004 */ float mrSizeV;
    /* 0x008 */ float mrTopLeftU;
    /* 0x00C */ float mrTopLeftV;
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CMenuManager {  // size 0x1EC4
public:
    /* 0x000 */ CMenuAudio mMenuAudio;
    /* 0x004 */ CMenuGfx mMenuGfx;
    /* 0x3B0 */ CMenuResultsScreens mMenuResultsScreens;
    /* 0x10D4 */ CMenuPad maPads[2];
    /* 0x118C */ CGTMpegManager mMpegManager;
    /* 0x1190 */ CGTMpegDecoder *mpMpegDecoder;
    /* 0x1194 */ CMenuPage *mapMenus[21];
    /* 0x11E8 */ CMenuPage *mpCurrentMenu;
    /* 0x11EC */ EMenuPage meCurrentMenuID;
    /* 0x11F0 */ int mnNextMenuID;
    /* 0x11F4 */ EMenuStatus meStatus;
    /* 0x11F8 */ int mnFrontEndEntryMenu;
    /* 0x11FC */ EGameMode meChosenGameMode;
    /* 0x1200 */ int manChosenCars[4];
    /* 0x1210 */ int mabChosenMT[4];
    /* 0x1220 */ int mnChosenTrack;
    /* 0x1224 */ EStageID meChosenStage;
    /* 0x1228 */ ERecordsID meChosenRecords;
    /* 0x122C */ EMemoryCardScreenID meChosenMemoryCardScreenID;
    /* 0x1230 */ ESettingsScreenID meChosenSettingsScreenID;
    /* 0x1234 */ unsigned int mxLoadingScreenFlags;
    /* 0x1238 */ ECrashGroup meChosenGroup;
    /* 0x123C */ ECrashZone meChosenZone;
    /* 0x1240 */ unsigned int munNumPlayers;
    /* 0x1244 */ int mbIsCustomSeriesChampionship;
    /* 0x1248 */ CCarData maCars[22];
    /* 0x1EA8 */ CFrontEndCarBuffer mFrontEndCarBuffer;
    /* 0x1EC0 */ int mnCurrentPlayer;
};

// declared in 97 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CMenuPad {  // size 0x05C
public:
    /* 0x000 */ float mrAnalogueX;
    /* 0x004 */ float mrAnalogueY;
    /* 0x008 */ CMenuPadButton maButtons[7];
};

// declared in 97 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CMenuPadButton {  // size 0x00C
public:
    /* 0x000 */ short mbGenerateEvent;
    /* 0x002 */ short mbPressed;
    /* 0x004 */ float mrPressure;
    /* 0x008 */ float mrRepeatTime;
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CMenuPage {  // size 0x004
public:
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageChampionshipSelect.cpp
class CMenuPageChampionshipSelect : public CMenuPage {  // size 0x2B0
public:
    // base CMenuPage at 0x000
    /* 0x004 */ CMenuCarousel mStageCarousel;
    /* 0x018 */ CMenuCarouselEntry maStageCarouselEntries[15];
    /* 0x144 */ CMenuCarousel mCustomSeriesCarousel;
    /* 0x158 */ CMenuCarouselEntry maCustomSeriesCarouselEntries[7];
    /* 0x1E4 */ CMenuCarousel mPromptCarousel;
    /* 0x1F8 */ CMenuCarouselEntry maPromptCarouselEntries[2];
    /* 0x220 */ CMenuCarousel *mpCurrentCarousel;
    /* 0x224 */ CMenuPanel mPanel;
    /* 0x244 */ CMenuComponentResultsTable mResultsTable;
    /* 0x268 */ CMenuResultsTableColumn maResultsTableColumns[1];
    /* 0x274 */ CMenuResultsTableRow maResultsTableRows[3];
    /* 0x298 */ CMenuResultsTableEntry maResultsTableEntrys[3];

    // functions of this class with code in this build:
    // void CMenuPageChampionshipSelect::UpdateStageDisplay()  [0x001D0310]
    // void CMenuPageChampionshipSelect::SetCarousel(CMenuCarousel *lpCarousel, CMenuCarouselEntry *lpaCarouselEntries, int lnFirstStage, int lnLastStage)  [0x001D04D0]
    // void CMenuPageChampionshipSelect::Update()  [0x001D06A0]
    // void CMenuPageChampionshipSelect::Leave()  [0x001D0EE0]
    // void CMenuPageChampionshipSelect::Enter()  [0x001D0EF0]
    // void CMenuPageChampionshipSelect::Reset()  [0x001D1000]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageCrashGroupSelect.cpp
class CMenuPageCrashGroupSelect : public CMenuPage {  // size 0x128
public:
    // base CMenuPage at 0x000
    /* 0x004 */ CMenuCarousel maGroupCarousel;
    /* 0x018 */ CMenuCarouselEntry maGroupEntries[5];
    /* 0x07C */ CMenuComponentResultsTable mResultsTable;
    /* 0x0A0 */ CMenuResultsTableColumn maResultsTableColumns[2];
    /* 0x0B8 */ CMenuResultsTableRow maResultsTableRows[4];
    /* 0x0E8 */ CMenuResultsTableEntry maResultsTableEntrys[8];

    // functions of this class with code in this build:
    // void CMenuPageCrashGroupSelect::UpdateDisplay()  [0x001F5520]
    // void CMenuPageCrashGroupSelect::Update()  [0x001F57F0]
    // void CMenuPageCrashGroupSelect::Leave()  [0x001F59F0]
    // void CMenuPageCrashGroupSelect::Enter()  [0x001F5A00]
    // void CMenuPageCrashGroupSelect::Reset()  [0x001F5B70]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageCrashPlayersSelect.cpp
class CMenuPageCrashPlayersSelect : public CMenuPage {  // size 0x058
public:
    // base CMenuPage at 0x000
    /* 0x004 */ CMenuSettingsList mPlayersList;
    /* 0x010 */ CMenuSettingsEntry maPlayersEntries[3];

    // functions of this class with code in this build:
    // void CMenuPageCrashPlayersSelect::Update()  [0x001E6870]
    // void CMenuPageCrashPlayersSelect::Leave()  [0x001E69B0]
    // void CMenuPageCrashPlayersSelect::Enter()  [0x001E69C0]
    // void CMenuPageCrashPlayersSelect::Reset()  [0x001E6A80]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageCredits.cpp
class CMenuPageCredits : public CMenuPage {  // size 0x40C
public:
    // base CMenuPage at 0x000
    /* 0x004 */ C2dFrame *mpAnimateFrame;
    /* 0x008 */ char macStringBuffer[1024];
    /* 0x408 */ char *mpcStringBuffer;

    // functions of this class with code in this build:
    // void CMenuPageCredits::CreateCreditText()  [0x0027E930]
    // void CMenuPageCredits::Update()  [0x0027ECE0]
    // void CMenuPageCredits::Leave()  [0x0027ED50]
    // void CMenuPageCredits::Enter()  [0x0027ED70]
    // void CMenuPageCredits::Reset()  [0x0027EE20]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageDrivingLessonSelect.cpp
class CMenuPageDrivingLessonSelect : public CMenuPage {  // size 0x0B0
public:
    // base CMenuPage at 0x000
    /* 0x004 */ CMenuCarousel mLessonCarousel;
    /* 0x018 */ CMenuCarouselEntry maLessonCarouselEntries[6];
    /* 0x090 */ CMenuPanel mPanel;

    // functions of this class with code in this build:
    // void CMenuPageDrivingLessonSelect::Update()  [0x001F3550]
    // void CMenuPageDrivingLessonSelect::Leave()  [0x001F3870]
    // void CMenuPageDrivingLessonSelect::Enter()  [0x001F3880]
    // void CMenuPageDrivingLessonSelect::Reset()  [0x001F3AD0]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageDrivingLessonSummary.cpp
class CMenuPageDrivingLessonSummary : public CMenuPage {  // size 0x004
public:
    // base CMenuPage at 0x000

    // functions of this class with code in this build:
    // void CMenuPageDrivingLessonSummary::Update()  [0x001FAEA0]
    // void CMenuPageDrivingLessonSummary::Leave()  [0x001FAEE0]
    // void CMenuPageDrivingLessonSummary::Enter()  [0x001FAF10]
    // void CMenuPageDrivingLessonSummary::Reset()  [0x001FB000]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageGetReady.cpp
class CMenuPageGetReady : public CMenuPage {  // size 0x00C
public:
    // base CMenuPage at 0x000
    /* 0x004 */ C2dObject *mpTextObject;
    /* 0x008 */ C2dFrame *mpScreenFrame;

    // functions of this class with code in this build:
    // void CMenuPageGetReady::Update()  [0x00216D50]
    // void CMenuPageGetReady::Leave()  [0x00216D90]
    // void CMenuPageGetReady::Enter()  [0x00216DD0]
    // void CMenuPageGetReady::Reset()  [0x00216F10]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageIntro.cpp
class CMenuPageIntro : public CMenuPage {  // size 0x004
public:
    // base CMenuPage at 0x000

    // functions of this class with code in this build:
    // void CMenuPageIntro::Update()  [0x00268D40]
    // void CMenuPageIntro::Leave()  [0x00268EB0]
    // void CMenuPageIntro::Enter()  [0x00268EF0]
    // void CMenuPageIntro::Reset()  [0x00269010]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageLoading.cpp
class CMenuPageLoading : public CMenuPage {  // size 0x004
public:
    // base CMenuPage at 0x000

    // functions of this class with code in this build:
    // void CMenuPageLoading::Update()  [0x0027B830]
    // void CMenuPageLoading::Leave()  [0x0027B840]
    // void CMenuPageLoading::Enter()  [0x0027B850]
    // void CMenuPageLoading::Reset()  [0x0027B910]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageMemoryCard.cpp
class CMenuPageMemoryCard : public CMenuPage {  // size 0x610
public:
    // base CMenuPage at 0x000
    /* 0x004 */ EMemoryCardPageState meMemoryCardPageState;
    /* 0x008 */ CMenuTableColumn mMenuColumn;
    /* 0x018 */ CMenuTableEntry maMenuEntries[3];
    /* 0x048 */ int mnNewEntry;
    /* 0x04C */ CMenuCarousel mProfileCarousel;
    /* 0x060 */ CMenuCarouselEntry maProfileCarouselEntries[3];
    /* 0x09C */ CMenuCarousel mPromptCarousel;
    /* 0x0B0 */ CMenuCarouselEntry maPromptCarouselEntries[2];
    /* 0x0D8 */ CMenuCarousel mNameEntryCarousel;
    /* 0x0EC */ CMenuCarouselEntry maNameEntryCarouselEntries[39];
    /* 0x3F8 */ char macNameEntryString[12];
    /* 0x404 */ char *mpacDefaultName;
    /* 0x408 */ CMenuCarousel *mpCurrentCarousel;
    /* 0x40C */ char macMessageString[256];
    /* 0x50C */ char maacProfileSummaryStrings[4][12];
    /* 0x53C */ EButtonListState meButtonListState;
    /* 0x540 */ CMenuComponentResultsTable mResultsTable;
    /* 0x564 */ CMenuResultsTableColumn maResultsTableColumns[2];
    /* 0x57C */ CMenuResultsTableRow maResultsTableRows[5];
    /* 0x5B8 */ CMenuResultsTableEntry maResultsTableEntrys[10];
    /* 0x608 */ EMenuConfirmButtons meConfirmButton;
    /* 0x60C */ EMenuBackButtons meBackButton;

    // functions of this class with code in this build:
    // void CMenuPageMemoryCard::SetState(EMemoryCardPageState leNewState)  [0x0020EEA0]
    // void CMenuPageMemoryCard::SetButtonList(EButtonListState leButtonListState)  [0x0020F570]
    // void CMenuPageMemoryCard::UpdateMenuItems()  [0x0020F640]
    // void CMenuPageMemoryCard::ShowNameEntryCarousel()  [0x0020F7D0]
    // void CMenuPageMemoryCard::ShowProfileCarousel()  [0x0020F980]
    // void CMenuPageMemoryCard::ShowProfileSummary()  [0x0020FAB0]
    // void CMenuPageMemoryCard::ShowMessage(EStringID leStringID)  [0x0020FDF0]
    // void CMenuPageMemoryCard::UpdateMemoryCardState()  [0x0020FF50]
    // void CMenuPageMemoryCard::Update()  [0x00210290]
    // void CMenuPageMemoryCard::Leave()  [0x002109E0]
    // void CMenuPageMemoryCard::Enter()  [0x002109F0]
    // void CMenuPageMemoryCard::Reset()  [0x00210C80]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageOnePlayerCrashZoneSelect.cpp
class CMenuPageOnePlayerCrashZoneSelect : public CMenuPage {  // size 0x164
public:
    // base CMenuPage at 0x000
    /* 0x004 */ CMenuCarousel maZoneCarousel;
    /* 0x018 */ CMenuCarouselEntry maZoneEntries[15];
    /* 0x144 */ CMenuPanel mPanel;

    // functions of this class with code in this build:
    // void CMenuPageOnePlayerCrashZoneSelect::Update()  [0x001F5B90]
    // void CMenuPageOnePlayerCrashZoneSelect::Leave()  [0x001F5E10]
    // void CMenuPageOnePlayerCrashZoneSelect::Enter()  [0x001F5E20]
    // void CMenuPageOnePlayerCrashZoneSelect::Reset()  [0x001F6120]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageOutro.cpp
class CMenuPageOutro : public CMenuPage {  // size 0x44C
public:
    // base CMenuPage at 0x000
    /* 0x004 */ char macStringBuffer[1024];
    /* 0x404 */ char *mpcStringBuffer;
    /* 0x408 */ C2dFrame *mapAnimateFrame[15];
    /* 0x444 */ float mrAnimationXControl;
    /* 0x448 */ float mrStartAnimationTime;

    // functions of this class with code in this build:
    // void CMenuPageOutro::UpdateAnimation(unsigned int lunFirstItem, unsigned int lunLastItem)  [0x00265110]
    // void CMenuPageOutro::SetCrosslineFaceOffMultiPlayer()  [0x00265320]
    // void CMenuPageOutro::SetCrosslinePursuitMultiPlayer()  [0x002656B0]
    // void CMenuPageOutro::SetCrosslineRaceMultiPlayer()  [0x00265A50]
    // void CMenuPageOutro::SetCrosslineRaceTimeOutMultiPlayer()  [0x00265DC0]
    // void CMenuPageOutro::SetCrosslineCrashFailedOnePlayer()  [0x00266160]
    // void CMenuPageOutro::SetCrosslineCrashSuccessfulOnePlayer()  [0x00266300]
    // void CMenuPageOutro::SetCrosslineTimeAttackOnePlayer()  [0x00266610]
    // void CMenuPageOutro::SetCrosslinePursuitOnePlayer()  [0x00266890]
    // void CMenuPageOutro::SetCrosslineFaceOffOnePlayer()  [0x00266A70]
    // void CMenuPageOutro::SetCrosslineChampionship()  [0x00266C30]
    // void CMenuPageOutro::SetCrosslineDriving101Failed()  [0x00266E20]
    // void CMenuPageOutro::Update()  [0x00266FB0]
    // void CMenuPageOutro::Leave()  [0x00267010]
    // void CMenuPageOutro::Enter()  [0x00267050]
    // void CMenuPageOutro::Reset()  [0x00267440]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPagePause.cpp
class CMenuPagePause : public CMenuPage {  // size 0x204
public:
    // base CMenuPage at 0x000
    /* 0x004 */ CMenuTableColumn mMainColumn;
    /* 0x014 */ CMenuTableEntry maMainEntries[6];
    /* 0x074 */ char *mapacGenericBoolStrings[3];
    /* 0x080 */ char *mapacControllerButtonsStrings[3];
    /* 0x08C */ CMenuSettingsList mOptionsList;
    /* 0x098 */ CMenuSettingsEntry maOptionsEntries[4];
    /* 0x0F8 */ CMenuTableColumn mFinishColumn;
    /* 0x108 */ CMenuTableEntry maFinishEntries[4];
    /* 0x148 */ CMenuTableColumn *mpCurrentColumn;
    /* 0x14C */ int mnStringOffset;
    /* 0x150 */ CControllerMapping *mpController;
    /* 0x154 */ unsigned int munController;
    /* 0x158 */ CMenuCarousel mPromptCarousel;
    /* 0x16C */ CMenuCarouselEntry maPromptCarouselEntries[2];
    /* 0x194 */ CMenuComponentResultsTable mResultsTable;
    /* 0x1B8 */ CMenuResultsTableColumn maResultsTableColumns[1];
    /* 0x1C4 */ CMenuResultsTableRow maResultsTableRows[3];
    /* 0x1E8 */ CMenuResultsTableEntry maResultsTableEntrys[3];
    /* 0x200 */ unsigned int munScreen;

    // functions of this class with code in this build:
    // int CMenuPagePause::ButtonConfirm()  [0x001C9CA0]
    // void CMenuPagePause::SetRacePosition(int lnRacePosition)  [0x001CA3E0]
    // int CMenuPagePause::SetConfirmationScreen()  [0x001CA4C0]
    // void CMenuPagePause::Update()  [0x001CA680]
    // void CMenuPagePause::Leave()  [0x001CAD30]
    // void CMenuPagePause::Enter()  [0x001CAD60]
    // void CMenuPagePause::Reset()  [0x001CBCC0]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageProfileView.cpp
class CMenuPageProfileView : public CMenuPage {  // size 0x004
public:
    // base CMenuPage at 0x000

    // functions of this class with code in this build:
    // void CMenuPageProfileView::Update()  [0x0027EE60]
    // void CMenuPageProfileView::Leave()  [0x0027EEC0]
    // void CMenuPageProfileView::Enter()  [0x0027EED0]
    // void CMenuPageProfileView::Reset()  [0x0027EFA0]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageRecords.cpp
class CMenuPageRecords : public CMenuPage {  // size 0x408
public:
    // base CMenuPage at 0x000
    /* 0x004 */ CMenuCarousel mTrackCarousel;
    /* 0x018 */ CMenuCarouselEntry maTrackCarouselEntries[30];
    /* 0x270 */ CMenuCarousel mCrashCarousel;
    /* 0x284 */ CMenuCarouselEntry maCrashCarouselEntries[15];
    /* 0x3B0 */ CMenuTableColumn mTRPanelColumn;
    /* 0x3C0 */ CMenuTableEntry maTRPanelEntries[4];
    /* 0x400 */ CMenuCarousel *mpCurrentCarousel;
    /* 0x404 */ CMenuTableColumn *mpCurrentColumn;

    // functions of this class with code in this build:
    // void CMenuPageRecords::Update()  [0x001F4BB0]
    // void CMenuPageRecords::Leave()  [0x001F5110]
    // void CMenuPageRecords::Enter()  [0x001F5120]
    // void CMenuPageRecords::Reset()  [0x001F5340]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageResults.cpp
class CMenuPageResults : public CMenuPage {  // size 0x010
public:
    // base CMenuPage at 0x000
    /* 0x004 */ EMenuResultsScreenID *mpScreenIDs;
    /* 0x008 */ unsigned int munScreen;
    /* 0x00C */ int mbDisplayOn;

    // functions of this class with code in this build:
    // void CMenuPageResults::Update()  [0x001D5E20]
    // void CMenuPageResults::Leave()  [0x001D6180]
    // void CMenuPageResults::Enter()  [0x001D6190]
    // void CMenuPageResults::Reset()  [0x001D6340]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageSettings.cpp
class CMenuPageSettings : public CMenuPage {  // size 0x254
public:
    // base CMenuPage at 0x000
    /* 0x004 */ CMenuSettingsList *mpMenuSettingsList;
    /* 0x008 */ CMenuSettingsList mControlsList;
    /* 0x014 */ CMenuSettingsEntry maControlsEntries[2];
    /* 0x044 */ CMenuSettingsList mControllerList;
    /* 0x050 */ CMenuSettingsEntry maControllerEntries[2];
    /* 0x080 */ char *mapacControllerButtonsStrings[3];
    /* 0x08C */ CMenuSettingsList mAudioList;
    /* 0x098 */ CMenuSettingsEntry maAudioEntries[3];
    /* 0x0E0 */ char *mapacAudioOutputStrings[4];
    /* 0x0F0 */ CMenuSettingsList mMusicPlayerList;
    /* 0x0FC */ CMenuSettingsEntry maMusicPlayerEntries[2];
    /* 0x12C */ char *mapacMusicPlayerTrackStrings[11];
    /* 0x158 */ char *mapacMusicPlayerOutputStrings[5];
    /* 0x16C */ CMenuSettingsList mDisplayList;
    /* 0x178 */ CMenuSettingsEntry maDisplayEntries[2];
    /* 0x1A8 */ char *mapacDisplayVideoOutputStrings[3];
    /* 0x1B4 */ char *mapacDisplayAspectRatioStrings[3];
    /* 0x1C0 */ CMenuSettingsList mDisplayAdjustList;
    /* 0x1CC */ CMenuSettingsEntry maDisplayAdjustEntries[1];
    /* 0x1E4 */ int mnScreenOriginalOffsetX;
    /* 0x1E8 */ int mnScreenOriginalOffsetY;
    /* 0x1EC */ int mnScreenOffsetX;
    /* 0x1F0 */ int mnScreenOffsetY;
    /* 0x1F4 */ CMenuSettingsList mCheatsList;
    /* 0x200 */ CMenuSettingsEntry maCheatsEntries[3];
    /* 0x248 */ char *mapacGenericBoolStrings[3];

    // functions of this class with code in this build:
    // unsigned int CMenuPageSettings::ButtonConfirm()  [0x0025ABD0]
    // void CMenuPageSettings::StoreSettings()  [0x0025ACB0]
    // void CMenuPageSettings::Update()  [0x0025AE60]
    // void CMenuPageSettings::Leave()  [0x0025B440]
    // void CMenuPageSettings::Enter()  [0x0025B450]
    // void CMenuPageSettings::Reset()  [0x0025B980]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageSplashScreens.cpp
class CMenuPageSplashScreens : public CMenuPage {  // size 0x014
public:
    // base CMenuPage at 0x000
    /* 0x004 */ float mrTime;
    /* 0x008 */ int mnCurrentScreen;
    /* 0x00C */ CGTFile *mpMpegFile;
    /* 0x010 */ CGTMpegImage *mpMpegImage;

    // functions of this class with code in this build:
    // void CMenuPageSplashScreens::Update(float lrTimestep)  [0x0027C0F0]
    // void CMenuPageSplashScreens::Leave()  [0x0027C500]
    // void CMenuPageSplashScreens::Enter()  [0x0027C520]
    // void CMenuPageSplashScreens::Reset()  [0x0027C580]
};

// declared in 6 file(s), e.g. gamesource\Menu\CMenuGfxComponentButtonList.cpp
class CMenuPanel {  // size 0x020
public:
    /* 0x000 */ B22dBoxTag mPanelBox;
    /* 0x010 */ EPanelType meType;
    /* 0x014 */ unsigned int mnFlags;
    /* 0x018 */ class {  // size 0x004
    public:
        /* 0x000 */ EStageID meStageID;
        /* 0x000 */ CCarData *mpCarData;
        /* 0x000 */ CDrivingLesson *mpDrivingLesson;
        /* 0x000 */ ECrashZone meCrashZone;
        /* 0x000 */ CTrackData *mpTrackData;
    } uData;
    /* 0x01C */ CMenuPanel *mpSecondPanel;
};

// declared in 57 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CMenuResultsCarData {  // size 0x004
public:
    /* 0x000 */ unsigned short munCarID16;
    /* 0x002 */ unsigned short munColour16;
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CMenuResultsScreens {  // size 0xD24
public:
    /* 0x000 */ char macStringBuffer[1024];
    /* 0x400 */ char *mpcStringBuffer;
    /* 0x404 */ CMenuComponentResultsTable mResultsTable;
    /* 0x428 */ CMenuResultsTableColumn maResultsTableColumns[8];
    /* 0x488 */ CMenuResultsTableRow maResultsTableRows[16];
    /* 0x548 */ CMenuResultsTableEntry maResultsTableEntrys[128];
    /* 0x948 */ CMenuCarousel mNameEntryCarousel;
    /* 0x95C */ CMenuCarouselEntry maNameEntryCarouselEntries[39];
    /* 0xC68 */ char macNameEntryString[12];
    /* 0xC74 */ char *mpacDefaultName;
    /* 0xC78 */ CMenuCarousel mYesNoCarousel;
    /* 0xC8C */ CMenuCarouselEntry maYesNoCarouselEntries[2];
    /* 0xCB4 */ CMenuTableColumn mNextRaceColumn;
    /* 0xCC4 */ CMenuTableEntry maNextRaceEntries[4];
    /* 0xD04 */ EMenuResultsScreenID meScreenID;
    /* 0xD08 */ EMenuResultsScreenID meHiddenScreenID;
    /* 0xD0C */ EMenuStatus meReturnStatus;
    /* 0xD10 */ EMenuConfirmButtons meConfirmButton;
    /* 0xD14 */ EMenuBackButtons meBackButton;
    /* 0xD18 */ EMenuTestButtons meTestButton;
    /* 0xD1C */ EAutoSaveState meAutoSaveState;
    /* 0xD20 */ int mbHidden;

    // functions of this class with code in this build:
    // int CMenuResultsScreens::AutoSaveUpdate()  [0x001EAE10]
    // void CMenuResultsScreens::SetAutoSaveState(EAutoSaveState leAutoSaveState)  [0x001EB220]
    // void CMenuResultsScreens::UpdateLastLessonDisplay()  [0x001EB8C0]
    // void CMenuResultsScreens::SetLastCrashOnePlayer()  [0x001EB9F0]
    // void CMenuResultsScreens::SetLastTimeAttack()  [0x001EBD10]
    // void CMenuResultsScreens::SetLastChampionship(EStringID leHeadingStringID)  [0x001EC0F0]
    // void CMenuResultsScreens::SetLastSingleOnePlayer(int lbFinished)  [0x001EC610]
    // void CMenuResultsScreens::SetNextRaceGP()  [0x001ECB30]
    // void CMenuResultsScreens::SetValueRecords(int lbIsScoreValues)  [0x001ECEA0]
    // void CMenuResultsScreens::SetRecordsTableRecords(CRecordsTable *lpRecordsTable, int lbFrontEnd, int lbIsMoneyValues)  [0x001ED7C0]
    // void CMenuResultsScreens::SetTrackRecords()  [0x001EDDE0]
    // void CMenuResultsScreens::SetNewRecord(unsigned int lunPlayer)  [0x001EEBF0]
    // void CMenuResultsScreens::SetStandingsCrashMultiPlayer()  [0x001EEE70]
    // void CMenuResultsScreens::SetStandingsGPFrontEnd()  [0x001EF220]
    // void CMenuResultsScreens::SetStandingsTwoPlayer()  [0x001EF5E0]
    // void CMenuResultsScreens::SetStandingsGP()  [0x001EFA00]
    // void CMenuResultsScreens::SetResultDrivingLesson()  [0x001EFF90]
    // void CMenuResultsScreens::SetResultCrashMultiPlayer()  [0x001F0380]
    // void CMenuResultsScreens::SetResultTwoPlayer(int lbDisplayLapTime, int lbFinished, EStringID lePlayer1StringID, EStringID lePlayer2StringID)  [0x001F06C0]
    // void CMenuResultsScreens::SetResultOnePlayer(int lbDisplayLapTime, int lbFinished)  [0x001F0D60]
    // char *CMenuResultsScreens::GetCarNameString(unsigned int lunCarIndex)  [0x001F1260]
    // unsigned int CMenuResultsScreens::GetCommaNumberString(char *lpcDest, unsigned int lunNum)  [0x001F1360]
    // void CMenuResultsScreens::ClearScreen(int lbFrontEnd)  [0x001F1460]
    // int CMenuResultsScreens::Update()  [0x001F1540]
    // int CMenuResultsScreens::ShowScreen(int lbFrontEnd)  [0x001F1BB0]
    // void CMenuResultsScreens::HideScreen()  [0x001F1C00]
    // int CMenuResultsScreens::SetScreen(EMenuResultsScreenID leScreenID, int lbFrontEnd)  [0x001F1CE0]
    // void CMenuResultsScreens::Initialise()  [0x001F2F70]
};

// declared in 57 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CMenuResultsTableColumn {  // size 0x00C
public:
    /* 0x000 */ float mrWidth;
    /* 0x004 */ unsigned int munAlign;
    /* 0x008 */ unsigned int munType;
};

// declared in 57 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CMenuResultsTableEntry {  // size 0x008
public:
    /* 0x000 */ class {  // size 0x004
    public:
        /* 0x000 */ CMenuResultsCarData mMenuResultsCarData;
        /* 0x000 */ char *mpacText;
        /* 0x000 */ unsigned int munCountValue;
    } uData;
    /* 0x004 */ unsigned int mxFlags;
};

// declared in 57 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CMenuResultsTableRow {  // size 0x00C
public:
    /* 0x000 */ unsigned int munAlign;
    /* 0x004 */ float mrHeight;
    /* 0x008 */ unsigned int munType;
};

// declared in 4 file(s), e.g. gamesource\Menu\CMenuGfxComponentSettingsList.cpp
class CMenuSettingsEntry {  // size 0x018
public:
    /* 0x000 */ char *mpacString;
    /* 0x004 */ ESettingsType meType;
    /* 0x008 */ int mnFlags;
    /* 0x00C */ char **mpapacTextCarousel;
    /* 0x010 */ int mnCurrentItem;
    /* 0x014 */ int mnNumItems;

    // functions of this class with code in this build:
    // void CMenuSettingsEntry::Initialise(char *lpacString, ESettingsType leType, char **lpapacTextCarousel)  [0x001CBC20]
};

// declared in 4 file(s), e.g. gamesource\Menu\CMenuGfxComponentSettingsList.cpp
class CMenuSettingsList {  // size 0x00C
public:
    /* 0x000 */ int mnNumEntries;
    /* 0x004 */ CMenuSettingsEntry *mpaEntries;
    /* 0x008 */ int mnCurrentEntry;
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CMenuTableColumn {  // size 0x010
public:
    /* 0x000 */ int mnNumEntries;
    /* 0x004 */ CMenuTableEntry *maEntries;
    /* 0x008 */ int mnCurrentEntry;
    /* 0x00C */ int mnFlags;
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CMenuTableEntry {  // size 0x010
public:
    /* 0x000 */ char *mpcString;
    /* 0x004 */ int mnFlags;
    /* 0x008 */ void *mpData1;
    /* 0x00C */ void *mpData2;

    // functions of this class with code in this build:
    // void CMenuTableEntry::Initialise(char *lpcString)  [0x001F2F50]
};

// declared in 81 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class CModel {  // size 0x004
public:
    /* 0x000 */ RpClump *mpClump;
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CMPEG {  // size 0x001
public:
};

// declared in 3 file(s), e.g. gamesource\Menu\CMenuPageSplashScreens.cpp
class CMusic {  // size 0x090
public:
    /* 0x000 */ float mrMainCurrentVolume;
    /* 0x004 */ float mrBoostingCurrentVolume;
    /* 0x008 */ float mrAmbientCurrentVolume;
    /* 0x00C */ float mrIntroCurrentVolume;
    /* 0x010 */ float mrMainDesiredVolume;
    /* 0x014 */ float mrBoostingDesiredVolume;
    /* 0x018 */ float mrAmbientDesiredVolume;
    /* 0x01C */ float mrIntroDesiredVolume;
    /* 0x020 */ float mrMusicMasterVolume;
    /* 0x024 */ int mnMusicStreamID;
    /* 0x028 */ int mnIntroStreamID;
    /* 0x02C */ int mnSpeechStreamID;
    /* 0x030 */ RwaSPU2Wave mRWAWave;
    /* 0x08C */ EMusicStatus meStatus;

    // functions of this class with code in this build:
    // void CMusic::RegisterDBValues()  [0x00200650]
    // void CMusic::Update()  [0x00200690]
    // void CMusic::SetStatus(EMusicStatus leStatus)  [0x00200B40]
    // void CMusic::Resume()  [0x00200C70]
    // void CMusic::Pause()  [0x00200CC0]
    // void CMusic::PlayIntro()  [0x00200D10]
    // void CMusic::PlayMusic()  [0x00200E60]
    // void CMusic::Stop()  [0x00201050]
    // void CMusic::Reset()  [0x00201160]
    // void CMusic::Shutdown()  [0x00201410]
    // void CMusic::Setup()  [0x002014D0]
    // void CMusic::Init()  [0x002014E0]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentNameEntryText.cpp
class CNameEntryCustomObjectData {  // size 0x014
public:
    /* 0x000 */ C2dFont *mpFont;
    /* 0x004 */ unsigned char *mpcString;
    /* 0x008 */ float mrWidth;
    /* 0x00C */ RwV2d mOffset;
};

// declared in 1 file(s), e.g. gamesource\Race\CStreamedWorld.cpp
class CollisionCallbackData {  // size 0x020
public:
    /* 0x000 */ int type;
    /* 0x004 */ void *pData;
    /* 0x008 */ int (*fpSphereCallback)(SRCCollSphere *, SRCCollisionTriangle *, void *);
    /* 0x00C */ SRCCollSphere *pSphere;
    /* 0x010 */ int (*fpLineCallback)(SRCCollLine *, SRCCollisionTriangle *, void *);
    /* 0x014 */ SRCCollLine *pLine;
    /* 0x018 */ SRCCollisionSector *pCollisionSector;
    /* 0x01C */ int UNUSED;
};

// declared in 1 file(s), e.g. gamesource\Race\CStreamedWorld.cpp
class ColStack {  // size 0x020
public:
    /* 0x000 */ RwV3d start;
    /* 0x00C */ unsigned int type;
    /* 0x010 */ RwV3d end;
    /* 0x01C */ unsigned int index;
};

// declared in 6 file(s), e.g. gamesource\Menu\CMenuGfxComponentPanel.cpp
class COnePlayerCRASH : public COnePlayerGameMode {  // size 0x0A0
public:
    // base COnePlayerGameMode at 0x000
    /* 0x03C */ CCrashForCashData mCrashForCashData;
    /* 0x084 */ EOnePlayerCrashState meState;
    /* 0x088 */ unsigned char mun8PausedFramesLeft;
    /* 0x08C */ float mrLastResumeTime;
    /* 0x090 */ unsigned int munNumCrashingCars;
    /* 0x094 */ float mrStartedCrashTime;
    /* 0x098 */ int mbPausedForCrash;
    /* 0x09C */ int mbStartedToCrash;
};

// declared in 6 file(s), e.g. gamesource\Menu\CMenuGfxComponentPanel.cpp
class COnePlayerGameMode : public CGameMode {  // size 0x03C
public:
    // base CGameMode at 0x000
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class CornerData {  // size 0x010
public:
    /* 0x000 */ unsigned short mnLaneIndex16;
    /* 0x002 */ unsigned short mnStartIndex16;
    /* 0x004 */ unsigned short mnApexIndex16;
    /* 0x006 */ unsigned short mnEndIndex16;
    /* 0x008 */ unsigned short mnRadius16;
    /* 0x00A */ unsigned short mnPrefLaneChange16;
    /* 0x00C */ unsigned char mnDriftValue8;
    /* 0x00D */ unsigned char mxCornerDirection8;
    /* 0x00E */ unsigned char mbSquareCorner8;
    /* 0x00F */ unsigned char mPad;
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CParticleManager {  // size 0xBC0
public:
    /* 0x000 */ GsPS2Pipeline *mpParticlePipeline;
    /* 0x010 */ CParticles maParticleBatches[14];
    /* 0xA90 */ CRandom mRandom;
    /* 0xB80 */ float marCounters[12];
    /* 0xBB0 */ float mrWindAngleX;
    /* 0xBB4 */ float mrWindAngleZ;

    // functions of this class with code in this build:
    // void CParticleManager::DoGlass(CTrafficVehicle *lpTraf)  [0x001F7D70]
    // void CParticleManager::DoGlass(CRaceCar *lpCar)  [0x001F8110]
    // void CParticleManager::DoEnginePop(CRaceCar *lpCar)  [0x001F8530]
    // void CParticleManager::SpawnDebris(RwV3d *lpPos, RwV3d *lpDirection, float lrForce, float lrRed, float lrGreen, float lrBlue)  [0x001F8780]
    // void CParticleManager::SpawnParticlesAlongLine(EParticleType leType, RwV3d *lpPos, RwV3d *lpDirection, float lrLength, float lrRed, float lrGreen, float lrBlue)  [0x001F8D80]
    // void CParticleManager::Render()  [0x001F91A0]
    // void CParticleManager::EndUpdate()  [0x001F9360]
    // void CParticleManager::BeginUpdate()  [0x001F93C0]
    // int CParticleManager::Reset()  [0x001F9470]
    // int CParticleManager::Setup()  [0x001F9570]
    // void CParticleManager::Init()  [0x001F95F0]
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CParticles {  // size 0x0C0
public:
    /* 0x000 */ B2ParticlesVUDataTag mVUData;
    /* 0x070 */ u_long128 mAlpha_1;
    /* 0x080 */ int mbZWrite;
    /* 0x084 */ float mrMaxLifeTime;
    /* 0x088 */ float mrMinLifeTime;
    /* 0x08C */ float mrMinNearClip;
    /* 0x090 */ GsPS2RenderObject mRenderObject;
    /* 0x0A0 */ float mrLastSpawnTime;
    /* 0x0A4 */ RwRaster *mpRaster;
    /* 0x0A8 */ B2ParticleTag *maParticles;
    /* 0x0AC */ int mnNumParticles;
    /* 0x0B0 */ int mnNextParticle;
    /* 0x0B4 */ float mrFullness;

    // functions of this class with code in this build:
    // void CParticles::Render(GsPS2Pipeline *lpPipeline)  [0x001F9670]
    // void CParticles::Update(float lrTimestep)  [0x001F9890]
    // void CParticles::Init(GsPS2Pipeline *lpPipeline, B2ParticleBatchParamsTag *lpParams)  [0x001F9A80]
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class CPatternGenerator {  // size 0x001
public:
};

// declared in 79 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CPlayer {  // size 0x018
public:
    /* 0x000 */ CControllerMapping *mpControllerMapping;
    /* 0x004 */ CPlayerCar *mpCar;
    /* 0x008 */ CCamera *mpCamera;
    /* 0x00C */ int mPlayerIndex;
    /* 0x010 */ EPlayerStatus meStatus;
    /* 0x014 */ EPlayerStatus meLastStatus;
};

// declared in 56 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp  // VARIANT 1 of 2
class CPlayerCar : public CAICar {  // size 0x5F40
public:
    // base CAICar at 0x000
    /* 0x4C80 */ CPlayerCarPhysics mPhysicsObject;
    /* 0x5F00 */ CPlayer *mpPlayer;
    /* 0x5F04 */ int mbPlayerRemoved;

    // functions of this class with code in this build:
    // RwMatrixTag *CPlayerCar::GetMatrix()  [0x00232ED0]
    // void CPlayerCar::DrawDebug()  [0x00232EE0]
    // void CPlayerCar::RemoveFromTrack()  [0x00232EF0]
    // void CPlayerCar::Update()  [0x00232F20]
    // int CPlayerCar::Shutdown()  [0x002340C0]
    // int CPlayerCar::ResetAfterCrash(int nodesAhead)  [0x00234140]
    // int CPlayerCar::Reset(RwV3d *startPos, RwV3d *startDir)  [0x00234450]
    // int CPlayerCar::Setup(int lnIndex, int lbIsFrontEnd)  [0x00234860]
    // void CPlayerCar::Init()  [0x002348F0]
};

// declared in 40 file(s), e.g. gamesource\Game\CSettings.cpp  // VARIANT 2 of 2
class CPlayerCar {  // size 0x000
public:
};

// declared in 56 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CPlayerCarPhysics : public CRaceCarPhysics {  // size 0x1280
public:
    // base CRaceCarPhysics at 0x000
    /* 0xDC0 */ CPlayerCar *mpPlayerCar;
    /* 0xDC4 */ CWrongWayWall mWrongWayWall;
    /* 0xDFC */ float mSteeringFinished;
    /* 0xE00 */ int mbCrashRamp;
    /* 0xE40 */ CacheFriendlyTriangle maRampTriangles[16];
    /* 0x1240 */ int mnNumRampTriangles;
    /* 0x1244 */ int mbHornDebounce;
    /* 0x1248 */ int mbDisableBoost;
};

// declared in 30 file(s), e.g. gamesource\Hud\CHudComponentBonus.cpp
class CPlaySoundParams {  // size 0x03C
public:
    /* 0x000 */ RwaSPU2Wave *m_Wave;
    /* 0x004 */ RwV3d m_Position;
    /* 0x010 */ RwV3d m_Velocity;
    /* 0x01C */ float m_Volume;
    /* 0x020 */ float m_MinDistance;
    /* 0x024 */ float m_MaxDistance;
    /* 0x028 */ float m_Random_Lower;
    /* 0x02C */ float m_Random_Upper;
    /* 0x030 */ float m_Pan;
    /* 0x034 */ ESoundPriority m_Priority;
    /* 0x038 */ unsigned int m_Looping : 1;  // bit offset 0
    /* 0x038 */ unsigned int m_Distorted : 1;  // bit offset 1
    /* 0x038 */ unsigned int m_Reverb : 1;  // bit offset 2
    /* 0x038 */ unsigned int m_RandomStartPos : 1;  // bit offset 3
    /* 0x038 */ unsigned int m_Padding : 28;  // bit offset 4

    // functions of this class with code in this build:
    // void *CPlaySoundParams::CPlaySoundParams()  [0x00279660]
};

// declared in 72 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CProfile {  // size 0x17C
public:
    /* 0x000 */ char macName[12];
    /* 0x00C */ char maacDefaultNames[4][12];
    /* 0x03C */ unsigned int maunPosTotals[4];
    /* 0x04C */ unsigned int maunCarTotals[22];
    /* 0x0A4 */ unsigned int maunTrackTotals[30];
    /* 0x11C */ unsigned int munTotalBurnouts;
    /* 0x120 */ CProfileRecord mRecordBurnoutChain;
    /* 0x128 */ CProfileRecord mRecordCombo;
    /* 0x130 */ float mrTotalDistance;
    /* 0x134 */ float mrTotalTime;
    /* 0x138 */ float mrTotalOncomming;
    /* 0x13C */ CProfileRecord mRecordOncomming;
    /* 0x144 */ float mrTotalAir;
    /* 0x148 */ CProfileRecord mRecordAir;
    /* 0x150 */ float mrTotalDrift;
    /* 0x154 */ CProfileRecord mRecordDrift;
    /* 0x15C */ unsigned int munTotalNearMisses;
    /* 0x160 */ unsigned int munTotalCrashes;
    /* 0x164 */ unsigned int munTotalCrashDamage;
    /* 0x168 */ CProfileRecord mRecordCrashDamage;
    /* 0x170 */ CProfileRecord mRecordCarsInCrash;
    /* 0x178 */ unsigned int munTimestamp;

    // functions of this class with code in this build:
    // unsigned int CProfile::_GetTime()  [0x001E24A0]
    // void CProfile::GetTimeAndDate(CTimeAndDate *lpTimeAndDateOut)  [0x0020E7F0]
    // void CProfile::Update()  [0x0020E930]
    // void CProfile::Timestamp()  [0x0020EB80]
    // void CProfile::Init()  [0x0020ED20]
};

// declared in 72 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CProfileRecord {  // size 0x008
public:
    /* 0x000 */ unsigned short munCar16;
    /* 0x002 */ unsigned short munTrack16;
    /* 0x004 */ UValue mValue;
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CProjectedShadow {  // size 0x010
public:
    /* 0x000 */ RwCamera *mpParallelCamera;
    /* 0x004 */ RwRaster *mpShadowRaster;
    /* 0x008 */ RwRGBA mRasterClearColour;
    /* 0x00C */ RwRaster *mpBlobbyRaster;
};

// declared in 82 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class CPropPhysics : public CCollidingBody {  // size 0x5C0
public:
    // base CCollidingBody at 0x000
    /* 0x5A0 */ RwV3d mScalar;
    /* 0x5AC */ float mrAge;
    /* 0x5B0 */ int mbNonCrashingProp;
    /* 0x5B4 */ EB2PropType mePropType;

    // functions of this class with code in this build:
    // void CPropPhysics::DoCrashWithWorldEffects()  [0x001D2200]
    // void CPropPhysics::DoCrashWithBodyEffects(CCollidingBody *lpCollidingBody)  [0x001D2290]
    // void CPropPhysics::Update(float lrTimeStep)  [0x001D22F0]
    // void CPropPhysics::Destroy()  [0x001D24A0]
    // void CPropPhysics::Shutdown()  [0x001D24B0]
    // void CPropPhysics::Reset()  [0x001D24C0]
    // void CPropPhysics::Setup()  [0x001D2520]
    // void CPropPhysics::Init()  [0x001D25F0]
};

// declared in 81 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CPS2Pad {  // size 0x018
public:
    /* 0x000 */ GtPadDataDualShockTag *mpData;
    /* 0x004 */ int mbValid;
    /* 0x008 */ int mbAnalogue;
    /* 0x00C */ int mbPressure;
    /* 0x010 */ int mnPadNo;
    /* 0x014 */ int mbConnected;
};

// declared in 81 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CPS2Wheel {  // size 0x010
public:
    /* 0x000 */ GtPadDataLogitechWheelClassATag *mpData;
    /* 0x004 */ int mbValid;
    /* 0x008 */ int mnWheelNo;
    /* 0x00C */ int mbClassB;
};

// declared in 3 file(s), e.g. gamesource\Physics\CVehiclePhysics.cpp
class CPUMonitor {  // size 0x050
public:
    /* 0x000 */ int mbMonitorActive;
    /* 0x004 */ int mnFrameCounter;
    /* 0x008 */ int mnMonitorValue[2];
    /* 0x010 */ float mrAverageMonitorValue[2];
    /* 0x018 */ int mnMaxMonitorValue[2];
    /* 0x020 */ int mnStartMonitorValue[2];
    /* 0x028 */ char macMonitorString[32];
    /* 0x048 */ int mnNumCalls;
    /* 0x04C */ ECPUMonitorPage mePage;
};

// declared in 68 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class CRace {  // size 0x1D90
public:
    /* 0x000 */ CRaceCar *mapRaceCars[4];
    /* 0x010 */ CRacePosition mRacePositions;
    /* 0x098 */ CCollidingTrafficPhysics *mapCrashingTraffic[32];
    /* 0x118 */ int mnNumCrashingTraffic;
    /* 0x11C */ CPropPhysics *mapCrashingProps[64];
    /* 0x21C */ int mnNumCrashingProps;
    /* 0x220 */ CBlobbyShadowManager mBlobbyShadowManager;
    /* 0x1A30 */ CReplay mReplay;
    /* 0x1A4C */ CTimer mTimer;
    /* 0x1A68 */ float mrRaceStartTime;
    /* 0x1A6C */ int mbStarted;
    /* 0x1A70 */ int mbFinished;
    /* 0x1A74 */ CTriggerManager mTriggerManager;
    /* 0x1C90 */ int mbTimeOutEnabled;
    /* 0x1C94 */ CTrigWarning mTrigWarning;
    /* 0x1CA8 */ int mnNumPlayerCars;
    /* 0x1CAC */ int mnNumAICars;
    /* 0x1CB0 */ int mNumGhostCars;
    /* 0x1CB4 */ int mNumNetworkCars;
    /* 0x1CB8 */ CGameData mGameData;
    /* 0x1CC0 */ CReplayCameraData mCameraData;
    /* 0x1D14 */ CReplayTriggerManager mReplayTriggerManager;
    /* 0x1D30 */ CRaceIntroManager mRaceIntroManager;
    /* 0x1D64 */ CModel mCheckPointModel;
    /* 0x1D68 */ CModel mStartLineModel;
    /* 0x1D6C */ CModel mFinishLineModel;
    /* 0x1D70 */ CModel mKojackLightModel;
    /* 0x1D74 */ int mb2Player;
    /* 0x1D78 */ int mbHideHUD;
    /* 0x1D7C */ EResetStage meResetStage;
    /* 0x1D80 */ int mbLoaded;

    // functions of this class with code in this build:
    // void CRace::RemoveCrashingProps(int lnCollisionID)  [0x00234950]
    // CPropPhysics *CRace::AllocateCrashingProps()  [0x00234A10]
    // void CRace::RemoveCrashingTraffic(int lnCollisionID)  [0x00234B40]
    // void CRace::DeallocateCrashingTraffic(CCollidingTrafficPhysics *lpCollidingTrafficPhysics)  [0x00234C60]
    // CCollidingTrafficPhysics *CRace::AllocateCrashingTraffic()  [0x00234D20]
    // void CRace::GenerateRandomAICars(int lnNoPlayers, int lnNoAICars)  [0x00234DD0]
    // void CRace::RenderTwoPlayerSS()  [0x00235270]
    // void CRace::RenderGhostCarReplay()  [0x002357B0]
    // void CRace::RenderOnePlayer()  [0x002359A0]
    // void CRace::Render(int lnPlayer)  [0x00235DE0]
    // void CRace::Update()  [0x00236400]
    // void CRace::Shutdown()  [0x002369D0]
    // int CRace::Reset(int bThisIsInit)  [0x00236A90]
    // void CRace::ResetAfterFatalCollision(int collisionID)  [0x00236F20]
    // void CRace::SetAICarIDAndColour(int lnID, ECarID leCarID, RwRGBA *lpColour, unsigned int lunColourIndex)  [0x00237050]
    // void CRace::SetNumAICars(int lnNumAI)  [0x002370A0]
    // void CRace::SetupCars()  [0x00237150]
    // void CRace::SetupNPlayers(int lnNumPlayers)  [0x00237370]
    // void CRace::Setup()  [0x00237460]
    // void CRace::Init()  [0x00237570]
};

// declared in 87 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp  // VARIANT 1 of 2
class CRaceCar {  // size 0x2E00
public:
    /* 0x000 */ ECarID meID;
    /* 0x004 */ CRaceCarPhysics *mpPhysicsObject;
    /* 0x008 */ CScore mScore;
    /* 0x67C */ CScore mFinishedScore;
    /* 0xCF0 */ ERaceCarType meRaceCarType;
    /* 0xCF4 */ ERaceCarTrafficInfluence meRaceCarTrafficInfluence;
    /* 0xCF8 */ int mbCanHaveCollisionWithTraffic;
    /* 0xCFC */ int mbFatallyColliding;
    /* 0xD00 */ float mrFatalCollisionExpireTime;
    /* 0xD04 */ RwV3d mCachedNonFatalMomentsOfInertia;
    /* 0xD10 */ int mnFatalCollisionRacingLaneStartNode;
    /* 0xD14 */ RaceCarStreamStructure *mpStreamedData;
    /* 0xD18 */ RwRGBA mColour;
    /* 0xD1C */ unsigned int munColourIndex;
    /* 0xD20 */ float mrRadius;
    /* 0xD24 */ int mnGlassMaterialIndex;
    /* 0xD28 */ float mrOpacity;
    /* 0xD2C */ unsigned int mxRenderedBits;
    /* 0xD30 */ float mrBodyEnvMapIntensity;
    /* 0xD34 */ float mrGlassEnvMapIntensity;
    /* 0xD38 */ float mrSpecularIntensityBody;
    /* 0xD3C */ float mrSpecularIntensityGlass;
    /* 0xD40 */ float mrSpecularPower;
    /* 0xD44 */ float mrShadIntensity;
    /* 0xD48 */ float mrCollisionWorldIntensity;
    /* 0xD4C */ float mrWeatherIntensity;
    /* 0xD50 */ int mnIndex;
    /* 0xD54 */ float marDistanceFromPlayer[4];
    /* 0xD64 */ float mrIndicatorTime;
    /* 0xD68 */ int mbHorn;
    /* 0xD6C */ int mnRacingLaneSegmentIndex;
    /* 0xD70 */ int mnRacingLaneSector;
    /* 0xD74 */ CLane *mpAILane;
    /* 0xD78 */ int mnAILaneSegmentIndex;
    /* 0xD7C */ int mnAILaneSector;
    /* 0xD80 */ int mnNumFindAILaneCalls;
    /* 0xD84 */ int mbOncoming;
    /* 0xD88 */ int mbDrawMe;
    /* 0xD8C */ float mrHeightAboveGround;
    /* 0xD90 */ int mnDesiredRacePosition;
    /* 0xDC0 */ unsigned char maunSoundBuffer[8192];
    /* 0x2DC0 */ void *mpSoundVehicle;
    /* 0x2DC8 */ int mbIsFrontEnd;
    /* 0x2DCC */ int mbLoadComplete;
    /* 0x2DD0 */ unsigned int munLoadId;

    // functions of this class with code in this build:
    // void CRaceCar::CalcDistFromPlayerCars()  [0x002377C0]
    // int CRaceCar::ResetAfterCrash(int nodesAhead)  [0x00237990]
    // float CRaceCar::GetTransparency()  [0x002383E0]
    // void CRaceCar::SetTransparency(float lrAlpha)  [0x00238400]
    // int CRaceCar::GetKojackMatrix(RwMatrixTag *lpFillInThisMatrix)  [0x00238420]
    // void CRaceCar::SetGameOver()  [0x00238650]
    // void CRaceCar::SetFinished()  [0x00238AC0]
    // void CRaceCar::FatalCollisionEnd()  [0x00238F30]
    // void CRaceCar::FatalCollisionUpdate()  [0x00239170]
    // void CRaceCar::FatalCollisionStart()  [0x00239190]
    // int CRaceCar::Draw()  [0x002393F0]
    // int CRaceCar::DrawShadow()  [0x0023A5E0]
    // void CRaceCar::RestoreAfterReplay(int index, CCrashReplayTempStorage *pData)  [0x0023A8B0]
    // void CRaceCar::DrawCrashReplay()  [0x0023ABE0]
    // void CRaceCar::PrepareForReplay(int index, CInterpolatedRaceCar *pCurrentIRC, CCrashReplayTempStorage *pData)  [0x0023AC40]
    // void CRaceCar::Update()  [0x0023B3A0]
    // int CRaceCar::FixupRCXFile()  [0x0023B950]
    // void CRaceCar::SetAndRebuildColour(RwRGBA *lpColour)  [0x0023BD90]
    // int CRaceCar::Reset(RwV3d *lpStartPos, RwV3d *lpStartDir)  [0x0023BFD0]
    // int CRaceCar::Shutdown()  [0x0023CEE0]
    // int CRaceCar::Setup(int lnIndex, int lbIsFrontEnd)  [0x0023CF40]
    // void CRaceCar::GetFileName(char *lpacCarName, char *lpacCarPath, char *lpacCarFilename, char *lpacExtension)  [0x0023D040]
    // void CRaceCar::Init()  [0x0023D360]
};

// declared in 1 file(s), e.g. gamesource\Sound\SoundCar.cpp  // VARIANT 2 of 2
class CRaceCar {  // size 0x000
public:
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CRaceCarPhysics : public CVehiclePhysics {  // size 0xDC0
public:
    // base CVehiclePhysics at 0x000
    /* 0xAA0 */ float mrDragCoeff;
    /* 0xAA4 */ float mrDownForceCoeff;
    /* 0xAA8 */ float mrForceApplyHeightBrake;
    /* 0xAAC */ float mrForceApplyHeightAccel;
    /* 0xAB0 */ float mrForceApplyHeightSteering;
    /* 0xAB4 */ float mrForceApplyHeightDrifting;
    /* 0xAB8 */ float mrSteeringAngleMin;
    /* 0xABC */ float mrSteeringAngleMax;
    /* 0xAC0 */ float mrSteeringAngleMinVelocity;
    /* 0xAC4 */ float mrSteeringAngleMaxVelocity;
    /* 0xAC8 */ float mrSteeringResponse;
    /* 0xACC */ float mrBrakingFactor;
    /* 0xAD0 */ float mrDriftScaleMax;
    /* 0xAD4 */ float mrDriftScaleMin;
    /* 0xAD8 */ float mrDriftMaxAngularMomentumAt60;
    /* 0xADC */ float mrDriftMaxAngularMomentumAt110;
    /* 0xAE0 */ float mrAutoDriftDelay;
    /* 0xAE4 */ float mrDriftTurnRate;
    /* 0xAE8 */ float mrWallCollisionPenalty;
    /* 0xAEC */ float mrLowSpeedDrivingModelThreshold;
    /* 0xAF0 */ float mrLowSpeedSteeringAngleMax;
    /* 0xAF4 */ float mrLowSpeedTorqueFactor1;
    /* 0xAF8 */ float mrLowSpeedTorqueFactor2;
    /* 0xAFC */ float mrAcceleratorMultiplier;
    /* 0xB00 */ float mrSteeringDragCoeff;
    /* 0xB04 */ float mrDriftMinSpeed;
    /* 0xB08 */ float mrDriftMaxSpeedPressure;
    /* 0xB0C */ float mrEngineBrakingFactor;
    /* 0xB10 */ float mrSinDriftMaxAngle;
    /* 0xB14 */ float mrBoostMaxSpeed;
    /* 0xB18 */ float mrBoostCameraMovementForwards;
    /* 0xB1C */ float mrBoostCameraMovementUpwards;
    /* 0xB20 */ float mrMinDriftAngleFromAir;
    /* 0xB24 */ float mrLandingBounce;
    /* 0xB28 */ CDrivingControls mDrivingControls;
    /* 0xB40 */ int mbDoUpdate;
    /* 0xB50 */ RwMatrixTag mFrontWheelMatrix;
    /* 0xB90 */ float mrEngineTorque;
    /* 0xB94 */ CDrivingModelControlStuff mControlStuff;
    /* 0xBC4 */ int mbOverrideNeutral;
    /* 0xBC8 */ float mrCrashImmunityTime;
    /* 0xBD0 */ CTransmission mTransmission;
    /* 0xD40 */ EDriftState meDriftState;
    /* 0xD44 */ CRaceCar *mpRaceCar;
    /* 0xD48 */ StartLineSequence mStartLineSequence;
    /* 0xD58 */ float mrFakePitch;
    /* 0xD5C */ float mrFakeRoll;
    /* 0xD60 */ float mrPreviousFakePitch;
    /* 0xD64 */ float mrPreviousFakeRoll;
    /* 0xD68 */ int mbHoldOnStartLine;
    /* 0xD6C */ float mrMinFatalTrafficImpact;
    /* 0xD70 */ int mabCachedBodyworkAttached[8];
    /* 0xD90 */ float marCachedBodyworkDamage[8];
    /* 0xDB0 */ int mbFatalWallCollisionsEnabled;
};

// declared in 4 file(s), e.g. gamesource\Menu\CMenuPageIntro.cpp
class CRaceIntroCamera {  // size 0x02C
public:
    /* 0x000 */ EIntroType meType;
    /* 0x004 */ int mbIntroPlaying;
    /* 0x008 */ int mbOutroPlaying;
    /* 0x00C */ int mbReplayIntroPlaying;
    /* 0x010 */ int mbFadeShot;
    /* 0x014 */ int mbFade;
    /* 0x018 */ int mnShot;
    /* 0x01C */ float mrShotStartTime;
    /* 0x020 */ float mrShotTotalTime;
    /* 0x024 */ float mrCurrentTime;
    /* 0x028 */ CCamera *mpParentCamera;

    // functions of this class with code in this build:
    // void CRaceIntroCamera::UpdateStandardCamera()  [0x0025A1F0]
    // void CRaceIntroCamera::Update(CCamera *lpParentCamera)  [0x0025A750]
    // int CRaceIntroCamera::StartReplayIntro()  [0x0025A9B0]
    // int CRaceIntroCamera::StartIntro()  [0x0025AAB0]
};

// declared in 69 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class CRaceIntroFrame {  // size 0x020
public:
    /* 0x000 */ RtQuat mqOrientation;
    /* 0x010 */ RwV3d mvPosition;
    /* 0x01C */ float mrFOV;
};

// declared in 1 file(s), e.g. gamesource\Race\CReplayCameraData.cpp
class CRaceIntroHeader {  // size 0x014
public:
    /* 0x000 */ char macVersion[12];
    /* 0x00C */ unsigned int munNumShots;
    /* 0x010 */ unsigned int munNumFrames;
};

// declared in 68 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class CRaceIntroManager {  // size 0x034
public:
    /* 0x000 */ EIntroState meState;
    /* 0x004 */ int mbPlaying;
    /* 0x008 */ int mbFinished;
    /* 0x00C */ float mrTotalTime;
    /* 0x010 */ int mnActiveShot;
    /* 0x014 */ int mnActiveFrameStart;
    /* 0x018 */ int mnActiveFrameEnd;
    /* 0x01C */ int mbDataLoaded;
    /* 0x020 */ CRaceIntroFrame *maFrameArray;
    /* 0x024 */ CRaceIntroShot *maShotArray;
    /* 0x028 */ int mnNumFrames;
    /* 0x02C */ int mnNumShots;
    /* 0x030 */ int mnActiveFrame;

    // functions of this class with code in this build:
    // void CRaceIntroManager::GetPointOnSpline(RwV3d *lpOutput, CRaceIntroShot *lpShot, float lrT)  [0x0023D470]
    // float CRaceIntroManager::GetFOV(float lrAmount)  [0x0023D8E0]
    // float CRaceIntroManager::GetTotalIntroTime()  [0x0023D9A0]
    // float CRaceIntroManager::GetActiveShotTime()  [0x0023DA30]
    // void CRaceIntroManager::Slerp(RtQuat *lpResult, RtQuat *lpQuatA, RtQuat *lpQuatB, float lrAmount)  [0x0023DB30]
    // int CRaceIntroManager::FadeActiveShot()  [0x0023DD50]
    // int CRaceIntroManager::SetActiveShot(int lnShotNumber)  [0x0023DD70]
    // void CRaceIntroManager::GetOrientation(float lrArrayPos, RtQuat *lpResult)  [0x0023DE00]
    // void CRaceIntroManager::GetPosition(float lrArrayPos, RwV3d *lpResult)  [0x0023DF60]
    // int CRaceIntroManager::Reset(int lbUseOutroData, int lbIsReplay)  [0x0023E0F0]
};

// declared in 69 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class CRaceIntroShot {  // size 0x00C
public:
    /* 0x000 */ unsigned int munStartFrame;
    /* 0x004 */ unsigned int munEndFrame;
    /* 0x008 */ int mbFadeOut;
};

// declared in 3 file(s), e.g. gamesource\Race\CAICar.cpp
class CRaceLogic : public CGameLogic {  // size 0x004
public:
    // base CGameLogic at 0x000
};

// declared in 68 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class CRacePosition {  // size 0x088
public:
    /* 0x000 */ float mDistanceFromCamera[4][4];
    /* 0x040 */ unsigned int mRenderOrder[4][4];
    /* 0x080 */ int mLeadCar;
    /* 0x084 */ unsigned int mCounter;

    // functions of this class with code in this build:
    // void CRacePosition::RenderArrow(RwV3d *lpPosition, RwRGBAReal *lpColour, EStringID leStringID)  [0x0023E3D0]
    // void CRacePosition::Draw(int camIndex)  [0x0023E8A0]
    // void CRacePosition::Update()  [0x0023ED30]
    // void CRacePosition::Reset()  [0x0023F0E0]
    // void CRacePosition::Setup()  [0x0023F120]
    // int CRacePosition::Init()  [0x0023F130]
};

// declared in 4 file(s), e.g. gamesource\Menu\CMenuPageDrivingLessonSummary.cpp
class CRaceReplayCamera {  // size 0x1BC
public:
    /* 0x000 */ EReplayState meCurrentState;
    /* 0x004 */ EReplayCameraTypeFlag meType;
    /* 0x008 */ CReplayTriggerData *mpPreviousTrigger;
    /* 0x00C */ CReplayTriggerData *mpCurrentTrigger;
    /* 0x010 */ CReplayTriggerData *mpNextTrigger;
    /* 0x014 */ float mrTriggerDistance;
    /* 0x018 */ CCamera *mpParentCamera;
    /* 0x01C */ CRaceCar *mpTargetCar;
    /* 0x020 */ float mrInterpolationStartTime;
    /* 0x024 */ float mrInterpolationAmount;
    /* 0x028 */ CCameraSpline mHandicamSpline;
    /* 0x060 */ CCameraSpline mAnimTargetSpline;
    /* 0x098 */ float mrT;
    /* 0x09C */ int mnAnimGroups;
    /* 0x0A0 */ int mnCurrentGroup;
    /* 0x0A4 */ float mrLastProgress;
    /* 0x0A8 */ int mnStartSector;
    /* 0x0AC */ int mnStartIndex;
    /* 0x0B0 */ float mrStartDist;
    /* 0x0B4 */ int mnEndSector;
    /* 0x0B8 */ int mnEndIndex;
    /* 0x0BC */ float mrEndDist;
    /* 0x0C0 */ RwV3d mvCurrentPosition;
    /* 0x0CC */ RtQuat mCurrentOrientation;
    /* 0x0DC */ float mrCurrentFOV;
    /* 0x0E0 */ float mrCurrentFocalLength;
    /* 0x0E4 */ float mrCurrentDynamicFOVExtent;
    /* 0x0E8 */ float mrCurrentBlurSeverity;
    /* 0x0EC */ float mrCurrentProxShakeEffectRadius;
    /* 0x0F0 */ float mrCurrentProxShakeFalloffRadius;
    /* 0x0F4 */ float mrCurrentHandicamSkill;
    /* 0x0F8 */ float mrCurrentSteadiness;
    /* 0x0FC */ RwV3d mvInterpolatedPosition;
    /* 0x108 */ RtQuat mInterpolatedOrientation;
    /* 0x118 */ float mrInterpolatedFOV;
    /* 0x11C */ float mrInterpolatedDynamicFOVExtent;
    /* 0x120 */ float mrInterpolatedBlurSeverity;
    /* 0x124 */ float mrInterpolatedProxShakeEffectRadius;
    /* 0x128 */ float mrInterpolatedProxShakeFalloffRadius;
    /* 0x12C */ float mrInterpolatedHandicamSkill;
    /* 0x130 */ float mrInterpolatedSteadiness;
    /* 0x134 */ RwV3d mvLastCarPosition;
    /* 0x140 */ RwV3d mvDesiredPosition;
    /* 0x14C */ RwV3d mvLastAt;
    /* 0x158 */ RwV3d mvDesiredAt;
    /* 0x164 */ RwV3d mvSplineP0;
    /* 0x170 */ RwV3d mvSplineP1;
    /* 0x17C */ RwV3d mvSplineP2;
    /* 0x188 */ RwV3d mvSplineP3;
    /* 0x194 */ RwV3d mvHandicamLag;
    /* 0x1A0 */ float mrHandicamLagScale;
    /* 0x1A4 */ float mrSteadyPointXScale;
    /* 0x1A8 */ float mrSteadyPointYScale;
    /* 0x1AC */ float mrSteadyPointX;
    /* 0x1B0 */ float mrSteadyPointY;
    /* 0x1B4 */ float mrShakePointX;
    /* 0x1B8 */ float mrShakePointY;

    // functions of this class with code in this build:
    // void CRaceReplayCamera::ApplyCameraState()  [0x00210F70]
    // void CRaceReplayCamera::ApplySteadinessEffect()  [0x00211230]
    // void CRaceReplayCamera::ApplyHandicamEffect()  [0x00211580]
    // void CRaceReplayCamera::ApplyProximityShake(int lbInterpolated)  [0x00211590]
    // void CRaceReplayCamera::ApplyDynamicFOV()  [0x00211790]
    // void CRaceReplayCamera::AnimatedTargetCameraUpdate()  [0x00211930]
    // void CRaceReplayCamera::StaticCarCameraUpdate()  [0x00211EE0]
    // void CRaceReplayCamera::StaticPanCameraUpdate()  [0x002121A0]
    // void CRaceReplayCamera::StaticCameraUpdate()  [0x00212340]
    // void CRaceReplayCamera::TriggerUpdate()  [0x00212430]
    // void CRaceReplayCamera::TriggerTransition()  [0x00212720]
    // void CRaceReplayCamera::Slerp(float lrAmount)  [0x00212A10]
    // void CRaceReplayCamera::Update(CCamera *lpParentCamera, CRaceCar *lpCar)  [0x00212B90]
    // int CRaceReplayCamera::Init(CCamera *lpParentCamera)  [0x00212FB0]
};

// declared in 74 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CRaceResult {  // size 0x010
public:
    /* 0x000 */ signed char manPositionFinished[4];
    /* 0x004 */ signed char manFinishOrder[4];
    /* 0x008 */ signed char manBestPositionFinished[4];
    /* 0x00C */ int mnNumFinished;

    // functions of this class with code in this build:
    // void CRaceResult::CarFinished(int lnCarIndex, int lnPosition)  [0x001D1150]
    // void CRaceResult::Setup()  [0x001D11A0]
    // void CRaceResult::Init()  [0x001D11D0]
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CRain {  // size 0x260
public:
    /* 0x000 */ CRainGroup maGroups[3];
    /* 0x240 */ RwRaster *mpRaster;
    /* 0x244 */ RwV3d mCurrentRefPoint;
    /* 0x250 */ RwV3d mPrevRefPoint;
    /* 0x25C */ int mbResetRefPoint;

    // functions of this class with code in this build:
    // void CRain::SetDensity(float lrDensity)  [0x0025D630]
    // void CRain::Render()  [0x0025D690]
    // void CRain::Update()  [0x0025D990]
    // int CRain::Reset()  [0x0025DA70]
    // int CRain::Setup()  [0x0025DB20]
    // void CRain::Init()  [0x0025DB40]
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CRainGroup {  // size 0x0C0
public:
    /* 0x000 */ B2RainVUDataTag mVUData;
    /* 0x0A0 */ RwV3d mCurrentOffset;
    /* 0x0AC */ RwV3d mPrevOffset;
    /* 0x0B8 */ float mrWindEffect;
    /* 0x0BC */ float mrFallSpeed;

    // functions of this class with code in this build:
    // void CRainGroup::Render(int lnViewSwitch, RwV3d *lpStreak)  [0x0025DBC0]
    // void CRainGroup::Init(float lrRandomSeed, float lrWindEffect, float lrFallSpeed)  [0x0025E120]
};

// declared in 112 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CRandom {  // size 0x0F0
public:
    /* 0x000 */ unsigned int mRandomArray[56];
    /* 0x0E0 */ unsigned char mJ;
    /* 0x0E1 */ unsigned char mK;
};

// declared in 72 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CRecord {  // size 0x014
public:
    /* 0x000 */ char mpaName[9];
    /* 0x009 */ signed char mnNew;
    /* 0x00A */ unsigned char munCar;
    /* 0x00B */ unsigned char munColour;
    /* 0x00C */ unsigned int munTimeStamp;
    /* 0x010 */ UValue mValue;

    // functions of this class with code in this build:
    // void CRecord::Init()  [0x001E2A10]
};

// declared in 72 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CRecords {  // size 0x3BC4
public:
    /* 0x000 */ CTrackRecords maChampTrackRecords[30];
    /* 0x2A30 */ CRecordsTable maTimeAttackTop5[30];
    /* 0x35E8 */ CRecordsTable maCrashTop5[15];

    // functions of this class with code in this build:
    // void CRecords::Merge(CRecords *lpMergeRecords)  [0x001E0D10]
    // void CRecords::SetPlayerRecordsName(unsigned int lunPlayer, char *lpcName)  [0x001E1280]
    // int CRecords::CheckIfHasNewRecord(unsigned int lunPlayer)  [0x001E1560]
    // void CRecords::Update(unsigned int lunPlayer)  [0x001E1840]
    // void CRecords::Reset()  [0x001E1A00]
    // void CRecords::Init()  [0x001E1B80]
};

// declared in 72 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CRecordsTable {  // size 0x064
public:
    /* 0x000 */ CRecord maRecords[5];

    // functions of this class with code in this build:
    // void CRecordsTable::Merge(CRecordsTable *lpMergeRecordsTable, ERecordTestTypes leTestType)  [0x001E2630]
    // void CRecordsTable::Update(float lrValue, unsigned int lunPlayer, ERecordTestTypes leTestType)  [0x001E2850]
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CRenderer {  // size 0x4D90
public:
    /* 0x000 */ CHud mHUD;
    /* 0x098 */ CProjectedShadow mProjectedShadow;
    /* 0x0B0 */ CEffectsManager mFXManager;
    /* 0x44B0 */ CMPEG mMPEG;
    /* 0x44B4 */ CLoadingScreen mLoadingScreen;
    /* 0x44B8 */ EScreenMode meScreenMode;
    /* 0x44BC */ EAspectRatio meAspectRatio;
    /* 0x44C0 */ CCamera mCameras[2];
    /* 0x4CA0 */ CCamera *mpCurrentCamera;
    /* 0x4CA4 */ RwRGBA mBackgroundColor;
    /* 0x4CA8 */ RwRaster *mpMainRaster;
    /* 0x4CAC */ RwRaster *mpMainZRaster;
    /* 0x4CB0 */ RwCamera *mpMainRwCamera;
    /* 0x4CB4 */ int mnScreenWidth;
    /* 0x4CB8 */ int mnScreenHeight;
    /* 0x4CBC */ int mnScreenDepth;
    /* 0x4CC0 */ int mnMaxYCoord;
    /* 0x4CC4 */ float mrRasterScreenRatio;
    /* 0x4CC8 */ float mrScreenHeightToMaxYCoordRatio;
    /* 0x4CCC */ int mnScreenShotID;
    /* 0x4CD0 */ int mnScreenXOffset;
    /* 0x4CD4 */ int mnScreenYOffset;
    /* 0x4CE0 */ u_long128 mGSBufferQuarterScissor1;
    /* 0x4CF0 */ u_long128 mGSBufferQuarterFrame1;
    /* 0x4D00 */ u_long128 mGSBufferSixteenthScissor1;
    /* 0x4D10 */ u_long128 mGSBufferSixteenthFrame1;
    /* 0x4D20 */ u_long128 mGSBufferSixteenthFrame1_16Bit;
    /* 0x4D30 */ u_long128 mGSBufferQuarterTex0;
    /* 0x4D40 */ u_long128 mGSBufferSixteenthTex0;
    /* 0x4D50 */ u_long128 mGSBufferSixteenthTex0_16Bit;
    /* 0x4D60 */ RwTexDictionary *mpPermanentlyResidentDictionary;
    /* 0x4D64 */ RwTexture *mpGlassCrackTexture;
    /* 0x4D68 */ RwTexture *mpGlassSmashTexture;
    /* 0x4D70 */ u_long128 mGlassCrackTex0;
    /* 0x4D80 */ u_long128 mGlassSmashTex0;
};

// declared in 68 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class CReplay {  // size 0x01C
public:
    /* 0x000 */ int mNumFrames;
    /* 0x004 */ int mbReplayPlaying;
    /* 0x008 */ int mbFinished;
    /* 0x00C */ int mFinishStatus;
    /* 0x010 */ float mReplayTimer;
    /* 0x014 */ int mCurrentFrame;
    /* 0x018 */ int mn2PlayerCount;

    // functions of this class with code in this build:
    // int CReplay::LoadFromDisk()  [0x0023F140]
    // int CReplay::NextFrame(CDrivingControls *lpDrivingControls)  [0x0023F370]
    // void CReplay::Reset(int bPlaying)  [0x0023FC20]
};

// declared in 69 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class CReplayCameraData {  // size 0x054
public:
    /* 0x000 */ CRaceIntroShot *mpIntroShotData;
    /* 0x004 */ CRaceIntroFrame *mpIntroFrameData;
    /* 0x008 */ CRaceIntroShot *mpOutroShotData;
    /* 0x00C */ CRaceIntroFrame *mpOutroFrameData;
    /* 0x010 */ CRaceIntroShot *mpReplayIntroShotData;
    /* 0x014 */ CRaceIntroFrame *mpReplayIntroFrameData;
    /* 0x018 */ CReplayTriggerData *mpTriggerData;
    /* 0x01C */ RwV3d *mpPositionData;
    /* 0x020 */ unsigned int munNumIntroShots;
    /* 0x024 */ unsigned int munNumIntroFrames;
    /* 0x028 */ unsigned int munNumOutroShots;
    /* 0x02C */ unsigned int munNumOutroFrames;
    /* 0x030 */ unsigned int munNumReplayIntroShots;
    /* 0x034 */ unsigned int munNumReplayIntroFrames;
    /* 0x038 */ unsigned int munNumTriggers;
    /* 0x03C */ unsigned int munNumPositions;
    /* 0x040 */ int mbRaceIntroDataLoaded;
    /* 0x044 */ int mbRaceOutroDataLoaded;
    /* 0x048 */ int mbReplayIntroDataLoaded;
    /* 0x04C */ int mbRaceReplayDataLoaded;
    /* 0x050 */ int mbLoaded;

    // functions of this class with code in this build:
    // int CReplayCameraData::Reset()  [0x0023FC60]
    // int CReplayCameraData::Setup()  [0x0023FFF0]
};

// declared in 69 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class CReplayTriggerData {  // size 0x068
public:
    /* 0x000 */ RtQuat mInitialOrientation;
    /* 0x010 */ unsigned int munCameraID;
    /* 0x014 */ float mrInitialFOV;
    /* 0x018 */ float mrDynamicFOVExtent;
    /* 0x01C */ float mrMotionBlurExtent;
    /* 0x020 */ float mrHandycamSkill;
    /* 0x024 */ float mrSteadiness;
    /* 0x028 */ float mrProxShakeRadius;
    /* 0x02C */ float mrProxShakeFalloff;
    /* 0x030 */ float mrTransitionTime;
    /* 0x034 */ unsigned int mxTriggerFlags;
    /* 0x038 */ int mnSegmentIndex;
    /* 0x03C */ unsigned int munStartPosIndex;
    /* 0x040 */ unsigned int munEndPosIndex;
    /* 0x044 */ CGt2dMatrix mInvMatrix;
    /* 0x05C */ RwV3d mvTargetOffset;
};

// declared in 1 file(s), e.g. gamesource\Race\CReplayCameraData.cpp
class CReplayTriggerHeader {  // size 0x014
public:
    /* 0x000 */ char macVersion[12];
    /* 0x00C */ unsigned int munNumTriggers;
    /* 0x010 */ unsigned int munNumPositions;
};

// declared in 68 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class CReplayTriggerManager {  // size 0x01C
public:
    /* 0x000 */ int mnCollidingTriggerIndex;
    /* 0x004 */ CReplayTriggerData *maTriggerArray;
    /* 0x008 */ RwV3d *maPositionArray;
    /* 0x00C */ int mnNumTriggers;
    /* 0x010 */ int mnNumPositions;
    /* 0x014 */ RwV2d mvLastCarPos;

    // functions of this class with code in this build:
    // void CReplayTriggerManager::GetPointOnSpline(CReplayTriggerData *lpTrigger, float lrParamAlong, RwV3d *lpResult)  [0x002400B0]
    // float CReplayTriggerManager::GetParamFromDist(CReplayTriggerData *lpTrigger, float lrDistance)  [0x00240860]
    // RwV3d *CReplayTriggerManager::GetPosition(int lnIndex)  [0x00240F80]
    // RwV3d *CReplayTriggerManager::GetTriggerStartPosition(CReplayTriggerData *lpTrigger)  [0x00240FC0]
    // CReplayTriggerData *CReplayTriggerManager::GetCollidingTrigger()  [0x00241010]
    // int CReplayTriggerManager::Update(CRaceCar *lpCar)  [0x00241080]
    // int CReplayTriggerManager::Reset()  [0x00241300]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageMemoryCard.cpp
class CSavedGameStats {  // size 0x008
public:
    /* 0x000 */ unsigned int lunNumGoldMedals;
    /* 0x004 */ unsigned int lunNumTrophiesWon;
};

// declared in 87 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CScore {  // size 0x674
public:
    /* 0x000 */ ETrackID meTrackID;
    /* 0x004 */ ECarID meCarID;
    /* 0x008 */ float mrTimeTaken;
    /* 0x00C */ float mrStartTime;
    /* 0x010 */ float mrGameOverTime;
    /* 0x014 */ int mnLapsCompleted;
    /* 0x018 */ float mrCurrentLapStartedTime;
    /* 0x01C */ int mnFastestLap;
    /* 0x020 */ float mrFastestLapTime;
    /* 0x024 */ float mrDistanceTravelled;
    /* 0x028 */ int mbTimeUp;
    /* 0x02C */ int mbFinished;
    /* 0x030 */ int mbGameOver;
    /* 0x034 */ int mnRacePosition;
    /* 0x038 */ int mnPointsTotal;
    /* 0x03C */ int mnCurrentMultiplier;
    /* 0x040 */ int mnCurrentComboScore;
    /* 0x044 */ int mnLastMultiplier;
    /* 0x048 */ int mnLastComboScore;
    /* 0x04C */ float mrLastComboTime;
    /* 0x050 */ int mnBiggestComboScore;
    /* 0x054 */ signed char manCheckpointRacePosition[160];
    /* 0x0F4 */ float marCheckpointRaceTime[160];
    /* 0x374 */ int mnNumCheckpointsCrossed;
    /* 0x378 */ int mnActiveCheckpoint;
    /* 0x37C */ float mrLastCheckpointCrossedTime;
    /* 0x380 */ int mnTotalNearMisses;
    /* 0x384 */ int mnNumNearMissesInChain;
    /* 0x388 */ int mnLastNearMissesInChain;
    /* 0x38C */ float mrLastNearMissChainTime;
    /* 0x390 */ float mrNearMissLastUpdateTime;
    /* 0x394 */ float mrNearMissLastTime;
    /* 0x398 */ int mnLastNearMissPosition;
    /* 0x39C */ CTrafficVehicle *mapNearMissVehicles[3];
    /* 0x3A8 */ float marNearMissTimes[3];
    /* 0x3B4 */ int mabNearMissOK[3];
    /* 0x3C0 */ int mnNearMissPosition[3];
    /* 0x3CC */ int mnTotalNonFatalCollisions;
    /* 0x3D0 */ float mrLastNonFatalCollisionTime;
    /* 0x3D4 */ CTrafficVehicle *mpLastNonFatalCollisionVehicle;
    /* 0x3D8 */ float mrLastRaceCarNonFatalCollisionTime;
    /* 0x3DC */ int mnNumFatalCrashes;
    /* 0x3E0 */ float mrTotalInsuranceCost;
    /* 0x3E4 */ unsigned int munTotalCrashBonusMultiplier;
    /* 0x3E8 */ int mbPerfectLap;
    /* 0x3EC */ int mbPerfectRun;
    /* 0x3F0 */ int munCurrentCrashNumCars;
    /* 0x3F4 */ int manCurrentCrashCarIDs[32];
    /* 0x474 */ CCollidingBody *mapCurrentCrashCars[32];
    /* 0x4F4 */ float mrCurrentCrashCost;
    /* 0x4F8 */ float mrLastCrashCost;
    /* 0x4FC */ int munLastCrashNumCars;
    /* 0x500 */ float mrLastCrashTime;
    /* 0x504 */ float marLastCrashValue[32];
    /* 0x584 */ unsigned int munBiggestCrashNumCars;
    /* 0x588 */ float mrBiggestCrashCost;
    /* 0x58C */ int mnTotalPropsHit;
    /* 0x590 */ float mrLastPropHitTime;
    /* 0x594 */ int mnTotalJumpsTaken;
    /* 0x598 */ float mrTotalAirDistance;
    /* 0x59C */ float mrCurrentAirDistance;
    /* 0x5A0 */ float mrLastAirDistance;
    /* 0x5A4 */ float mrLastAirTime;
    /* 0x5A8 */ float mrLongestAirDistance;
    /* 0x5AC */ float mrTotalOncomingDistance;
    /* 0x5B0 */ float mrCurrentOncomingDistance;
    /* 0x5B4 */ float mrLastOncomingDistance;
    /* 0x5B8 */ float mrLastOncomingTime;
    /* 0x5BC */ float mrLongestOncomingDistance;
    /* 0x5C0 */ float mrTotalDriftDistance;
    /* 0x5C4 */ float mrCurrentDriftDistance;
    /* 0x5C8 */ float mrLastDriftDistance;
    /* 0x5CC */ float mrLastDriftTime;
    /* 0x5D0 */ float mrLongestDriftDistance;
    /* 0x5D4 */ float mrTotalTopSpeedDistance;
    /* 0x5D8 */ float mrCurrentTopSpeedDistance;
    /* 0x5DC */ float mrLastTopSpeedDistance;
    /* 0x5E0 */ float mrLastTopSpeedTime;
    /* 0x5E4 */ int mxInComboFlags;
    /* 0x5E8 */ int mxInCurrentComboFlags;
    /* 0x5EC */ int mnStartLaneNode;
    /* 0x5F0 */ int mnCurrentRacingLaneNode;
    /* 0x5F4 */ float mrCurrentRacingLaneDistance;
    /* 0x5F8 */ float mrCurrentRacingLaneNodeDistance;
    /* 0x5FC */ int mnCurrentRacingLaneLap;
    /* 0x600 */ int mbPassedFirstRacingLaneLoopPoint;
    /* 0x604 */ CBurn mBurn;
    /* 0x630 */ float mrHealth;
    /* 0x634 */ float mrGapDistance;
    /* 0x638 */ CRaceCar *mpRaceCar;
    /* 0x63C */ int mnCurrentDataLap;
    /* 0x640 */ float marLapTimes[8];
    /* 0x660 */ int mnReferenceLapsCompleted;
    /* 0x664 */ int mnLastReferenceLaneNode;
    /* 0x668 */ int mnTargetLapsCompleted;
    /* 0x66C */ int mnLastTargetLaneNode;
    /* 0x670 */ float mrRaceLength;

    // functions of this class with code in this build:
    // float CScore::GetCheckPointTime(int lnLap, int lnCheckPointFromStart) const  [0x002415C0]
    // float CScore::GetCrashScore()  [0x002415F0]
    // unsigned int CScore::GetTotalCrashBonusMultiplier()  [0x00241690]
    // float CScore::GetCrashCarValue(unsigned int lunCrashCar)  [0x002416A0]
    // void CScore::HandleNonFatalCollision(CRaceCar *lpRaceCar)  [0x00241750]
    // void CScore::HandleNonFatalCollision(CTrafficVehicle *pTraffic)  [0x00241900]
    // void CScore::HandleNearMiss(CRaceCar *pRaceCar, CTrafficVehicle *pTraffic, int lbTrigger, int lnLeftCentreRight)  [0x002419E0]
    // void CScore::HandleCheckpoint(int lnAddTimeMs)  [0x00241BA0]
    // void CScore::HandleCrashReset()  [0x00241F40]
    // void CScore::HandleCrashTrafficCar(CTrafficVehicle *pTraffic)  [0x002420E0]
    // void CScore::HandleCrashPlayerCar(CCollidingBody *pBody1, CCollidingBody *pBody2)  [0x00242170]
    // void CScore::Update()  [0x00242300]
    // void CScore::UpdateGapDistance()  [0x00243070]
    // void CScore::Reset()  [0x00243140]
    // void CScore::Init(CRaceCar *lpRaceCar)  [0x002435F0]
};

// declared in 92 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CScreenFade {  // size 0x120
public:
    /* 0x000 */ RwRGBA mColor;
    /* 0x010 */ RwSky2DVertex m2dVerts[4];
    /* 0x110 */ float mCurrentTime;
    /* 0x114 */ float mTimeOut;
    /* 0x118 */ float mTimeIn;
    /* 0x11C */ CCamera *mpCamera;
};

// declared in 72 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CScreenSettings {  // size 0x014
public:
    /* 0x000 */ unsigned int meAspectRatio;
    /* 0x004 */ int mnScreenOffsetX;
    /* 0x008 */ int mnScreenOffsetY;
    /* 0x00C */ int mnScreen50HzOffsetX;
    /* 0x010 */ int mnScreen50HzOffsetY;

    // functions of this class with code in this build:
    // int CScreenSettings::GetScreenOffsetY()  [0x0020E620]
    // int CScreenSettings::GetScreenOffsetX()  [0x0020E650]
    // int CScreenSettings::SetScreenOffset(int lnOffsetX, int lnOffsetY)  [0x0020E680]
    // void CScreenSettings::SetAspectRatio(EAspectRatio leAspectRatio)  [0x0020E790]
};

// declared in 72 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CSettings {  // size 0x04C
public:
    /* 0x000 */ CControllerSettings maControllerSettings[2];
    /* 0x020 */ CScreenSettings mScreenSettings;
    /* 0x034 */ CSoundSettings mSoundSettings;
    /* 0x040 */ CSoundSettings mMusicPlayerSettings;

    // functions of this class with code in this build:
    // void CSettings::Set()  [0x0020E3D0]
    // void CSettings::Init()  [0x0020E480]
};

// declared in 5 file(s), e.g. gamesource\Game\CTimeAttackLogic.cpp
class CSmallVec {  // size 0x003
public:
    /* 0x000 */ signed char x;
    /* 0x001 */ signed char y;
    /* 0x002 */ signed char z;
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CSnow {  // size 0x1F0
public:
    /* 0x000 */ CSnowGroup maGroups[3];
    /* 0x1E0 */ RwRaster *mpRaster;

    // functions of this class with code in this build:
    // void CSnow::SetDensity(float lrDensity)  [0x0020C030]
    // void CSnow::Render()  [0x0020C090]
    // void CSnow::Update()  [0x0020C310]
    // int CSnow::Reset()  [0x0020C3C0]
    // int CSnow::Setup()  [0x0020C420]
    // void CSnow::Init()  [0x0020C440]
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CSnowGroup {  // size 0x0A0
public:
    /* 0x000 */ B2SnowVUDataTag mVUData;
    /* 0x080 */ RwV3d mDrift;
    /* 0x08C */ float mrWindEffect;
    /* 0x090 */ float mrFallSpeed;
    /* 0x094 */ float mrParticleRatio;
    /* 0x098 */ float mrHeaviness;

    // functions of this class with code in this build:
    // void CSnowGroup::Render(int lnViewSwitch)  [0x0020C4D0]
    // void CSnowGroup::Init(float lrRandomSeed, float lrWindEffect, float lrFallSpeed, float lrParticleRatio, float lrSize, float lrFarClip)  [0x0020C900]
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuGfxComponentResultsTable.cpp
class CSortData {  // size 0x024
public:
    /* 0x000 */ CMenuGfxController mSortController;
    /* 0x018 */ unsigned int munDesiredPos;
    /* 0x01C */ C2dFrame *mpFrame;
    /* 0x020 */ unsigned int munOriginalRow;
};

// declared in 2 file(s), e.g. gamesource\Sound\GameSound.cpp
class CSoundCar {  // size 0x080
public:
    /* 0x000 */ CRaceCar *m_RaceCar;
    /* 0x004 */ CSoundCarEngine *m_Engine;
    /* 0x008 */ RwV3d m_Position;
    /* 0x014 */ RwV3d m_Velocity;
    /* 0x020 */ float m_PrevRPM;
    /* 0x024 */ int m_PrevUpdateTime;
    /* 0x028 */ float m_PreviousAcceleration;
    /* 0x02C */ float m_CurrentAcceleration;
    /* 0x030 */ int m_PrevGear;
    /* 0x034 */ int m_PrevBoostSetting;
    /* 0x038 */ int m_Throttle;
    /* 0x03C */ int m_DumpValveDelay;
    /* 0x040 */ int m_TimeToNextPop;
    /* 0x044 */ float m_VolumeMultiplier;
    /* 0x048 */ int m_ThrottleOffTime;
    /* 0x04C */ int m_PlayerCar;
    /* 0x050 */ int m_CarType;
    /* 0x054 */ int m_ChangedUp;
    /* 0x058 */ int m_PursuitCar;
    /* 0x05C */ RwaSPU2Wave *m_CurrentPursuitHorn;
    /* 0x060 */ int m_FirstReset;
    /* 0x064 */ int m_bBSMLoaded;
    /* 0x068 */ int m_nDictID;
    /* 0x06C */ int m_BoostStartPlayed;
    /* 0x070 */ RwaSPU2Wave **m_Waves;
    /* 0x074 */ CManagedVoice **m_Voices;
    /* 0x078 */ RwaWaveDict *m_Dictionary;
    /* 0x07C */ SSoundRaceCarDBData *m_MyRacecarDBData;

    // functions of this class with code in this build:
    // void CSoundCar::SkidSoundUpdate(CManagedVoice **voice, RwaSPU2Wave *wave, float volume, float freq)  [0x001FE330]
    // void CSoundCar::UpdateHorns(int horn_sounding)  [0x001FE490]
    // void CSoundCar::UpdatePopping(float rpm, int clutch_down, int boost)  [0x001FE6F0]
    // void CSoundCar::UpdateRoadNoise(int boosting)  [0x001FE920]
    // void CSoundCar::UpdateSkidding(CRaceCarPhysics *p, int boosting)  [0x001FEA40]
    // void CSoundCar::UpdateBoost(int boost_start, int current_boost)  [0x001FEEC0]
    // void CSoundCar::UpdateDumpValves(float rpm, float unsmoothed_accelerator, int clutch_down)  [0x001FF080]
    // void CSoundCar::Update(RwV3d *pos, RwV3d *velocity, float rpm, float accel, int gear, CRaceCarPhysics *vehicle_physics, int clutch_down, int boosting)  [0x001FF2B0]
    // int CSoundCar::Reset()  [0x001FF610]
    // void CSoundCar::Shutdown()  [0x001FF8F0]
    // int CSoundCar::Setup(ESoundCarType type, ECarID id, CRaceCar *racecar, int buffer_size)  [0x001FF980]
};

// declared in 2 file(s), e.g. gamesource\Sound\SoundCar.cpp  // VARIANT 1 of 2
class CSoundCarEngine {  // size 0x008
public:
    /* 0x000 */ CSoundEnginePartial *m_FirstPartial;
    /* 0x004 */ RwaWaveDict *m_WaveDictionary;

    // functions of this class with code in this build:
    // void CSoundCarEngine::Update(RwV3d *pos, RwV3d *velocity, float rpm, float dRdT, float accel, float gear, float volume_mult)  [0x001FFBA0]
    // int CSoundCarEngine::Reset()  [0x001FFBB0]
    // void CSoundCarEngine::Destroy()  [0x001FFBC0]
    // int CSoundCarEngine::Init(RwaWaveDict *engine_dict)  [0x001FFBF0]
};

// declared in 1 file(s), e.g. gamesource\Sound\GameSound.cpp  // VARIANT 2 of 2
class CSoundCarEngine {  // size 0x000
public:
};

// declared in 28 file(s), e.g. gamesource\Hud\CHudComponentBonus.cpp  // VARIANT 1 of 2
class cSoundCrash {  // size 0x000
public:

    // functions of this class with code in this build:
    // void cSoundCrash::WoodBarrierProp(float Impulse, RwV3d *Pos)  [0x002140E0]
    // void cSoundCrash::TrafficConeProp(float Impulse, RwV3d *Pos)  [0x00214290]
    // void cSoundCrash::SignpostProp(float Impulse, RwV3d *Pos)  [0x00214440]
    // void cSoundCrash::MetalBarrierProp(float Impulse, RwV3d *Pos)  [0x002145F0]
    // void cSoundCrash::CardboardProp()  [0x002147A0]
    // void cSoundCrash::GenericProp()  [0x002147B0]
    // void cSoundCrash::MetalProp(float Impulse, RwV3d *Pos)  [0x002147C0]
    // void cSoundCrash::RailScrape(RwV3d *Pos, int WhichCar, float LinVel)  [0x00214970]
    // void cSoundCrash::GenericScrape(RwV3d *Pos, int WhichCar, float LinVel)  [0x00214CB0]
    // void cSoundCrash::StoneScrape(RwV3d *Pos, int WhichCar, float LinVel)  [0x00214FF0]
    // void cSoundCrash::ArmcoScrape(RwV3d *Pos, int WhichCar, float LinVel)  [0x00215330]
    // void cSoundCrash::LoseComponent(RwV3d *Pos)  [0x00215670]
    // void cSoundCrash::KerbCrunch(RwV3d *Pos)  [0x00215810]
    // void cSoundCrash::WheelBounce(float Impulse, RwV3d *Pos)  [0x00215A20]
    // void cSoundCrash::RailImpact(float Impulse, RwV3d *Pos)  [0x00215BC0]
    // void cSoundCrash::GenericImpact(float Impulse, RwV3d *Pos)  [0x00215DF0]
    // void cSoundCrash::StoneImpact(float Impulse, RwV3d *Pos)  [0x00216020]
    // void cSoundCrash::ArmcoImpact(float Impulse, RwV3d *Pos)  [0x00216250]
    // void cSoundCrash::Glass(float Impulse, RwV3d *Pos)  [0x00216480]
    // void cSoundCrash::Nudge(float Impulse, RwV3d *Pos)  [0x002166E0]
    // void cSoundCrash::Crash(float Impulse, RwV3d *Pos)  [0x00216910]
    // int cSoundCrash::Init(int CrashMenuBank)  [0x00216B40]
    // void cSoundCrash::Update()  [0x00216C00]
    // void *cSoundCrash::~cSoundCrash()  [0x00216CF0]
    // void *cSoundCrash::cSoundCrash()  [0x00216D40]
};

// declared in 2 file(s), e.g. gamesource\Sound\GameSound.cpp  // VARIANT 2 of 2
class cSoundCrash {  // size 0x140
public:
    /* 0x000 */ RwaSPU2Wave *m_Waves[58];
    /* 0x0E8 */ short mNextBigCrash;
    /* 0x0EA */ short mNextMedCrash;
    /* 0x0EC */ short mNextGlassCrash;
    /* 0x0F0 */ int mCrashMode;
    /* 0x0F4 */ int mNudgeMode;
    /* 0x0F8 */ int mGlassMode;
    /* 0x0FC */ int mImpactMode;
    /* 0x100 */ CManagedVoice *mOldScrapeVoice[4];
    /* 0x110 */ CManagedVoice *mScrapeVoice[4];
    /* 0x120 */ eCurrentScrapeType mCurrentScrape[4];
    /* 0x130 */ int mScrapeTimeout[4];
};

// declared in 2 file(s), e.g. gamesource\Sound\SoundCarEngine.cpp  // VARIANT 1 of 2
class CSoundEnginePartial {  // size 0x010
public:
    /* 0x000 */ char *m_WaveName;
    /* 0x000 */ CManagedVoice *m_Voice;
    /* 0x004 */ class {  // size 0x004
    public:
        /* 0x000 */ int m_Distorted : 1;  // bit offset 0
        /* 0x000 */ int m_FirstReset : 1;  // bit offset 1
    } m_Flags;
    /* 0x008 */ CSoundPartialGraph *m_FirstGraph;
    /* 0x00C */ CSoundEnginePartial *m_NextPartial;

    // functions of this class with code in this build:
    // void CSoundEnginePartial::Update(RwV3d *pos, RwV3d *velocity, float RPM, float dRdT, float Accel, float Gear, float volume_mult)  [0x001FFC10]
    // void CSoundEnginePartial::Destroy()  [0x001FFDA0]
    // int CSoundEnginePartial::Reset(RwaWaveDict *engine_dict)  [0x001FFE40]
    // int CSoundEnginePartial::Init(int fixup_offset)  [0x001FFFA0]
};

// declared in 1 file(s), e.g. gamesource\Sound\SoundCar.cpp  // VARIANT 2 of 2
class CSoundEnginePartial {  // size 0x000
public:
};

// declared in 28 file(s), e.g. gamesource\Hud\CHudComponentBonus.cpp  // VARIANT 1 of 2
class CSoundFrontEnd {  // size 0x000
public:

    // functions of this class with code in this build:
    // void CSoundFrontEnd::Tick()  [0x00213000]
    // void CSoundFrontEnd::Delete()  [0x00213180]
    // void CSoundFrontEnd::Enter()  [0x00213300]
    // void CSoundFrontEnd::Select_Out()  [0x00213480]
    // void CSoundFrontEnd::Select_In()  [0x00213600]
    // void CSoundFrontEnd::Move_Horizontal(float lrOffset)  [0x00213780]
    // void CSoundFrontEnd::Move_Vertical()  [0x00213910]
    // void CSoundFrontEnd::Zoom()  [0x00213A90]
    // void CSoundFrontEnd::VolumeTick()  [0x00213AA0]
    // void CSoundFrontEnd::TrackRevChange()  [0x00213AB0]
    // void CSoundFrontEnd::TrackFwdChange()  [0x00213AC0]
    // void CSoundFrontEnd::SpeechTest()  [0x00213AD0]
    // void CSoundFrontEnd::SFXTest()  [0x00213AE0]
    // void CSoundFrontEnd::Rotate()  [0x00213AF0]
    // void CSoundFrontEnd::MainMenuMove()  [0x00213B00]
    // void CSoundFrontEnd::Illegal()  [0x00213C80]
    // void CSoundFrontEnd::GearChange()  [0x00213C90]
    // void CSoundFrontEnd::FlameLoop()  [0x00213CA0]
    // void CSoundFrontEnd::EdgeMenuMove()  [0x00213CB0]
    // void CSoundFrontEnd::ColourChange()  [0x00213CC0]
    // void CSoundFrontEnd::Cancel()  [0x00213CD0]
    // void CSoundFrontEnd::ConfirmBig()  [0x00213CE0]
    // void CSoundFrontEnd::ConfirmSmall()  [0x00213E60]
    // void CSoundFrontEnd::ShutDown()  [0x00213FE0]
    // int CSoundFrontEnd::Init(int FEMenuBank)  [0x00213FF0]
    // void *CSoundFrontEnd::~CSoundFrontEnd()  [0x00214080]
    // void *CSoundFrontEnd::CSoundFrontEnd()  [0x002140D0]
};

// declared in 2 file(s), e.g. gamesource\Sound\GameSound.cpp  // VARIANT 2 of 2
class CSoundFrontEnd {  // size 0x068
public:
    /* 0x000 */ RwaSPU2Wave *m_Waves[26];
};

// declared in 2 file(s), e.g. gamesource\Sound\SoundCarEngine.cpp
class CSoundPartialGraph {  // size 0x090
public:
    /* 0x000 */ CSoundPartialGraph *m_NextGraph;
    /* 0x004 */ int m_XAxis;
    /* 0x008 */ int m_YAxis;
    /* 0x00C */ int m_NumPointsInUse;
    /* 0x010 */ float m_XPoints[16];
    /* 0x050 */ float m_YPoints[16];

    // functions of this class with code in this build:
    // void CSoundPartialGraph::ApplyGraph(float *inputs, float *outputs)  [0x00200130]
    // int CSoundPartialGraph::Init(int fixup_offset)  [0x00200260]
};

// declared in 72 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CSoundSettings {  // size 0x00C
public:
    /* 0x000 */ float mrMusicVolume;
    /* 0x004 */ float mrSoundFXVolume;
    /* 0x008 */ unsigned int munSoundOutput;

    // functions of this class with code in this build:
    // void CSoundSettings::SetSoundFXVolume(float lrVolume)  [0x0020E600]
    // void CSoundSettings::SetMusicVolume(float lrVolume)  [0x0020E610]
};

// declared in 28 file(s), e.g. gamesource\Hud\CHudComponentBonus.cpp  // VARIANT 1 of 2
class CSoundTraffic {  // size 0x000
public:

    // functions of this class with code in this build:
    // void CSoundTraffic::SilenceAllVoices()  [0x00263BE0]
    // void CSoundTraffic::UpdateSpecial()  [0x00263CD0]
    // void CSoundTraffic::DoHorns()  [0x00263CE0]
    // void CSoundTraffic::DoSkids()  [0x002641B0]
    // void CSoundTraffic::UpdateHorns(int player, CTrafficSoundData *horns, int num_horns)  [0x00264630]
    // void CSoundTraffic::UpdateEngines(int player, CTrafficSoundData *engines, int num_engines)  [0x00264690]
    // void CSoundTraffic::Shutdown()  [0x002646F0]
    // void CSoundTraffic::Update()  [0x00264700]
    // int CSoundTraffic::Reset()  [0x00264C10]
    // int CSoundTraffic::Setup()  [0x00264CC0]
};

// declared in 2 file(s), e.g. gamesource\Sound\GameSound.cpp  // VARIANT 2 of 2
class CSoundTraffic {  // size 0x330
public:
    /* 0x000 */ RwaSPU2Wave *m_Waves[21];
    /* 0x054 */ SPlayingTrafficSound m_Voices[4];
    /* 0x0B4 */ SPlayingTrafficSound m_HornVoices[4];
    /* 0x114 */ SPlayingTrafficSound m_SkidVoices[2];
    /* 0x144 */ CTrafficSoundData m_LastUpdatedEnginesData[4];
    /* 0x204 */ CTrafficSoundData m_LastUpdatedSkidsData[2];
    /* 0x264 */ CTrafficSoundData m_LastUpdatedHornsData[4];
    /* 0x324 */ unsigned int m_UsefulEngineData;
    /* 0x328 */ unsigned int m_UsefulHornData;
    /* 0x32C */ int m_FirstReset;
};

// declared in 23 file(s), e.g. gamesource\Hud\CHudComponentBonus.cpp  // VARIANT 1 of 2
class CSoundValueDatabase {  // size 0x000
public:

    // functions of this class with code in this build:
    // SSoundCrashDBData *CSoundValueDatabase::CrashData(ECrashAudioPage crash_type)  [0x00263690]
    // SSoundTrafficDBData *CSoundValueDatabase::TrafficCarData(EVehicleClass car_type)  [0x002636B0]
    // SSoundRaceCarDBData *CSoundValueDatabase::RaceCarData(ECarID car_type)  [0x002636D0]
    // SSoundCarGeneralDBData *CSoundValueDatabase::GenericData()  [0x002636F0]
    // void CSoundValueDatabase::RegisterDBValues()  [0x00263700]
};

// declared in 8 file(s), e.g. gamesource\Sound\GameSound.cpp  // VARIANT 2 of 2
class CSoundValueDatabase {  // size 0x670
public:
    /* 0x000 */ SSoundCarGeneralDBData m_SoundCarDBData;
    /* 0x09C */ SSoundRaceCarDBData m_SoundRaceCarDBData[22];
    /* 0x464 */ SSoundTrafficDBData m_SoundTrafficDBData[6];
    /* 0x53C */ SSoundCrashDBData m_SoundCrashDBData[11];
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CSparks {  // size 0x110
public:
    /* 0x000 */ void *mpAlloc;
    /* 0x004 */ void *mpRenderData;
    /* 0x008 */ B2SparksTag *maSparks;
    /* 0x00C */ int mnNextSpark;
    /* 0x010 */ float mrCurrentTime;
    /* 0x014 */ RwRaster *mpRaster;
    /* 0x020 */ CRandom mRandom;

    // functions of this class with code in this build:
    // void CSparks::DoPropSparks(CPropPhysics *lpProp, RwV3d *lpPos, RwV3d *lpNormal, float lrHeight, float lrScalar)  [0x00269640]
    // void CSparks::DoTrafficCarSparks(RwV3d *lpPos, float lrHeight, float lrScalar)  [0x00269AB0]
    // void CSparks::DoRaceCarSparks(CRaceCar *lpCar, RwV3d *lpPos, RwV3d *lpNormal, float lrHeight, float lrScalar)  [0x00269D10]
    // void CSparks::Render()  [0x0026A190]
    // void CSparks::EndUpdate()  [0x0026A600]
    // void CSparks::BeginUpdate()  [0x0026A610]
    // int CSparks::Reset()  [0x0026A640]
    // int CSparks::Setup()  [0x0026A6C0]
    // void CSparks::Init()  [0x0026A6D0]
};

// declared in 2 file(s), e.g. gamesource\Race\CRace.cpp
class CSpatiallySortedBodySet {  // size 0x1204
public:
    /* 0x000 */ CSSBSCellListElement *maaCells[16][16];
    /* 0x400 */ CSSBSCellListElement maElements[128];
    /* 0x1200 */ int mnNumElements;
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageSplashScreens.cpp
class CSplashScreenData {  // size 0x00C
public:
    /* 0x000 */ EMenuRaster meRaster;
    /* 0x004 */ float mrTimeOut;
    /* 0x008 */ ESplashType meType;
};

// declared in 2 file(s), e.g. gamesource\Race\CRace.cpp
class CSSBSCellListElement {  // size 0x01C
public:
    /* 0x000 */ CSSBSCellListElement *mpNext;
    /* 0x004 */ ECollisionObjectType meElementType;
    /* 0x008 */ void *mpElement;
    /* 0x00C */ RwV3d mPosition;
    /* 0x018 */ float mrRadius;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class CStaticWorld {  // size 0x1240
public:
    /* 0x000 */ int mbPSSLoaded;
    /* 0x004 */ int mbPSSFixedUp;
    /* 0x008 */ PSSStaticWorld *mpPSSBuffer;
    /* 0x010 */ SRCLight mDirectionalLight;
    /* 0x030 */ SRCLight mAmbientLight;
    /* 0x050 */ CSun mSun;
    /* 0x074 */ RwRGBA mSpecularPassColour;
    /* 0x080 */ RwV4d mActualCameraPosition;
    /* 0x090 */ RwV4d mAdjustedCameraPosition;
    /* 0x0A0 */ RwV4d mCameraRightXZ;
    /* 0x0B0 */ RwV4d mSpecularDirection;
    /* 0x0C0 */ unsigned int munFogColour;
    /* 0x0C4 */ float mrFogStart;
    /* 0x0C8 */ float mrFogEnd;
    /* 0x0CC */ GsPS2Pipeline *mpRenderPipelines[10];
    /* 0x100 */ B2PropObject maDynamicProps[64];
    /* 0x1100 */ CPropPhysics *mpPhysicsProps[64];
    /* 0x1200 */ int mnNumDynamicProps;
    /* 0x1204 */ int mnNumMatricesAdded;
    /* 0x1208 */ int mbUsingWeather;
    /* 0x120C */ RwTexture *mpOriginalSky;

    // functions of this class with code in this build:
    // GsPS2Pipeline *CStaticWorld::GetRenderPipeline(EPSSRenderPipeline ePipelineID)  [0x00243730]
    // int CStaticWorld::SetCurrentMaterial(int lnMaterialID, int lnPacketSize, int lbFog)  [0x00243740]
    // void CStaticWorld::RenderAfterWorld(int lnTBackdrop1, int lnTBackdrop2, int lnTBackdrop3, int lnTBackdrop4, int lnWater, int lnChevron)  [0x00244010]
    // void CStaticWorld::FlushPropType(int lnPropType)  [0x00244270]
    // void CStaticWorld::RenderStaticPropType(int lnPropType, int lnREALWorldUnit, int lbIsCulled)  [0x00244330]
    // void CStaticWorld::SetupAndRenderDynamicPropType(int lnPropType)  [0x00244440]
    // void CStaticWorld::RemoveCrashingProp(CPropPhysics *lpProp)  [0x00244690]
    // void CStaticWorld::RenderOpaqueBackdrops(int lnBackdrop1, int lnBackdrop2, int lnBackdrop3, int lnBackdrop4)  [0x00244790]
    // void CStaticWorld::UpdateAndRenderSky(float lrWeatherIntensity)  [0x00244920]
    // void CStaticWorld::AnimateProps()  [0x00245820]
    // int CStaticWorld::SnapPropOffWorld(B2PropObject *lpProp, int lnREALWorldUnit, CCollidingBody *lpCollidingBody)  [0x00245980]
    // void CStaticWorld::AddPropsToBodySet(int lnREALWorldUnit)  [0x00245AF0]
    // int CStaticWorld::AddPropToDynamicSet(B2PropObject *lpProp, CCollidingBody *lpCollidingBody)  [0x00245BC0]
    // int CStaticWorld::Reset(int lbUseWeather)  [0x002460B0]
    // void CStaticWorld::FixupPSSBuffer()  [0x002464C0]
    // void CStaticWorld::Shutdown()  [0x002466E0]
    // void CStaticWorld::Setup(char *lpacPSSFilename)  [0x00246720]
    // void CStaticWorld::Init()  [0x00246770]
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class CStreamedWorld {  // size 0x21C
public:
    /* 0x000 */ int mnCurrentUnit;
    /* 0x004 */ int mnNumStreamUnits;
    /* 0x008 */ PSSStreamLocation *mpNextDataInfo;
    /* 0x00C */ CGTFile *mpInStream;
    /* 0x010 */ PSWStreamedWorldStructure *mpStream;
    /* 0x014 */ int mb2Player;
    /* 0x018 */ int mnPlayerID;
    /* 0x01C */ int mnStreamCurrentUnit;
    /* 0x020 */ int mnStreamDestinationUnit;
    /* 0x024 */ int mnStreamCircularUnit;
    /* 0x028 */ int mbCurrentlyLoading;
    /* 0x02C */ int mnUnitReadStatus;
    /* 0x030 */ int mbInitialUnitsLoaded;
    /* 0x034 */ int mnOriginalWorldUnit;
    /* 0x038 */ int mnStartWorldUnit;
    /* 0x03C */ EPSWFrustumTestResult maFrustumResults[18];
    /* 0x084 */ EPSWFrustumTestResult maLocalFrustumResults[18];
    /* 0x0CC */ PSWStreamedUnit *mpUnits[18];
    /* 0x114 */ PSWStreamedUnit *mpCurrentUnit;
    /* 0x118 */ int mbResetAll;
    /* 0x11C */ char macStreamPath[256];

    // functions of this class with code in this build:
    // void CStreamedWorld::RenderWorldPostSpecular()  [0x00246F90]
    // void CStreamedWorld::RenderWorld(float lrWeatherIntensity)  [0x00247450]
    // int CStreamedWorld::IntersectSphereWithNearCollisionUnits(unsigned int currentUnit, SRCCollSphere *pSphere, int (*fpCollisionSphereCallback)(SRCCollSphere *, SRCCollisionTriangle *, void *), void *pData)  [0x00248690]
    // int CStreamedWorld::IntersectLineWithNearCollisionUnits(unsigned int currentUnit, SRCCollLine *pLine, int (*fpCollisionLineCallback)(SRCCollLine *, SRCCollisionTriangle *, void *), void *pData)  [0x00249600]
    // int CStreamedWorld::GetUnitOriginalID(int lnUnit)  [0x002497A0]
    // int CStreamedWorld::IsUnitVisible(int lnUnit)  [0x00249850]
    // int CStreamedWorld::TestPosition(RwV3d *lpPos, int lnUnit)  [0x00249890]
    // int CStreamedWorld::UpdateStream()  [0x00249A20]
    // void CStreamedWorld::FixUpStreamUnit()  [0x00249D00]
    // void CStreamedWorld::RestartStream()  [0x00249F60]
    // int CStreamedWorld::Reset()  [0x0024A110]
    // void CStreamedWorld::Shutdown()  [0x0024A320]
    // void CStreamedWorld::Setup(char *lpacPathName, char *lpacFileName, int lb2Player, int lnStreamedWorldID)  [0x0024A3C0]
    // void CStreamedWorld::Init()  [0x0024A500]
};

// declared in 48 file(s), e.g. gamesource\Game\CProfile.cpp
class CSun {  // size 0x024
public:
    /* 0x000 */ RwRaster *mpRaster;
    /* 0x004 */ RwV3d mDirection;
    /* 0x010 */ float mrRadius;
    /* 0x014 */ float mrRed;
    /* 0x018 */ float mrGreen;
    /* 0x01C */ float mrBlue;
    /* 0x020 */ int mbIsMoon;

    // functions of this class with code in this build:
    // void CSun::RenderAsSun()  [0x001F3AE0]
    // void CSun::Render()  [0x001F4430]
    // void CSun::Shutdown()  [0x001F4460]
    // void CSun::Setup(RwTexture *lpTexture, RwV3d *lpDirection, float lrSize, RwRGBAReal *lpColour, int lbIsMoon)  [0x001F4470]
    // void CSun::Init()  [0x001F4500]
};

// declared in 89 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CSuspension {  // size 0x018
public:
    /* 0x000 */ float mrSpringConstant;
    /* 0x004 */ float mrDampingConstant;
    /* 0x008 */ float mrSpringLength;
    /* 0x00C */ float mrRearSpringMultiplier;
    /* 0x010 */ float mrFrontAttachHeight;
    /* 0x014 */ float mrRearAttachHeight;
};

// declared in 74 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CText {  // size 0x020
public:
    /* 0x000 */ ELanguage meLanguage;
    /* 0x004 */ char **mpStrings[7];
};

// declared in 2 file(s), e.g. gamesource\Game\CProfile.cpp
class CTimeAndDate {  // size 0x018
public:
    /* 0x000 */ unsigned int munYear;
    /* 0x004 */ unsigned int munMonth;
    /* 0x008 */ unsigned int munDay;
    /* 0x00C */ unsigned int munHour;
    /* 0x010 */ unsigned int munMinute;
    /* 0x014 */ unsigned int munSecond;
};

// declared in 5 file(s), e.g. gamesource\Game\CRecords.cpp
class CTimeAttackLogic : public CGameLogic {  // size 0x028
public:
    // base CGameLogic at 0x000
    /* 0x004 */ int mnPreviousFastestLap;
    /* 0x008 */ int mnPreviousLapsCompleted;
    /* 0x00C */ float marFastestLapTimes[5];
    /* 0x020 */ int mbIsGhostCarReplaying;
    /* 0x024 */ ETimeAttackState meState;

    // functions of this class with code in this build:
    // void CTimeAttackLogic::ResetFastestLap(CScore *lpScore)  [0x00201660]
    // void CTimeAttackLogic::Destroy()  [0x00201730]
    // void CTimeAttackLogic::Shutdown()  [0x00201770]
    // void CTimeAttackLogic::Reset()  [0x002017C0]
    // void CTimeAttackLogic::RaceFinished()  [0x002018A0]
    // void CTimeAttackLogic::Update()  [0x002018B0]
    // void CTimeAttackLogic::UpdateCameras(int lnPlayerIndex, int lnRaceCarIndex)  [0x00201CE0]
    // void CTimeAttackLogic::Setup()  [0x00201DE0]
    // void CTimeAttackLogic::Init()  [0x00201E60]
};

// declared in 99 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CTimer {  // size 0x01C
public:
    /* 0x000 */ int mnCurrentTime;
    /* 0x004 */ int mnStartTime;
    /* 0x008 */ int mnStopTime;
    /* 0x00C */ int mnTimeStopped;
    /* 0x010 */ int mnTimeRunning;
    /* 0x014 */ int mnInitTime;
    /* 0x018 */ int mbRunning;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class CTrack {  // size 0x2BB00
public:
    /* 0x000 */ ETrackID meTrackID;
    /* 0x004 */ TrackData *mpData;
    /* 0x008 */ StartData *mpStartData;
    /* 0x00C */ CTrafficManager mTrafficManager;
    /* 0x080 */ CTrafficSystem mTrafficSystem;
    /* 0x2A280 */ CLane *mpRacingLane;
    /* 0x2A284 */ CLane *mpAILanes;
    /* 0x2A288 */ int mNumAILanes;
    /* 0x2A28C */ CLane *mpTrafficLanes;
    /* 0x2A290 */ int mNumTrafficLanes;
    /* 0x2A294 */ CCheckPoint *mpCheckPoints;
    /* 0x2A298 */ int mNumCheckPoints;
    /* 0x2A29C */ CTrigger *mpTriggers;
    /* 0x2A2A0 */ int mNumTriggers;
    /* 0x2A2A4 */ CTriggerGroup *mpTriggerGroups;
    /* 0x2A2A8 */ int mNumTriggerGroups;
    /* 0x2A2AC */ CHotspot *mpHotspots;
    /* 0x2A2B0 */ int mNumHotspots;
    /* 0x2A2B4 */ CTrafficLight *mpTrafficLights;
    /* 0x2A2B8 */ int mNumTrafficLights;
    /* 0x2A2BC */ CTrafficLightGroup *mpTrafficLightGroups;
    /* 0x2A2C0 */ int mNumTrafficLightGroups;
    /* 0x2A2C4 */ ReplayCamera *mpReplayCameras;
    /* 0x2A2C8 */ int mNumReplayCameras;
    /* 0x2A2CC */ TrafficHullData *mpTrafficHulls;
    /* 0x2A2D0 */ int mnNumTrafficHulls;
    /* 0x2A2D4 */ CTrafficGenerator *mpTrafficGenerators;
    /* 0x2A2D8 */ int mnNumTrafficGenerators;
    /* 0x2A2DC */ TrafficFillerData *mpTrafficFillers;
    /* 0x2A2E0 */ int mnNumTrafficFillers;
    /* 0x2A2E4 */ CornerData *mpCornerData;
    /* 0x2A2E8 */ int mnNumCorners;
    /* 0x2A2EC */ int mb2P;
    /* 0x2A2F0 */ CRandom mRand;
    /* 0x2A400 */ CStaticWorld mStaticWorld;
    /* 0x2B640 */ CStreamedWorld mStreamedWorld[2];
    /* 0x2BA78 */ int manStreamStartHull[2];
    /* 0x2BA80 */ int mbNightLights;
    /* 0x2BA84 */ int mbReflectedCoronas;
    /* 0x2BA88 */ int mbWeather;
    /* 0x2BA8C */ int mbSpray;
    /* 0x2BA90 */ EPrecipitationType mePrecipitation;
    /* 0x2BA94 */ float mrMinPrecipitationDensity;
    /* 0x2BA98 */ float mrMaxPrecipitationDensity;
    /* 0x2BA9C */ EResetStage meResetStage;
    /* 0x2BAA0 */ int mbLoaded;

    // functions of this class with code in this build:
    // int CTrack::TestLineWithCollisionWorld(int lnCollisionWorldIndex, float *pDistance, RwV3d *pStart, RwV3d *pEnd, RwV3d *pNormal, int *lpTag)  [0x0024A510]
    // void CTrack::Update()  [0x0024A760]
    // int CTrack::Reset()  [0x0024A7D0]
    // void CTrack::Shutdown()  [0x0024AB60]
    // void CTrack::Setup(ETrafficSystemTypes leTrafficSystemType)  [0x0024AC00]
    // void CTrack::GetFileNames(char *sTrackPath, char *sTrackName)  [0x0024AFF0]
    // void CTrack::Init()  [0x0024B0D0]
};

// declared in 8 file(s), e.g. gamesource\Menu\CMenuGfxComponentButtonList.cpp
class CTrackData {  // size 0x01C
public:
    /* 0x000 */ EStringID meNameID;
    /* 0x004 */ ETrackID meTrackID;
    /* 0x008 */ float mrTrackLength;
    /* 0x00C */ unsigned int munNumLaps;
    /* 0x010 */ EStringID meWeatherOffStringID;
    /* 0x014 */ EStringID meWeatherOnStringID;
    /* 0x018 */ int mbWeather;
};

// declared in 72 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CTrackRecords {  // size 0x168
public:
    /* 0x000 */ CRecordsTable mLapTimes;
    /* 0x064 */ CRecordsTable mTotalTimes;
    /* 0x0C8 */ CRecord mScore;
    /* 0x0DC */ CRecord mCombo;
    /* 0x0F0 */ CRecord mAir;
    /* 0x104 */ CRecord mDrift;
    /* 0x118 */ CRecord mOnComing;
    /* 0x12C */ CRecord mBurnouts;
    /* 0x140 */ CRecord mCrash;
    /* 0x154 */ CRecord mCrashTotal;

    // functions of this class with code in this build:
    // void CTrackRecords::Update(unsigned int lunPlayer)  [0x001E1F40]
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CTrafficAxle {  // size 0x028
public:
    /* 0x000 */ RwV3d mPosition;
    /* 0x00C */ CLane *mpLane;
    /* 0x010 */ RwV3d mUp;
    /* 0x01C */ int mnSegment;
    /* 0x020 */ float mrWheelRadius;
    /* 0x024 */ CTrafficVehicle *mpTrafficVehicle;

    // functions of this class with code in this build:
    // int CTrafficAxle::AdjustAxleHeight(CLane *lpMergeLane, int lnMergeSegment)  [0x00264CD0]
    // int CTrafficAxle::Create(CTrafficVehicle *lpTrafficVehicle)  [0x00265050]
    // void CTrafficAxle::Reset()  [0x002650D0]
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class CTrafficGenerator {  // size 0x01C
public:
    /* 0x000 */ TrafficGeneratorData *mpData;
    /* 0x004 */ CLane *mpLane;
    /* 0x008 */ float mrFactor;
    /* 0x00C */ float mrSpeed;
    /* 0x010 */ float mrParamAlong;
    /* 0x014 */ int mnLastGenTime;
    /* 0x018 */ int mnGenGapTime;

    // functions of this class with code in this build:
    // void CTrafficGenerator::Update(int lnRaceCarIndex)  [0x0024B140]
    // void CTrafficGenerator::LockInitialHull(int lnRaceCarIndex)  [0x0024B4A0]
    // void CTrafficGenerator::Reset()  [0x0024B530]
    // void CTrafficGenerator::Setup()  [0x0024B630]
};

// declared in 48 file(s), e.g. gamesource\Game\CProfile.cpp
class CTrafficLight {  // size 0x040
public:
    /* 0x000 */ TrafficLightData *mpData;
    /* 0x004 */ int mnLaneCount;
    /* 0x008 */ int mnLap;
    /* 0x00C */ ETrafficLightState meState;
    /* 0x010 */ int mnStateTime;
    /* 0x014 */ int mnTime;
    /* 0x018 */ int mbActive;
    /* 0x01C */ int mnInitialDelayTillGreen;
    /* 0x020 */ int mnTimeOnGreen;
    /* 0x024 */ int mnTimeOnOrange;
    /* 0x028 */ int mnTimeOnRed;
    /* 0x02C */ int mnPeriod;
    /* 0x030 */ CTrafficParam *mapStoppingTrafficParam[4];

    // functions of this class with code in this build:
    // void CTrafficLight::StopCars()  [0x0024B7D0]
    // void CTrafficLight::Update()  [0x0024BA10]
    // void CTrafficLight::SetTime(int lnTime)  [0x0024BC20]
    // void CTrafficLight::Reset()  [0x0024BCF0]
    // void CTrafficLight::Setup()  [0x0024BE10]
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class CTrafficLightGroup : public CTriggerTarget {  // size 0x014
public:
    // base CTriggerTarget at 0x000
    /* 0x004 */ TrafficLightGroupData *mpData;
    /* 0x008 */ int mnLap;
    /* 0x00C */ int mnStartTime;
    /* 0x010 */ int mbActive;

    // functions of this class with code in this build:
    // void CTrafficLightGroup::OnTrigger(int lbOn, int lnLap)  [0x0024BEE0]
    // void CTrafficLightGroup::Reset()  [0x0024BFA0]
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class CTrafficManager {  // size 0x020
public:
    /* 0x000 */ int manOldHull[4];
    /* 0x010 */ int manCurrentHull[4];

    // functions of this class with code in this build:
    // float CTrafficManager::MeasureBackwardTrafficGap(CLane *lpLane, float lrParamAlong, float *lprTrafficDist)  [0x0024BFB0]
    // float CTrafficManager::MeasureForwardTrafficGap(CLane *lpLane, float lrParamAlong, float *lprTrafficDist)  [0x0024C080]
    // float CTrafficManager::Generate(CLane *lpLane, float lrParamAlong)  [0x0024C140]
    // void CTrafficManager::DestroyTraffic(TrafficFillerData *lpTrafficFillerData, int lnRaceCarIndex)  [0x0024C410]
    // void CTrafficManager::GenerateTraffic(TrafficFillerData *lpTrafficFillerData, int lnRaceCarIndex)  [0x0024C5A0]
    // void CTrafficManager::Update()  [0x0024C880]
    // void CTrafficManager::Reset()  [0x0024CB30]
    // void CTrafficManager::Setup()  [0x0024CBF0]
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CTrafficParam {  // size 0x0A0
public:
    /* 0x000 */ RwMatrixTag mMatrix;
    /* 0x040 */ float mrParamAlong;
    /* 0x044 */ float mrParamAcross;
    /* 0x048 */ float mrSectionLength;
    /* 0x04C */ float mrSpeed;
    /* 0x050 */ float mrNextCarDist;
    /* 0x054 */ float mrNextCarStopThreshold;
    /* 0x058 */ float mrNextCarDistThreshold;
    /* 0x05C */ float mrNextCarTimeThreshold;
    /* 0x060 */ float mrStopDist;
    /* 0x064 */ ETrafficParamState meState;
    /* 0x068 */ float mrSpeedModifier;
    /* 0x06C */ int mbChangedNode;
    /* 0x070 */ CLane *mpLane;
    /* 0x074 */ CTrafficParam *mpNextTrafficParam;
    /* 0x078 */ CTrafficParam *mpPrevTrafficParam;
    /* 0x07C */ float mrSpeedDiff;
    /* 0x080 */ float mrFrontDist;
    /* 0x084 */ float mrBackDist;
    /* 0x088 */ unsigned short mxLinkStatus16;
    /* 0x08A */ unsigned short muLinkThis16;
    /* 0x08C */ unsigned short muTrafficIndex16;
    /* 0x08E */ unsigned short muChangeLaneNode16;
    /* 0x090 */ int muRandom;
    /* 0x094 */ int mnProxChangeLaneNode;
    /* 0x098 */ float mrParamSwerveAcross;
    /* 0x09C */ CTrafficVehicle *mpChangeLaneVehicleAhead;

    // functions of this class with code in this build:
    // int CTrafficParam::CheckForProximityChangeLane(float lrDistance, CLane **lppLane, float *lprParamAlong, int *lpbIsLeft)  [0x0024CC80]
    // int CTrafficParam::CheckForChangeLane(CLane **lppChangeLane, float *lprChangeLaneParamAlong, float *lprParamAlongMergePoint, int *lpbIsLeft)  [0x0024CF40]
    // int CTrafficParam::RemoveFromTrafficLights()  [0x0024D2B0]
    // int CTrafficParam::Remove()  [0x0024D350]
    // int CTrafficParam::Insert(CLane *lpLane, float lrParamAlong, float lrParamAcross, float lrSpeedModifier, ETrafficParamState leInitialState)  [0x0024D500]
    // void CTrafficParam::CalculateTargetParamMatrix(float lrParamAlong, RwMatrixTag *lpResultMatrix)  [0x0024D850]
    // void CTrafficParam::CalculateTargetParamMatrix()  [0x0024DD10]
    // int CTrafficParam::UpdateNodes()  [0x0024DD20]
    // int CTrafficParam::Update()  [0x0024DF60]
    // int CTrafficParam::CalcSpeed()  [0x0024E080]
    // int CTrafficParam::Reset()  [0x0024EF30]
};

// declared in 3 file(s), e.g. gamesource\Race\CTrafficSystem.cpp
class CTrafficSoundData {  // size 0x030
public:
    /* 0x000 */ EVehicleClass meVehicleClass;
    /* 0x004 */ RwV3d mPosition;
    /* 0x010 */ RwV3d mVelocity;
    /* 0x01C */ int mbSkidding;
    /* 0x020 */ int mbHorning;
    /* 0x024 */ int mnVehicleID;
    /* 0x028 */ float mrDistanceToRacecar;
    /* 0x02C */ EB2VehicleType meVehicleType;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class CTrafficSystem {  // size 0x2A200
public:
    /* 0x000 */ CTrafficVehicle mTraffic[254];
    /* 0x1AD00 */ CTrafficParam maTrafficParam[254];
    /* 0x24BC0 */ RwRGBAReal maTrafficColours[16];
    /* 0x24CC0 */ CTrafficVehicle *maapTrafficEngines[4][4];
    /* 0x24D00 */ CTrafficVehicle *maapTrafficHorns[4][2];
    /* 0x24D20 */ CTrafficVehicle *maapTrafficSpecials[4][2];
    /* 0x24D40 */ float maarTrafficEngineDist[4][4];
    /* 0x24D80 */ float maarTrafficHornDuration[4][2];
    /* 0x24DA0 */ float maarTrafficSpecialDist[4][2];
    /* 0x24DC0 */ unsigned int maxValidTraffic[8];
    /* 0x24DE0 */ unsigned int maxValidParam[8];
    /* 0x24E00 */ float mPlayerCarDistances[4][254];
    /* 0x25DE0 */ int mDistanceOrder[4][254];
    /* 0x26DC0 */ int mNumUpdated[4];
    /* 0x26DD0 */ int mNumVehicles;
    /* 0x26DD4 */ CTrafficVehicle *mpDeadTraffic;
    /* 0x26DD8 */ CTrafficParam *mpDeadTrafficParam;
    /* 0x26DDC */ CTrafficVehicle *mpDrawnTraffic[4][26][30];
    /* 0x29E9C */ int mNumActive[4][26];
    /* 0x2A03C */ TrafficStreamStructure *mpTRABuffer;
    /* 0x2A040 */ TrafficCarStructure *mpTrafficModels[26];
    /* 0x2A0A8 */ int mMaxVehicles;
    /* 0x2A0AC */ int mbPursuitMode;
    /* 0x2A0B0 */ int mbCrashMode;
    /* 0x2A0B4 */ int mbStopSkidding;
    /* 0x2A0B8 */ RwRaster *mpShadowRaster;
    /* 0x2A0C0 */ CRandom mRand;
    /* 0x2A1B0 */ float mLODSwitchDistances[2];
    /* 0x2A1B8 */ CPatternGenerator mPatternGen;
    /* 0x2A1BC */ int mbTRALoaded;

    // functions of this class with code in this build:
    // void CTrafficSystem::AddToDeadTrafficParamList(CTrafficParam *lpTrafficParam)  [0x0024F000]
    // void CTrafficSystem::AddToDeadTrafficList(CTrafficVehicle *lpTrafficVehicle)  [0x0024F0B0]
    // CTrafficVehicle *CTrafficSystem::Generate(EB2VehicleType leNewVehicleType, EB2VehicleType leNewTrailerVehicleType, CLane *lpLane, float lrParamAlong, float lrSpeedModifier, int lbHotspotGenerated)  [0x0024F160]
    // void CTrafficSystem::GenerateVehicleType(EVehicleClass leVehicleClass, EB2VehicleType *lpeVehicleType, EB2VehicleType *lpeTrailerVehicleType)  [0x0024FF10]
    // void CTrafficSystem::Update()  [0x00250490]
    // void CTrafficSystem::SwitchTrafficOff()  [0x00251340]
    // int CTrafficSystem::Reset()  [0x00251370]
    // void CTrafficSystem::RenderTrafficModel(CTrafficVehicle *lpSourceVehicle, int lnLOD, float lrOpacity)  [0x00251880]
    // int CTrafficSystem::Draw(int PlayerIndex)  [0x00252D00]
    // void CTrafficSystem::Shutdown()  [0x00253DC0]
    // void CTrafficSystem::FixUpTRA()  [0x00253E20]
    // void CTrafficSystem::Setup(ETrafficSystemTypes leTrafficSystemType)  [0x00253FF0]
    // void CTrafficSystem::Init()  [0x00254150]
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CTrafficVehicle {  // size 0x1B0
public:
    /* 0x000 */ RwMatrixTag mMatrix;
    /* 0x040 */ CTrafficParam *mpTrafficParam;
    /* 0x044 */ float mrSpeed;
    /* 0x048 */ CLane *mpMergeLane;
    /* 0x04C */ float mrMergeParamAlong;
    /* 0x050 */ CTrafficAxle mFrontAxle;
    /* 0x078 */ CTrafficAxle mBackAxle;
    /* 0x0A0 */ float mrBodyPitchSinTheta;
    /* 0x0A4 */ float mrBodyPitchCosTheta;
    /* 0x0A8 */ float mrBodyRollSinPhi;
    /* 0x0AC */ float mrBodyRollCosPhi;
    /* 0x0B0 */ float mrWheelAngle;
    /* 0x0B4 */ float mrStopDist;
    /* 0x0B8 */ float mrSteeringAngle;
    /* 0x0BC */ float mrLinearSpeed;
    /* 0x0C0 */ unsigned char muFlag8;
    /* 0x0C1 */ unsigned char mxDrawFlag8;
    /* 0x0C2 */ unsigned char mbUpdated8;
    /* 0x0C3 */ unsigned char muState8;
    /* 0x0C4 */ RwV3d mTargetPosition;
    /* 0x0D0 */ unsigned int mxIndicators;
    /* 0x0D4 */ float mrWheelRadius;
    /* 0x0D8 */ float mrLanePosBehaviour;
    /* 0x0DC */ unsigned short muTrafficIndex16;
    /* 0x0DE */ unsigned char muRandom8;
    /* 0x0DF */ unsigned char mxLights8;
    /* 0x0E0 */ float mrLanePosSpeed;
    /* 0x0E4 */ float mrHeadlightDuration;
    /* 0x0E8 */ ESwerveType meSwerveType;
    /* 0x0EC */ float mrIndicatorTime;
    /* 0x0F0 */ float mrHeadlightTime;
    /* 0x0F4 */ float mrBrakelightTime;
    /* 0x0F8 */ int mbHeadlightsDipped;
    /* 0x0FC */ CTrafficVehicle *mpNextDeadTrafficVehicle;
    /* 0x100 */ float mrCollisionWorldIntensity;
    /* 0x104 */ float mrSpeedModifier;
    /* 0x108 */ float mrMass;
    /* 0x10C */ RwFrustumTestResult mFrustumTestResult;
    /* 0x110 */ float mrBBoxSupX;
    /* 0x114 */ float mrBBoxSupZ;
    /* 0x118 */ float mrBackPivotOffset;
    /* 0x11C */ float mrForwardPivotOffset;
    /* 0x120 */ float mrSuspensionRoll;
    /* 0x124 */ float mrSuspensionPitch;
    /* 0x128 */ int mnLastNodeIndex;
    /* 0x12C */ int mnCurrentUnit;
    /* 0x130 */ float mrSuspensionTravel;
    /* 0x134 */ short maanSkidMarkIndices16[6][3];
    /* 0x158 */ int meLastColTag;
    /* 0x15C */ EVehicleClass meClass;
    /* 0x160 */ EB2VehicleType meType;
    /* 0x164 */ EVehicleColour meColour;
    /* 0x168 */ CTrafficVehicle *mpCabVehicle;
    /* 0x16C */ CTrafficVehicle *mpTrailerVehicle;
    /* 0x170 */ CCollidingTrafficPhysics *mpCrashVehicle;
    /* 0x174 */ TrafficCarStructure *mpTrafficCarStructure;
    /* 0x178 */ int mbHotspotGenerated;
    /* 0x17C */ float mrParamAlongMergePoint;
    /* 0x180 */ float mrSwerveTime;
    /* 0x184 */ int mbTrafficHornOn;
    /* 0x188 */ int mnBeepPattern;
    /* 0x18C */ float mrTrafficHornTime;
    /* 0x190 */ float mrCabPivotDistance;
    /* 0x194 */ float mrTrailerPivotDistance;
    /* 0x198 */ int mnNumBeeps;
    /* 0x19C */ int mnSwerveIndex;
    /* 0x1A0 */ int marRaceCarForwardDist[4];

    // functions of this class with code in this build:
    // void CTrafficVehicle::StartColliding(int lnCollisionID)  [0x002541C0]
    // int CTrafficVehicle::ApplyNiceOncomingBehaviour(CRaceCar *lpRaceCar, float lrDist)  [0x00254600]
    // int CTrafficVehicle::ApplyNiceSameWayBehaviour(CRaceCar *lpRaceCar, float lrDist)  [0x00254C40]
    // void CTrafficVehicle::DoTrafficBehaviour()  [0x00255000]
    // void CTrafficVehicle::ChangeLane(CLane *lpMergeLane, float lrMergeParamAlong)  [0x00255270]
    // void CTrafficVehicle::CheckForChangeLane()  [0x002553B0]
    // void CTrafficVehicle::RemoveFromLanes()  [0x00255540]
    // void CTrafficVehicle::UpdateTrailerPosition()  [0x002555B0]
    // void CTrafficVehicle::InitaliseTrailerPosition()  [0x00255EB0]
    // void CTrafficVehicle::UpdatePosition()  [0x00256500]
    // void CTrafficVehicle::InitalisePosition()  [0x00257000]
    // void CTrafficVehicle::Update(TrafficRaceCarInfo *lpTrafficRaceCarInfo)  [0x00257570]
    // void CTrafficVehicle::Destroy()  [0x00258450]
    // int CTrafficVehicle::Create(EB2VehicleType leNewVehicleType, int lbHotspotGenerated)  [0x00258570]
    // void CTrafficVehicle::Reset()  [0x002587C0]
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class CTrailSystem {  // size 0x2C20
public:
    /* 0x000 */ TrailGroup mTrailGroups[64];
    /* 0x2C00 */ RpAtomic *mpAtomics[3][2];
    /* 0x2C18 */ float mGameTime;
    /* 0x2C1C */ int mRenderBuffer;
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CTransmission {  // size 0x170
public:
    /* 0x000 */ float mnGearRatioReverseValue;
    /* 0x004 */ float maGearRatioValues[7];
    /* 0x020 */ float mnGearRatioFinalValue;
    /* 0x024 */ float mEngineIdleRPMValue;
    /* 0x028 */ float mChangeUpRPMValue;
    /* 0x02C */ float mChangeDownRPMValue;
    /* 0x030 */ float mEngineMomentOfInertiaValue;
    /* 0x034 */ float mEngineFrictionTorqueValue;
    /* 0x038 */ float mEngineMaxRPMValue;
    /* 0x03C */ float mEngineTorqueValue;
    /* 0x040 */ float mrMaxRevs;
    /* 0x044 */ float mrPeakTorqueRevs;
    /* 0x048 */ float mrFallOffTorqueRevs;
    /* 0x04C */ float mrEngineAngularVel;
    /* 0x050 */ float mrClutchReleaseTime;
    /* 0x054 */ int mbClutchDown;
    /* 0x058 */ int mbLockInGear;
    /* 0x060 */ CRandom mRandom;
    /* 0x150 */ int mbManual;
    /* 0x154 */ int mbManualSwitched;
    /* 0x158 */ int mbGearUpSwitched;
    /* 0x15C */ int mbGearDownSwitched;
    /* 0x160 */ int mnGear;
    /* 0x164 */ int mnTopGear;
    /* 0x168 */ float mrLastChangeDownTime;
    /* 0x16C */ float mrLastChangeUpTime;
};

// declared in 81 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class CTrigger : public CTriggerTarget {  // size 0x018
public:
    // base CTriggerTarget at 0x000
    /* 0x004 */ TriggerData *mpData;
    /* 0x008 */ int mnTriggerTime;
    /* 0x00C */ int mbTriggered;
    /* 0x010 */ int mnLap;
    /* 0x014 */ CRaceCar *mpRaceCar;

    // functions of this class with code in this build:
    // int CTrigger::Update()  [0x002589B0]
    // void CTrigger::Trigger()  [0x00258A20]
    // void CTrigger::OnTrigger(CRaceCar *lpRaceCar, int lnLap)  [0x00258AB0]
    // void CTrigger::Init()  [0x00258AF0]
};

// declared in 81 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class CTriggerGroup : public CTriggerTarget {  // size 0x01C
public:
    // base CTriggerTarget at 0x000
    /* 0x004 */ TriggerGroupData *mpData;
    /* 0x008 */ int mnTriggerTime;
    /* 0x00C */ int mnTriggered;
    /* 0x010 */ CModel *mpModel;
    /* 0x014 */ int mnLap;
    /* 0x018 */ CRaceCar *mpRaceCar;

    // functions of this class with code in this build:
    // int CTriggerGroup::CheckConditions(CRaceCar *lpRaceCar)  [0x00258B20]
    // void CTriggerGroup::Trigger()  [0x00258B60]
    // void CTriggerGroup::OnTrigger(CRaceCar *lpRaceCar, int lnLap)  [0x00258C10]
    // int CTriggerGroup::TestLine()  [0x00258C30]
    // int CTriggerGroup::Test(CRaceCar *lpRaceCar)  [0x00258C40]
    // void CTriggerGroup::Init()  [0x00258DC0]
};

// declared in 68 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class CTriggerManager {  // size 0x21C
public:
    /* 0x000 */ CRace *mpRace;
    /* 0x004 */ int mnNumTriggerUpdates;
    /* 0x008 */ CTrigger *mapTriggerUpdateList[32];
    /* 0x088 */ int mnNumActiveTriggerGroups;
    /* 0x08C */ CTriggerGroup *mapActiveTriggerGroups[100];

    // functions of this class with code in this build:
    // void CTriggerManager::UpdateAfterCrash(int prevNode, CRaceCar *pCar)  [0x00258DE0]
    // void CTriggerManager::Update()  [0x00258EF0]
    // void CTriggerManager::AddUpdateTrigger(CTrigger *lpTrigger)  [0x002590B0]
    // void CTriggerManager::Reset()  [0x002590D0]
    // void CTriggerManager::Setup()  [0x00259270]
    // void CTriggerManager::Init()  [0x00259370]
};

// declared in 82 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class CTriggerTarget {  // size 0x004
public:
};

// declared in 69 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class CTrigWarning : public CTriggerTarget {  // size 0x014
public:
    // base CTriggerTarget at 0x000
    /* 0x004 */ ETrigWarnType maType[4];

    // functions of this class with code in this build:
    // void CTrigWarning::Update()  [0x00259470]
    // void CTrigWarning::OnTrigger(CRaceCar *lpCar, void *lpData)  [0x002594A0]
    // void CTrigWarning::Reset()  [0x002594C0]
};

// declared in 2 file(s), e.g. gamesource\Menu\CMenuResultsScreens.cpp
class CTurnBasedCRASH : public CTurnBasedGameMode {  // size 0x79C0
public:
    // base CTurnBasedGameMode at 0x000
    /* 0x1A40 */ unsigned char mun8NumTurns;
    /* 0x1A44 */ int mbSuddenDeath;
    /* 0x1A48 */ int mbStartedTurn;
    /* 0x1A4C */ int mabSuddenDeathPlayer[4];
    /* 0x1A80 */ CPlayerCar mPlayer1Car;
};

// declared in 2 file(s), e.g. gamesource\Menu\CMenuResultsScreens.cpp
class CTurnBasedGameMode : public CGameMode {  // size 0x1A40
public:
    // base CGameMode at 0x000
    /* 0x03C */ CScore maPlayerScores[4];
    /* 0x1A0C */ float marOverallScores[4][2];
    /* 0x1A2C */ CGameMode *mpSinglePlayerGameMode;
    /* 0x1A30 */ unsigned char mun8MaxPlayers;
    /* 0x1A31 */ unsigned char mun8CurrentPlayer;
    /* 0x1A34 */ ETurnBasedState meState;
    /* 0x1A38 */ unsigned char maun8PlayersSortedByScore[4];
    /* 0x1A3C */ unsigned char maun8PrevPlayersSortedByScore[4];
};

// declared in 1 file(s), e.g. gamesource\Game\CTwoPlayerSSGameMode.cpp
class CTwoPlayerSSGameMode : public CGameMode {  // size 0x03C
public:
    // base CGameMode at 0x000

    // functions of this class with code in this build:
    // unsigned int CTwoPlayerSSGameMode::GetPrevPlayerPoints(unsigned int lunPlayer)  [0x0020D910]
    // unsigned int CTwoPlayerSSGameMode::GetPlayerPoints(unsigned int lunPlayer)  [0x0020D930]
    // void CTwoPlayerSSGameMode::RaceFinished()  [0x0020D950]
    // void CTwoPlayerSSGameMode::PlayerPointsReset()  [0x0020DA30]
    // void CTwoPlayerSSGameMode::ActualRestart()  [0x0020DA50]
    // void CTwoPlayerSSGameMode::Destroy()  [0x0020DAD0]
    // CGameMode *CTwoPlayerSSGameMode::Update()  [0x0020DAE0]
    // void CTwoPlayerSSGameMode::Exit()  [0x0020E2D0]
    // void CTwoPlayerSSGameMode::Enter()  [0x0020E2E0]
    // void CTwoPlayerSSGameMode::Init()  [0x0020E3C0]
};

// declared in 89 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CVehiclePhysics : public CCollidingBody {  // size 0xAA0
public:
    // base CCollidingBody at 0x000
    /* 0x5A0 */ CWheel maWheels[6];
    /* 0x900 */ int mnNumWheels;
    /* 0x904 */ CSuspension mSuspension;
    /* 0x91C */ int mnNumAttachedWheels;
    /* 0x920 */ RwV3d mFrontWheelAt;
    /* 0x92C */ float mrSteeringAngle;
    /* 0x930 */ RwMatrixTag *mapWheelMatrices[6];
    /* 0x948 */ int meWholeCarColTag;
    /* 0x94C */ int mbVehicleHasAir;
    /* 0x950 */ int mabBodyworkAttached[8];
    /* 0x970 */ float marBodyworkDamage[8];
    /* 0x990 */ SRCBBox maBodyworkBoxes[8];
    /* 0xA90 */ int mnNumBodyworkParts;
    /* 0xA94 */ EGlassState meGlassState;
    /* 0xA98 */ unsigned long long mxActivePoints;

    // functions of this class with code in this build:
    // void CVehiclePhysics::ResetCrashEffects()  [0x001CD4A0]
    // void CVehiclePhysics::ReAttachWheels()  [0x001CD540]
    // CPropPhysics *CVehiclePhysics::DetachBodywork(int lnIndex)  [0x001CD590]
    // CPropPhysics *CVehiclePhysics::DetachWheel(int lnWheelIndex)  [0x001CD840]
    // void CVehiclePhysics::ApplyDamage(RwV3d *lpPointOfImpact, float lrImpulse)  [0x001CDBB0]
    // void CVehiclePhysics::UpdateSuspension(float lrTimeStep)  [0x001CDDA0]
    // void CVehiclePhysics::CollideWheels()  [0x001CEBD0]
    // void CVehiclePhysics::Update(float lrTimeStep)  [0x001CF260]
    // void CVehiclePhysics::Destroy()  [0x001CF350]
    // void CVehiclePhysics::Shutdown()  [0x001CF360]
    // void CVehiclePhysics::Reset()  [0x001CF370]
    // void CVehiclePhysics::Setup()  [0x001CF560]
    // void CVehiclePhysics::Init()  [0x001CF5B0]
};

// declared in 30 file(s), e.g. gamesource\Hud\CHudComponentBonus.cpp
class CVoiceManager {  // size 0x704
public:
    /* 0x000 */ CHardwareVoice m_HardwareVoices[48];
    /* 0x300 */ CManagedVoice *m_ManagedVoices[256];
    /* 0x700 */ unsigned int m_PreviousUpdateTime;

    // functions of this class with code in this build:
    // void CVoiceManager::TriggerVoices()  [0x00279990]
    // void CVoiceManager::AssignNewNormals(CManagedVoice **either, unsigned int *mask0, unsigned int *mask1)  [0x00279BC0]
    // void CVoiceManager::AssignNewSpecials(CManagedVoice **core0, CManagedVoice **core1, unsigned int *mask0, unsigned int *mask1)  [0x00279C60]
    // void CVoiceManager::ReassignThoseAlreadyPlaying(CManagedVoice **core0, CManagedVoice **core1, unsigned int *mask0, unsigned int *mask1)  [0x00279D80]
    // void CVoiceManager::BuildTargetLists(CManagedVoice **core0, CManagedVoice **core1, CManagedVoice **either, unsigned int *mask0, unsigned int *mask1)  [0x00279E20]
    // int CVoiceManager::SortManagedVoices()  [0x0027A090]
    // int CVoiceManager::UpdateWaves(unsigned int elapsed_ms)  [0x0027A1E0]
    // void CVoiceManager::InitRwaVoices(RwaSPU2Output *output_object)  [0x0027A420]
    // int CVoiceManager::ReserveSpuChannel(int reverb)  [0x0027A540]
    // void CVoiceManager::StopSound(CManagedVoice *voice)  [0x0027A590]
    // CManagedVoice *CVoiceManager::PlaySound(CPlaySoundParams *params)  [0x0027A600]
    // void CVoiceManager::Update()  [0x0027A870]
    // void CVoiceManager::Reset()  [0x0027A940]
    // void CVoiceManager::Init(RwaSPU2Output *output_object)  [0x0027A9E0]
};

// declared in 89 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CWheel {  // size 0x090
public:
    /* 0x000 */ RwV3d mPosition;
    /* 0x00C */ float mrRadius;
    /* 0x010 */ RwV3d mContactPoint;
    /* 0x01C */ int meColTag;
    /* 0x020 */ RwV3d mContactNormal;
    /* 0x02C */ float mrTotalTorque;
    /* 0x030 */ float mrAngle;
    /* 0x034 */ float mrAngularVelocity;
    /* 0x038 */ float mrMomentOfInertia;
    /* 0x03C */ int mbIsTouchingWorld;
    /* 0x040 */ float mrHeight;
    /* 0x044 */ float mrNewHeight;
    /* 0x048 */ int mbSuspensionImpulse;
    /* 0x04C */ EWheelState meWheelState;
    /* 0x050 */ float mrWheelDamage;
    /* 0x054 */ int mbKerbed;
    /* 0x058 */ float mrRadiusScalar;
    /* 0x05C */ float mrWidthScalar;
    /* 0x060 */ short manSkidMarkIndices[3];
    /* 0x068 */ RwV3d mOldPosition;
    /* 0x074 */ int meLastValidColTag;
    /* 0x078 */ RwV3d mOldContactPoint;
};

// declared in 57 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class CWrongWayWall {  // size 0x038
public:
    /* 0x000 */ int mbTest;
    /* 0x004 */ int mbWrongWay;
    /* 0x008 */ float mDistance;
    /* 0x00C */ RwV3d mPoint;
    /* 0x018 */ RwV3d mNormal;
    /* 0x024 */ int mCurrentWallNode;
    /* 0x028 */ int mMaxCarNode;
    /* 0x02C */ RpAtomic *mpAtomic;
    /* 0x030 */ RpMaterial *mpMaterial;
    /* 0x034 */ RwFrame *mpFrame;

    // functions of this class with code in this build:
    // void CWrongWayWall::Destroy()  [0x002594F0]
    // void CWrongWayWall::Shutdown()  [0x00259500]
    // int CWrongWayWall::Draw(CRaceCar *lpCar)  [0x00259570]
    // int CWrongWayWall::Test(CRaceCar *lpCar)  [0x002597F0]
    // void CWrongWayWall::Reset()  [0x00259CA0]
    // void CWrongWayWall::Setup()  [0x00259FC0]
    // void CWrongWayWall::Init()  [0x0025A1E0]
};

// declared in 1 file(s), e.g. bameshop.c
struct Edge {  // size 0x010
    /* 0x000 */ unsigned short v1;
    /* 0x002 */ unsigned short v2;
    /* 0x004 */ TriBinEntry *tri1;
    /* 0x008 */ TriBinEntry *tri2;
    /* 0x00C */ Edge *next;
};

// declared in 2 file(s), e.g. gamesource\Sound\GameSound.cpp
class FESWave {  // size 0x008
public:
    /* 0x000 */ char *m_WaveName;
    /* 0x004 */ int Dummy;
};

// declared in 1 file(s), e.g. gamesource\Race\CGameData.cpp
class GameDataHeader {  // size 0x0B0
public:
    /* 0x000 */ char macVersion[32];
    /* 0x020 */ int mnSegmentNodeDataSize;
    /* 0x024 */ int mnSegmentDimensionsSize;
    /* 0x028 */ int mnRacingSegmentDataSize;
    /* 0x02C */ int mnAISegmentDataSize;
    /* 0x030 */ int mnTrafficSegmentDataSize;
    /* 0x034 */ int mnLaneDataSize;
    /* 0x038 */ int mnTriggerDataSize;
    /* 0x03C */ int mnTriggerGroupDataSize;
    /* 0x040 */ int mnHotspotDataSize;
    /* 0x044 */ int mnTrafficLightDataSize;
    /* 0x048 */ int mnTrafficLightGroupDataSize;
    /* 0x04C */ int mnReplayCameraSize;
    /* 0x050 */ int mnTrackDataSize;
    /* 0x054 */ int mnNumNodes;
    /* 0x058 */ int mnNumRacingSegments;
    /* 0x05C */ int mnNumRacingLanes;
    /* 0x060 */ int mnNumAISegments;
    /* 0x064 */ int mnNumAILanes;
    /* 0x068 */ int mnNumTrafficSegments;
    /* 0x06C */ int mnNumTrafficLanes;
    /* 0x070 */ int mnNumTriggers;
    /* 0x074 */ int mnNumTriggerGroups;
    /* 0x078 */ int mnNumHotspots;
    /* 0x07C */ int mnNumTrafficLights;
    /* 0x080 */ int mnNumTrafficLightGroups;
    /* 0x084 */ int mnNumReplayCameras;
    /* 0x088 */ int mnChunkSize;
    /* 0x08C */ int mnNumTrafficHulls;
    /* 0x090 */ int mnTrafficHullDataSize;
    /* 0x094 */ int mnNumTrafficGenerators;
    /* 0x098 */ int mnTrafficGeneratorDataSize;
    /* 0x09C */ int mnNumTrafficFillers;
    /* 0x0A0 */ int mnTrafficFillerDataSize;
    /* 0x0A4 */ int mnNumCorners;
    /* 0x0A8 */ int mnCornerDataSize;
    /* 0x0AC */ int mnPad;
};

// declared in 79 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class GsPS2Pipeline {  // size 0x020
public:
    /* 0x000 */ EGSPS2PipelineID mePipelineID;
    /* 0x004 */ void *mpVUCode;
    /* 0x008 */ int mnVifOffset;
    /* 0x00C */ int mxFlags;
    /* 0x010 */ int (*mInstanceFunction)(RpGeometry *, RpMesh *, GsPS2RenderObject *);
    /* 0x014 */ int (*mUpdateFunction)(int, int, int, int, int, void *);
    /* 0x018 */ int (*mDispatchFunction)(int, int, int, void *);
    /* 0x01C */ int (*mMaterialSetupFunction)(int, int, void *);
};

// declared in 98 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class GsPS2RenderObject {  // size 0x010
public:
    /* 0x000 */ EGSPS2PipelineID mePipelineID;
    /* 0x004 */ unsigned char *mpRenderData;
    /* 0x008 */ void *mpNiceUsefulPointer;
    /* 0x00C */ unsigned int munNiceUsefulNumber;
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class GsPS2RenderObjectCar {  // size 0x030
public:
    /* 0x000 */ EGSPS2PipelineID mePipelineID;
    /* 0x004 */ unsigned char *mpRenderData;
    /* 0x008 */ void *mpNiceUsefulPointer;
    /* 0x00C */ unsigned int munNiceUsefulNumber;
    /* 0x010 */ RwV4d mMaterialColour;
    /* 0x020 */ unsigned int munAlpha1;
    /* 0x024 */ unsigned int munTest1;
    /* 0x028 */ unsigned int munGIFTagPrim;
    /* 0x02C */ unsigned short mxMeshID;
    /* 0x02E */ unsigned short munTex0Index;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class GsPS2RenderObjectChevron {  // size 0x028
public:
    /* 0x000 */ GsPS2RenderObject maChevrons[2];
    /* 0x020 */ int mabChevronExists[2];
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class GsPS2RenderObjectInstance {  // size 0x020
public:
    /* 0x000 */ EGSPS2PipelineID mePipelineID;
    /* 0x004 */ unsigned char *mpRenderData;
    /* 0x008 */ void *mpNiceUsefulPointer;
    /* 0x00C */ unsigned int munNiceUsefulNumber;
    /* 0x010 */ float mrRadius;
    /* 0x014 */ float mrStartFadeDistance;
    /* 0x018 */ float mrEndFadeDistance;
    /* 0x01C */ float mrRotationSpeed;
};

// declared in 72 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class GtLListPoolTag {  // size 0x01C
public:
    /* 0x000 */ void *pAlloc;
    /* 0x004 */ GtLLLinkTag *lpLinksAlloc;
    /* 0x008 */ GtLLLinkTag *lpLinksWorking;
    /* 0x00C */ int nLinkSize;
    /* 0x010 */ int nNumLinks;
    /* 0x014 */ int nAlignment;
    /* 0x018 */ GtLLLinkTag *lpFirstFree;
};

// declared in 72 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class GtLListTag {  // size 0x008
public:
    /* 0x000 */ GtLListPoolTag *lppPool;
    /* 0x004 */ int nFirstLinkOffset;
};

// declared in 72 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class GtLLLinkTag {  // size 0x008
public:
    /* 0x000 */ GtLLLinkTag *lpNext;
    /* 0x004 */ GtLLLinkTag *lpPrev;
};

// declared in 82 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class GtPadDataDualShockTag {  // size 0x1C0
public:
    /* 0x000 */ int nPadType;
    /* 0x004 */ int nSize;
    /* 0x008 */ unsigned char NativeData[32];
    /* 0x040 */ u_long128 pad_dma_buf[16];
    /* 0x140 */ int nPort;
    /* 0x144 */ int nSlot;
    /* 0x148 */ int bPortOpen;
    /* 0x14C */ int nState;
    /* 0x150 */ float Buttons[16];
    /* 0x190 */ float StickAxes[4];
    /* 0x1A0 */ float AxisCenters[4];
    /* 0x1B0 */ int PressureSensitive;
    /* 0x1B4 */ int Analogue;
    /* 0x1B8 */ int AnalogueLocked;
};

// declared in 82 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class GtPadDataLogitechWheelClassATag {  // size 0x048
public:
    /* 0x000 */ int nPadType;
    /* 0x004 */ int nSize;
    /* 0x008 */ int nPort;
    /* 0x00C */ int nSlot;
    /* 0x010 */ int bPortOpen;
    /* 0x014 */ int nState;
    /* 0x018 */ lgDevDeviceDesc DeviceData;
    /* 0x030 */ lgDevPosition PositionData;
    /* 0x040 */ int DeviceIndex;
    /* 0x044 */ int DeviceHandle;
};

// declared in 1 file(s), e.g. gamesource\Toolkits\gtpadPS2.c
class GtPadDataLogitechWheelClassBTag {  // size 0x048
public:
    /* 0x000 */ int nPadType;
    /* 0x004 */ int nSize;
    /* 0x008 */ int nPort;
    /* 0x00C */ int nSlot;
    /* 0x010 */ int bPortOpen;
    /* 0x014 */ int nState;
    /* 0x018 */ lgDevDeviceDesc DeviceData;
    /* 0x030 */ lgDevPosition PositionData;
    /* 0x040 */ int DeviceIndex;
    /* 0x044 */ int DeviceHandle;
};

// declared in 1 file(s), e.g. gamesource\Toolkits\gtpadPS2.c
class GtPadDataPS2Tag {  // size 0x1C0
public:
    /* 0x000 */ int nPadType;
    /* 0x004 */ int nSize;
    /* 0x008 */ unsigned char NativeData[32];
    /* 0x040 */ u_long128 pad_dma_buf[16];
    /* 0x140 */ int nPort;
    /* 0x144 */ int nSlot;
    /* 0x148 */ int bPortOpen;
    /* 0x14C */ int nState;
    /* 0x150 */ float Buttons[16];
};

// declared in 1 file(s), e.g. gamesource\Toolkits\gtpadPS2.c
class GtPadDataTag {  // size 0x008
public:
    /* 0x000 */ int nPadType;
    /* 0x004 */ int nSize;
};

// declared in 9 file(s), e.g. gamesource\Game\CTwoPlayerSSGameMode.cpp
class GtPadLogitechWheelForceData {  // size 0x040
public:
    /* 0x000 */ lgDevForceEffect lgForce;
    /* 0x03C */ int nEffectID;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\GTFileSystemPS2DVD.cpp
class GtsConfigTag {  // size 0x010
public:
    /* 0x000 */ unsigned int nNumEEStreams;
    /* 0x004 */ unsigned int nNumIOPStreams;
    /* 0x008 */ unsigned int nRingBufferSize;
    /* 0x00C */ unsigned int nBufferReadSize;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\GTFileSystemPS2DVD.cpp
class GtsIOPFuncsTag {  // size 0x010
public:
    /* 0x000 */ int (*GtsOpenIOP)(char *);
    /* 0x004 */ void (*GtsCloseIOP)(int);
    /* 0x008 */ unsigned int (*GtsReadIOP)(int, unsigned int, void *);
    /* 0x00C */ int (*GtsSeekIOP)(int, int, int);
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\GTFileSystemPS2DVD.cpp
class GtsOpenedFileTag {  // size 0x00C
public:
    /* 0x000 */ int nFileID;
    /* 0x004 */ unsigned int nFileLength;
    /* 0x008 */ unsigned int nNumSectors;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class HotspotData {  // size 0x150
public:
    /* 0x000 */ int mnNumLanes;
    /* 0x004 */ int manPad[3];
    /* 0x010 */ HotspotLaneData maHotspotLaneData[4];
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class HotspotLaneData {  // size 0x050
public:
    /* 0x000 */ CLane *mpLane;
    /* 0x004 */ unsigned short muStartSegment16;
    /* 0x006 */ unsigned short muEndSegment16;
    /* 0x008 */ int mnNumVehicles;
    /* 0x00C */ int mnPad;
    /* 0x010 */ HotspotVehicleData maHotspotVehicleData[8];
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class HotspotVehicleData {  // size 0x008
public:
    /* 0x000 */ unsigned char muVehicleClass8;
    /* 0x001 */ unsigned char muGaps8;
    /* 0x002 */ unsigned char muSpeedScale8;
    /* 0x003 */ unsigned char muProxDistance8;
    /* 0x004 */ ETrafficChangeLaneTypes meProxChangeLane;
};

// declared in 3 file(s), e.g. gamesource\Hud\CHudComponentCountdown.cpp
class HUDSWave {  // size 0x004
public:
    /* 0x000 */ char *m_WaveName;
};

// declared in 113 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class HullEdge {  // size 0x002
public:
    /* 0x000 */ unsigned char muVertex0;
    /* 0x001 */ unsigned char muVertex1;
};

// declared in 1 file(s), e.g. nodeAtomicInstance.c
struct InstancedAtomic {  // size 0x020
    /* 0x000 */ unsigned int serialNum;
    /* 0x004 */ InstancedMesh meshes[1];
};

// declared in 2 file(s), e.g. nodeAtomicInstance.c
struct InstancedMesh {  // size 0x01C
    /* 0x000 */ unsigned short *indices;
    /* 0x004 */ unsigned int numIndices;
    /* 0x008 */ RxObjSpace3DVertex *vertices;
    /* 0x00C */ unsigned int numVerts;
    /* 0x010 */ unsigned int sizeOfVert;
    /* 0x014 */ RpMaterial *material;
    /* 0x018 */ RpMesh *mesh;
};

// declared in 1 file(s), e.g. nodeWorldSectorInstance.c
struct InstancedSector {  // size 0x020
    /* 0x000 */ unsigned int serialNum;
    /* 0x004 */ InstancedMesh meshes[1];
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class LaneData {  // size 0x020
public:
    /* 0x000 */ int mnNumSegments;
    /* 0x004 */ unsigned char muLaneType8;
    /* 0x005 */ unsigned char muLooped8;
    /* 0x006 */ unsigned char muNumSectors8;
    /* 0x007 */ signed char mnPad8;
    /* 0x008 */ SegmentNodeData *mpaSegmentNodeData;
    /* 0x00C */ SegmentDimensions *mpaSegmentDimensions;
    /* 0x010 */ TrafficSegmentData *mpaTrafficSegmentData;
    /* 0x014 */ AISegmentData *mpaAISegmentData;
    /* 0x018 */ RacingSegmentData *mpaRacingSegmentData;
    /* 0x01C */ RwV4d *mpaNodes;
};

// declared in 3 file(s), e.g. batextur.c
struct LeafNode {  // size 0x01C
    /* 0x000 */ float weight;
    /* 0x004 */ RwRGBAReal ac;
    /* 0x014 */ float m2;
    /* 0x018 */ unsigned char palIndex;
};

// declared in 9 file(s), e.g. gamesource\Game\CTwoPlayerSSGameMode.cpp
class lgDevConditionForceParams {  // size 0x018
public:
    /* 0x000 */ int Offset;
    /* 0x004 */ unsigned int Deadband;
    /* 0x008 */ unsigned int SaturationNeg;
    /* 0x00C */ unsigned int SaturationPos;
    /* 0x010 */ int CoefficientNeg;
    /* 0x014 */ int CoefficientPos;
};

// declared in 9 file(s), e.g. gamesource\Game\CTwoPlayerSSGameMode.cpp
class lgDevConstantForceParams {  // size 0x018
public:
    /* 0x000 */ int Magnitude;
    /* 0x004 */ unsigned int Direction;
    /* 0x008 */ lgDevEnvelopeParams envelope;
};

// declared in 82 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class lgDevDeviceDesc {  // size 0x018
public:
    /* 0x000 */ unsigned int DevClass;
    /* 0x004 */ unsigned int AdditionalControls;
    /* 0x008 */ unsigned int Flags;
    /* 0x00C */ unsigned char Topology[8];
    /* 0x014 */ int ExistingHandle;
};

// declared in 9 file(s), e.g. gamesource\Game\CTwoPlayerSSGameMode.cpp
class lgDevEnvelopeParams {  // size 0x010
public:
    /* 0x000 */ unsigned int AttackTime;
    /* 0x004 */ unsigned int AttackLevel;
    /* 0x008 */ unsigned int FadeTime;
    /* 0x00C */ unsigned int FadeLevel;
};

// declared in 9 file(s), e.g. gamesource\Game\CTwoPlayerSSGameMode.cpp
class lgDevForceEffect {  // size 0x03C
public:
    /* 0x000 */ unsigned char Type;
    /* 0x004 */ unsigned int Duration;
    /* 0x008 */ unsigned int StartDelay;
    /* 0x00C */ class {  // size 0x030
    public:
        /* 0x000 */ lgDevConstantForceParams constant;
        /* 0x000 */ lgDevRampForceParams ramp;
        /* 0x000 */ lgDevPeriodicForceParams periodic;
        /* 0x000 */ lgDevConditionForceParams condition[2];
    } p;
};

// declared in 9 file(s), e.g. gamesource\Game\CTwoPlayerSSGameMode.cpp
class lgDevPeriodicForceParams {  // size 0x024
public:
    /* 0x000 */ unsigned int Magnitude;
    /* 0x004 */ unsigned int Direction;
    /* 0x008 */ unsigned int Period;
    /* 0x00C */ unsigned int Phase;
    /* 0x010 */ int Offset;
    /* 0x014 */ lgDevEnvelopeParams envelope;
};

// declared in 82 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class lgDevPosition {  // size 0x010
public:
    /* 0x000 */ unsigned char Status;
    /* 0x001 */ unsigned char X1;
    /* 0x002 */ unsigned char Y1;
    /* 0x003 */ unsigned char X2;
    /* 0x004 */ unsigned char Y2;
    /* 0x005 */ unsigned char Throttle;
    /* 0x006 */ unsigned char Twist;
    /* 0x007 */ unsigned char Accelerator;
    /* 0x008 */ unsigned char Brake;
    /* 0x009 */ unsigned char POV0;
    /* 0x00A */ unsigned char POV1;
    /* 0x00C */ unsigned int Buttons;
};

// declared in 9 file(s), e.g. gamesource\Game\CTwoPlayerSSGameMode.cpp
class lgDevRampForceParams {  // size 0x00C
public:
    /* 0x000 */ int MagnitudeStart;
    /* 0x004 */ int MagnitudeEnd;
    /* 0x008 */ unsigned int Direction;
};

// declared in 1 file(s), e.g. bameshop.c
struct MeshOpFreeLists {  // size 0x008
    /* 0x000 */ RwFreeList *binEntryFreeList;
    /* 0x004 */ RwFreeList *edgeFreeList;
};

// declared in 3 file(s), e.g. batextur.c
union OctNode {  // size 0x040
    /* 0x000 */ LeafNode Leaf;
    /* 0x000 */ BranchNode Branch;
};

// declared in 1 file(s), e.g. p2define.c
struct P2MemoryLimits {  // size 0x008
    /* 0x000 */ unsigned char *StalacTiteBase;
    /* 0x004 */ unsigned char *StalacMiteBase;
};

// declared in 7 file(s), e.g. gamesource\Race\CGameData.cpp
class PendingFileRequestTag {  // size 0x050
public:
    /* 0x000 */ char macName[64];
    /* 0x040 */ int *mpbCompletionReturn;
    /* 0x044 */ void *mpBuffer;
    /* 0x048 */ unsigned int munReadLen;
    /* 0x04C */ unsigned int munId;
};

// declared in 1 file(s), e.g. gamesource\Race\CTrafficSystemDraw.cpp
class PerCarStruct {  // size 0x030
public:
    /* 0x000 */ RwV3d carPosition;
    /* 0x00C */ float carColour;
    /* 0x010 */ RwV3d carDirection;
    /* 0x01C */ int tag;
    /* 0x020 */ int currentUnit;
    /* 0x024 */ float x;
    /* 0x028 */ float z;
    /* 0x02C */ CTrafficVehicle *lpVehicle;
};

// declared in 1 file(s), e.g. nodeps2manager.c
struct PrimTypeLUT {  // size 0x00E
    /* 0x000 */ unsigned char vertToIndRatio[7];
    /* 0x007 */ unsigned char vertToIndOffset[7];
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class PSSAmbientSoundObject {  // size 0x020
public:
    /* 0x000 */ RwV3d mPosition;
    /* 0x00C */ float mrMaxDistance;
    /* 0x010 */ int mnSoundType;
    /* 0x014 */ float mrMinDistance;
    /* 0x018 */ float mrVolume;
    /* 0x01C */ int mnUnused;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class PSSInstanceInfo {  // size 0x008
public:
    /* 0x000 */ int mnNumLTMs;
    /* 0x004 */ RwMatrixTag *mpLTM;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class PSSMaterial {  // size 0x040
public:
    /* 0x000 */ unsigned long long mlAlpha1;
    /* 0x008 */ unsigned int mlTest1;
    /* 0x00C */ unsigned int mxProperties;
    /* 0x010 */ RwTexture *mpTexture;
    /* 0x014 */ float mrSpecularity;
    /* 0x018 */ float mrGlossiness;
    /* 0x01C */ signed char mnNumTextures;
    /* 0x01D */ signed char mnCurrentTexture;
    /* 0x01E */ signed char mnTexAnimDirection;
    /* 0x01F */ signed char mnNextTexID;
    /* 0x020 */ float mrAnimRate;
    /* 0x024 */ float mrAnimStep;
    /* 0x028 */ float mrCurrentTime;
    /* 0x02C */ RwTexture **mppTextures;
    /* 0x030 */ void *mpVUCode;
    /* 0x034 */ int mnVifOffset;
    /* 0x038 */ int (*mUpdateFunction)(int, int, int, int, int, void *);
    /* 0x03C */ int (*mMatSetupFunction)(int, int, void *);
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class PSSSceneInformation {  // size 0x060
public:
    /* 0x000 */ RwV4d mAmbientLightColour;
    /* 0x010 */ RwV4d mDirectionalLightColour;
    /* 0x020 */ RwV4d mSpecularColour;
    /* 0x030 */ RwRGBA mFogColour;
    /* 0x034 */ RwRGBA mSkyDarkener;
    /* 0x038 */ float mrFogStartDistance;
    /* 0x03C */ float mrFogEndDistance;
    /* 0x040 */ RwV4d mSunCoronaColour;
    /* 0x050 */ int mbDrawSun;
    /* 0x054 */ int mbDrawCoronas;
    /* 0x058 */ long long mlPadding;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class PSSStaticWorld {  // size 0x1C0
public:
    /* 0x000 */ int mxPSSVersionNumber;
    /* 0x004 */ int mnNumMaterials;
    /* 0x008 */ int mnNumAnimatedMaterials;
    /* 0x00C */ PSSMaterial *mpMaterials;
    /* 0x010 */ int mnNumTextures;
    /* 0x014 */ RwTexture **mppTextures;
    /* 0x018 */ int mnNumInstances;
    /* 0x01C */ GsPS2RenderObjectInstance *mpInstances;
    /* 0x020 */ int mnNumLitInstances;
    /* 0x024 */ GsPS2RenderObjectInstance *mpLitInstances;
    /* 0x028 */ int mnNumPropObjects;
    /* 0x02C */ GsPS2RenderObjectInstance *mpPropObjects;
    /* 0x030 */ SRCBBox *mpPropBBoxes;
    /* 0x034 */ PSSInstanceInfo **mpProps;
    /* 0x038 */ GsPS2RenderObject *mpSkyObject;
    /* 0x03C */ int mnNumOpaqueBackdropObjects;
    /* 0x040 */ GsPS2RenderObject *mpOpaqueBackdropObjects;
    /* 0x044 */ int mnNumTransparentBackdropObjects;
    /* 0x048 */ GsPS2RenderObject *mpTransparentBackdropObjects;
    /* 0x04C */ int mnNumWaterObjects;
    /* 0x050 */ GsPS2RenderObject *mpWaterObjects;
    /* 0x054 */ int mnNumChevronObjects;
    /* 0x058 */ GsPS2RenderObjectChevron *mpChevronObjects;
    /* 0x05C */ int mnNumOriginalHulls;
    /* 0x060 */ PSSStreamLocation *mapStreamSeekOffsets1P;
    /* 0x064 */ PSSStreamLocation *mapStreamSeekOffsets2P;
    /* 0x068 */ unsigned short maunTotalCoronas[4];
    /* 0x070 */ PSSSceneInformation maWeatherInfo[3];
    /* 0x190 */ RwV4d mDirectionalLightDirection;
    /* 0x1A0 */ unsigned int munSunProperties;
    /* 0x1A4 */ RwTexture *mpSunTexture;
    /* 0x1A8 */ float mrSunCoronaRadius;
    /* 0x1AC */ RwTexture *mpAlternativeSkyTexture;
    /* 0x1B0 */ PSSInstanceInfo **mpPropsBackup;
    /* 0x1B4 */ PSSAmbientSoundObject *mpSoundObjects;
    /* 0x1B8 */ int mnNumSoundObjects;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class PSSStreamLocation {  // size 0x008
public:
    /* 0x000 */ unsigned int munSeekLocation;
    /* 0x004 */ unsigned int munDataSize;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class PSW3DBox {  // size 0x080
public:
    /* 0x000 */ RwV4d maVerts[8];
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class PSWFastHull {  // size 0x040
public:
    /* 0x000 */ PSWFastPlane maPlanes[4];
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class PSWFastPlane {  // size 0x010
public:
    /* 0x000 */ RwV3d mNormal;
    /* 0x00C */ float mrDistance;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class PSWStreamedUnit {  // size 0x40000
public:
    /* 0x000 */ PSW3DBox mBBox;
    /* 0x080 */ PSWFastHull mTrackHull;
    /* 0x0C0 */ SRCCollisionSector mCollisionUnit;
    /* 0x0F0 */ RpCollBSPTree *mpCollisionTree;
    /* 0x0F4 */ int mxLoadedState;
    /* 0x0F8 */ int mnOriginalHullID;
    /* 0x0FC */ int mnNumMeshes;
    /* 0x100 */ unsigned int munDataSize;
    /* 0x104 */ GsPS2RenderObject *mpObjects[80];
    /* 0x244 */ PSWStreamPVS mPVS;
    /* 0x930 */ PSSInstanceInfo *mpInstanced;
    /* 0x934 */ PSSInstanceInfo *mpLitInstanced;
    /* 0x938 */ int mnNumCoronas[4];
    /* 0x948 */ B2CoronaTag *mpCoronas[4];
    /* 0x958 */ unsigned char macPadData[259752];
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class PSWStreamedWorldStructure {  // size 0x480000
public:
    /* 0x000 */ PSWStreamedUnit maWorldUnits[18];
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class PSWStreamPVS {  // size 0x6EC
public:
    /* 0x000 */ int mnNumVisibleUnits;
    /* 0x004 */ signed char macOpaqueBackdrops[4];
    /* 0x008 */ signed char macTransBackdrops[4];
    /* 0x00C */ signed char mcWaterBackdrop;
    /* 0x00D */ signed char mcChevron;
    /* 0x00E */ short mnNumBloom2Materials;
    /* 0x010 */ signed char mcWetRoadOffset;
    /* 0x011 */ signed char macPad[3];
    /* 0x014 */ PSWStreamPVSMesh maPVSlist[17];
    /* 0x5A8 */ int mnNumMaterials;
    /* 0x5AC */ int manMatIndices[80];
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class PSWStreamPVSMesh {  // size 0x054
public:
    /* 0x000 */ int mnUnitOffset;
    /* 0x004 */ signed char macMeshIndex[80];
};

// declared in 2 file(s), e.g. gamesource\Race\CStaticWorld.cpp
class PWDefaultDataTag {  // size 0x010
public:
    /* 0x000 */ int mxFlags;
    /* 0x004 */ float mrUAdditionValue;
    /* 0x008 */ int manUnusedFlags[2];
};

// declared in 2 file(s), e.g. gamesource\Race\CStaticWorld.cpp
class PWGlassDataTag {  // size 0x040
public:
    /* 0x000 */ int mxFlags;
    /* 0x004 */ float mrUAdditionValue;
    /* 0x008 */ int manUnusedFlags[2];
    /* 0x010 */ RwV3d mLightDirection;
    /* 0x01C */ float mrSpecularPower;
    /* 0x020 */ RwV3d mCameraPosition;
    /* 0x02C */ float mrSpecularMax;
    /* 0x030 */ RwV2d mCameraRightXZ;
    /* 0x038 */ int mbSpecularSwitch;
    /* 0x03C */ int pad;
};

// declared in 2 file(s), e.g. gamesource\Race\CStaticWorld.cpp
class PWSpecularDataTag {  // size 0x040
public:
    /* 0x000 */ int mxFlags;
    /* 0x004 */ float mrUAdditionValue;
    /* 0x008 */ int manUnusedFlags[2];
    /* 0x010 */ RwV4d vSpecularLightDirectionAndPower;
    /* 0x020 */ RwV4d vSpecularCameraPositionAndMaxIntensity;
    /* 0x030 */ float rSpecularClampValue;
    /* 0x034 */ int nSpecularFlag2;
    /* 0x038 */ int nSpecularFlag3;
    /* 0x03C */ int nSpecularFlag4;
};

// declared in 2 file(s), e.g. gamesource\Race\CStaticWorld.cpp
class PWWaterDataTag {  // size 0x040
public:
    /* 0x000 */ int mxFlags;
    /* 0x004 */ float mrUAdditionValue;
    /* 0x008 */ int manUnusedFlags[2];
    /* 0x010 */ RwV3d mLightDirection;
    /* 0x01C */ float mrSpecularPower;
    /* 0x020 */ RwV3d mCameraPosition;
    /* 0x02C */ float mrSpecularMax;
    /* 0x030 */ float mrTime;
    /* 0x034 */ float mrMaxFrequency;
    /* 0x038 */ float mrMinFrequency;
    /* 0x03C */ float mrAmplitude;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\Mpeg\ps2\vibuf.c
class QWORD {  // size 0x010
public:
    /* 0x000 */ u_long128 q;
    /* 0x000 */ unsigned long l[2];
    /* 0x000 */ unsigned int i[4];
    /* 0x000 */ unsigned short s[8];
    /* 0x000 */ unsigned char c[16];
};

// declared in 1 file(s), e.g. gamesource\Race\CAICar.cpp
class RaceCarPhysicsAttributes {  // size 0x0EC
public:
    /* 0x000 */ float mrGearRatioReverseValue;
    /* 0x004 */ float marGearRatioValues[7];
    /* 0x020 */ float mrGearRatioFinalValue;
    /* 0x024 */ float mrEngineIdleRPMValue;
    /* 0x028 */ float mrChangeUpRPMValue;
    /* 0x02C */ float mrChangeDownRPMValue;
    /* 0x030 */ float mrEngineMomentOfInertiaValue;
    /* 0x034 */ float mrEngineFrictionTorqueValue;
    /* 0x038 */ float mrEngineMaxRPMValue;
    /* 0x03C */ float mrEngineTorqueValue;
    /* 0x040 */ float mrPeakTorqueRevs;
    /* 0x044 */ float mrFallOffTorqueRevs;
    /* 0x048 */ float mrSpringConstant;
    /* 0x04C */ float mrDampingConstant;
    /* 0x050 */ float mrSpringLength;
    /* 0x054 */ float mrRearSpringMultiplier;
    /* 0x058 */ float mrFrontAttachHeight;
    /* 0x05C */ float mrRearAttachHeight;
    /* 0x060 */ float mrMass;
    /* 0x064 */ float mrDragCoeff;
    /* 0x068 */ float mrDownForceCoeff;
    /* 0x06C */ float mrForceApplyHeightBrake;
    /* 0x070 */ float mrForceApplyHeightAccel;
    /* 0x074 */ float mrForceApplyHeightSteering;
    /* 0x078 */ float mrForceApplyHeightDrifting;
    /* 0x07C */ float mrSteeringAngleMin;
    /* 0x080 */ float mrSteeringAngleMax;
    /* 0x084 */ float mrSteeringAngleMinVelocity;
    /* 0x088 */ float mrSteeringAngleMaxVelocity;
    /* 0x08C */ float mrSteeringResponse;
    /* 0x090 */ float mrBrakingFactor;
    /* 0x094 */ float mrDriftScaleMax;
    /* 0x098 */ float mrDriftScaleMin;
    /* 0x09C */ float mrDriftMaxAngularMomentumAt60;
    /* 0x0A0 */ float mrDriftMaxAngularMomentumAt110;
    /* 0x0A4 */ float mrAutoDriftDelay;
    /* 0x0A8 */ float mrDriftTurnRate;
    /* 0x0AC */ float mrWallCollisionPenalty;
    /* 0x0B0 */ float mrLowSpeedDrivingModelThreshold;
    /* 0x0B4 */ float mrLowSpeedSteeringAngleMax;
    /* 0x0B8 */ float mrLowSpeedTorqueFactor1;
    /* 0x0BC */ float mrLowSpeedTorqueFactor2;
    /* 0x0C0 */ float mrAcceleratorMultiplier;
    /* 0x0C4 */ float mrSteeringDragCoeff;
    /* 0x0C8 */ float mrDriftMinSpeed;
    /* 0x0CC */ float mrDriftMaxSpeedPressure;
    /* 0x0D0 */ float mrEngineBrakingFactor;
    /* 0x0D4 */ float mrDriftMaxAngle;
    /* 0x0D8 */ float mrBoostMaxSpeed;
    /* 0x0DC */ float mrBoostCameraMovementForwards;
    /* 0x0E0 */ float mrBoostCameraMovementUpwards;
    /* 0x0E4 */ float mrMinDriftAngleFromAir;
    /* 0x0E8 */ float mrLandingBounce;
};

// declared in 87 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RaceCarPoint {  // size 0x030
public:
    /* 0x000 */ RwV3d mPos;
    /* 0x00C */ int mnID;
    /* 0x010 */ RwV3d mNormal;
    /* 0x01C */ float mrSize;
    /* 0x020 */ RwRGBAReal mColour;
};

// declared in 87 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RaceCarPointOffset {  // size 0x002
public:
    /* 0x000 */ signed char munNumPoints;
    /* 0x001 */ signed char munOffset;
};

// declared in 87 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RaceCarStreamStructure {  // size 0x1850
public:
    /* 0x000 */ unsigned int mxVersionNumber;
    /* 0x004 */ int mxLoadedState;
    /* 0x008 */ unsigned int munDataSize;
    /* 0x00C */ float mrObjectRadius;
    /* 0x010 */ float mrWheelRadii[6];
    /* 0x028 */ int mnNumMainObjects;
    /* 0x02C */ int mnNumFlyingObjects;
    /* 0x030 */ int mnNumWheels;
    /* 0x034 */ unsigned int mnNumShadowWheels;
    /* 0x038 */ GsPS2RenderObjectCar *mpMainObjects;
    /* 0x03C */ int mnNumFlyingRenderObjects[8];
    /* 0x05C */ GsPS2RenderObjectCar *mpFlyingOffObjects[8];
    /* 0x07C */ GsPS2RenderObjectCar *mpWheelObject;
    /* 0x080 */ GsPS2RenderObject *mpMainShadowObject;
    /* 0x084 */ GsPS2RenderObject *mpWheelShadowObject;
    /* 0x088 */ RwTexture *mpTexture;
    /* 0x08C */ float mrGlassOpacity;
    /* 0x090 */ RaceCarPoint maTags[64];
    /* 0xC90 */ RaceCarPointOffset mFrontLights;
    /* 0xC92 */ RaceCarPointOffset mRearLights;
    /* 0xC94 */ RaceCarPointOffset mBrakeLights;
    /* 0xC96 */ RaceCarPointOffset mRunningLights;
    /* 0xC98 */ RaceCarPointOffset mReverseLights;
    /* 0xC9A */ RaceCarPointOffset mLeftIndicators;
    /* 0xC9C */ RaceCarPointOffset mRightIndicators;
    /* 0xC9E */ RaceCarPointOffset mBluesAndTwosBlue;
    /* 0xCA0 */ RaceCarPointOffset mBluesAndTwosRed;
    /* 0xCA2 */ RaceCarPointOffset mStrobes;
    /* 0xCA4 */ RaceCarPointOffset mExhaustPoints;
    /* 0xCA6 */ RaceCarPointOffset mGlassPoints;
    /* 0xCA8 */ RaceCarPointOffset mSteamPoints;
    /* 0xCAA */ RaceCarPointOffset mFirePoints;
    /* 0xCAC */ RaceCarPointOffset mKojackPoints;
    /* 0xCAE */ short mPad16[1];
    /* 0xCB0 */ SRCBBox mBBox;
    /* 0xCD0 */ int mbBoundingHull;
    /* 0xCD4 */ int mnNumVerticesInCar;
    /* 0xCD8 */ RwTexture *mpUniqueRevCounter;
    /* 0xCDC */ int mnPad32_3[9];
    /* 0xD00 */ RwMatrixTag mMainMatrix;
    /* 0xD40 */ RwMatrixTag mWheelMatrices[6];
    /* 0xEC0 */ RwMatrixTag mFlyingMatrices[8];
    /* 0x10C0 */ RwMatrixTag mWheelMatrixCache[6];
    /* 0x1240 */ RwMatrixTag mFlyingMatrixCache[8];
    /* 0x1440 */ SRCBBox mFlyingBBoxes[8];
    /* 0x1540 */ BoundingHull mBoundingHull;
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RacingSegmentData {  // size 0x004
public:
    /* 0x000 */ unsigned char mxIndicate8;
    /* 0x001 */ unsigned char muSector8;
    /* 0x002 */ unsigned char muWeatherIntensity8;
    /* 0x003 */ signed char mnPad8;
};

// declared in 105 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class ReplayCamera {  // size 0x02C
public:
    /* 0x000 */ RwV3d mPosition;
    /* 0x00C */ RwV3d mDirection;
    /* 0x018 */ unsigned short mStartNode;
    /* 0x01A */ unsigned char mLap;
    /* 0x01B */ unsigned char mType;
    /* 0x01C */ unsigned char mMotionBlur;
    /* 0x01D */ unsigned char mbDontCutToCrashCam;
    /* 0x01E */ unsigned char mbOnComing;
    /* 0x01F */ unsigned char mDOF;
    /* 0x020 */ unsigned char mFOV;
    /* 0x021 */ unsigned char mFOVDynamicSize;
    /* 0x022 */ unsigned char mFOVDynamicMin;
    /* 0x023 */ unsigned char mFOVDynamicMax;
    /* 0x024 */ unsigned char mHandicam;
    /* 0x025 */ unsigned char mProximityRange;
    /* 0x026 */ unsigned char mProximityShake;
    /* 0x027 */ unsigned char mRotate;
    /* 0x028 */ signed char mOffset;
    /* 0x029 */ signed char mDist;
    /* 0x02A */ signed char mHeight;
    /* 0x02B */ signed char mStartDist;
};

// declared in 1 file(s), e.g. gamesource\Race\CReplay.cpp
class ReplayFrame {  // size 0x006
public:
    /* 0x000 */ unsigned char left;
    /* 0x001 */ unsigned char right;
    /* 0x002 */ unsigned char accel;
    /* 0x003 */ unsigned char brake;
    /* 0x004 */ signed char gears;
    /* 0x005 */ unsigned char hash;
};

// declared in 1 file(s), e.g. I:\GameShared\Archive\RpADC\rpAdc.c
class RpADCDataTag {  // size 0x00C
public:
    /* 0x000 */ int hasADC;
    /* 0x004 */ float saving;
    /* 0x008 */ signed char *pADC;
};

// declared in 1 file(s), e.g. I:\GameShared\Archive\RpADC\rpAdc.c
class rpADCDegenerateRemovalStructureTag {  // size 0x010
public:
    /* 0x000 */ unsigned int numVertices;
    /* 0x004 */ unsigned int numOrigVertices;
    /* 0x008 */ int bPreserveWinding;
    /* 0x00C */ signed char *pADC;
};

// declared in 86 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RpAtomic {  // size 0x070
public:
    /* 0x000 */ RwObjectHasFrame object;
    /* 0x014 */ RwResEntry *repEntry;
    /* 0x018 */ RpGeometry *geometry;
    /* 0x01C */ RwSphere boundingSphere;
    /* 0x02C */ RwSphere worldBoundingSphere;
    /* 0x03C */ RpClump *clump;
    /* 0x040 */ RwLLLink inClumpLink;
    /* 0x048 */ RpAtomic *(*renderCallBack)(RpAtomic *);
    /* 0x04C */ RpInterpolator interpolator;
    /* 0x060 */ unsigned short renderFrame;
    /* 0x062 */ unsigned short pad;
    /* 0x064 */ RwLinkList llWorldSectorsInAtomic;
    /* 0x06C */ RxPipeline *pipeline;
};

// declared in 1 file(s), e.g. baclump.c
struct rpAtomicBinary {  // size 0x00C
    /* 0x000 */ int frameIndex;
    /* 0x004 */ int flags;
    /* 0x008 */ int unused;
};

// declared in 1 file(s), e.g. baclump.c
struct rpAtomicBinary304 {  // size 0x010
    /* 0x000 */ int frameIndex;
    /* 0x004 */ int geomIndex;
    /* 0x008 */ int flags;
    /* 0x00C */ int unused;
};

// declared in 1 file(s), e.g. nodeps2objallinone.c
struct rpAtomicLightData {  // size 0x050
    /* 0x000 */ RwMatrixTag invMat;
    /* 0x040 */ float invScale;
    /* 0x044 */ float recipInvScale;
};

// declared in 1 file(s), e.g. ps2allatomic.c
struct rpAtomicPS2AllLightData {  // size 0x060
    /* 0x000 */ RwSurfaceProperties *surface;
    /* 0x010 */ RwMatrixTag invMat;
    /* 0x050 */ float invScale;
    /* 0x054 */ float recipInvScale;
};

// declared in 4 file(s), e.g. bageomet.c
struct RpBuildMesh {  // size 0x00C
    /* 0x000 */ unsigned int triangleBufferSize;
    /* 0x004 */ unsigned int numTriangles;
    /* 0x008 */ RpBuildMeshTriangle *meshTriangles;
};

// declared in 4 file(s), e.g. bageomet.c
struct RpBuildMeshTriangle {  // size 0x00C
    /* 0x000 */ unsigned short vertIndex[3];
    /* 0x008 */ RpMaterial *material;
};

// declared in 105 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RpClump {  // size 0x030
public:
    /* 0x000 */ RwObject object;
    /* 0x008 */ RwLinkList atomicList;
    /* 0x010 */ RwLinkList lightList;
    /* 0x018 */ RwLinkList cameraList;
    /* 0x020 */ RwLLLink inWorldLink;
    /* 0x028 */ RpClump *(*callback)(RpClump *, void *);
    /* 0x02C */ unsigned short renderFrame;
    /* 0x02E */ unsigned short pad;
};

// declared in 1 file(s), e.g. baclump.c
struct RpClumpCameraExt {  // size 0x00C
    /* 0x000 */ RpClump *clump;
    /* 0x004 */ RwLLLink inClumpLink;
};

// declared in 1 file(s), e.g. baclump.c
struct RpClumpChunkInfo {  // size 0x00C
    /* 0x000 */ int numAtomics;
    /* 0x004 */ int numLights;
    /* 0x008 */ int numCameras;
};

// declared in 1 file(s), e.g. baclump.c
struct RpClumpChunkInfo33000 {  // size 0x004
    /* 0x000 */ int numAtomics;
};

// declared in 1 file(s), e.g. baclump.c
struct RpClumpCloneStatus {  // size 0x00C
    /* 0x000 */ RpClump *oldClump;
    /* 0x004 */ RpClump *newClump;
    /* 0x008 */ int success;
};

// declared in 1 file(s), e.g. baclump.c
struct RpClumpLightExt {  // size 0x00C
    /* 0x000 */ RpClump *clump;
    /* 0x004 */ RwLLLink inClumpLink;
};

// declared in 1 file(s), e.g. baclump.c
struct RpClumpStreamWriteStatus {  // size 0x018
    /* 0x000 */ RwStream *stream;
    /* 0x004 */ rwFrameList fl;
    /* 0x00C */ rpGeometryList gl;
    /* 0x014 */ int success;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class RpCollBSPBranchNode {  // size 0x010
public:
    /* 0x000 */ unsigned short type;
    /* 0x002 */ unsigned char leftType;
    /* 0x003 */ unsigned char rightType;
    /* 0x004 */ unsigned short leftNode;
    /* 0x006 */ unsigned short rightNode;
    /* 0x008 */ float leftValue;
    /* 0x00C */ float rightValue;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class RpCollBSPLeafNode {  // size 0x004
public:
    /* 0x000 */ unsigned short numPolygons;
    /* 0x002 */ unsigned short firstPolygon;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class RpCollBSPTree {  // size 0x010
public:
    /* 0x000 */ unsigned int numLeafNodes;
    /* 0x004 */ RpCollBSPBranchNode *branchNodes;
    /* 0x008 */ RpCollBSPLeafNode *leafNodes;
    /* 0x00C */ int pad;
};

// declared in 13 file(s), e.g. babinwor.c
struct RpCollSector {  // size 0x003
    /* 0x000 */ unsigned char cType;
    /* 0x001 */ unsigned char vertex;
    /* 0x002 */ unsigned char start;
};

// declared in 106 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RpGeometry {  // size 0x060
public:
    /* 0x000 */ RwObject object;
    /* 0x008 */ unsigned int flags;
    /* 0x00C */ unsigned short lockedSinceLastInst;
    /* 0x00E */ short refCount;
    /* 0x010 */ int numTriangles;
    /* 0x014 */ int numVertices;
    /* 0x018 */ int numMorphTargets;
    /* 0x01C */ int numTexCoordSets;
    /* 0x020 */ RpMaterialList matList;
    /* 0x02C */ RpTriangle *triangles;
    /* 0x030 */ RwRGBA *preLitLum;
    /* 0x034 */ RwTexCoords *texCoords[8];
    /* 0x054 */ RpMeshHeader *mesh;
    /* 0x058 */ RwResEntry *repEntry;
    /* 0x05C */ RpMorphTarget *morphTarget;
};

// declared in 1 file(s), e.g. bageomet.c
struct RpGeometryChunkInfo {  // size 0x010
    /* 0x000 */ int format;
    /* 0x004 */ int numTriangles;
    /* 0x008 */ int numVertices;
    /* 0x00C */ int numMorphTargets;
};

// declared in 1 file(s), e.g. baclump.c
struct rpGeometryList {  // size 0x008
    /* 0x000 */ RpGeometry **geometries;
    /* 0x004 */ int numGeoms;
};

// declared in 86 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RpInterpolator {  // size 0x014
public:
    /* 0x000 */ int flags;
    /* 0x004 */ short startMorphTarget;
    /* 0x006 */ short endMorphTarget;
    /* 0x008 */ float time;
    /* 0x00C */ float recipTime;
    /* 0x010 */ float position;
};

// declared in 11 file(s), e.g. baclump.c
struct RpLight {  // size 0x040
    /* 0x000 */ RwObjectHasFrame object;
    /* 0x014 */ float radius;
    /* 0x018 */ RwRGBAReal color;
    /* 0x028 */ float minusCosAngle;
    /* 0x02C */ RwLinkList WorldSectorsInLight;
    /* 0x034 */ RwLLLink inWorld;
    /* 0x03C */ unsigned short lightFrame;
    /* 0x03E */ unsigned short pad;
};

// declared in 1 file(s), e.g. balight.c
struct RpLightChunkInfo {  // size 0x018
    /* 0x000 */ float radius;
    /* 0x004 */ float red;
    /* 0x008 */ float green;
    /* 0x00C */ float blue;
    /* 0x010 */ float minusCosAngle;
    /* 0x014 */ unsigned int typeAndFlags;
};

// declared in 2 file(s), e.g. baworld.c
struct RpLightTie {  // size 0x018
    /* 0x000 */ RwLLLink lightInWorldSector;
    /* 0x008 */ RpLight *light;
    /* 0x00C */ RwLLLink WorldSectorInLight;
    /* 0x014 */ RpWorldSector *sect;
};

// declared in 1 file(s), e.g. baworld.c
struct RpListedWorld {  // size 0x010
    /* 0x000 */ RpWorld *world;
    /* 0x004 */ unsigned int memorySize;
    /* 0x008 */ RwLLLink nextEl;
};

// declared in 120 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RpMaterial {  // size 0x01C
public:
    /* 0x000 */ RwTexture *texture;
    /* 0x004 */ RwRGBA color;
    /* 0x008 */ RxPipeline *pipeline;
    /* 0x00C */ RwSurfaceProperties surfaceProps;
    /* 0x018 */ short refCount;
    /* 0x01A */ short pad;
};

// declared in 1 file(s), e.g. bamateri.c
struct RpMaterialChunkInfo {  // size 0x01C
    /* 0x000 */ int flags;
    /* 0x004 */ RwRGBA color;
    /* 0x008 */ int unused;
    /* 0x00C */ int textured;
    /* 0x010 */ RwSurfaceProperties surfaceProps;
};

// declared in 111 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RpMaterialList {  // size 0x00C
public:
    /* 0x000 */ RpMaterial **materials;
    /* 0x004 */ int numMaterials;
    /* 0x008 */ int space;
};

// declared in 99 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class RpMesh {  // size 0x00C
public:
    /* 0x000 */ unsigned short *indices;
    /* 0x004 */ unsigned int numIndices;
    /* 0x008 */ RpMaterial *material;
};

// declared in 119 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RpMeshHeader {  // size 0x010
public:
    /* 0x000 */ unsigned int flags;
    /* 0x004 */ unsigned short numMeshes;
    /* 0x006 */ unsigned short serialNum;
    /* 0x008 */ unsigned int totalIndicesInMesh;
    /* 0x00C */ unsigned int firstMeshOffset;
};

// declared in 1 file(s), e.g. bameshop.c
struct RpMeshopStatic {  // size 0x018
    /* 0x000 */ RpMeshHeader nullMeshHeader;
    /* 0x010 */ RpMeshHeader *(*meshTristripMethod)(RpBuildMesh *, void *);
    /* 0x014 */ void *data;
};

// declared in 1 file(s), e.g. bamesh.c
struct RpMeshStatic {  // size 0x004
    /* 0x000 */ RwFreeList *BuildMeshFreeList;
};

// declared in 106 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RpMorphTarget {  // size 0x01C
public:
    /* 0x000 */ RpGeometry *parentGeom;
    /* 0x004 */ RwSphere boundingSphere;
    /* 0x014 */ RwV3d *verts;
    /* 0x018 */ RwV3d *normals;
};

// declared in 3 file(s), e.g. babinwor.c
struct RpPlaneSector {  // size 0x018
    /* 0x000 */ int type;
    /* 0x004 */ float value;
    /* 0x008 */ RpSector *leftSubTree;
    /* 0x00C */ RpSector *rightSubTree;
    /* 0x010 */ float leftValue;
    /* 0x014 */ float rightValue;
};

// declared in 1 file(s), e.g. babinwor.c
struct RpPlaneSectorChunkInfo {  // size 0x018
    /* 0x000 */ int type;
    /* 0x004 */ float value;
    /* 0x008 */ int leftIsWorldSector;
    /* 0x00C */ int rightIsWorldSector;
    /* 0x010 */ float leftValue;
    /* 0x014 */ float rightValue;
};

// declared in 13 file(s), e.g. babinwor.c
struct RpPolygon {  // size 0x008
    /* 0x000 */ unsigned short matIndex;
    /* 0x002 */ unsigned short vertIndex[3];
};

// declared in 9 file(s), e.g. babinwor.c
struct RpSector {  // size 0x004
    /* 0x000 */ int type;
};

// declared in 1 file(s), e.g. babintex.c
struct rpTextureChunkInfo {  // size 0x00C
    /* 0x000 */ RwTextureFilterMode filtering;
    /* 0x004 */ RwTextureAddressMode addressingU;
    /* 0x008 */ RwTextureAddressMode addressingV;
};

// declared in 2 file(s), e.g. baworld.c
struct RpTie {  // size 0x018
    /* 0x000 */ RwLLLink lAtomicInWorldSector;
    /* 0x008 */ RpAtomic *apAtom;
    /* 0x00C */ RwLLLink lWorldSectorInAtomic;
    /* 0x014 */ RpWorldSector *worldSector;
};

// declared in 106 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RpTriangle {  // size 0x008
public:
    /* 0x000 */ unsigned short vertIndex[3];
    /* 0x006 */ short matIndex;
};

// declared in 1 file(s), e.g. bameshop.c
struct RpTriStripData {  // size 0x00C
    /* 0x000 */ int ignoreWinding;
    /* 0x004 */ RpTriStripMesh *(*stripCB)(RpTriStripMesh *, void *);
    /* 0x008 */ void *data;
};

// declared in 1 file(s), e.g. bameshop.c
struct RpTriStripEdge {  // size 0x020
    /* 0x000 */ RwLLLink inUsedLink;
    /* 0x008 */ RwLLLink inFreeLink;
    /* 0x010 */ RpTriStripPolygon *poly1;
    /* 0x014 */ RpTriStripPolygon *poly2;
    /* 0x018 */ unsigned short vert1;
    /* 0x01A */ unsigned short vert2;
    /* 0x01C */ int strip;
};

// declared in 1 file(s), e.g. bameshop.c
struct RpTriStripMesh {  // size 0x028
    /* 0x000 */ RwLinkList polygonEndList;
    /* 0x008 */ RwLinkList polygonUsedList;
    /* 0x010 */ RwLinkList polygonFreeList;
    /* 0x018 */ RwLinkList edgeUsedList;
    /* 0x020 */ RwLinkList edgeFreeList;
};

// declared in 1 file(s), e.g. bameshop.c
struct RpTriStripPolygon {  // size 0x030
    /* 0x000 */ RwLLLink inEndLink;
    /* 0x008 */ RwLLLink inUsedLink;
    /* 0x010 */ RwLLLink inFreeLink;
    /* 0x018 */ unsigned int numEdges;
    /* 0x01C */ RpTriStripEdge *edges[3];
    /* 0x028 */ unsigned short vertIndex[3];
};

// declared in 1 file(s), e.g. bameshop.c
struct RpTriStripTunnel {  // size 0x010
    /* 0x000 */ unsigned int length;
    /* 0x004 */ unsigned int maxLength;
    /* 0x008 */ RpTriStripEdge **edges;
    /* 0x00C */ RpTriStripPolygon **polygons;
};

// declared in 1 file(s), e.g. bameshop.c
struct RpTriStripTunnelData {  // size 0x014
    /* 0x000 */ unsigned int maxTime;
    /* 0x004 */ unsigned int maxLength;
    /* 0x008 */ unsigned int (*costCB)(RpTriStripPolygon *, void *);
    /* 0x00C */ unsigned int (*timerCB)();
    /* 0x010 */ void *data;
};

// declared in 1 file(s), e.g. gamesource\Race\CStreamedWorld.cpp
class RpV3dGradient {  // size 0x020
public:
    /* 0x000 */ float dydx;
    /* 0x004 */ float dzdx;
    /* 0x008 */ float dxdy;
    /* 0x00C */ float dzdy;
    /* 0x010 */ float dxdz;
    /* 0x014 */ float dydz;
    /* 0x018 */ float pad[2];
};

// declared in 13 file(s), e.g. babinwor.c
struct RpVertexNormal {  // size 0x004
    /* 0x000 */ signed char x;
    /* 0x001 */ signed char y;
    /* 0x002 */ signed char z;
    /* 0x003 */ unsigned char pad;
};

// declared in 9 file(s), e.g. babinwor.c
struct RpWorld {  // size 0x070
    /* 0x000 */ RwObject object;
    /* 0x008 */ unsigned int flags;
    /* 0x00C */ RpWorldRenderOrder renderOrder;
    /* 0x010 */ RpMaterialList matList;
    /* 0x01C */ RpSector *rootSector;
    /* 0x020 */ int numTexCoordSets;
    /* 0x024 */ int numClumpsInWorld;
    /* 0x028 */ RwLLLink *currentClumpLink;
    /* 0x02C */ RwLinkList clumpList;
    /* 0x034 */ RwLinkList lightList;
    /* 0x03C */ RwLinkList directionalLightList;
    /* 0x044 */ RwV3d worldOrigin;
    /* 0x050 */ RwBBox boundingBox;
    /* 0x068 */ RpWorldSector *(*renderCallBack)(RpWorldSector *);
    /* 0x06C */ RxPipeline *pipeline;
};

// declared in 1 file(s), e.g. baworobj.c
struct RpWorldAtomicExt {  // size 0x008
    /* 0x000 */ RpWorld *world;
    /* 0x004 */ RwObjectHasFrame *(*oldSync)(RwObjectHasFrame *);
};

// declared in 1 file(s), e.g. baworobj.c
struct RpWorldCameraExt {  // size 0x01C
    /* 0x000 */ RpWorldSector **frustumSectors;
    /* 0x004 */ int space;
    /* 0x008 */ int position;
    /* 0x00C */ RpWorld *world;
    /* 0x010 */ RwCamera *(*oldBeginUpdate)(RwCamera *);
    /* 0x014 */ RwCamera *(*oldEndUpdate)(RwCamera *);
    /* 0x018 */ RwObjectHasFrame *(*oldSync)(RwObjectHasFrame *);
};

// declared in 1 file(s), e.g. babinwor.c
struct RpWorldChunkInfo {  // size 0x028
    /* 0x000 */ int rootIsWorldSector;
    /* 0x004 */ RwV3d invWorldOrigin;
    /* 0x010 */ int numPolygons;
    /* 0x014 */ int numVertices;
    /* 0x018 */ int numPlaneSectors;
    /* 0x01C */ int numWorldSectors;
    /* 0x020 */ int colSectorSize;
    /* 0x024 */ int format;
};

// declared in 1 file(s), e.g. babinwor.c
struct rpWorldChunkInfo34000 {  // size 0x034
    /* 0x000 */ int rootIsWorldSector;
    /* 0x004 */ RwV3d invWorldOrigin;
    /* 0x010 */ RwSurfaceProperties surfaceProps;
    /* 0x01C */ int numPolygons;
    /* 0x020 */ int numVertices;
    /* 0x024 */ int numPlaneSectors;
    /* 0x028 */ int numWorldSectors;
    /* 0x02C */ int colSectorSize;
    /* 0x030 */ int format;
};

// declared in 1 file(s), e.g. babinwor.c
struct RpWorldChunkInfoSector {  // size 0x02C
    /* 0x000 */ int matListWindowBase;
    /* 0x004 */ int numPolygons;
    /* 0x008 */ int numVertices;
    /* 0x00C */ RwV3d inf;
    /* 0x018 */ RwV3d sup;
    /* 0x024 */ int collSectorPresent;
    /* 0x028 */ int unused;
};

// declared in 1 file(s), e.g. baworobj.c
struct RpWorldClumpExt {  // size 0x004
    /* 0x000 */ RpWorld *world;
};

// declared in 1 file(s), e.g. baworld.c
struct rpWorldFindSectorData {  // size 0x008
    /* 0x000 */ RpWorldSector *sector;
    /* 0x004 */ int foundSector;
};

// declared in 1 file(s), e.g. baworobj.c
struct RpWorldLightExt {  // size 0x008
    /* 0x000 */ RpWorld *world;
    /* 0x004 */ RwObjectHasFrame *(*oldSync)(RwObjectHasFrame *);
};

// declared in 13 file(s), e.g. babinwor.c
struct RpWorldSector {  // size 0x094
    /* 0x000 */ int type;
    /* 0x004 */ RpPolygon *polygons;
    /* 0x008 */ RwV3d *vertices;
    /* 0x00C */ RpVertexNormal *normals;
    /* 0x010 */ RwTexCoords *texCoords[8];
    /* 0x030 */ RwRGBA *preLitLum;
    /* 0x034 */ RwResEntry *repEntry;
    /* 0x038 */ RwLinkList collAtomicsInWorldSector;
    /* 0x040 */ RwLinkList noCollAtomicsInWorldSector;
    /* 0x048 */ RwLinkList lightsInWorldSector;
    /* 0x050 */ RwBBox boundingBox;
    /* 0x068 */ RwBBox tightBoundingBox;
    /* 0x080 */ RpCollSector *colSectorRoot;
    /* 0x084 */ RpMeshHeader *mesh;
    /* 0x088 */ RxPipeline *pipeline;
    /* 0x08C */ unsigned short matListWindowBase;
    /* 0x08E */ unsigned short numVertices;
    /* 0x090 */ unsigned short numPolygons;
    /* 0x092 */ unsigned short pad;
};

// declared in 70 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class RtQuat {  // size 0x010
public:
    /* 0x000 */ RwV3d imag;
    /* 0x00C */ float real;
};

// declared in 36 file(s), e.g. C:\dev\rwaudio\source\objects\src\rwasoftoutputobj.c
class RwaEnvironment {  // size 0x030
public:
    /* 0x000 */ int room;
    /* 0x004 */ int roomHF;
    /* 0x008 */ float roomRolloffFactor;
    /* 0x00C */ float decayTime;
    /* 0x010 */ float decayHFRatio;
    /* 0x014 */ int reflections;
    /* 0x018 */ float reflectionsDelay;
    /* 0x01C */ int reverb;
    /* 0x020 */ float reverbDelay;
    /* 0x024 */ float diffusion;
    /* 0x028 */ float density;
    /* 0x02C */ float hfReference;
};

// declared in 41 file(s), e.g. C:\dev\rwaudio\source\core\src\rwafreelist.c
class RwaFreeList {  // size 0x024
public:
    /* 0x000 */ unsigned int entrySize;
    /* 0x004 */ unsigned int entriesPerBlock;
    /* 0x008 */ unsigned int heapSize;
    /* 0x00C */ unsigned int alignment;
    /* 0x010 */ RwLinkList blockList;
    /* 0x018 */ unsigned int flags;
    /* 0x01C */ RwLLLink link;
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\core\src\rwaheap.c
struct RwaHeap {  // size 0x01C
    /* 0x000 */ unsigned int flags;
    /* 0x004 */ unsigned int blockSize;
    /* 0x008 */ unsigned int alignment;
    /* 0x00C */ RwLinkList heapBlocks;
    /* 0x014 */ RwLLLink link;
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\core\src\rwaheap.c
struct RwaHeapBlock {  // size 0x010
    /* 0x000 */ RwLLLink link;
    /* 0x008 */ RwaHeapEntry *heapStart;
    /* 0x00C */ RwaHeapEntry *heapEnd;
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\core\src\rwaheap.c
struct RwaHeapEntry {  // size 0x00C
    /* 0x000 */ RwaHeapEntry *next;
    /* 0x004 */ RwaHeapEntry *prev;
    /* 0x008 */ unsigned int size;
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\core\src\rwaheap.c
struct RwaHeapMetrics {  // size 0x010
    /* 0x000 */ unsigned int totalMemUsage;
    /* 0x004 */ unsigned int heapInfoMemUsage;
    /* 0x008 */ unsigned int dataMemUsage;
    /* 0x00C */ unsigned int freeMemory;
};

// declared in 41 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedef.c
class RwaInputParamDef {  // size 0x018
public:
    /* 0x000 */ RwaUniqueID uniqueID;
    /* 0x00C */ RwaParamTypeHandle paramHandle;
    /* 0x014 */ RwaObj *(*setFunc)(RwaObj *, unsigned int, void *);
};

// declared in 5 file(s), e.g. C:\dev\rwaudio\source\objects\src\rwalistenerobj.c
struct RwaInputParamMap {  // size 0x008
    /* 0x000 */ RwaObj *(*setFunc)(RwaObj *, unsigned int, void *);
    /* 0x004 */ unsigned short paramIndex;
    /* 0x006 */ unsigned char pad[2];
};

// declared in 37 file(s), e.g. C:\dev\rwaudio\source\objects\src\rwalistenerobj.c
class RwaListener {  // size 0x0C0
public:
    /* 0x000 */ RwaObj obj;
    /* 0x040 */ RwaListenerState state;
};

// declared in 37 file(s), e.g. C:\dev\rwaudio\source\objects\src\rwalistenerobj.c
class RwaListenerState {  // size 0x048
public:
    /* 0x000 */ RwV3d Position;
    /* 0x00C */ RwV3d Velocity;
    /* 0x018 */ RwV3d Up;
    /* 0x024 */ RwV3d At;
    /* 0x030 */ RwV3d Right;
    /* 0x03C */ float RolloffFactor;
    /* 0x040 */ float DopplerScale;
    /* 0x044 */ float DistanceFactor;
};

// declared in 2 file(s), e.g. C:\dev\rwaudio\source\objects\src\rwalistenerobj.c
struct RwaListenerVoiceAttributes {  // size 0x030
    /* 0x000 */ RwV3d pos;
    /* 0x00C */ RwV3d vel;
    /* 0x018 */ float mindistance;
    /* 0x01C */ float maxdistance;
    /* 0x020 */ float volmod;
    /* 0x024 */ float freqmod;
    /* 0x028 */ float xpan;
    /* 0x02C */ float ypan;
};

// declared in 36 file(s), e.g. C:\dev\rwaudio\source\core\src\rwallist.c
class RwaLLNode {  // size 0x00C
public:
    /* 0x000 */ RwaLLNode *prev;
    /* 0x004 */ RwaLLNode *next;
    /* 0x008 */ void *data;
};

// declared in 41 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedef.c
class RwaObj {  // size 0x028
public:
    /* 0x000 */ RwaObjDef *definition;
    /* 0x004 */ RwLLLink link;
    /* 0x00C */ RwLinkList executeList;
    /* 0x014 */ RwLLLink executeLink;
    /* 0x01C */ unsigned int flags;
    /* 0x020 */ void *state;
    /* 0x024 */ RwaObj *createObj;
};

// declared in 41 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedef.c
class RwaObjDef {  // size 0x054
public:
    /* 0x000 */ RwaUniqueID uniqueID;
    /* 0x00C */ unsigned int flags;
    /* 0x010 */ RwLinkList objDefList;
    /* 0x018 */ RwLLLink objDefLink;
    /* 0x020 */ RwLinkList waveDefList;
    /* 0x028 */ RwaObj *(*createFunc)(RwaObj *, RwaObj *, void *, void *(*)(RwaObjDef *, void *, void *, unsigned int), void *);
    /* 0x02C */ RwaObj *(*startExecuteFunc)(RwaObj *);
    /* 0x030 */ RwaObj *(*finishExecuteFunc)(RwaObj *);
    /* 0x034 */ void (*destroyFunc)(RwaObj *, void (*)(RwaObj *, void *), void *);
    /* 0x038 */ RwaObjDef *(*unregisterFunc)(RwaObjDef *);
    /* 0x03C */ RwaObj *(*getParamsFunc)(RwaObj *, void *);
    /* 0x040 */ unsigned int stateSizeAlign;
    /* 0x044 */ unsigned short createParamSize;
    /* 0x046 */ unsigned short noFreeListEntries;
    /* 0x048 */ void *instanceAllocator;
    /* 0x04C */ RwaObjDefInterfaceInfo *interfaceInfo;
    /* 0x050 */ RwaObjDefAliasInfo *aliasInfo;
};

// declared in 41 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedef.c
class RwaObjDefAliasInfo {  // size 0x008
public:
    /* 0x000 */ RwLinkList aliasList;
};

// declared in 41 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedef.c
class RwaObjDefInterfaceInfo {  // size 0x018
public:
    /* 0x000 */ RwaObjInterfaceDef *defaultInterface;
    /* 0x004 */ RwLinkList interfaceList;
    /* 0x00C */ unsigned short noInputs;
    /* 0x00E */ unsigned short noOutputs;
    /* 0x010 */ RwaInputParamDef *inputParams;
    /* 0x014 */ RwaOutputParamDef *outputParams;
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\objects\src\rwasoftoutputobj.c
struct RwaObjFindByObjDefData {  // size 0x008
    /* 0x000 */ RwaObj *obj;
    /* 0x004 */ RwaObjDef *objDef;
};

// declared in 5 file(s), e.g. C:\dev\rwaudio\source\objects\src\rwalistenerobj.c
struct RwaObjHandle {  // size 0x018
    /* 0x000 */ RwaObj *obj;
    /* 0x004 */ RwaObjInterface *objInterface;
    /* 0x008 */ RwLLLink link;
    /* 0x010 */ unsigned int flags;
    /* 0x014 */ unsigned int refCount;
};

// declared in 5 file(s), e.g. C:\dev\rwaudio\source\objects\src\rwalistenerobj.c
struct RwaObjHandleParams {  // size 0x018
    /* 0x000 */ unsigned int objCreateFlags;
    /* 0x004 */ void *(*objCreateCallback)(RwaObjDef *, void *, void *, unsigned int);
    /* 0x008 */ void *objCallbackData;
    /* 0x00C */ void *(*interfaceCreateCallback)(unsigned int, void *);
    /* 0x010 */ void *interfaceCallbackData;
    /* 0x014 */ RwaObjHandle *objHandle;
};

// declared in 5 file(s), e.g. C:\dev\rwaudio\source\objects\src\rwalistenerobj.c
struct RwaObjInterface {  // size 0x01C
    /* 0x000 */ RwaObjInterfaceDef *interfaceDef;
    /* 0x004 */ RwaInputParamMap *inputParamMaps;
    /* 0x008 */ RwaOutputParamMap *outputParamMaps;
    /* 0x00C */ unsigned int refCount;
    /* 0x010 */ unsigned int flags;
    /* 0x014 */ RwLLLink link;
};

// declared in 45 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedef.c
class RwaObjInterfaceDef {  // size 0x028
public:
    /* 0x000 */ RwaUniqueID uniqueID;
    /* 0x00C */ RwaObjInterfaceDefParam *outputParams;
    /* 0x010 */ RwaObjInterfaceDefParam *inputParams;
    /* 0x014 */ unsigned short noInputParams;
    /* 0x016 */ unsigned short noOutputParams;
    /* 0x018 */ unsigned int flags;
    /* 0x01C */ void (*unregFunc)(RwaObjInterfaceDef *);
    /* 0x020 */ RwLLLink link;
};

// declared in 45 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedef.c
class RwaObjInterfaceDefParam {  // size 0x014
public:
    /* 0x000 */ RwaUniqueID uniqueID;
    /* 0x00C */ RwaParamTypeHandle paramType;
};

// declared in 2 file(s), e.g. C:\dev\rwaudio\source\objects\src\rwasoftoutputobj.c
struct RwaOutputMixerInfo {  // size 0x00C
    /* 0x000 */ short *(*callback)(unsigned int, unsigned int);
    /* 0x004 */ unsigned int length;
    /* 0x008 */ unsigned int userdata;
};

// declared in 41 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedef.c
class RwaOutputParamDef {  // size 0x018
public:
    /* 0x000 */ RwaUniqueID uniqueID;
    /* 0x00C */ RwaParamTypeHandle paramHandle;
    /* 0x014 */ RwaObj *(*getFunc)(RwaObj *, unsigned int, void *);
};

// declared in 5 file(s), e.g. C:\dev\rwaudio\source\objects\src\rwalistenerobj.c
struct RwaOutputParamMap {  // size 0x008
    /* 0x000 */ RwaObj *(*getFunc)(RwaObj *, unsigned int, void *);
    /* 0x004 */ unsigned short paramIndex;
    /* 0x006 */ unsigned char pad[2];
};

// declared in 36 file(s), e.g. C:\dev\rwaudio\source\objects\src\rwasoftoutputobj.c
class RwaOutputSPU2DMAStateTag {  // size 0x650
public:
    /* 0x000 */ RwaSPU2VoiceStateDMA VoiceState[48];
    /* 0x600 */ unsigned char UsedVoices[48];
    /* 0x630 */ int ReverbType;
    /* 0x634 */ short ReverbGainLeft;
    /* 0x636 */ short ReverbGainRight;
    /* 0x638 */ int Gain;
    /* 0x63C */ int SpeakerConfig;
    /* 0x640 */ int Delay;
    /* 0x644 */ int Feedback;
    /* 0x648 */ int PacketID;
    /* 0x64C */ int pad;
};

// declared in 45 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedef.c
class RwaParamType {  // size 0x028
public:
    /* 0x000 */ RwaUniqueID uniqueID;
    /* 0x00C */ void *rangeMin;
    /* 0x010 */ void *rangeMax;
    /* 0x014 */ RwaType type;
    /* 0x018 */ RwaParamType *paramType;
    /* 0x01C */ unsigned int flags;
    /* 0x020 */ RwLLLink link;
};

// declared in 31 file(s), e.g. gamesource\Hud\CHudComponentBonus.cpp  // VARIANT 1 of 2
class RwaParamTypeHandle {  // size 0x008
public:
    /* 0x000 */ class {  // size 0x004
    public:
        /* 0x000 */ RwaUUID *paramTypeUUID;
        /* 0x000 */ RwaParamType *paramType;
        /* 0x000 */ RwaParamType *paramTypePtr;
    } u;
    /* 0x004 */ int isUUID;
};

// declared in 14 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedef.c  // VARIANT 2 of 2
struct RwaParamTypeHandle {  // size 0x008
    /* 0x000 */ union {  // size 0x004
        /* 0x000 */ RwaUUID *paramTypeUUID;
        /* 0x000 */ RwaParamType *paramType;
        /* 0x000 */ RwaParamType *paramTypePtr;
    } u;
    /* 0x004 */ int isUUID;
};

// declared in 2 file(s), e.g. C:\dev\rwaudio\source\objects\src\rwasoftoutputobj.c
struct RwaSoftOutput {  // size 0x064
    /* 0x000 */ RwaObj obj;
    /* 0x028 */ RwaSoftOutputState state;
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\objects\src\rwasoftoutputobj.c
struct RwaSoftOutputCreationParams {  // size 0x00C
    /* 0x000 */ RwaSPU2Output *output;
    /* 0x004 */ unsigned int maxVoices;
    /* 0x008 */ unsigned int sampleRate;
};

// declared in 2 file(s), e.g. C:\dev\rwaudio\source\objects\src\rwasoftoutputobj.c
struct RwaSoftOutputState {  // size 0x03C
    /* 0x000 */ unsigned int NumVoices;
    /* 0x004 */ float Gain;
    /* 0x008 */ RwaSPU2Output *Output;
    /* 0x00C */ unsigned int OutputRate;
    /* 0x010 */ unsigned int BufferLength;
    /* 0x014 */ short *OutputBufferMem;
    /* 0x018 */ short *OutputBuffer;
    /* 0x01C */ int *MixerBufferMem;
    /* 0x020 */ int *MixerBuffer;
    /* 0x024 */ RwaLLNode voiceList;
    /* 0x030 */ RwaListener *Listener;
    /* 0x034 */ int SpeakerConfig;
    /* 0x038 */ unsigned int flags;
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\waves\src\rwasoftwave.c
struct RwaSoftWave {  // size 0x05C
    /* 0x000 */ RwaWave wave;
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2wave.c
struct RwaSPU2MemoryFunctions {  // size 0x00C
    /* 0x000 */ unsigned int (*malloc)(unsigned int);
    /* 0x004 */ void (*free)(unsigned int);
    /* 0x008 */ unsigned int (*getFree)();
};

// declared in 36 file(s), e.g. C:\dev\rwaudio\source\objects\src\rwasoftoutputobj.c
class RwaSPU2Output {  // size 0x1400
public:
    /* 0x000 */ RwaObj obj;
    /* 0x040 */ RwaSPU2OutputState state;
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2out.c
struct RwaSPU2OutputCreationParams {  // size 0x00C
    /* 0x000 */ unsigned int maxVoices;
    /* 0x004 */ int reverbEnableCore0;
    /* 0x008 */ int reverbEnableCore1;
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2out.c
struct RwaSPU2OutputReverb {  // size 0x010
    /* 0x000 */ RwaSPU2OutputReverbMode mode;
    /* 0x004 */ short levelLeft;
    /* 0x006 */ short levelRight;
    /* 0x008 */ int delay;
    /* 0x00C */ int feedback;
};

// declared in 36 file(s), e.g. C:\dev\rwaudio\source\objects\src\rwasoftoutputobj.c
class RwaSPU2OutputState {  // size 0x13C0
public:
    /* 0x000 */ RwaOutputSPU2DMAStateTag DMAState;
    /* 0x680 */ RwaOutputSPU2DMAStateTag DMAStateToIOP;
    /* 0xD00 */ RwaOutputSPU2DMAStateTag DMAStateReply;
    /* 0x1350 */ int Initialized;
    /* 0x1354 */ short *(*MixerCallback)(unsigned int, unsigned int);
    /* 0x1358 */ unsigned int MixerCallbackData;
    /* 0x135C */ unsigned int MixerBufferLength;
    /* 0x1360 */ short *MixerBuffer;
    /* 0x1364 */ short *MixerBufferMem;
    /* 0x1368 */ short *(*IRQCallback)(unsigned int, unsigned int);
    /* 0x136C */ unsigned int IRQCallbackData;
    /* 0x1370 */ unsigned int NumVoices;
    /* 0x1374 */ unsigned int DMAStateIOPAddr;
    /* 0x1378 */ RwaEnvironment Environment;
    /* 0x13A8 */ RwaListener *Listener;
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2out.c
struct RwaSPU2PCMRendererAllocData {  // size 0x040
    /* 0x000 */ unsigned int eeSideAddr;
    /* 0x004 */ unsigned int iopSideAddr;
    /* 0x008 */ int threadID;
    /* 0x00C */ unsigned int channels;
    /* 0x010 */ unsigned int mode;
    /* 0x014 */ unsigned int result;
    /* 0x018 */ unsigned char pad[40];
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2stream.c
struct RwaSPU2Stream {  // size 0x1E80
    /* 0x000 */ RwaObj obj;
    /* 0x040 */ RwaSPU2StreamState state;
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2stream.c
struct RwaSPU2StreamDMACommands {  // size 0xEC0
    /* 0x000 */ RwaSPU2StreamRefParams refParams;
    /* 0x280 */ RwaStreamContainerCommands commands;
    /* 0xE98 */ unsigned int seqNum;
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2stream.c
struct RwaSPU2StreamDMACurrentState {  // size 0x040
    /* 0x000 */ RwaStreamContainerCurrentStatus currentStatus;
    /* 0x020 */ RwaSPU2StreamCurrentUpdateType updateType;
    /* 0x024 */ unsigned int seqNum;
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2stream.c
struct RwaSPU2StreamRefParams {  // size 0x25C
    /* 0x000 */ RwaStreamMediaParams mediaParams;
    /* 0x024 */ char mediaID[256];
    /* 0x124 */ char mediaStreamName[128];
    /* 0x1A4 */ RwaUUID mediaStreamID;
    /* 0x1B4 */ RwaStreamPosParams posParams;
    /* 0x1BC */ RwaStreamPos pos;
    /* 0x1CC */ char segmentName[128];
    /* 0x24C */ RwaUUID segmentUUID;
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2stream.c
struct RwaSPU2StreamState {  // size 0x1E40
    /* 0x000 */ RwaSPU2StreamDMACommands localState;
    /* 0xEC0 */ void *destAddr;
    /* 0xEC4 */ void *iopObj;
    /* 0xF00 */ RwaSPU2StreamDMACommands cmdStateTx;
    /* 0x1DC0 */ RwaStreamContainerProperties propertiesRx;
    /* 0x1E00 */ RwaSPU2StreamDMACurrentState currStateRx;
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2out.c
struct RwaSPU2VAGRendererAllocData {  // size 0x040
    /* 0x000 */ unsigned int eeSideAddr;
    /* 0x004 */ unsigned int iopSideAddr;
    /* 0x008 */ int threadID;
    /* 0x00C */ unsigned int sizeSRAMBytes;
    /* 0x010 */ unsigned int channels;
    /* 0x014 */ unsigned int mode;
    /* 0x018 */ unsigned int core0BitMap;
    /* 0x01C */ unsigned int core1BitMap;
    /* 0x020 */ unsigned int baseAddrSRAMBytes;
    /* 0x024 */ unsigned int baseAddrSRAMHandle;
    /* 0x028 */ unsigned char pad[24];
};

// declared in 31 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2voice.c
class RwaSPU2Voice {  // size 0x0A0
public:
    /* 0x000 */ RwaObj obj;
    /* 0x030 */ RwaSPU2VoiceState state;
};

// declared in 32 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2out.c
class RwaSPU2VoiceCreationParams {  // size 0x004
public:
    /* 0x000 */ unsigned int mode;
};

// declared in 32 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2out.c
class RwaSPU2VoiceState {  // size 0x06C
public:
    /* 0x000 */ RwaSPU2VoiceStateDMA *StateDMA;
    /* 0x004 */ RwaObj *Output;
    /* 0x008 */ RwaSPU2Wave *Wave;
    /* 0x00C */ RwaObj *Partner;
    /* 0x010 */ int DolbyVoice;
    /* 0x014 */ float VolL;
    /* 0x018 */ float VolR;
    /* 0x01C */ int Reserved;
    /* 0x020 */ RwaSPU2VoiceCreationParams creationparams;
    /* 0x024 */ unsigned int updateFlags;
    /* 0x028 */ unsigned char pad[8];
    /* 0x030 */ RwV3d Position3D;
    /* 0x03C */ RwV3d Velocity3D;
    /* 0x048 */ float Frequency;
    /* 0x04C */ float Volume;
    /* 0x050 */ float Pan;
    /* 0x054 */ float FrequencyScale3D;
    /* 0x058 */ float VolumeScale3D;
    /* 0x05C */ float Pan3D;
    /* 0x060 */ float MinDistance3D;
    /* 0x064 */ float MaxDistance3D;
    /* 0x068 */ int Is3D;
};

// declared in 36 file(s), e.g. C:\dev\rwaudio\source\objects\src\rwasoftoutputobj.c
class RwaSPU2VoiceStateDMA {  // size 0x020
public:
    /* 0x000 */ int PlayState;
    /* 0x004 */ unsigned int StartAddress;
    /* 0x008 */ unsigned int LoopStartAddress;
    /* 0x00C */ int Frequency;
    /* 0x010 */ int Volumes;
    /* 0x014 */ unsigned int CurrentPosition;
    /* 0x018 */ unsigned int TriggerPosition;
    /* 0x01C */ int Looping;
};

// declared in 34 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2out.c
class RwaSPU2Wave {  // size 0x05C
public:
    /* 0x000 */ RwaWave wave;
};

// declared in 2 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\common\rwastreamcontainer.c
struct RwaStreamContainerCommands {  // size 0xC18
    /* 0x000 */ unsigned int cmdFlags;
    /* 0x004 */ RwaStreamPlayState setPlayState;
    /* 0x008 */ RwaStreamMediaParams *setMediaParams;
    /* 0x00C */ RwaStreamPosParams *setPos;
    /* 0x010 */ float setPitch;
    /* 0x014 */ int setLoop;
    /* 0x018 */ RwaStreamGain gainElements[192];
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2stream.c
struct RwaStreamContainerCurrentStatus {  // size 0x020
    /* 0x000 */ float pitch;
    /* 0x004 */ RwaStreamPos streamPos;
    /* 0x014 */ RwaStreamStatus streamStatus;
    /* 0x018 */ RwaStreamMediaStatus mediaStatus;
    /* 0x01C */ RwaStreamRenderStatus renderStatus;
};

// declared in 2 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\common\rwastreamcontainer.c
struct RwaStreamContainerProperties {  // size 0x00C
    /* 0x000 */ unsigned int flags;
    /* 0x004 */ unsigned int numGainElements;
    /* 0x008 */ unsigned int numRenderChains;
};

// declared in 2 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\common\rwastreamcontainer.c
struct RwaStreamGain {  // size 0x010
    /* 0x000 */ int subStream;
    /* 0x004 */ RwaStreamGainElement element;
};

// declared in 2 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\common\rwastreamcontainer.c
struct RwaStreamGainElement {  // size 0x00C
    /* 0x000 */ int inputChannel;
    /* 0x004 */ int bussNumber;
    /* 0x008 */ float gain;
};

// declared in 2 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\common\rwastreamcontainer.c
struct RwaStreamMediaParams {  // size 0x024
    /* 0x000 */ void *mediaID;
    /* 0x004 */ RwaStreamMediaType mediaIDType;
    /* 0x008 */ RwaWaveFormat *format;
    /* 0x00C */ RwaUUID *audioStreamID;
    /* 0x010 */ char *audioStreamName;
    /* 0x014 */ unsigned int mediaBufferSize;
    /* 0x018 */ unsigned int mediaNumPacketBuffers;
    /* 0x01C */ unsigned int pipelineNumPacketBuffers;
    /* 0x020 */ int allowReinterleaving;
};

// declared in 2 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\common\rwastreamcontainer.c
struct RwaStreamPos {  // size 0x010
    /* 0x000 */ union {  // size 0x004
        /* 0x000 */ char *name;
        /* 0x000 */ RwaUUID *uuid;
        /* 0x000 */ unsigned int index;
    } segment;
    /* 0x004 */ RwaStreamPosSegmentType segmentType;
    /* 0x008 */ union {  // size 0x004
        /* 0x000 */ unsigned int samples;
        /* 0x000 */ float seconds;
    } time;
    /* 0x00C */ RwaStreamPosTimeType timeType;
};

// declared in 2 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\common\rwastreamcontainer.c
struct RwaStreamPosParams {  // size 0x008
    /* 0x000 */ RwaStreamPos *pos;
    /* 0x004 */ int flush;
};

// declared in 32 file(s), e.g. gamesource\Hud\CHudComponentBonus.cpp  // VARIANT 1 of 2
class RwaUniqueID {  // size 0x00C
public:
    /* 0x000 */ class {  // size 0x004
    public:
        /* 0x000 */ RwaUUID *uuid;
        /* 0x000 */ RwaUUID *copyUUID;
    } uuid;
    /* 0x004 */ class {  // size 0x004
    public:
        /* 0x000 */ char *uniqueName;
        /* 0x000 */ char *copyName;
    } name;
    /* 0x008 */ unsigned int flags;
};

// declared in 14 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedef.c  // VARIANT 2 of 2
struct RwaUniqueID {  // size 0x00C
    /* 0x000 */ union {  // size 0x004
        /* 0x000 */ RwaUUID *uuid;
        /* 0x000 */ RwaUUID *copyUUID;
    } uuid;
    /* 0x004 */ union {  // size 0x004
        /* 0x000 */ char *uniqueName;
        /* 0x000 */ char *copyName;
    } name;
    /* 0x008 */ unsigned int flags;
};

// declared in 48 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawaveconv.c
class RwaUUID {  // size 0x010
public:
    /* 0x000 */ unsigned int time_low;
    /* 0x004 */ unsigned short time_mid;
    /* 0x006 */ unsigned short time_hi_and_version;
    /* 0x008 */ unsigned char node[8];
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2out.c
struct RwaVoicePool {  // size 0x008
    /* 0x000 */ int numVoices;
    /* 0x004 */ RwaObjHandle **voices;
};

// declared in 38 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedef.c
class RwaWave {  // size 0x05C
public:
    /* 0x000 */ RwaUniqueID uniqueID;
    /* 0x00C */ RwaWaveDef *waveDef;
    /* 0x010 */ RwaWaveFormat format;
    /* 0x02C */ RwaWaveFormat targetFormat;
    /* 0x048 */ unsigned int uncompressedLength;
    /* 0x04C */ void *data;
    /* 0x050 */ void *state;
    /* 0x054 */ unsigned int flags;
    /* 0x058 */ RwaObj *obj;
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawaveconv.c
struct RwaWaveConversion {  // size 0x010
    /* 0x000 */ RwaWaveDefFormat *sourceFormat;
    /* 0x004 */ RwaWaveDefFormat *targetFormat;
    /* 0x008 */ unsigned int (*convFunc)(RwaWaveFormat *, void *, unsigned int, RwaWaveFormat *, void *, unsigned int *);
    /* 0x00C */ unsigned int flags;
};

// declared in 31 file(s), e.g. gamesource\Hud\CHudComponentBonus.cpp  // VARIANT 1 of 2
class RwaWaveDef {  // size 0x04C
public:
    /* 0x000 */ RwaUniqueID uniqueID;
    /* 0x00C */ RwaWave *(*createFunction)(RwaWave *, RwaObj *);
    /* 0x010 */ void (*destroyFunction)(RwaWave *);
    /* 0x014 */ RwaWave *(*uploadFunction)(RwaWave *, unsigned int, void *, unsigned int);
    /* 0x018 */ RwaWave *(*downloadFunction)(RwaWave *, RwaWaveFormat *, unsigned int, void *);
    /* 0x01C */ int (*uploadBusyFunction)();
    /* 0x020 */ void (*unregisterFunction)(RwaWaveDef *);
    /* 0x024 */ unsigned int noSupportedFormats;
    /* 0x028 */ class {  // size 0x004
    public:
        /* 0x000 */ RwaWaveDefFormat **formats;
        /* 0x000 */ RwaWaveDefFormat **copyFormats;
    } supportedFormats;
    /* 0x02C */ unsigned int defaultFormatIndex;
    /* 0x030 */ RwaObjDef *objDef;
    /* 0x034 */ unsigned int stateSize;
    /* 0x038 */ unsigned int stateAlign;
    /* 0x03C */ RwaFreeList *freeList;
    /* 0x040 */ RwLLLink link;
    /* 0x048 */ unsigned int flags;
};

// declared in 7 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedef.c  // VARIANT 2 of 2
struct RwaWaveDef {  // size 0x04C
    /* 0x000 */ RwaUniqueID uniqueID;
    /* 0x00C */ RwaWave *(*createFunction)(RwaWave *, RwaObj *);
    /* 0x010 */ void (*destroyFunction)(RwaWave *);
    /* 0x014 */ RwaWave *(*uploadFunction)(RwaWave *, unsigned int, void *, unsigned int);
    /* 0x018 */ RwaWave *(*downloadFunction)(RwaWave *, RwaWaveFormat *, unsigned int, void *);
    /* 0x01C */ int (*uploadBusyFunction)();
    /* 0x020 */ void (*unregisterFunction)(RwaWaveDef *);
    /* 0x024 */ unsigned int noSupportedFormats;
    /* 0x028 */ union {  // size 0x004
        /* 0x000 */ RwaWaveDefFormat **formats;
        /* 0x000 */ RwaWaveDefFormat **copyFormats;
    } supportedFormats;
    /* 0x02C */ unsigned int defaultFormatIndex;
    /* 0x030 */ RwaObjDef *objDef;
    /* 0x034 */ unsigned int stateSize;
    /* 0x038 */ unsigned int stateAlign;
    /* 0x03C */ RwaFreeList *freeList;
    /* 0x040 */ RwLLLink link;
    /* 0x048 */ unsigned int flags;
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedef.c
struct RwaWaveDefFindByObjData {  // size 0x008
    /* 0x000 */ RwaObj *obj;
    /* 0x004 */ RwaWaveDef *waveDef;
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedef.c
struct RwaWaveDefFindByUUIDData {  // size 0x008
    /* 0x000 */ RwaUUID *uuid;
    /* 0x004 */ RwaWaveDef *waveDef;
};

// declared in 39 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawaveconv.c
class RwaWaveDefFormat {  // size 0x014
public:
    /* 0x000 */ RwaUUID *dataType;
    /* 0x004 */ unsigned char bitDepth;
    /* 0x005 */ unsigned char noChannels;
    /* 0x008 */ unsigned int minSampleRate;
    /* 0x00C */ unsigned int maxSampleRate;
    /* 0x010 */ unsigned char flags;
};

// declared in 33 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedef.c
class RwaWaveDict {  // size 0x024
public:
    /* 0x000 */ RwaUniqueID uniqueID;
    /* 0x00C */ RwaLLNode waveListHead;
    /* 0x018 */ int flags;
    /* 0x01C */ RwLLLink link;
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedict.c
struct RwaWaveDictStreamWriteData {  // size 0x010
    /* 0x000 */ RwaWaveDict *waveDict;
    /* 0x004 */ RwaWaveFormat *sourceFormat;
    /* 0x008 */ RwaWaveFormat *targetFormat;
    /* 0x00C */ unsigned int noWaves;
};

// declared in 41 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawaveconv.c
class RwaWaveFormat {  // size 0x01C
public:
    /* 0x000 */ unsigned int sampleRate;
    /* 0x004 */ RwaUUID *dataType;
    /* 0x008 */ unsigned int length;
    /* 0x00C */ unsigned char bitDepth;
    /* 0x00D */ unsigned char noChannels;
    /* 0x010 */ void *miscData;
    /* 0x014 */ unsigned int miscDataSize;
    /* 0x018 */ unsigned char flags;
    /* 0x019 */ unsigned char reserved;
};

// declared in 118 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RwBBox {  // size 0x018
public:
    /* 0x000 */ RwV3d sup;
    /* 0x00C */ RwV3d inf;
};

// declared in 104 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RwCamera {  // size 0x190
public:
    /* 0x000 */ RwObjectHasFrame object;
    /* 0x014 */ RwCameraProjection projectionType;
    /* 0x018 */ RwCamera *(*beginUpdate)(RwCamera *);
    /* 0x01C */ RwCamera *(*endUpdate)(RwCamera *);
    /* 0x020 */ RwMatrixTag viewMatrix;
    /* 0x060 */ RwRaster *frameBuffer;
    /* 0x064 */ RwRaster *zBuffer;
    /* 0x068 */ RwV2d viewWindow;
    /* 0x070 */ RwV2d recipViewWindow;
    /* 0x078 */ RwV2d viewOffset;
    /* 0x080 */ float nearPlane;
    /* 0x084 */ float farPlane;
    /* 0x088 */ float fogPlane;
    /* 0x08C */ float zScale;
    /* 0x090 */ float zShift;
    /* 0x094 */ unsigned short renderFrame;
    /* 0x096 */ unsigned short pad;
    /* 0x098 */ RwFrustumPlane frustumPlanes[6];
    /* 0x110 */ RwBBox frustumBoundBox;
    /* 0x128 */ RwV3d frustumCorners[8];
};

// declared in 2 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedict.c
struct RwChunkHeaderInfo {  // size 0x014
    /* 0x000 */ unsigned int type;
    /* 0x004 */ unsigned int length;
    /* 0x008 */ unsigned int version;
    /* 0x00C */ unsigned int buildNum;
    /* 0x010 */ int isComplex;
};

// declared in 4 file(s), e.g. nodeClipLine.c
struct RwClipInfo {  // size 0x028
    /* 0x000 */ float zScale;
    /* 0x004 */ float zShift;
    /* 0x008 */ float nearClip;
    /* 0x00C */ float farClip;
    /* 0x010 */ float camWidth;
    /* 0x014 */ float camHeight;
    /* 0x018 */ float camOffsetX;
    /* 0x01C */ float camOffsetY;
    /* 0x020 */ float zBufferNear;
    /* 0x024 */ float zBufferFar;
};

// declared in 2 file(s), e.g. badevice.c
struct RwDevice {  // size 0x038
    /* 0x000 */ float gammaCorrection;
    /* 0x004 */ int (*fpSystem)(int, void *, void *, int);
    /* 0x008 */ float zBufferNear;
    /* 0x00C */ float zBufferFar;
    /* 0x010 */ int (*fpRenderStateSet)(RwRenderState, void *);
    /* 0x014 */ int (*fpRenderStateGet)(RwRenderState, void *);
    /* 0x018 */ int (*fpIm2DRenderLine)(RwSky2DVertex *, int, int, int);
    /* 0x01C */ int (*fpIm2DRenderTriangle)(RwSky2DVertex *, int, int, int, int);
    /* 0x020 */ int (*fpIm2DRenderPrimitive)(RwPrimitiveType, RwSky2DVertex *, int);
    /* 0x024 */ int (*fpIm2DRenderIndexedPrimitive)(RwPrimitiveType, RwSky2DVertex *, int, unsigned short *, int);
    /* 0x028 */ int (*fpIm3DRenderLine)(int, int);
    /* 0x02C */ int (*fpIm3DRenderTriangle)(int, int, int);
    /* 0x030 */ int (*fpIm3DRenderPrimitive)(RwPrimitiveType);
    /* 0x034 */ int (*fpIm3DRenderIndexedPrimitive)(RwPrimitiveType, unsigned short *, int);
};

// declared in 4 file(s), e.g. badma.c  // VARIANT 1 of 2
struct rwDMA_flipDataTag {  // size 0x360
    /* 0x000 */ struct {  // size 0x330
        /* 0x000 */ struct {  // size 0x028
            /* 0x000 */ struct {  // size 0x008
                /* 0x000 */ unsigned int EN1 : 1;  // bit offset 0
                /* 0x000 */ unsigned int EN2 : 1;  // bit offset 1
                /* 0x000 */ unsigned int CRTMD : 3;  // bit offset 2
                /* 0x000 */ unsigned int MMOD : 1;  // bit offset 5
                /* 0x000 */ unsigned int AMOD : 1;  // bit offset 6
                /* 0x000 */ unsigned int SLBG : 1;  // bit offset 7
                /* 0x000 */ unsigned int ALP : 8;  // bit offset 8
                /* 0x000 */ unsigned int p0 : 16;  // bit offset 16
                /* 0x004 */ unsigned int p1;
            } pmode;
            /* 0x008 */ struct {  // size 0x008
                /* 0x000 */ unsigned int INT : 1;  // bit offset 0
                /* 0x000 */ unsigned int FFMD : 1;  // bit offset 1
                /* 0x000 */ unsigned int DPMS : 2;  // bit offset 2
                /* 0x000 */ unsigned int p0 : 28;  // bit offset 4
                /* 0x004 */ unsigned int p1;
            } smode2;
            /* 0x010 */ struct {  // size 0x008
                /* 0x000 */ unsigned int FBP : 9;  // bit offset 0
                /* 0x000 */ unsigned int FBW : 6;  // bit offset 9
                /* 0x000 */ unsigned int PSM : 5;  // bit offset 15
                /* 0x000 */ unsigned int p0 : 12;  // bit offset 20
                /* 0x004 */ unsigned int DBX : 11;  // bit offset 0
                /* 0x004 */ unsigned int DBY : 11;  // bit offset 11
                /* 0x004 */ unsigned int p1 : 10;  // bit offset 22
            } dispfb;
            /* 0x018 */ struct {  // size 0x008
                /* 0x000 */ unsigned int DX : 12;  // bit offset 0
                /* 0x000 */ unsigned int DY : 11;  // bit offset 12
                /* 0x000 */ unsigned int MAGH : 4;  // bit offset 23
                /* 0x000 */ unsigned int MAGV : 2;  // bit offset 27
                /* 0x000 */ unsigned int p0 : 3;  // bit offset 29
                /* 0x004 */ unsigned int DW : 12;  // bit offset 0
                /* 0x004 */ unsigned int DH : 11;  // bit offset 12
                /* 0x004 */ unsigned int p1 : 9;  // bit offset 23
            } display;
            /* 0x020 */ struct {  // size 0x008
                /* 0x000 */ unsigned int R : 8;  // bit offset 0
                /* 0x000 */ unsigned int G : 8;  // bit offset 8
                /* 0x000 */ unsigned int B : 8;  // bit offset 16
                /* 0x000 */ unsigned int p0 : 8;  // bit offset 24
                /* 0x004 */ unsigned int p1;
            } bgcolor;
        } disp[2];
        /* 0x050 */ struct {  // size 0x010
            /* 0x000 */ unsigned long NLOOP : 15;  // bit offset 0
            /* 0x000 */ unsigned long EOP : 1;  // bit offset 15
            /* 0x000 */ unsigned long pad16 : 16;  // bit offset 16
            /* 0x000 */ unsigned long id : 14;  // bit offset 32
            /* 0x000 */ unsigned long PRE : 1;  // bit offset 46
            /* 0x000 */ unsigned long PRIM : 11;  // bit offset 47
            /* 0x000 */ unsigned long FLG : 2;  // bit offset 58
            /* 0x000 */ unsigned long NREG : 4;  // bit offset 60
            /* 0x008 */ unsigned long REGS0 : 4;  // bit offset 0
            /* 0x008 */ unsigned long REGS1 : 4;  // bit offset 4
            /* 0x008 */ unsigned long REGS2 : 4;  // bit offset 8
            /* 0x008 */ unsigned long REGS3 : 4;  // bit offset 12
            /* 0x008 */ unsigned long REGS4 : 4;  // bit offset 16
            /* 0x008 */ unsigned long REGS5 : 4;  // bit offset 20
            /* 0x008 */ unsigned long REGS6 : 4;  // bit offset 24
            /* 0x008 */ unsigned long REGS7 : 4;  // bit offset 28
            /* 0x008 */ unsigned long REGS8 : 4;  // bit offset 32
            /* 0x008 */ unsigned long REGS9 : 4;  // bit offset 36
            /* 0x008 */ unsigned long REGS10 : 4;  // bit offset 40
            /* 0x008 */ unsigned long REGS11 : 4;  // bit offset 44
            /* 0x008 */ unsigned long REGS12 : 4;  // bit offset 48
            /* 0x008 */ unsigned long REGS13 : 4;  // bit offset 52
            /* 0x008 */ unsigned long REGS14 : 4;  // bit offset 56
            /* 0x008 */ unsigned long REGS15 : 4;  // bit offset 60
        } giftag0;
        /* 0x060 */ struct {  // size 0x080
            /* 0x000 */ struct {  // size 0x008
                /* 0x000 */ unsigned long FBP : 9;  // bit offset 0
                /* 0x000 */ unsigned long pad09 : 7;  // bit offset 9
                /* 0x000 */ unsigned long FBW : 6;  // bit offset 16
                /* 0x000 */ unsigned long pad22 : 2;  // bit offset 22
                /* 0x000 */ unsigned long PSM : 6;  // bit offset 24
                /* 0x000 */ unsigned long pad30 : 2;  // bit offset 30
                /* 0x000 */ unsigned long FBMSK : 32;  // bit offset 32
            } frame1;
            /* 0x008 */ unsigned long frame1addr;
            /* 0x010 */ struct {  // size 0x008
                /* 0x000 */ unsigned long ZBP : 9;  // bit offset 0
                /* 0x000 */ unsigned long pad09 : 15;  // bit offset 9
                /* 0x000 */ unsigned long PSM : 4;  // bit offset 24
                /* 0x000 */ unsigned long pad28 : 4;  // bit offset 28
                /* 0x000 */ unsigned long ZMSK : 1;  // bit offset 32
                /* 0x000 */ unsigned long pad33 : 31;  // bit offset 33
            } zbuf1;
            /* 0x018 */ long zbuf1addr;
            /* 0x020 */ struct {  // size 0x008
                /* 0x000 */ unsigned long OFX : 16;  // bit offset 0
                /* 0x000 */ unsigned long pad16 : 16;  // bit offset 16
                /* 0x000 */ unsigned long OFY : 16;  // bit offset 32
                /* 0x000 */ unsigned long pad48 : 16;  // bit offset 48
            } xyoffset1;
            /* 0x028 */ long xyoffset1addr;
            /* 0x030 */ struct {  // size 0x008
                /* 0x000 */ unsigned long SCAX0 : 11;  // bit offset 0
                /* 0x000 */ unsigned long pad11 : 5;  // bit offset 11
                /* 0x000 */ unsigned long SCAX1 : 11;  // bit offset 16
                /* 0x000 */ unsigned long pad27 : 5;  // bit offset 27
                /* 0x000 */ unsigned long SCAY0 : 11;  // bit offset 32
                /* 0x000 */ unsigned long pad43 : 5;  // bit offset 43
                /* 0x000 */ unsigned long SCAY1 : 11;  // bit offset 48
                /* 0x000 */ unsigned long pad59 : 5;  // bit offset 59
            } scissor1;
            /* 0x038 */ long scissor1addr;
            /* 0x040 */ struct {  // size 0x008
                /* 0x000 */ unsigned long AC : 1;  // bit offset 0
                /* 0x000 */ unsigned long pad01 : 63;  // bit offset 1
            } prmodecont;
            /* 0x048 */ long prmodecontaddr;
            /* 0x050 */ struct {  // size 0x008
                /* 0x000 */ unsigned long CLAMP : 1;  // bit offset 0
                /* 0x000 */ unsigned long pad01 : 63;  // bit offset 1
            } colclamp;
            /* 0x058 */ long colclampaddr;
            /* 0x060 */ struct {  // size 0x008
                /* 0x000 */ unsigned long DTHE : 1;  // bit offset 0
                /* 0x000 */ unsigned long pad01 : 63;  // bit offset 1
            } dthe;
            /* 0x068 */ long dtheaddr;
            /* 0x070 */ struct {  // size 0x008
                /* 0x000 */ unsigned long ATE : 1;  // bit offset 0
                /* 0x000 */ unsigned long ATST : 3;  // bit offset 1
                /* 0x000 */ unsigned long AREF : 8;  // bit offset 4
                /* 0x000 */ unsigned long AFAIL : 2;  // bit offset 12
                /* 0x000 */ unsigned long DATE : 1;  // bit offset 14
                /* 0x000 */ unsigned long DATM : 1;  // bit offset 15
                /* 0x000 */ unsigned long ZTE : 1;  // bit offset 16
                /* 0x000 */ unsigned long ZTST : 2;  // bit offset 17
                /* 0x000 */ unsigned long pad19 : 45;  // bit offset 19
            } test1;
            /* 0x078 */ long test1addr;
        } draw01;
        /* 0x0E0 */ struct {  // size 0x080
            /* 0x000 */ struct {  // size 0x008
                /* 0x000 */ unsigned long FBP : 9;  // bit offset 0
                /* 0x000 */ unsigned long pad09 : 7;  // bit offset 9
                /* 0x000 */ unsigned long FBW : 6;  // bit offset 16
                /* 0x000 */ unsigned long pad22 : 2;  // bit offset 22
                /* 0x000 */ unsigned long PSM : 6;  // bit offset 24
                /* 0x000 */ unsigned long pad30 : 2;  // bit offset 30
                /* 0x000 */ unsigned long FBMSK : 32;  // bit offset 32
            } frame2;
            /* 0x008 */ unsigned long frame2addr;
            /* 0x010 */ struct {  // size 0x008
                /* 0x000 */ unsigned long ZBP : 9;  // bit offset 0
                /* 0x000 */ unsigned long pad09 : 15;  // bit offset 9
                /* 0x000 */ unsigned long PSM : 4;  // bit offset 24
                /* 0x000 */ unsigned long pad28 : 4;  // bit offset 28
                /* 0x000 */ unsigned long ZMSK : 1;  // bit offset 32
                /* 0x000 */ unsigned long pad33 : 31;  // bit offset 33
            } zbuf2;
            /* 0x018 */ long zbuf2addr;
            /* 0x020 */ struct {  // size 0x008
                /* 0x000 */ unsigned long OFX : 16;  // bit offset 0
                /* 0x000 */ unsigned long pad16 : 16;  // bit offset 16
                /* 0x000 */ unsigned long OFY : 16;  // bit offset 32
                /* 0x000 */ unsigned long pad48 : 16;  // bit offset 48
            } xyoffset2;
            /* 0x028 */ long xyoffset2addr;
            /* 0x030 */ struct {  // size 0x008
                /* 0x000 */ unsigned long SCAX0 : 11;  // bit offset 0
                /* 0x000 */ unsigned long pad11 : 5;  // bit offset 11
                /* 0x000 */ unsigned long SCAX1 : 11;  // bit offset 16
                /* 0x000 */ unsigned long pad27 : 5;  // bit offset 27
                /* 0x000 */ unsigned long SCAY0 : 11;  // bit offset 32
                /* 0x000 */ unsigned long pad43 : 5;  // bit offset 43
                /* 0x000 */ unsigned long SCAY1 : 11;  // bit offset 48
                /* 0x000 */ unsigned long pad59 : 5;  // bit offset 59
            } scissor2;
            /* 0x038 */ long scissor2addr;
            /* 0x040 */ struct {  // size 0x008
                /* 0x000 */ unsigned long AC : 1;  // bit offset 0
                /* 0x000 */ unsigned long pad01 : 63;  // bit offset 1
            } prmodecont;
            /* 0x048 */ long prmodecontaddr;
            /* 0x050 */ struct {  // size 0x008
                /* 0x000 */ unsigned long CLAMP : 1;  // bit offset 0
                /* 0x000 */ unsigned long pad01 : 63;  // bit offset 1
            } colclamp;
            /* 0x058 */ long colclampaddr;
            /* 0x060 */ struct {  // size 0x008
                /* 0x000 */ unsigned long DTHE : 1;  // bit offset 0
                /* 0x000 */ unsigned long pad01 : 63;  // bit offset 1
            } dthe;
            /* 0x068 */ long dtheaddr;
            /* 0x070 */ struct {  // size 0x008
                /* 0x000 */ unsigned long ATE : 1;  // bit offset 0
                /* 0x000 */ unsigned long ATST : 3;  // bit offset 1
                /* 0x000 */ unsigned long AREF : 8;  // bit offset 4
                /* 0x000 */ unsigned long AFAIL : 2;  // bit offset 12
                /* 0x000 */ unsigned long DATE : 1;  // bit offset 14
                /* 0x000 */ unsigned long DATM : 1;  // bit offset 15
                /* 0x000 */ unsigned long ZTE : 1;  // bit offset 16
                /* 0x000 */ unsigned long ZTST : 2;  // bit offset 17
                /* 0x000 */ unsigned long pad19 : 45;  // bit offset 19
            } test2;
            /* 0x078 */ long test2addr;
        } draw02;
        /* 0x160 */ struct {  // size 0x060
            /* 0x000 */ struct {  // size 0x008
                /* 0x000 */ unsigned long ATE : 1;  // bit offset 0
                /* 0x000 */ unsigned long ATST : 3;  // bit offset 1
                /* 0x000 */ unsigned long AREF : 8;  // bit offset 4
                /* 0x000 */ unsigned long AFAIL : 2;  // bit offset 12
                /* 0x000 */ unsigned long DATE : 1;  // bit offset 14
                /* 0x000 */ unsigned long DATM : 1;  // bit offset 15
                /* 0x000 */ unsigned long ZTE : 1;  // bit offset 16
                /* 0x000 */ unsigned long ZTST : 2;  // bit offset 17
                /* 0x000 */ unsigned long pad19 : 45;  // bit offset 19
            } testa;
            /* 0x008 */ long testaaddr;
            /* 0x010 */ struct {  // size 0x008
                /* 0x000 */ unsigned long PRIM : 3;  // bit offset 0
                /* 0x000 */ unsigned long IIP : 1;  // bit offset 3
                /* 0x000 */ unsigned long TME : 1;  // bit offset 4
                /* 0x000 */ unsigned long FGE : 1;  // bit offset 5
                /* 0x000 */ unsigned long ABE : 1;  // bit offset 6
                /* 0x000 */ unsigned long AA1 : 1;  // bit offset 7
                /* 0x000 */ unsigned long FST : 1;  // bit offset 8
                /* 0x000 */ unsigned long CTXT : 1;  // bit offset 9
                /* 0x000 */ unsigned long FIX : 1;  // bit offset 10
                /* 0x000 */ unsigned long pad11 : 53;  // bit offset 11
            } prim;
            /* 0x018 */ long primaddr;
            /* 0x020 */ struct {  // size 0x008
                /* 0x000 */ unsigned int R : 8;  // bit offset 0
                /* 0x000 */ unsigned int G : 8;  // bit offset 8
                /* 0x000 */ unsigned int B : 8;  // bit offset 16
                /* 0x000 */ unsigned int A : 8;  // bit offset 24
                /* 0x004 */ float Q;
            } rgbaq;
            /* 0x028 */ long rgbaqaddr;
            /* 0x030 */ struct {  // size 0x008
                /* 0x000 */ unsigned long X : 16;  // bit offset 0
                /* 0x000 */ unsigned long Y : 16;  // bit offset 16
                /* 0x000 */ unsigned long Z : 32;  // bit offset 32
            } xyz2a;
            /* 0x038 */ long xyz2aaddr;
            /* 0x040 */ struct {  // size 0x008
                /* 0x000 */ unsigned long X : 16;  // bit offset 0
                /* 0x000 */ unsigned long Y : 16;  // bit offset 16
                /* 0x000 */ unsigned long Z : 32;  // bit offset 32
            } xyz2b;
            /* 0x048 */ long xyz2baddr;
            /* 0x050 */ struct {  // size 0x008
                /* 0x000 */ unsigned long ATE : 1;  // bit offset 0
                /* 0x000 */ unsigned long ATST : 3;  // bit offset 1
                /* 0x000 */ unsigned long AREF : 8;  // bit offset 4
                /* 0x000 */ unsigned long AFAIL : 2;  // bit offset 12
                /* 0x000 */ unsigned long DATE : 1;  // bit offset 14
                /* 0x000 */ unsigned long DATM : 1;  // bit offset 15
                /* 0x000 */ unsigned long ZTE : 1;  // bit offset 16
                /* 0x000 */ unsigned long ZTST : 2;  // bit offset 17
                /* 0x000 */ unsigned long pad19 : 45;  // bit offset 19
            } testb;
            /* 0x058 */ long testbaddr;
        } clear0;
        /* 0x1C0 */ struct {  // size 0x010
            /* 0x000 */ unsigned long NLOOP : 15;  // bit offset 0
            /* 0x000 */ unsigned long EOP : 1;  // bit offset 15
            /* 0x000 */ unsigned long pad16 : 16;  // bit offset 16
            /* 0x000 */ unsigned long id : 14;  // bit offset 32
            /* 0x000 */ unsigned long PRE : 1;  // bit offset 46
            /* 0x000 */ unsigned long PRIM : 11;  // bit offset 47
            /* 0x000 */ unsigned long FLG : 2;  // bit offset 58
            /* 0x000 */ unsigned long NREG : 4;  // bit offset 60
            /* 0x008 */ unsigned long REGS0 : 4;  // bit offset 0
            /* 0x008 */ unsigned long REGS1 : 4;  // bit offset 4
            /* 0x008 */ unsigned long REGS2 : 4;  // bit offset 8
            /* 0x008 */ unsigned long REGS3 : 4;  // bit offset 12
            /* 0x008 */ unsigned long REGS4 : 4;  // bit offset 16
            /* 0x008 */ unsigned long REGS5 : 4;  // bit offset 20
            /* 0x008 */ unsigned long REGS6 : 4;  // bit offset 24
            /* 0x008 */ unsigned long REGS7 : 4;  // bit offset 28
            /* 0x008 */ unsigned long REGS8 : 4;  // bit offset 32
            /* 0x008 */ unsigned long REGS9 : 4;  // bit offset 36
            /* 0x008 */ unsigned long REGS10 : 4;  // bit offset 40
            /* 0x008 */ unsigned long REGS11 : 4;  // bit offset 44
            /* 0x008 */ unsigned long REGS12 : 4;  // bit offset 48
            /* 0x008 */ unsigned long REGS13 : 4;  // bit offset 52
            /* 0x008 */ unsigned long REGS14 : 4;  // bit offset 56
            /* 0x008 */ unsigned long REGS15 : 4;  // bit offset 60
        } giftag1;
        /* 0x1D0 */ struct {  // size 0x080
            /* 0x000 */ struct {  // size 0x008
                /* 0x000 */ unsigned long FBP : 9;  // bit offset 0
                /* 0x000 */ unsigned long pad09 : 7;  // bit offset 9
                /* 0x000 */ unsigned long FBW : 6;  // bit offset 16
                /* 0x000 */ unsigned long pad22 : 2;  // bit offset 22
                /* 0x000 */ unsigned long PSM : 6;  // bit offset 24
                /* 0x000 */ unsigned long pad30 : 2;  // bit offset 30
                /* 0x000 */ unsigned long FBMSK : 32;  // bit offset 32
            } frame1;
            /* 0x008 */ unsigned long frame1addr;
            /* 0x010 */ struct {  // size 0x008
                /* 0x000 */ unsigned long ZBP : 9;  // bit offset 0
                /* 0x000 */ unsigned long pad09 : 15;  // bit offset 9
                /* 0x000 */ unsigned long PSM : 4;  // bit offset 24
                /* 0x000 */ unsigned long pad28 : 4;  // bit offset 28
                /* 0x000 */ unsigned long ZMSK : 1;  // bit offset 32
                /* 0x000 */ unsigned long pad33 : 31;  // bit offset 33
            } zbuf1;
            /* 0x018 */ long zbuf1addr;
            /* 0x020 */ struct {  // size 0x008
                /* 0x000 */ unsigned long OFX : 16;  // bit offset 0
                /* 0x000 */ unsigned long pad16 : 16;  // bit offset 16
                /* 0x000 */ unsigned long OFY : 16;  // bit offset 32
                /* 0x000 */ unsigned long pad48 : 16;  // bit offset 48
            } xyoffset1;
            /* 0x028 */ long xyoffset1addr;
            /* 0x030 */ struct {  // size 0x008
                /* 0x000 */ unsigned long SCAX0 : 11;  // bit offset 0
                /* 0x000 */ unsigned long pad11 : 5;  // bit offset 11
                /* 0x000 */ unsigned long SCAX1 : 11;  // bit offset 16
                /* 0x000 */ unsigned long pad27 : 5;  // bit offset 27
                /* 0x000 */ unsigned long SCAY0 : 11;  // bit offset 32
                /* 0x000 */ unsigned long pad43 : 5;  // bit offset 43
                /* 0x000 */ unsigned long SCAY1 : 11;  // bit offset 48
                /* 0x000 */ unsigned long pad59 : 5;  // bit offset 59
            } scissor1;
            /* 0x038 */ long scissor1addr;
            /* 0x040 */ struct {  // size 0x008
                /* 0x000 */ unsigned long AC : 1;  // bit offset 0
                /* 0x000 */ unsigned long pad01 : 63;  // bit offset 1
            } prmodecont;
            /* 0x048 */ long prmodecontaddr;
            /* 0x050 */ struct {  // size 0x008
                /* 0x000 */ unsigned long CLAMP : 1;  // bit offset 0
                /* 0x000 */ unsigned long pad01 : 63;  // bit offset 1
            } colclamp;
            /* 0x058 */ long colclampaddr;
            /* 0x060 */ struct {  // size 0x008
                /* 0x000 */ unsigned long DTHE : 1;  // bit offset 0
                /* 0x000 */ unsigned long pad01 : 63;  // bit offset 1
            } dthe;
            /* 0x068 */ long dtheaddr;
            /* 0x070 */ struct {  // size 0x008
                /* 0x000 */ unsigned long ATE : 1;  // bit offset 0
                /* 0x000 */ unsigned long ATST : 3;  // bit offset 1
                /* 0x000 */ unsigned long AREF : 8;  // bit offset 4
                /* 0x000 */ unsigned long AFAIL : 2;  // bit offset 12
                /* 0x000 */ unsigned long DATE : 1;  // bit offset 14
                /* 0x000 */ unsigned long DATM : 1;  // bit offset 15
                /* 0x000 */ unsigned long ZTE : 1;  // bit offset 16
                /* 0x000 */ unsigned long ZTST : 2;  // bit offset 17
                /* 0x000 */ unsigned long pad19 : 45;  // bit offset 19
            } test1;
            /* 0x078 */ long test1addr;
        } draw11;
        /* 0x250 */ struct {  // size 0x080
            /* 0x000 */ struct {  // size 0x008
                /* 0x000 */ unsigned long FBP : 9;  // bit offset 0
                /* 0x000 */ unsigned long pad09 : 7;  // bit offset 9
                /* 0x000 */ unsigned long FBW : 6;  // bit offset 16
                /* 0x000 */ unsigned long pad22 : 2;  // bit offset 22
                /* 0x000 */ unsigned long PSM : 6;  // bit offset 24
                /* 0x000 */ unsigned long pad30 : 2;  // bit offset 30
                /* 0x000 */ unsigned long FBMSK : 32;  // bit offset 32
            } frame2;
            /* 0x008 */ unsigned long frame2addr;
            /* 0x010 */ struct {  // size 0x008
                /* 0x000 */ unsigned long ZBP : 9;  // bit offset 0
                /* 0x000 */ unsigned long pad09 : 15;  // bit offset 9
                /* 0x000 */ unsigned long PSM : 4;  // bit offset 24
                /* 0x000 */ unsigned long pad28 : 4;  // bit offset 28
                /* 0x000 */ unsigned long ZMSK : 1;  // bit offset 32
                /* 0x000 */ unsigned long pad33 : 31;  // bit offset 33
            } zbuf2;
            /* 0x018 */ long zbuf2addr;
            /* 0x020 */ struct {  // size 0x008
                /* 0x000 */ unsigned long OFX : 16;  // bit offset 0
                /* 0x000 */ unsigned long pad16 : 16;  // bit offset 16
                /* 0x000 */ unsigned long OFY : 16;  // bit offset 32
                /* 0x000 */ unsigned long pad48 : 16;  // bit offset 48
            } xyoffset2;
            /* 0x028 */ long xyoffset2addr;
            /* 0x030 */ struct {  // size 0x008
                /* 0x000 */ unsigned long SCAX0 : 11;  // bit offset 0
                /* 0x000 */ unsigned long pad11 : 5;  // bit offset 11
                /* 0x000 */ unsigned long SCAX1 : 11;  // bit offset 16
                /* 0x000 */ unsigned long pad27 : 5;  // bit offset 27
                /* 0x000 */ unsigned long SCAY0 : 11;  // bit offset 32
                /* 0x000 */ unsigned long pad43 : 5;  // bit offset 43
                /* 0x000 */ unsigned long SCAY1 : 11;  // bit offset 48
                /* 0x000 */ unsigned long pad59 : 5;  // bit offset 59
            } scissor2;
            /* 0x038 */ long scissor2addr;
            /* 0x040 */ struct {  // size 0x008
                /* 0x000 */ unsigned long AC : 1;  // bit offset 0
                /* 0x000 */ unsigned long pad01 : 63;  // bit offset 1
            } prmodecont;
            /* 0x048 */ long prmodecontaddr;
            /* 0x050 */ struct {  // size 0x008
                /* 0x000 */ unsigned long CLAMP : 1;  // bit offset 0
                /* 0x000 */ unsigned long pad01 : 63;  // bit offset 1
            } colclamp;
            /* 0x058 */ long colclampaddr;
            /* 0x060 */ struct {  // size 0x008
                /* 0x000 */ unsigned long DTHE : 1;  // bit offset 0
                /* 0x000 */ unsigned long pad01 : 63;  // bit offset 1
            } dthe;
            /* 0x068 */ long dtheaddr;
            /* 0x070 */ struct {  // size 0x008
                /* 0x000 */ unsigned long ATE : 1;  // bit offset 0
                /* 0x000 */ unsigned long ATST : 3;  // bit offset 1
                /* 0x000 */ unsigned long AREF : 8;  // bit offset 4
                /* 0x000 */ unsigned long AFAIL : 2;  // bit offset 12
                /* 0x000 */ unsigned long DATE : 1;  // bit offset 14
                /* 0x000 */ unsigned long DATM : 1;  // bit offset 15
                /* 0x000 */ unsigned long ZTE : 1;  // bit offset 16
                /* 0x000 */ unsigned long ZTST : 2;  // bit offset 17
                /* 0x000 */ unsigned long pad19 : 45;  // bit offset 19
            } test2;
            /* 0x078 */ long test2addr;
        } draw12;
        /* 0x2D0 */ struct {  // size 0x060
            /* 0x000 */ struct {  // size 0x008
                /* 0x000 */ unsigned long ATE : 1;  // bit offset 0
                /* 0x000 */ unsigned long ATST : 3;  // bit offset 1
                /* 0x000 */ unsigned long AREF : 8;  // bit offset 4
                /* 0x000 */ unsigned long AFAIL : 2;  // bit offset 12
                /* 0x000 */ unsigned long DATE : 1;  // bit offset 14
                /* 0x000 */ unsigned long DATM : 1;  // bit offset 15
                /* 0x000 */ unsigned long ZTE : 1;  // bit offset 16
                /* 0x000 */ unsigned long ZTST : 2;  // bit offset 17
                /* 0x000 */ unsigned long pad19 : 45;  // bit offset 19
            } testa;
            /* 0x008 */ long testaaddr;
            /* 0x010 */ struct {  // size 0x008
                /* 0x000 */ unsigned long PRIM : 3;  // bit offset 0
                /* 0x000 */ unsigned long IIP : 1;  // bit offset 3
                /* 0x000 */ unsigned long TME : 1;  // bit offset 4
                /* 0x000 */ unsigned long FGE : 1;  // bit offset 5
                /* 0x000 */ unsigned long ABE : 1;  // bit offset 6
                /* 0x000 */ unsigned long AA1 : 1;  // bit offset 7
                /* 0x000 */ unsigned long FST : 1;  // bit offset 8
                /* 0x000 */ unsigned long CTXT : 1;  // bit offset 9
                /* 0x000 */ unsigned long FIX : 1;  // bit offset 10
                /* 0x000 */ unsigned long pad11 : 53;  // bit offset 11
            } prim;
            /* 0x018 */ long primaddr;
            /* 0x020 */ struct {  // size 0x008
                /* 0x000 */ unsigned int R : 8;  // bit offset 0
                /* 0x000 */ unsigned int G : 8;  // bit offset 8
                /* 0x000 */ unsigned int B : 8;  // bit offset 16
                /* 0x000 */ unsigned int A : 8;  // bit offset 24
                /* 0x004 */ float Q;
            } rgbaq;
            /* 0x028 */ long rgbaqaddr;
            /* 0x030 */ struct {  // size 0x008
                /* 0x000 */ unsigned long X : 16;  // bit offset 0
                /* 0x000 */ unsigned long Y : 16;  // bit offset 16
                /* 0x000 */ unsigned long Z : 32;  // bit offset 32
            } xyz2a;
            /* 0x038 */ long xyz2aaddr;
            /* 0x040 */ struct {  // size 0x008
                /* 0x000 */ unsigned long X : 16;  // bit offset 0
                /* 0x000 */ unsigned long Y : 16;  // bit offset 16
                /* 0x000 */ unsigned long Z : 32;  // bit offset 32
            } xyz2b;
            /* 0x048 */ long xyz2baddr;
            /* 0x050 */ struct {  // size 0x008
                /* 0x000 */ unsigned long ATE : 1;  // bit offset 0
                /* 0x000 */ unsigned long ATST : 3;  // bit offset 1
                /* 0x000 */ unsigned long AREF : 8;  // bit offset 4
                /* 0x000 */ unsigned long AFAIL : 2;  // bit offset 12
                /* 0x000 */ unsigned long DATE : 1;  // bit offset 14
                /* 0x000 */ unsigned long DATM : 1;  // bit offset 15
                /* 0x000 */ unsigned long ZTE : 1;  // bit offset 16
                /* 0x000 */ unsigned long ZTST : 2;  // bit offset 17
                /* 0x000 */ unsigned long pad19 : 45;  // bit offset 19
            } testb;
            /* 0x058 */ long testbaddr;
        } clear1;
    } db;
    /* 0x330 */ rwDMAReadCircuitOneTag tcaaDisp;
    /* 0x350 */ u_long128 *dmaPkt[4];
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp  // VARIANT 2 of 2
class rwDMA_flipDataTag {  // size 0x360
public:
    /* 0x000 */ sceGsDBuffDc db;
    /* 0x330 */ rwDMAReadCircuitOneTag tcaaDisp;
    /* 0x350 */ u_long128 *dmaPkt[4];
};

// declared in 1 file(s), e.g. badma.c
struct rwDMA_pktTag {  // size 0x008
    /* 0x000 */ unsigned int type;
    /* 0x004 */ void *addr;
};

// declared in 4 file(s), e.g. badma.c  // VARIANT 1 of 2
struct rwDMAReadCircuitOneTag {  // size 0x020
    /* 0x000 */ struct {  // size 0x008
        /* 0x000 */ unsigned int FBP : 9;  // bit offset 0
        /* 0x000 */ unsigned int FBW : 6;  // bit offset 9
        /* 0x000 */ unsigned int PSM : 5;  // bit offset 15
        /* 0x000 */ unsigned int p0 : 12;  // bit offset 20
        /* 0x004 */ unsigned int DBX : 11;  // bit offset 0
        /* 0x004 */ unsigned int DBY : 11;  // bit offset 11
        /* 0x004 */ unsigned int p1 : 10;  // bit offset 22
    } dispfb10;
    /* 0x008 */ struct {  // size 0x008
        /* 0x000 */ unsigned int DX : 12;  // bit offset 0
        /* 0x000 */ unsigned int DY : 11;  // bit offset 12
        /* 0x000 */ unsigned int MAGH : 4;  // bit offset 23
        /* 0x000 */ unsigned int MAGV : 2;  // bit offset 27
        /* 0x000 */ unsigned int p0 : 3;  // bit offset 29
        /* 0x004 */ unsigned int DW : 12;  // bit offset 0
        /* 0x004 */ unsigned int DH : 11;  // bit offset 12
        /* 0x004 */ unsigned int p1 : 9;  // bit offset 23
    } display10;
    /* 0x010 */ struct {  // size 0x008
        /* 0x000 */ unsigned int FBP : 9;  // bit offset 0
        /* 0x000 */ unsigned int FBW : 6;  // bit offset 9
        /* 0x000 */ unsigned int PSM : 5;  // bit offset 15
        /* 0x000 */ unsigned int p0 : 12;  // bit offset 20
        /* 0x004 */ unsigned int DBX : 11;  // bit offset 0
        /* 0x004 */ unsigned int DBY : 11;  // bit offset 11
        /* 0x004 */ unsigned int p1 : 10;  // bit offset 22
    } dispfb11;
    /* 0x018 */ struct {  // size 0x008
        /* 0x000 */ unsigned int DX : 12;  // bit offset 0
        /* 0x000 */ unsigned int DY : 11;  // bit offset 12
        /* 0x000 */ unsigned int MAGH : 4;  // bit offset 23
        /* 0x000 */ unsigned int MAGV : 2;  // bit offset 27
        /* 0x000 */ unsigned int p0 : 3;  // bit offset 29
        /* 0x004 */ unsigned int DW : 12;  // bit offset 0
        /* 0x004 */ unsigned int DH : 11;  // bit offset 12
        /* 0x004 */ unsigned int p1 : 9;  // bit offset 23
    } display11;
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp  // VARIANT 2 of 2
class rwDMAReadCircuitOneTag {  // size 0x020
public:
    /* 0x000 */ tGS_DISPFB1 dispfb10;
    /* 0x008 */ tGS_DISPLAY1 display10;
    /* 0x010 */ tGS_DISPFB1 dispfb11;
    /* 0x018 */ tGS_DISPLAY1 display11;
};

// declared in 1 file(s), e.g. badevice.c
struct RwEngineOpenParams {  // size 0x004
    /* 0x000 */ void *displayID;
};

// declared in 40 file(s), e.g. babinary.c
struct RwError {  // size 0x008
    /* 0x000 */ int pluginID;
    /* 0x004 */ int errorCode;
};

// declared in 2 file(s), e.g. I:\GameShared\GameClasses\FileSystem\GTFileSystem.cpp
class RwFileFunctions {  // size 0x02C
public:
    /* 0x000 */ int (*rwfexist)(char *);
    /* 0x004 */ void *(*rwfopen)(char *, char *);
    /* 0x008 */ int (*rwfclose)(void *);
    /* 0x00C */ unsigned int (*rwfread)(void *, unsigned int, unsigned int, void *);
    /* 0x010 */ unsigned int (*rwfwrite)(void *, unsigned int, unsigned int, void *);
    /* 0x014 */ char *(*rwfgets)(char *, int, void *);
    /* 0x018 */ int (*rwfputs)(char *, void *);
    /* 0x01C */ int (*rwfeof)(void *);
    /* 0x020 */ int (*rwfseek)(void *, long, int);
    /* 0x024 */ int (*rwfflush)(void *);
    /* 0x028 */ int (*rwftell)(void *);
};

// declared in 58 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp  // VARIANT 1 of 2
class RwFrame {  // size 0x0C0
public:
    /* 0x000 */ RwObject object;
    /* 0x008 */ RwLLLink inDirtyListLink;
    /* 0x010 */ RwMatrixTag modelling;
    /* 0x050 */ RwMatrixTag ltm;
    /* 0x090 */ RwLinkList objectList;
    /* 0x098 */ RwFrame *child;
    /* 0x09C */ RwFrame *next;
    /* 0x0A0 */ RwFrame *root;
    /* 0x0B0 */ unsigned char pluginData[16];
};

// declared in 11 file(s), e.g. babinfrm.c  // VARIANT 2 of 2
struct RwFrame {  // size 0x0B0
    /* 0x000 */ RwObject object;
    /* 0x008 */ RwLLLink inDirtyListLink;
    /* 0x010 */ RwMatrixTag modelling;
    /* 0x050 */ RwMatrixTag ltm;
    /* 0x090 */ RwLinkList objectList;
    /* 0x098 */ RwFrame *child;
    /* 0x09C */ RwFrame *next;
    /* 0x0A0 */ RwFrame *root;
};

// declared in 2 file(s), e.g. babinfrm.c
struct rwFrameList {  // size 0x008
    /* 0x000 */ RwFrame **frames;
    /* 0x004 */ int numFrames;
};

// declared in 8 file(s), e.g. badevice.c
struct RwFreeBlock {  // size 0x004
    /* 0x000 */ RwFreeBlock *nextBlock;
};

// declared in 8 file(s), e.g. badevice.c
struct RwFreeList {  // size 0x028
    /* 0x000 */ void **freeListStack;
    /* 0x004 */ void **freeListStackTop;
    /* 0x008 */ RwFreeBlock *firstBlock;
    /* 0x00C */ int blockSize;
    /* 0x010 */ int entrySize;
    /* 0x014 */ int alignmentMinusOne;
    /* 0x018 */ int entriesPerBlock;
    /* 0x01C */ int entriesAllocated;
    /* 0x020 */ RwLLLink lFreeList;
};

// declared in 107 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RwFrustumPlane {  // size 0x014
public:
    /* 0x000 */ RwPlane plane;
    /* 0x010 */ unsigned char closestX;
    /* 0x011 */ unsigned char closestY;
    /* 0x012 */ unsigned char closestZ;
    /* 0x013 */ unsigned char pad;
};

// declared in 3 file(s), e.g. baim3d.c
struct rwIm3DPool {  // size 0x03C
    /* 0x000 */ unsigned short numElements;
    /* 0x002 */ unsigned short pad;
    /* 0x004 */ void *elements;
    /* 0x008 */ int stride;
    /* 0x00C */ _rwIm3DPoolStash stash;
};

// declared in 1 file(s), e.g. baim3d.c
struct rwIm3DRenderPipelines {  // size 0x018
    /* 0x000 */ RxPipeline *triList;
    /* 0x004 */ RxPipeline *triFan;
    /* 0x008 */ RxPipeline *triStrip;
    /* 0x00C */ RxPipeline *lineList;
    /* 0x010 */ RxPipeline *polyLine;
    /* 0x014 */ RxPipeline *pointList;
};

// declared in 7 file(s), e.g. baimage.c
struct RwImage {  // size 0x01C
    /* 0x000 */ int flags;
    /* 0x004 */ int width;
    /* 0x008 */ int height;
    /* 0x00C */ int depth;
    /* 0x010 */ int stride;
    /* 0x014 */ unsigned char *cpPixels;
    /* 0x018 */ RwRGBA *palette;
};

// declared in 1 file(s), e.g. baimage.c
struct rwImageFormat {  // size 0x034
    /* 0x000 */ char lcExtension[20];
    /* 0x014 */ char ucExtension[20];
    /* 0x028 */ RwImage *(*readImage)(char *);
    /* 0x02C */ RwImage *(*writeImage)(RwImage *, char *);
    /* 0x030 */ rwImageFormat *nextFormat;
};

// declared in 1 file(s), e.g. baim3d.c
struct rwImmediGlobals {  // size 0x09C
    /* 0x000 */ RxPipeline *genericIm3DTransformPipeline;
    /* 0x004 */ rwIm3DRenderPipelines genericIm3DRenderPipelines;
    /* 0x01C */ RxPipeline *im3DTransformPipeline;
    /* 0x020 */ rwIm3DRenderPipelines im3DRenderPipelines;
    /* 0x038 */ RxPipeline *platformIm3DTransformPipeline;
    /* 0x03C */ rwIm3DRenderPipelines platformIm3DRenderPipelines;
    /* 0x054 */ RxPipeline *ps2AllMatIm3DTrianglePipeline;
    /* 0x058 */ RxPipeline *ps2AllMatIm3DLinePipeline;
    /* 0x05C */ RxPipeline *ps2ManagerIm3DRenderPipeline;
    /* 0x060 */ rwIm3DPool curPool;
};

// declared in 207 file(s), e.g. C:\dev\rwaudio\source\core\src\rwafreelist.c
class RwLinkList {  // size 0x008
public:
    /* 0x000 */ RwLLLink link;
};

// declared in 219 file(s), e.g. C:\dev\rwaudio\source\core\src\rwafreelist.c
class RwLLLink {  // size 0x008
public:
    /* 0x000 */ RwLLLink *next;
    /* 0x004 */ RwLLLink *prev;
};

// declared in 161 file(s), e.g. C:\dev\rwaudio\source\objects\src\rwalistenerobj.c
class RwMatrixTag {  // size 0x040
public:
    /* 0x000 */ RwV3d right;
    /* 0x00C */ unsigned int flags;
    /* 0x010 */ RwV3d up;
    /* 0x01C */ unsigned int pad1;
    /* 0x020 */ RwV3d at;
    /* 0x02C */ unsigned int pad2;
    /* 0x030 */ RwV3d pos;
    /* 0x03C */ unsigned int pad3;
};

// declared in 1 file(s), e.g. bamatrix.c
struct RwMatrixTolerance {  // size 0x00C
    /* 0x000 */ float Normal;
    /* 0x004 */ float Orthogonal;
    /* 0x008 */ float Identity;
};

// declared in 2 file(s), e.g. gamesource\Sound\GameSound.cpp
class RwMemory {  // size 0x008
public:
    /* 0x000 */ unsigned char *start;
    /* 0x004 */ unsigned int length;
};

// declared in 4 file(s), e.g. gamesource\Toolkits\linearmalloc.cpp
class RwMemoryFunctions {  // size 0x010
public:
    /* 0x000 */ void *(*rwmalloc)(unsigned int);
    /* 0x004 */ void (*rwfree)(void *);
    /* 0x008 */ void *(*rwrealloc)(void *, unsigned int);
    /* 0x00C */ void *(*rwcalloc)(unsigned int, unsigned int);
};

// declared in 13 file(s), e.g. fastim3d.c
struct RwMeshCache {  // size 0x008
    /* 0x000 */ unsigned int lengthOfMeshesArray;
    /* 0x004 */ RwResEntry *meshes[1];
};

// declared in 1 file(s), e.g. badevice.c
struct RwMetrics {  // size 0x01C
    /* 0x000 */ unsigned int numTriangles;
    /* 0x004 */ unsigned int numProcTriangles;
    /* 0x008 */ unsigned int numVertices;
    /* 0x00C */ unsigned int numTextureUploads;
    /* 0x010 */ unsigned int sizeTextureUploads;
    /* 0x014 */ unsigned int numResourceAllocs;
    /* 0x018 */ void *devSpecificMetrics;
};

// declared in 29 file(s), e.g. babinwor.c
struct RwModuleInfo {  // size 0x008
    /* 0x000 */ int globalsOffset;
    /* 0x004 */ int numInstances;
};

// declared in 190 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RwObject {  // size 0x008
public:
    /* 0x000 */ unsigned char type;
    /* 0x001 */ unsigned char subType;
    /* 0x002 */ unsigned char flags;
    /* 0x003 */ unsigned char privateFlags;
    /* 0x004 */ void *parent;
};

// declared in 121 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RwObjectHasFrame {  // size 0x014
public:
    /* 0x000 */ RwObject object;
    /* 0x008 */ RwLLLink lFrame;
    /* 0x010 */ RwObjectHasFrame *(*sync)(RwObjectHasFrame *);
};

// declared in 3 file(s), e.g. batextur.c
struct rwPalQuant {  // size 0x010
    /* 0x000 */ box *Mcube;
    /* 0x004 */ float *Mvv;
    /* 0x008 */ OctNode *root;
    /* 0x00C */ RwFreeList *cubefreelist;
};

// declared in 107 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RwPlane {  // size 0x010
public:
    /* 0x000 */ RwV3d normal;
    /* 0x00C */ float distance;
};

// declared in 19 file(s), e.g. babincam.c
struct RwPluginRegEntry {  // size 0x03C
    /* 0x000 */ int offset;
    /* 0x004 */ int size;
    /* 0x008 */ unsigned int pluginID;
    /* 0x00C */ RwStream *(*readCB)(RwStream *, int, void *, int, int);
    /* 0x010 */ RwStream *(*writeCB)(RwStream *, int, void *, int, int);
    /* 0x014 */ int (*getSizeCB)(void *, int, int);
    /* 0x018 */ int (*alwaysCB)(void *, int, int);
    /* 0x01C */ int (*rightsCB)(void *, int, int, unsigned int);
    /* 0x020 */ void *(*constructCB)(void *, int, int);
    /* 0x024 */ void *(*destructCB)(void *, int, int);
    /* 0x028 */ void *(*copyCB)(void *, void *, int, int);
    /* 0x02C */ void *(*errStrCB)(void *);
    /* 0x030 */ RwPluginRegEntry *nextRegEntry;
    /* 0x034 */ RwPluginRegEntry *prevRegEntry;
    /* 0x038 */ RwPluginRegistry *parentRegistry;
};

// declared in 19 file(s), e.g. babincam.c
struct RwPluginRegistry {  // size 0x018
    /* 0x000 */ int sizeOfStruct;
    /* 0x004 */ int origSizeOfStruct;
    /* 0x008 */ int maxSizeOfStruct;
    /* 0x00C */ int staticAlloc;
    /* 0x010 */ RwPluginRegEntry *firstRegEntry;
    /* 0x014 */ RwPluginRegEntry *lastRegEntry;
};

// declared in 9 file(s), e.g. fastim3d.c
struct rwPS2AllClusterInstanceInfo {  // size 0x008
    /* 0x000 */ unsigned int attrib;
    /* 0x004 */ unsigned int stride;
};

// declared in 6 file(s), e.g. matbridge.c
struct rwPS2AllClusterQuickInfo {  // size 0x008
    /* 0x000 */ u_long128 *data;
    /* 0x004 */ unsigned int stride;
};

// declared in 9 file(s), e.g. fastim3d.c
struct rwPS2AllFieldRec {  // size 0x018
    /* 0x000 */ int numVerts;
    /* 0x004 */ int morphNumVerts;
    /* 0x008 */ int dataoffset;
    /* 0x00C */ int morphDataoffset;
    /* 0x010 */ short skip;
    /* 0x012 */ short morphSkip;
    /* 0x014 */ short reverse;
    /* 0x016 */ unsigned char vuoffset;
    /* 0x017 */ unsigned char pad[1];
};

// declared in 3 file(s), e.g. ps2allatomic.c
struct rwPS2AllIndexLUTs {  // size 0x012
    /* 0x000 */ unsigned short fakeIndices[1];
    /* 0x002 */ _rwPS2AllNormalLUTs normal;
    /* 0x007 */ _rwPS2AllTriFanLUTs triFan;
};

// declared in 9 file(s), e.g. fastim3d.c
struct rwPS2AllPrimTypeLUT {  // size 0x00E
    /* 0x000 */ unsigned char vertToIndRatio[7];
    /* 0x007 */ unsigned char vertToIndOffset[7];
};

// declared in 9 file(s), e.g. fastim3d.c
struct rwPS2AllResEntryFormat {  // size 0x120
    /* 0x000 */ unsigned char batchRound;
    /* 0x001 */ unsigned char stripReverse;
    /* 0x002 */ unsigned char pad[2];
    /* 0x004 */ unsigned int maxInputSize;
    /* 0x008 */ int batchSize;
    /* 0x00C */ int batchesPerTag;
    /* 0x010 */ int morphBatchSize;
    /* 0x014 */ int morphBatchesPerTag;
    /* 0x018 */ rwPS2AllFieldRec fieldRec[11];
};

// declared in 6 file(s), e.g. matbridge.c
struct rwPS2AllResEntryHeader {  // size 0x190
    /* 0x000 */ int refCnt;
    /* 0x004 */ int clrCnt;
    /* 0x008 */ u_long128 *data;
    /* 0x00C */ unsigned int numVerts;
    /* 0x010 */ unsigned int objIdentifier;
    /* 0x014 */ unsigned int meshIdentifier;
    /* 0x018 */ int batchSize;
    /* 0x01C */ int numBatches;
    /* 0x020 */ int batchesPerTag;
    /* 0x024 */ int morphStart;
    /* 0x028 */ int morphFinish;
    /* 0x02C */ int morphNum;
    /* 0x030 */ rwPS2AllClusterQuickInfo clquickinfo[11];
    /* 0x088 */ rwPS2AllFieldRec fieldRec[11];
};

// declared in 2 file(s), e.g. nodeps2manager.c
struct rwPS2ClusterInstanceInfo {  // size 0x008
    /* 0x000 */ unsigned int attrib;
    /* 0x004 */ unsigned int stride;
};

// declared in 4 file(s), e.g. native.c
struct rwPS2ClusterQuickInfo {  // size 0x008
    /* 0x000 */ u_long128 *data;
    /* 0x004 */ unsigned int stride;
};

// declared in 4 file(s), e.g. native.c
struct rwPS2FieldRec {  // size 0x018
    /* 0x000 */ int numVerts;
    /* 0x004 */ int morphNumVerts;
    /* 0x008 */ int dataoffset;
    /* 0x00C */ int morphDataoffset;
    /* 0x010 */ short skip;
    /* 0x012 */ short morphSkip;
    /* 0x014 */ short reverse;
    /* 0x016 */ unsigned char vuoffset;
    /* 0x017 */ unsigned char pad[1];
};

// declared in 1 file(s), e.g. nodeps2matinstance.c
struct rwPS2indexLUTs {  // size 0x01A
    /* 0x000 */ unsigned short fakeIndices[1];
    /* 0x002 */ _rwPS2normalLUTs normal;
    /* 0x007 */ _rwPS2triFanLUTs triFan;
    /* 0x012 */ _rwPS2polyLineLUTs polyLine;
};

// declared in 1 file(s), e.g. nodeps2manager.c
struct rwPS2ManagerPvtData {  // size 0x330
    /* 0x000 */ RxPipelineNodePS2ObjAllInOneData objAllInOneData;
    /* 0x00C */ rwPS2MatInstancePvtData matInstanceData;
    /* 0x30C */ rwPS2MatBridgePvtData matBridgeData;
    /* 0x318 */ int (*instanceCB)(void **, unsigned int);
    /* 0x31C */ int (*postObjectCB)(RxPS2DMASessionRecord *);
    /* 0x320 */ PrimTypeLUT primLUT;
};

// declared in 1 file(s), e.g. nodeps2manager.c
struct rwPS2ManagerPvtDataBridgeFirst {  // size 0x330
    /* 0x000 */ rwPS2MatBridgePvtData matBridgeData;
    /* 0x00C */ RxPipelineNodePS2ObjAllInOneData objAllInOneData;
    /* 0x018 */ rwPS2MatInstancePvtData matInstanceData;
    /* 0x318 */ int (*instanceCB)(void **, unsigned int);
    /* 0x31C */ int (*postObjectCB)(RxPS2DMASessionRecord *);
    /* 0x320 */ PrimTypeLUT primLUT;
};

// declared in 1 file(s), e.g. nodeps2manager.c
struct rwPS2ManagerPvtDataInstFirst {  // size 0x330
    /* 0x000 */ rwPS2MatInstancePvtData matInstanceData;
    /* 0x300 */ RxPipelineNodePS2ObjAllInOneData objAllInOneData;
    /* 0x30C */ rwPS2MatBridgePvtData matBridgeData;
    /* 0x318 */ int (*instanceCB)(void **, unsigned int);
    /* 0x31C */ int (*postObjectCB)(RxPS2DMASessionRecord *);
    /* 0x320 */ PrimTypeLUT primLUT;
};

// declared in 2 file(s), e.g. nodeps2manager.c
struct rwPS2MatBridgePvtData {  // size 0x00C
    /* 0x000 */ int vifOffset;
    /* 0x004 */ void **VU1CodeArray;
    /* 0x008 */ int noTexture;
};

// declared in 1 file(s), e.g. nodeps2matinstance.c
struct rwPS2MatInstanceInitData {  // size 0x040
    /* 0x000 */ RxClusterDefinition *clusters[11];
    /* 0x02C */ int vu1MaxTSInputSize;
    /* 0x030 */ int vu1MaxTLInputSize;
    /* 0x034 */ int vu1MaxPLInputSize;
    /* 0x038 */ int checkSizeOnVU;
    /* 0x03C */ RpMeshHeaderFlags pipeType;
};

// declared in 2 file(s), e.g. nodeps2manager.c
struct rwPS2MatInstancePvtData {  // size 0x300
    /* 0x000 */ unsigned int numBreakOuts;
    /* 0x004 */ rwPS2ClusterInstanceInfo clinfo[11];
    /* 0x05C */ unsigned int cliIndex[11];
    /* 0x088 */ RxCluster *clusters[11];
    /* 0x0B4 */ RpMeshHeaderFlags pipeType;
    /* 0x0B8 */ int vu1MaxTSInputSize;
    /* 0x0BC */ int vu1MaxTLInputSize;
    /* 0x0C0 */ int vu1MaxPLInputSize;
    /* 0x0C4 */ int checkSizeOnVU;
    /* 0x0C8 */ int globalsInUse;
    /* 0x0CC */ unsigned char totallyOpaque;
    /* 0x0CD */ unsigned char numStripes;
    /* 0x0CE */ unsigned char sizeOnVU;
    /* 0x0CF */ unsigned char pad0;
    /* 0x0D0 */ rwPS2ResEntryFormat triStrip;
    /* 0x1E8 */ rwPS2ResEntryFormat triList;
};

// declared in 2 file(s), e.g. nodeps2manager.c
struct rwPS2ResEntryFormat {  // size 0x118
    /* 0x000 */ int batchSize;
    /* 0x004 */ int batchesPerTag;
    /* 0x008 */ int morphBatchSize;
    /* 0x00C */ int morphBatchesPerTag;
    /* 0x010 */ rwPS2FieldRec fieldRec[11];
};

// declared in 4 file(s), e.g. native.c
struct rwPS2ResEntryHeader {  // size 0x194
    /* 0x000 */ int refCnt;
    /* 0x004 */ int clrCnt;
    /* 0x008 */ u_long128 *data;
    /* 0x00C */ unsigned int serialNum;
    /* 0x010 */ unsigned short overloadFlags;
    /* 0x012 */ unsigned short pad0;
    /* 0x014 */ unsigned int numVerts;
    /* 0x018 */ unsigned int meshType;
    /* 0x01C */ int batchSize;
    /* 0x020 */ int batchesPerTag;
    /* 0x024 */ int numBatches;
    /* 0x028 */ int morphStart;
    /* 0x02C */ int morphFinish;
    /* 0x030 */ int morphNum;
    /* 0x034 */ rwPS2ClusterQuickInfo clquickinfo[11];
    /* 0x08C */ rwPS2FieldRec fieldRec[11];
};

// declared in 190 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RwRaster {  // size 0x034
public:
    /* 0x000 */ RwRaster *parent;
    /* 0x004 */ unsigned char *cpPixels;
    /* 0x008 */ unsigned char *palette;
    /* 0x00C */ int width;
    /* 0x010 */ int height;
    /* 0x014 */ int depth;
    /* 0x018 */ int stride;
    /* 0x01C */ short nOffsetX;
    /* 0x01E */ short nOffsetY;
    /* 0x020 */ unsigned char cType;
    /* 0x021 */ unsigned char cFlags;
    /* 0x022 */ unsigned char privateFlags;
    /* 0x023 */ unsigned char cFormat;
    /* 0x024 */ unsigned char *originalPixels;
    /* 0x028 */ int originalWidth;
    /* 0x02C */ int originalHeight;
    /* 0x030 */ int originalStride;
};

// declared in 4 file(s), e.g. gamesource\Menu\CMenuGfxComponentCar.cpp
class RwRect {  // size 0x010
public:
    /* 0x000 */ int x;
    /* 0x004 */ int y;
    /* 0x008 */ int w;
    /* 0x00C */ int h;
};

// declared in 16 file(s), e.g. baim3d.c
struct RwReqEntry {  // size 0x024
    /* 0x000 */ RxClusterDefinition *clusterDef;
    /* 0x004 */ RxClusterValidityReq required;
    /* 0x008 */ unsigned int inputs;
    /* 0x00C */ RwScopeTrace *st;
    /* 0x010 */ RwReqEntry *next;
    /* 0x014 */ rxReq *req;
    /* 0x018 */ unsigned int outbf;
    /* 0x01C */ unsigned int assignedslot;
    /* 0x020 */ RxPipelineNode *originatingNode;
};

// declared in 119 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RwResEntry {  // size 0x018
public:
    /* 0x000 */ RwLLLink link;
    /* 0x008 */ int size;
    /* 0x00C */ void *owner;
    /* 0x010 */ RwResEntry **ownerRef;
    /* 0x014 */ void (*destroyNotify)(RwResEntry *);
};

// declared in 1 file(s), e.g. resmem.c
struct rwResHeapBlockHeader {  // size 0x020
    /* 0x000 */ rwResHeapHeader *heap;
    /* 0x004 */ rwResHeapBlockHeader *next;
    /* 0x008 */ rwResHeapBlockHeader *prev;
    /* 0x00C */ unsigned int size;
    /* 0x010 */ rwResHeapBlockFlags flags;
    /* 0x014 */ unsigned int pad[3];
};

// declared in 1 file(s), e.g. resmem.c
struct rwResHeapHeader {  // size 0x008
    /* 0x000 */ rwResHeapBlockHeader *firstBlock;
    /* 0x004 */ rwResHeapBlockHeader *firstFreeBlock;
};

// declared in 1 file(s), e.g. baresour.c
struct rwResources {  // size 0x028
    /* 0x000 */ int maxSize;
    /* 0x004 */ int currentSize;
    /* 0x008 */ int reusageSize;
    /* 0x00C */ void *memHeap;
    /* 0x010 */ RwLinkList entriesA;
    /* 0x018 */ RwLinkList entriesB;
    /* 0x020 */ RwLinkList *freeEntries;
    /* 0x024 */ RwLinkList *usedEntries;
};

// declared in 186 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RwRGBA {  // size 0x004
public:
    /* 0x000 */ unsigned char red;
    /* 0x001 */ unsigned char green;
    /* 0x002 */ unsigned char blue;
    /* 0x003 */ unsigned char alpha;
};

// declared in 168 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RwRGBAReal {  // size 0x010
public:
    /* 0x000 */ float red;
    /* 0x004 */ float green;
    /* 0x008 */ float blue;
    /* 0x00C */ float alpha;
};

// declared in 1 file(s), e.g. basky.c
struct RwRwDeviceGlobals {  // size 0x008
    /* 0x000 */ RwCamera *curCamera;
    /* 0x004 */ RwMemoryFunctions *memFuncs;
};

// declared in 16 file(s), e.g. baim3d.c
struct RwScopeTrace {  // size 0x010
    /* 0x000 */ RwReqEntry *head;
    /* 0x004 */ RwScopeTrace *continuation;
    /* 0x008 */ RwScopeTrace *next;
    /* 0x00C */ RwScopeTrace *parent;
};

// declared in 110 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RwSky2DVertex {  // size 0x040
public:
    /* 0x000 */ RwSky2DVertexAlignmentOverlay u;
};

// declared in 92 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp  // VARIANT 1 of 2
class RwSky2DVertexAlignmentOverlay {  // size 0x040
public:
    /* 0x000 */ RwSky2DVertexFields els;
    /* 0x000 */ u_long128 qWords[4];
};

// declared in 18 file(s), e.g. badevice.c  // VARIANT 2 of 2
union RwSky2DVertexAlignmentOverlay {  // size 0x040
    /* 0x000 */ RwSky2DVertexFields els;
    /* 0x000 */ u_long128 qWords[4];
};

// declared in 110 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RwSky2DVertexFields {  // size 0x040
public:
    /* 0x000 */ RwV3d scrVertex;
    /* 0x00C */ float camVertex_z;
    /* 0x010 */ float u;
    /* 0x014 */ float v;
    /* 0x018 */ float recipZ;
    /* 0x01C */ float pad1;
    /* 0x020 */ RwRGBAReal color;
    /* 0x030 */ RwV3d objNormal;
    /* 0x03C */ float pad2;
};

// declared in 132 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RwSphere {  // size 0x010
public:
    /* 0x000 */ RwV3d center;
    /* 0x00C */ float radius;
};

// declared in 3 file(s), e.g. bamatrix.c  // VARIANT 1 of 2
union RwSplitBits {  // size 0x004
    /* 0x000 */ float nReal;
    /* 0x000 */ int nInt;
    /* 0x000 */ unsigned int nUInt;
};

// declared in 1 file(s), e.g. gamesource\Race\CStreamedWorld.cpp  // VARIANT 2 of 2
class RwSplitBits {  // size 0x004
public:
    /* 0x000 */ float nReal;
    /* 0x000 */ int nInt;
    /* 0x000 */ unsigned int nUInt;
};

// declared in 1 file(s), e.g. basky.c
struct RwStandard {  // size 0x008
    /* 0x000 */ int nStandard;
    /* 0x004 */ int (*fpStandard)(void *, void *, int);
};

// declared in 28 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedict.c
class RwStream {  // size 0x024
public:
    /* 0x000 */ RwStreamType type;
    /* 0x004 */ RwStreamAccessType accessType;
    /* 0x008 */ int position;
    /* 0x00C */ RwStreamUnion Type;
    /* 0x020 */ int rwOwned;
};

// declared in 1 file(s), e.g. babincam.c
struct rwStreamCamera {  // size 0x020
    /* 0x000 */ RwV2d viewWindow;
    /* 0x008 */ RwV2d viewOffset;
    /* 0x010 */ float nearPlane;
    /* 0x014 */ float farPlane;
    /* 0x018 */ float fogPlane;
    /* 0x01C */ unsigned int projection;
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedict.c
struct RwStreamChunks {  // size 0x010
    /* 0x000 */ RwStreamChunksType type;
    /* 0x004 */ int size;
    /* 0x008 */ int chunkID;
    /* 0x00C */ void *data;
};

// declared in 28 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedict.c
class RwStreamCustom {  // size 0x014
public:
    /* 0x000 */ int (*sfnclose)(void *);
    /* 0x004 */ unsigned int (*sfnread)(void *, void *, unsigned int);
    /* 0x008 */ int (*sfnwrite)(void *, void *, unsigned int);
    /* 0x00C */ int (*sfnskip)(void *, unsigned int);
    /* 0x010 */ void *data;
};

// declared in 27 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedict.c  // VARIANT 1 of 2
union RwStreamFile {  // size 0x004
    /* 0x000 */ void *fpFile;
    /* 0x000 */ void *constfpFile;
};

// declared in 1 file(s), e.g. gamesource\Sound\GameSound.cpp  // VARIANT 2 of 2
class RwStreamFile {  // size 0x004
public:
    /* 0x000 */ void *fpFile;
    /* 0x000 */ void *constfpFile;
};

// declared in 28 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedict.c
class RwStreamMemory {  // size 0x00C
public:
    /* 0x000 */ unsigned int position;
    /* 0x004 */ unsigned int nSize;
    /* 0x008 */ unsigned char *memBlock;
};

// declared in 27 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedict.c  // VARIANT 1 of 2
union RwStreamUnion {  // size 0x014
    /* 0x000 */ RwStreamMemory memory;
    /* 0x000 */ RwStreamFile file;
    /* 0x000 */ RwStreamCustom custom;
};

// declared in 1 file(s), e.g. gamesource\Sound\GameSound.cpp  // VARIANT 2 of 2
class RwStreamUnion {  // size 0x014
public:
    /* 0x000 */ RwStreamMemory memory;
    /* 0x000 */ RwStreamFile file;
    /* 0x000 */ RwStreamCustom custom;
};

// declared in 1 file(s), e.g. badevice.c
struct RwSubSystemInfo {  // size 0x050
    /* 0x000 */ char name[80];
};

// declared in 134 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RwSurfaceProperties {  // size 0x00C
public:
    /* 0x000 */ float ambient;
    /* 0x004 */ float specular;
    /* 0x008 */ float diffuse;
};

// declared in 140 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RwTexCoords {  // size 0x008
public:
    /* 0x000 */ float u;
    /* 0x004 */ float v;
};

// declared in 179 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RwTexDictionary {  // size 0x018
public:
    /* 0x000 */ RwObject object;
    /* 0x008 */ RwLinkList texturesInDict;
    /* 0x010 */ RwLLLink lInInstance;
};

// declared in 146 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RwTexture {  // size 0x058
public:
    /* 0x000 */ RwRaster *raster;
    /* 0x004 */ RwTexDictionary *dict;
    /* 0x008 */ RwLLLink lInDictionary;
    /* 0x010 */ char name[32];
    /* 0x030 */ char mask[32];
    /* 0x050 */ unsigned int filterAddressing;
    /* 0x054 */ int refCount;
};

// declared in 151 file(s), e.g. gamesource\Game\CCrashForCashData.cpp
class RwV2d {  // size 0x008
public:
    /* 0x000 */ float x;
    /* 0x004 */ float y;
};

// declared in 211 file(s), e.g. C:\dev\rwaudio\source\objects\src\rwalistenerobj.c
class RwV3d {  // size 0x00C
public:
    /* 0x000 */ float x;
    /* 0x004 */ float y;
    /* 0x008 */ float z;
};

// declared in 115 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RwV4d {  // size 0x010
public:
    /* 0x000 */ float x;
    /* 0x004 */ float y;
    /* 0x008 */ float z;
    /* 0x00C */ float w;
};

// declared in 4 file(s), e.g. badevice.c
struct RwVideoMode {  // size 0x010
    /* 0x000 */ int width;
    /* 0x004 */ int height;
    /* 0x008 */ int depth;
    /* 0x00C */ RwVideoModeFlag flags;
};

// declared in 14 file(s), e.g. baim3d.c
struct RxCamSpace3DVertex {  // size 0x028
    /* 0x000 */ RwV3d cameraVertex;
    /* 0x00C */ unsigned char clipFlags;
    /* 0x00D */ unsigned char pad[3];
    /* 0x010 */ RwRGBAReal col;
    /* 0x020 */ float u;
    /* 0x024 */ float v;
};

// declared in 2 file(s), e.g. nodeClipLine.c
struct RxClipFuncs {  // size 0x018
    /* 0x000 */ float (*ZLOFunc)(RxCamSpace3DVertex *, RxCamSpace3DVertex *, RxCamSpace3DVertex *, RwSky2DVertex *, RwSky2DVertex *, RwSky2DVertex *);
    /* 0x004 */ float (*ZHIFunc)(RxCamSpace3DVertex *, RxCamSpace3DVertex *, RxCamSpace3DVertex *, RwSky2DVertex *, RwSky2DVertex *, RwSky2DVertex *);
    /* 0x008 */ float (*YLOFunc)(RxCamSpace3DVertex *, RxCamSpace3DVertex *, RxCamSpace3DVertex *, RwSky2DVertex *, RwSky2DVertex *, RwSky2DVertex *);
    /* 0x00C */ float (*YHIFunc)(RxCamSpace3DVertex *, RxCamSpace3DVertex *, RxCamSpace3DVertex *, RwSky2DVertex *, RwSky2DVertex *, RwSky2DVertex *);
    /* 0x010 */ float (*XLOFunc)(RxCamSpace3DVertex *, RxCamSpace3DVertex *, RxCamSpace3DVertex *, RwSky2DVertex *, RwSky2DVertex *, RwSky2DVertex *);
    /* 0x014 */ float (*XHIFunc)(RxCamSpace3DVertex *, RxCamSpace3DVertex *, RxCamSpace3DVertex *, RwSky2DVertex *, RwSky2DVertex *, RwSky2DVertex *);
};

// declared in 141 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RxCluster {  // size 0x01C
public:
    /* 0x000 */ unsigned short flags;
    /* 0x002 */ unsigned short stride;
    /* 0x004 */ void *data;
    /* 0x008 */ void *currentData;
    /* 0x00C */ unsigned int numAlloced;
    /* 0x010 */ unsigned int numUsed;
    /* 0x014 */ RxPipelineCluster *clusterRef;
    /* 0x018 */ unsigned int attributes;
};

// declared in 143 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RxClusterDefinition {  // size 0x010
public:
    /* 0x000 */ char *name;
    /* 0x004 */ unsigned int defaultStride;
    /* 0x008 */ unsigned int defaultAttributes;
    /* 0x00C */ char *attributeSet;
};

// declared in 140 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RxClusterRef {  // size 0x00C
public:
    /* 0x000 */ RxClusterDefinition *clusterDef;
    /* 0x004 */ RxClusterForcePresent forcePresent;
    /* 0x008 */ unsigned int reserved;
};

// declared in 12 file(s), e.g. baim3d.c  // VARIANT 1 of 2
union RxColorUnion {  // size 0x004
    /* 0x000 */ RwRGBA preLitColor;
    /* 0x000 */ RwRGBA color;
};

// declared in 3 file(s), e.g. gamesource\Race\CAICar.cpp  // VARIANT 2 of 2
class RxColorUnion {  // size 0x004
public:
    /* 0x000 */ RwRGBA preLitColor;
    /* 0x000 */ RwRGBA color;
};

// declared in 23 file(s), e.g. nodeAtomicEnumerateLights.c
struct RxExecutionContext {  // size 0x018
    /* 0x000 */ RxPipeline *pipeline;
    /* 0x004 */ RxPipelineNode *currentNode;
    /* 0x008 */ int exitCode;
    /* 0x00C */ unsigned int pad;
    /* 0x010 */ RxPipelineNodeParam params;
};

// declared in 141 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RxHeap {  // size 0x01C
public:
    /* 0x000 */ unsigned int superBlockSize;
    /* 0x004 */ rxHeapSuperBlockDescriptor *head;
    /* 0x008 */ rxHeapBlockHeader *headBlock;
    /* 0x00C */ rxHeapFreeBlock *freeBlocks;
    /* 0x010 */ unsigned int entriesAlloced;
    /* 0x014 */ unsigned int entriesUsed;
    /* 0x018 */ int dirty;
};

// declared in 141 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class rxHeapBlockHeader {  // size 0x020
public:
    /* 0x000 */ rxHeapBlockHeader *prev;
    /* 0x004 */ rxHeapBlockHeader *next;
    /* 0x008 */ unsigned int size;
    /* 0x00C */ rxHeapFreeBlock *freeEntry;
    /* 0x010 */ unsigned int pad[4];
};

// declared in 141 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class rxHeapFreeBlock {  // size 0x008
public:
    /* 0x000 */ unsigned int size;
    /* 0x004 */ rxHeapBlockHeader *ptr;
};

// declared in 141 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class rxHeapSuperBlockDescriptor {  // size 0x00C
public:
    /* 0x000 */ void *start;
    /* 0x004 */ unsigned int size;
    /* 0x008 */ rxHeapSuperBlockDescriptor *next;
};

// declared in 1 file(s), e.g. p2clpcom.c
struct RxInterp {  // size 0x00C
    /* 0x000 */ unsigned short originalVert;
    /* 0x002 */ unsigned short parentVert1;
    /* 0x004 */ unsigned short parentVert2;
    /* 0x008 */ float interp;
};

// declared in 140 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RxIoSpec {  // size 0x014
public:
    /* 0x000 */ unsigned int numClustersOfInterest;
    /* 0x004 */ RxClusterRef *clustersOfInterest;
    /* 0x008 */ RxClusterValidityReq *inputRequirements;
    /* 0x00C */ unsigned int numOutputs;
    /* 0x010 */ RxOutputSpec *outputs;
};

// declared in 1 file(s), e.g. bapipew.c
struct RxMatIndexBounds {  // size 0x004
    /* 0x000 */ unsigned short minIndex;
    /* 0x002 */ unsigned short maxIndex;
};

// declared in 21 file(s), e.g. baim3d.c
struct RxMeshStateVector {  // size 0x0D0
    /* 0x000 */ int Flags;
    /* 0x004 */ void *SourceObject;
    /* 0x010 */ RwMatrixTag Obj2World;
    /* 0x050 */ RwMatrixTag Obj2Cam;
    /* 0x090 */ RwSurfaceProperties SurfaceProperties;
    /* 0x09C */ RwTexture *Texture;
    /* 0x0A0 */ RwRGBA MatCol;
    /* 0x0A4 */ RxPipeline *Pipeline;
    /* 0x0A8 */ RwPrimitiveType PrimType;
    /* 0x0AC */ unsigned int NumElements;
    /* 0x0B0 */ unsigned int NumVertices;
    /* 0x0B4 */ int ClipFlagsOr;
    /* 0x0B8 */ int ClipFlagsAnd;
    /* 0x0BC */ void *SourceMesh;
    /* 0x0C0 */ void *DataObject;
};

// declared in 140 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RxNodeDefinition {  // size 0x040
public:
    /* 0x000 */ char *name;
    /* 0x004 */ RxNodeMethods nodeMethods;
    /* 0x020 */ RxIoSpec io;
    /* 0x034 */ unsigned int pipelineNodePrivateDataSize;
    /* 0x038 */ RxNodeDefEditable editable;
    /* 0x03C */ int InputPipesCnt;
};

// declared in 140 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RxNodeMethods {  // size 0x01C
public:
    /* 0x000 */ int (*nodeBody)(RxPipelineNode *, RxPipelineNodeParam *);
    /* 0x004 */ int (*nodeInit)(RxNodeDefinition *);
    /* 0x008 */ void (*nodeTerm)(RxNodeDefinition *);
    /* 0x00C */ int (*pipelineNodeInit)(RxPipelineNode *);
    /* 0x010 */ void (*pipelineNodeTerm)(RxPipelineNode *);
    /* 0x014 */ int (*pipelineNodeConfig)(RxPipelineNode *, RxPipeline *);
    /* 0x018 */ unsigned int (*configMsgHandler)(RxPipelineNode *, unsigned int, unsigned int, void *);
};

// declared in 1 file(s), e.g. ps2allmat.c
struct rxNodePS2AllMatInitData {  // size 0x03C
    /* 0x000 */ RxClusterDefinition *clusters[11];
    /* 0x02C */ int vu1MaxStripInputSize;
    /* 0x030 */ int vu1MaxListInputSize;
    /* 0x034 */ int sizeOnVU;
    /* 0x038 */ RpMeshHeaderFlags pipeType;
};

// declared in 9 file(s), e.g. fastim3d.c
struct rxNodePS2AllMatPvtData {  // size 0x2F0
    /* 0x000 */ int (*meshInstanceTestCB)(RxPS2AllPipeData *);
    /* 0x004 */ RwResEntry *(*resEntryAllocCB)(RxPS2AllPipeData *, RwResEntry **, unsigned int, void (*)(RwResEntry *));
    /* 0x008 */ int (*instanceCB)(RxPS2AllPipeData *, void **, unsigned int);
    /* 0x00C */ int (*bridgeCB)(RxPS2AllPipeData *);
    /* 0x010 */ int (*postMeshCB)(RxPS2AllPipeData *);
    /* 0x014 */ int vifOffset;
    /* 0x018 */ void **vu1CodeArray;
    /* 0x01C */ unsigned int codeArrayLength;
    /* 0x020 */ rwPS2AllClusterInstanceInfo clinfo[11];
    /* 0x078 */ unsigned int cliIndex[11];
    /* 0x0A4 */ RpMeshHeaderFlags pipeType;
    /* 0x0A8 */ unsigned char totallyOpaque;
    /* 0x0A9 */ unsigned char numStripes;
    /* 0x0AA */ unsigned char sizeOnVU;
    /* 0x0AB */ unsigned char pad0;
    /* 0x0AC */ rwPS2AllResEntryFormat strip;
    /* 0x1CC */ rwPS2AllResEntryFormat list;
    /* 0x2EC */ unsigned int magicValue;
};

// declared in 9 file(s), e.g. fastim3d.c
struct rxNodePS2AllPvtData {  // size 0x058
    /* 0x000 */ rwPS2AllPrimTypeLUT primLUT;
    /* 0x00E */ unsigned char pad[2];
    /* 0x010 */ int (*objectSetupCB)(RxPS2AllPipeData *, RwMatrixTag **);
    /* 0x014 */ int (*objectFinalizeCB)(RxPS2AllPipeData *);
    /* 0x018 */ RxPipeline *groupPipe;
    /* 0x01C */ unsigned int lightOffset;
    /* 0x020 */ unsigned int lightBufferSize;
    /* 0x024 */ u_long128 *nullLightBlock;
    /* 0x028 */ float nullLightBuffer[12];
};

// declared in 15 file(s), e.g. gamesource\Race\CAICar.cpp
class RxObjSpace3DVertex {  // size 0x024
public:
    /* 0x000 */ RwV3d objVertex;
    /* 0x00C */ RxColorUnion c;
    /* 0x010 */ RwV3d objNormal;
    /* 0x01C */ float u;
    /* 0x020 */ float v;
};

// declared in 4 file(s), e.g. nodeps2manager.c
union RxObjUnion {  // size 0x004
    /* 0x000 */ RpWorldSector *worldSector;
    /* 0x000 */ RpAtomic *atomic;
    /* 0x000 */ void *agnostic;
};

// declared in 140 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RxOutputSpec {  // size 0x00C
public:
    /* 0x000 */ char *name;
    /* 0x004 */ RxClusterValid *outputClusters;
    /* 0x008 */ RxClusterValid allOtherClusters;
};

// declared in 140 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RxPacket {  // size 0x030
public:
    /* 0x000 */ unsigned short flags;
    /* 0x002 */ unsigned short numClusters;
    /* 0x004 */ RxPipeline *pipeline;
    /* 0x008 */ unsigned int *inputToClusterSlot;
    /* 0x00C */ unsigned int *slotsContinue;
    /* 0x010 */ RxPipelineCluster **slotClusterRefs;
    /* 0x014 */ RxCluster clusters[1];
};

// declared in 140 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RxPipeline {  // size 0x034
public:
    /* 0x000 */ int locked;
    /* 0x004 */ unsigned int numNodes;
    /* 0x008 */ RxPipelineNode *nodes;
    /* 0x00C */ unsigned int packetNumClusterSlots;
    /* 0x010 */ rxEmbeddedPacketState embeddedPacketState;
    /* 0x014 */ RxPacket *embeddedPacket;
    /* 0x018 */ unsigned int numInputRequirements;
    /* 0x01C */ RxPipelineRequiresCluster *inputRequirements;
    /* 0x020 */ void *superBlock;
    /* 0x024 */ unsigned int superBlockSize;
    /* 0x028 */ unsigned int entryPoint;
    /* 0x02C */ unsigned int pluginId;
    /* 0x030 */ unsigned int pluginData;
};

// declared in 141 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RxPipelineCluster {  // size 0x008
public:
    /* 0x000 */ RxClusterDefinition *clusterRef;
    /* 0x004 */ unsigned int creationAttributes;
};

// declared in 140 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RxPipelineNode {  // size 0x028
public:
    /* 0x000 */ RxNodeDefinition *nodeDef;
    /* 0x004 */ unsigned int numOutputs;
    /* 0x008 */ unsigned int *outputs;
    /* 0x00C */ RxPipelineCluster **slotClusterRefs;
    /* 0x010 */ unsigned int *slotsContinue;
    /* 0x014 */ void *privateData;
    /* 0x018 */ unsigned int *inputToClusterSlot;
    /* 0x01C */ RxPipelineNodeTopSortData *topSortData;
    /* 0x020 */ void *initializationData;
    /* 0x024 */ unsigned int initializationDataSize;
};

// declared in 140 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RxPipelineNodeParam {  // size 0x008
public:
    /* 0x000 */ void *dataParam;
    /* 0x004 */ RxHeap *heap;
};

// declared in 2 file(s), e.g. nodeps2manager.c
struct RxPipelineNodePS2ObjAllInOneData {  // size 0x00C
    /* 0x000 */ int groupMeshes;
    /* 0x004 */ void (*lightingCallback)(int, void *);
    /* 0x008 */ int genericVU1Index;
};

// declared in 140 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RxPipelineNodeTopSortData {  // size 0x00C
public:
    /* 0x000 */ unsigned int numIns;
    /* 0x004 */ unsigned int numInsVisited;
    /* 0x008 */ rxReq *req;
};

// declared in 140 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class RxPipelineRequiresCluster {  // size 0x00C
public:
    /* 0x000 */ RxClusterDefinition *clusterDef;
    /* 0x004 */ RxClusterValidityReq rqdOrOpt;
    /* 0x008 */ unsigned int slotIndex;
};

// declared in 9 file(s), e.g. fastim3d.c
struct RxPS2AllPipeData {  // size 0x048
    /* 0x000 */ rxNodePS2AllPvtData *objPvtData;
    /* 0x004 */ rxNodePS2AllMatPvtData *matPvtData;
    /* 0x008 */ void *sourceObject;
    /* 0x00C */ RpMeshHeader *meshHeader;
    /* 0x010 */ RwMeshCache *meshCache;
    /* 0x014 */ RxInstanceFlags objInstance;
    /* 0x018 */ unsigned int objIdentifier;
    /* 0x01C */ float spExtra;
    /* 0x020 */ int numMorphTargets;
    /* 0x024 */ unsigned int fastMorphing;
    /* 0x028 */ unsigned char transType;
    /* 0x029 */ unsigned char primType;
    /* 0x02A */ unsigned char matModulate;
    /* 0x02B */ unsigned char vu1CodeIndex;
    /* 0x02C */ RpMesh *mesh;
    /* 0x030 */ RwResEntry **cacheEntryRef;
    /* 0x034 */ RxInstanceFlags meshInstance;
    /* 0x038 */ unsigned int meshIdentifier;
    /* 0x03C */ RwSurfaceProperties *surfProps;
    /* 0x040 */ RwTexture *texture;
    /* 0x044 */ RwRGBA matCol;
};

// declared in 4 file(s), e.g. nodeps2manager.c
struct RxPS2DMASessionRecord {  // size 0x014
    /* 0x000 */ RxPS2ObjectType objType;
    /* 0x004 */ RxObjUnion sourceObject;
    /* 0x008 */ RwFrustumTestResult inFrustum;
    /* 0x00C */ unsigned short serialNum;
    /* 0x00E */ unsigned char vu1CodeIndex;
    /* 0x00F */ unsigned char primType;
    /* 0x010 */ RxSkyTransTypeFlags transType;
};

// declared in 4 file(s), e.g. nodeps2manager.c
struct RxPS2Mesh {  // size 0x010
    /* 0x000 */ RpMesh *mesh;
    /* 0x004 */ RwResEntry **cacheEntryRef;
    /* 0x008 */ unsigned int meshNum;
    /* 0x00C */ unsigned int pad;
};

// declared in 16 file(s), e.g. baim3d.c
struct RxRenderStateVector {  // size 0x030
    /* 0x000 */ unsigned int Flags;
    /* 0x004 */ RwShadeMode ShadeMode;
    /* 0x008 */ RwBlendFunction SrcBlend;
    /* 0x00C */ RwBlendFunction DestBlend;
    /* 0x010 */ RwRaster *TextureRaster;
    /* 0x014 */ RwTextureAddressMode AddressModeU;
    /* 0x018 */ RwTextureAddressMode AddressModeV;
    /* 0x01C */ RwTextureFilterMode FilterMode;
    /* 0x020 */ RwRGBA BorderColor;
    /* 0x024 */ RwFogType FogType;
    /* 0x028 */ RwRGBA FogColor;
    /* 0x02C */ unsigned char *FogTable;
};

// declared in 124 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp  // VARIANT 1 of 2
class rxReq {  // size 0x000
public:
};

// declared in 16 file(s), e.g. baim3d.c  // VARIANT 2 of 2
struct rxReq {  // size 0x014
    /* 0x000 */ unsigned int numused;
    /* 0x004 */ unsigned int numalloced;
    /* 0x008 */ unsigned int unavailslots;
    /* 0x00C */ RwReqEntry *reqentries;
    /* 0x010 */ RxPipelineNode *node;
};

// declared in 2 file(s), e.g. gamesource\Sound\SoundEnginePartial.cpp
class Sb2distUpdateParams {  // size 0x020
public:
    /* 0x000 */ float frequency;
    /* 0x004 */ float bandwidth;
    /* 0x008 */ float waveshape;
    /* 0x00C */ float gain;
    /* 0x010 */ float dry;
    /* 0x014 */ float wet;
    /* 0x018 */ float voll;
    /* 0x01C */ float volr;
};

// declared in 1 file(s), e.g. gamesource\Game\CRecords.cpp
class sceCdCLOCK {  // size 0x008
public:
    /* 0x000 */ unsigned char stat;
    /* 0x001 */ unsigned char second;
    /* 0x002 */ unsigned char minute;
    /* 0x003 */ unsigned char hour;
    /* 0x004 */ unsigned char pad;
    /* 0x005 */ unsigned char day;
    /* 0x006 */ unsigned char month;
    /* 0x007 */ unsigned char year;
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class sceGifTag {  // size 0x010
public:
    /* 0x000 */ unsigned long NLOOP : 15;  // bit offset 0
    /* 0x000 */ unsigned long EOP : 1;  // bit offset 15
    /* 0x000 */ unsigned long pad16 : 16;  // bit offset 16
    /* 0x000 */ unsigned long id : 14;  // bit offset 32
    /* 0x000 */ unsigned long PRE : 1;  // bit offset 46
    /* 0x000 */ unsigned long PRIM : 11;  // bit offset 47
    /* 0x000 */ unsigned long FLG : 2;  // bit offset 58
    /* 0x000 */ unsigned long NREG : 4;  // bit offset 60
    /* 0x008 */ unsigned long REGS0 : 4;  // bit offset 0
    /* 0x008 */ unsigned long REGS1 : 4;  // bit offset 4
    /* 0x008 */ unsigned long REGS2 : 4;  // bit offset 8
    /* 0x008 */ unsigned long REGS3 : 4;  // bit offset 12
    /* 0x008 */ unsigned long REGS4 : 4;  // bit offset 16
    /* 0x008 */ unsigned long REGS5 : 4;  // bit offset 20
    /* 0x008 */ unsigned long REGS6 : 4;  // bit offset 24
    /* 0x008 */ unsigned long REGS7 : 4;  // bit offset 28
    /* 0x008 */ unsigned long REGS8 : 4;  // bit offset 32
    /* 0x008 */ unsigned long REGS9 : 4;  // bit offset 36
    /* 0x008 */ unsigned long REGS10 : 4;  // bit offset 40
    /* 0x008 */ unsigned long REGS11 : 4;  // bit offset 44
    /* 0x008 */ unsigned long REGS12 : 4;  // bit offset 48
    /* 0x008 */ unsigned long REGS13 : 4;  // bit offset 52
    /* 0x008 */ unsigned long REGS14 : 4;  // bit offset 56
    /* 0x008 */ unsigned long REGS15 : 4;  // bit offset 60
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class sceGsClear {  // size 0x060
public:
    /* 0x000 */ sceGsTest testa;
    /* 0x008 */ long testaaddr;
    /* 0x010 */ sceGsPrim prim;
    /* 0x018 */ long primaddr;
    /* 0x020 */ sceGsRgbaq rgbaq;
    /* 0x028 */ long rgbaqaddr;
    /* 0x030 */ sceGsXyz xyz2a;
    /* 0x038 */ long xyz2aaddr;
    /* 0x040 */ sceGsXyz xyz2b;
    /* 0x048 */ long xyz2baddr;
    /* 0x050 */ sceGsTest testb;
    /* 0x058 */ long testbaddr;
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class sceGsColclamp {  // size 0x008
public:
    /* 0x000 */ unsigned long CLAMP : 1;  // bit offset 0
    /* 0x000 */ unsigned long pad01 : 63;  // bit offset 1
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class sceGsDBuffDc {  // size 0x330
public:
    /* 0x000 */ sceGsDispEnv disp[2];
    /* 0x050 */ sceGifTag giftag0;
    /* 0x060 */ sceGsDrawEnv1 draw01;
    /* 0x0E0 */ sceGsDrawEnv2 draw02;
    /* 0x160 */ sceGsClear clear0;
    /* 0x1C0 */ sceGifTag giftag1;
    /* 0x1D0 */ sceGsDrawEnv1 draw11;
    /* 0x250 */ sceGsDrawEnv2 draw12;
    /* 0x2D0 */ sceGsClear clear1;
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class sceGsDispEnv {  // size 0x028
public:
    /* 0x000 */ tGS_PMODE pmode;
    /* 0x008 */ tGS_SMODE2 smode2;
    /* 0x010 */ tGS_DISPFB2 dispfb;
    /* 0x018 */ tGS_DISPLAY2 display;
    /* 0x020 */ tGS_BGCOLOR bgcolor;
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class sceGsDrawEnv1 {  // size 0x080
public:
    /* 0x000 */ sceGsFrame frame1;
    /* 0x008 */ unsigned long frame1addr;
    /* 0x010 */ sceGsZbuf zbuf1;
    /* 0x018 */ long zbuf1addr;
    /* 0x020 */ sceGsXyoffset xyoffset1;
    /* 0x028 */ long xyoffset1addr;
    /* 0x030 */ sceGsScissor scissor1;
    /* 0x038 */ long scissor1addr;
    /* 0x040 */ sceGsPrmodecont prmodecont;
    /* 0x048 */ long prmodecontaddr;
    /* 0x050 */ sceGsColclamp colclamp;
    /* 0x058 */ long colclampaddr;
    /* 0x060 */ sceGsDthe dthe;
    /* 0x068 */ long dtheaddr;
    /* 0x070 */ sceGsTest test1;
    /* 0x078 */ long test1addr;
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class sceGsDrawEnv2 {  // size 0x080
public:
    /* 0x000 */ sceGsFrame frame2;
    /* 0x008 */ unsigned long frame2addr;
    /* 0x010 */ sceGsZbuf zbuf2;
    /* 0x018 */ long zbuf2addr;
    /* 0x020 */ sceGsXyoffset xyoffset2;
    /* 0x028 */ long xyoffset2addr;
    /* 0x030 */ sceGsScissor scissor2;
    /* 0x038 */ long scissor2addr;
    /* 0x040 */ sceGsPrmodecont prmodecont;
    /* 0x048 */ long prmodecontaddr;
    /* 0x050 */ sceGsColclamp colclamp;
    /* 0x058 */ long colclampaddr;
    /* 0x060 */ sceGsDthe dthe;
    /* 0x068 */ long dtheaddr;
    /* 0x070 */ sceGsTest test2;
    /* 0x078 */ long test2addr;
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class sceGsDthe {  // size 0x008
public:
    /* 0x000 */ unsigned long DTHE : 1;  // bit offset 0
    /* 0x000 */ unsigned long pad01 : 63;  // bit offset 1
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class sceGsFrame {  // size 0x008
public:
    /* 0x000 */ unsigned long FBP : 9;  // bit offset 0
    /* 0x000 */ unsigned long pad09 : 7;  // bit offset 9
    /* 0x000 */ unsigned long FBW : 6;  // bit offset 16
    /* 0x000 */ unsigned long pad22 : 2;  // bit offset 22
    /* 0x000 */ unsigned long PSM : 6;  // bit offset 24
    /* 0x000 */ unsigned long pad30 : 2;  // bit offset 30
    /* 0x000 */ unsigned long FBMSK : 32;  // bit offset 32
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class sceGsPrim {  // size 0x008
public:
    /* 0x000 */ unsigned long PRIM : 3;  // bit offset 0
    /* 0x000 */ unsigned long IIP : 1;  // bit offset 3
    /* 0x000 */ unsigned long TME : 1;  // bit offset 4
    /* 0x000 */ unsigned long FGE : 1;  // bit offset 5
    /* 0x000 */ unsigned long ABE : 1;  // bit offset 6
    /* 0x000 */ unsigned long AA1 : 1;  // bit offset 7
    /* 0x000 */ unsigned long FST : 1;  // bit offset 8
    /* 0x000 */ unsigned long CTXT : 1;  // bit offset 9
    /* 0x000 */ unsigned long FIX : 1;  // bit offset 10
    /* 0x000 */ unsigned long pad11 : 53;  // bit offset 11
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class sceGsPrmodecont {  // size 0x008
public:
    /* 0x000 */ unsigned long AC : 1;  // bit offset 0
    /* 0x000 */ unsigned long pad01 : 63;  // bit offset 1
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class sceGsRgbaq {  // size 0x008
public:
    /* 0x000 */ unsigned int R : 8;  // bit offset 0
    /* 0x000 */ unsigned int G : 8;  // bit offset 8
    /* 0x000 */ unsigned int B : 8;  // bit offset 16
    /* 0x000 */ unsigned int A : 8;  // bit offset 24
    /* 0x004 */ float Q;
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class sceGsScissor {  // size 0x008
public:
    /* 0x000 */ unsigned long SCAX0 : 11;  // bit offset 0
    /* 0x000 */ unsigned long pad11 : 5;  // bit offset 11
    /* 0x000 */ unsigned long SCAX1 : 11;  // bit offset 16
    /* 0x000 */ unsigned long pad27 : 5;  // bit offset 27
    /* 0x000 */ unsigned long SCAY0 : 11;  // bit offset 32
    /* 0x000 */ unsigned long pad43 : 5;  // bit offset 43
    /* 0x000 */ unsigned long SCAY1 : 11;  // bit offset 48
    /* 0x000 */ unsigned long pad59 : 5;  // bit offset 59
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class sceGsTest {  // size 0x008
public:
    /* 0x000 */ unsigned long ATE : 1;  // bit offset 0
    /* 0x000 */ unsigned long ATST : 3;  // bit offset 1
    /* 0x000 */ unsigned long AREF : 8;  // bit offset 4
    /* 0x000 */ unsigned long AFAIL : 2;  // bit offset 12
    /* 0x000 */ unsigned long DATE : 1;  // bit offset 14
    /* 0x000 */ unsigned long DATM : 1;  // bit offset 15
    /* 0x000 */ unsigned long ZTE : 1;  // bit offset 16
    /* 0x000 */ unsigned long ZTST : 2;  // bit offset 17
    /* 0x000 */ unsigned long pad19 : 45;  // bit offset 19
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class sceGsXyoffset {  // size 0x008
public:
    /* 0x000 */ unsigned long OFX : 16;  // bit offset 0
    /* 0x000 */ unsigned long pad16 : 16;  // bit offset 16
    /* 0x000 */ unsigned long OFY : 16;  // bit offset 32
    /* 0x000 */ unsigned long pad48 : 16;  // bit offset 48
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class sceGsXyz {  // size 0x008
public:
    /* 0x000 */ unsigned long X : 16;  // bit offset 0
    /* 0x000 */ unsigned long Y : 16;  // bit offset 16
    /* 0x000 */ unsigned long Z : 32;  // bit offset 32
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class sceGsZbuf {  // size 0x008
public:
    /* 0x000 */ unsigned long ZBP : 9;  // bit offset 0
    /* 0x000 */ unsigned long pad09 : 15;  // bit offset 9
    /* 0x000 */ unsigned long PSM : 4;  // bit offset 24
    /* 0x000 */ unsigned long pad28 : 4;  // bit offset 28
    /* 0x000 */ unsigned long ZMSK : 1;  // bit offset 32
    /* 0x000 */ unsigned long pad33 : 31;  // bit offset 33
};

// declared in 58 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class sceIpuDmaEnv {  // size 0x024
public:
    /* 0x000 */ unsigned int d4madr;
    /* 0x004 */ unsigned int d4tadr;
    /* 0x008 */ unsigned int d4qwc;
    /* 0x00C */ unsigned int d4chcr;
    /* 0x010 */ unsigned int d3madr;
    /* 0x014 */ unsigned int d3qwc;
    /* 0x018 */ unsigned int d3chcr;
    /* 0x01C */ unsigned int ipubp;
    /* 0x020 */ unsigned int ipuctrl;
};

// declared in 57 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class sceIpuRGB32 {  // size 0x400
public:
    /* 0x000 */ unsigned int pix[256];
};

// declared in 2 file(s), e.g. gamesource\Menu\CMenuPageMemoryCard.cpp
class sceMcIconSys {  // size 0x3C4
public:
    /* 0x000 */ unsigned char Head[4];
    /* 0x004 */ unsigned short Reserv1;
    /* 0x006 */ unsigned short OffsLF;
    /* 0x008 */ unsigned int Reserv2;
    /* 0x00C */ unsigned int TransRate;
    /* 0x010 */ int BgColor[4][4];
    /* 0x050 */ float LightDir[3][4];
    /* 0x080 */ float LightColor[3][4];
    /* 0x0B0 */ float Ambient[4];
    /* 0x0C0 */ unsigned char TitleName[68];
    /* 0x104 */ unsigned char FnameView[64];
    /* 0x144 */ unsigned char FnameCopy[64];
    /* 0x184 */ unsigned char FnameDel[64];
    /* 0x1C4 */ unsigned char Reserve3[512];
};

// declared in 3 file(s), e.g. gamesource\Menu\CMenuPageMemoryCard.cpp
class sceMcStDateTime {  // size 0x008
public:
    /* 0x000 */ unsigned char Resv2;
    /* 0x001 */ unsigned char Sec;
    /* 0x002 */ unsigned char Min;
    /* 0x003 */ unsigned char Hour;
    /* 0x004 */ unsigned char Day;
    /* 0x005 */ unsigned char Month;
    /* 0x006 */ unsigned short Year;
};

// declared in 3 file(s), e.g. gamesource\Menu\CMenuPageMemoryCard.cpp
class sceMcTblGetDir {  // size 0x040
public:
    /* 0x000 */ sceMcStDateTime _Create;
    /* 0x008 */ sceMcStDateTime _Modify;
    /* 0x010 */ unsigned int FileSizeByte;
    /* 0x014 */ unsigned short AttrFile;
    /* 0x016 */ unsigned short Reserve1;
    /* 0x018 */ unsigned int Reserve2;
    /* 0x01C */ unsigned int PdaAplNo;
    /* 0x020 */ unsigned char EntryName[32];
};

// declared in 57 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class sceMpeg {  // size 0x048
public:
    /* 0x000 */ int width;
    /* 0x004 */ int height;
    /* 0x008 */ int frameCount;
    /* 0x010 */ long pts;
    /* 0x018 */ long dts;
    /* 0x020 */ unsigned long flags;
    /* 0x028 */ long pts2nd;
    /* 0x030 */ long dts2nd;
    /* 0x038 */ unsigned long flags2nd;
    /* 0x040 */ void *sys;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\Mpeg\ps2\GtMpegPs2.cpp
class sceMpegCbData {  // size 0x020
public:
    /* 0x000 */ sceMpegCbType type;
    /* 0x000 */ sceMpegCbDataError error;
    /* 0x000 */ sceMpegCbDataTimeStamp ts;
    /* 0x000 */ sceMpegCbDataStr str;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\Mpeg\ps2\GtMpegPs2.cpp
class sceMpegCbDataError {  // size 0x008
public:
    /* 0x000 */ sceMpegCbType type;
    /* 0x004 */ char *errMessage;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\Mpeg\ps2\GtMpegPs2.cpp
class sceMpegCbDataStr {  // size 0x020
public:
    /* 0x000 */ sceMpegCbType type;
    /* 0x004 */ unsigned char *header;
    /* 0x008 */ unsigned char *data;
    /* 0x00C */ unsigned int len;
    /* 0x010 */ long pts;
    /* 0x018 */ long dts;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\Mpeg\ps2\GtMpegPs2.cpp
class sceMpegCbDataTimeStamp {  // size 0x018
public:
    /* 0x000 */ sceMpegCbType type;
    /* 0x008 */ long pts;
    /* 0x010 */ long dts;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\GTFileSystemPS2DVD.cpp
class sceSifCmdData {  // size 0x008
public:
    /* 0x000 */ void (*func)(void *, void *);
    /* 0x004 */ void *data;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\GTFileSystemPS2DVD.cpp
class sceSifCmdHdr {  // size 0x010
public:
    /* 0x000 */ unsigned int psize : 8;  // bit offset 0
    /* 0x000 */ unsigned int dsize : 24;  // bit offset 8
    /* 0x004 */ unsigned int daddr;
    /* 0x008 */ unsigned int fcode;
    /* 0x00C */ unsigned int opt;
};

// declared in 2 file(s), e.g. gamesource\Sound\GameSound.cpp
class sCrashWave {  // size 0x004
public:
    /* 0x000 */ char *m_WaveName;
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class SegmentDimensions {  // size 0x008
public:
    /* 0x000 */ float mrLength;
    /* 0x004 */ float mrWidth;
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class SegmentNodeData {  // size 0x004
public:
    /* 0x000 */ unsigned short mauNodes16[2];
};

// declared in 3 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\common\rwarpc.c
class SemaParam {  // size 0x018
public:
    /* 0x000 */ int currentCount;
    /* 0x004 */ int maxCount;
    /* 0x008 */ int initCount;
    /* 0x00C */ int numWaitThreads;
    /* 0x010 */ unsigned int attr;
    /* 0x014 */ unsigned int option;
};

// declared in 1 file(s), e.g. gamesource\Race\CTrafficSystemDraw.cpp
class ShadowStructure {  // size 0x050
public:
    /* 0x000 */ RwV4d mPosAndIntensity[3];
    /* 0x030 */ RwV3d mNormal;
    /* 0x03C */ float mrDistance;
    /* 0x040 */ int mbFound;
    /* 0x044 */ int mnTag;
};

// declared in 1 file(s), e.g. bapipew.c
struct SortVert {  // size 0x008
    /* 0x000 */ int faceIndex;
    /* 0x004 */ short matIndex;
    /* 0x006 */ unsigned short origIndex;
};

// declared in 2 file(s), e.g. gamesource\Sound\GameSound.cpp
class SPlayingTrafficSound {  // size 0x018
public:
    /* 0x000 */ CManagedVoice *m_Voice;
    /* 0x004 */ SSoundTrafficDBData *m_DB;
    /* 0x008 */ CTrafficSoundData *m_LastUpdate;
    /* 0x00C */ unsigned int m_VehicleID;
    /* 0x010 */ int m_RoadNoise;
    /* 0x014 */ float m_Volume;
};

// declared in 1 file(s), e.g. gamesource\Sound\SoundCar.cpp
class SPopParams {  // size 0x010
public:
    /* 0x000 */ int smoke;
    /* 0x004 */ int pop;
    /* 0x008 */ int flame;
    /* 0x00C */ int frequent;
};

// declared in 113 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class SRCBBox {  // size 0x020
public:
    /* 0x000 */ RwV3d sup;
    /* 0x00C */ int tag;
    /* 0x010 */ RwV3d inf;
    /* 0x01C */ int pad;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class SRCCollisionPoly {  // size 0x010
public:
    /* 0x000 */ unsigned int vertIndex1;
    /* 0x004 */ unsigned int vertIndex2;
    /* 0x008 */ unsigned int vertIndex3;
    /* 0x00C */ int tag;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class SRCCollisionSector {  // size 0x030
public:
    /* 0x000 */ unsigned int numVerts;
    /* 0x004 */ SRCCollisionVertex *vertices;
    /* 0x008 */ unsigned int vertexCustomDataSize;
    /* 0x00C */ void *vertexCustomData;
    /* 0x010 */ unsigned int numPolys;
    /* 0x014 */ SRCCollisionPoly *polys;
    /* 0x018 */ unsigned int polyCustomDataSize;
    /* 0x01C */ void *polyCustomData;
    /* 0x020 */ unsigned int sectorCustomDataSize;
    /* 0x024 */ void *sectorCustomData;
    /* 0x028 */ int pad[2];
};

// declared in 9 file(s), e.g. gamesource\Physics\CVehiclePhysics.cpp
class SRCCollisionTriangle {  // size 0x040
public:
    /* 0x000 */ RwV3d normal;
    /* 0x00C */ float distance;
    /* 0x010 */ SRCCollisionVertex *vertices[3];
    /* 0x01C */ SRCCollisionSector *pSector;
    /* 0x020 */ unsigned int vertIndex1;
    /* 0x024 */ unsigned int vertIndex2;
    /* 0x028 */ unsigned int vertIndex3;
    /* 0x02C */ int tag;
    /* 0x030 */ float prelit;
    /* 0x034 */ int pad[3];
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class SRCCollisionVertex {  // size 0x010
public:
    /* 0x000 */ float positionx;
    /* 0x004 */ float positiony;
    /* 0x008 */ float positionz;
    /* 0x00C */ float prelit;
};

// declared in 7 file(s), e.g. gamesource\Physics\CVehiclePhysics.cpp
class SRCCollLine {  // size 0x020
public:
    /* 0x000 */ RwV3d start;
    /* 0x00C */ float pad1;
    /* 0x010 */ RwV3d end;
    /* 0x01C */ float pad2;
};

// declared in 3 file(s), e.g. gamesource\Game\CTimeAttackLogic.cpp
class SRCCollSphere {  // size 0x010
public:
    /* 0x000 */ RwV3d center;
    /* 0x00C */ float radius;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class SRCLight {  // size 0x020
public:
    /* 0x000 */ SRCLightProperties properties;
    /* 0x010 */ RwV4d direction;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class SRCLightProperties {  // size 0x010
public:
    /* 0x000 */ float red;
    /* 0x004 */ float green;
    /* 0x008 */ float blue;
    /* 0x00C */ RpLightType type;
};

// declared in 8 file(s), e.g. gamesource\Sound\GameSound.cpp
class SSoundCarGeneralDBData {  // size 0x09C
public:
    /* 0x000 */ float m_SlipSpeedMin;
    /* 0x004 */ float m_SlipSpeedMax;
    /* 0x008 */ float m_SlipVolMin;
    /* 0x00C */ float m_SlipVolMax;
    /* 0x010 */ float m_SlipFreqMin;
    /* 0x014 */ float m_SlipFreqMax;
    /* 0x018 */ float m_SpinSpeedMin;
    /* 0x01C */ float m_SpinSpeedMax;
    /* 0x020 */ float m_SpinVolMin;
    /* 0x024 */ float m_SpinVolMax;
    /* 0x028 */ float m_SpinFreqMin;
    /* 0x02C */ float m_SpinFreqMax;
    /* 0x030 */ float m_BoostInVol;
    /* 0x034 */ float m_BoostLoopVol;
    /* 0x038 */ float m_BoostOutVol;
    /* 0x03C */ float m_GearVol;
    /* 0x040 */ float m_MaxDistance;
    /* 0x044 */ float m_FE_MenuVol;
    /* 0x048 */ float m_HUD_FE_MenuVol;
    /* 0x04C */ float m_HUD_CountdownVol;
    /* 0x050 */ float m_HUD_TimeVol;
    /* 0x054 */ float m_HUD_DistanceVol;
    /* 0x058 */ float m_HUD_IgniteVol;
    /* 0x05C */ float m_HUD_PopupVol;
    /* 0x060 */ float m_TrafficCarHornVol;
    /* 0x064 */ float m_TrafficTruckHornVol;
    /* 0x068 */ float m_TrafficBusHornVol;
    /* 0x06C */ float m_ReverseTrafficHornDamp;
    /* 0x070 */ float m_TrafficSkidMinPitch;
    /* 0x074 */ float m_TrafficSkidMaxPitch;
    /* 0x078 */ float m_TrafficSkidMinVol;
    /* 0x07C */ float m_TrafficSkidMaxVol;
    /* 0x080 */ float m_TrafficSkidMinSpeed;
    /* 0x084 */ float m_TrafficSkidMaxSpeed;
    /* 0x088 */ float m_RoadNoiseVolMax;
    /* 0x08C */ float m_RoadNoiseMaxVolSpeed;
    /* 0x090 */ float m_RoadNoiseMaxFreqSpeed;
    /* 0x094 */ float m_RoadNoiseFreqMin;
    /* 0x098 */ float m_RoadNoiseFreqMax;
};

// declared in 8 file(s), e.g. gamesource\Sound\GameSound.cpp
class SSoundCrashDBData {  // size 0x01C
public:
    /* 0x000 */ float m_MinDistance;
    /* 0x004 */ float m_MaxDistance;
    /* 0x008 */ float m_PitchVariance;
    /* 0x00C */ float m_MinImpulse;
    /* 0x010 */ float m_MaxImpulse;
    /* 0x014 */ float m_MinVolume;
    /* 0x018 */ float m_MaxVolume;
};

// declared in 8 file(s), e.g. gamesource\Sound\GameSound.cpp
class SSoundRaceCarDBData {  // size 0x02C
public:
    /* 0x000 */ float m_NormalVol;
    /* 0x004 */ float m_BoostVol;
    /* 0x008 */ float m_DumpValveSound;
    /* 0x00C */ float m_DumpValveDelay;
    /* 0x010 */ float m_DumpValveVolumeMax;
    /* 0x014 */ float m_DumpValveRpmMin;
    /* 0x018 */ float m_DumpValveRpmMax;
    /* 0x01C */ float m_PopVolMin;
    /* 0x020 */ float m_PopVolMax;
    /* 0x024 */ float m_PopRpmMin;
    /* 0x028 */ float m_PopRpmMax;
};

// declared in 8 file(s), e.g. gamesource\Sound\GameSound.cpp
class SSoundTrafficDBData {  // size 0x024
public:
    /* 0x000 */ float m_RoadMaxVol;
    /* 0x004 */ float m_RoadMinFreq;
    /* 0x008 */ float m_RoadMaxFreq;
    /* 0x00C */ float m_RoadMaxSpeed;
    /* 0x010 */ float m_EngineMinVol;
    /* 0x014 */ float m_EngineMaxVol;
    /* 0x018 */ float m_EngineMinFreq;
    /* 0x01C */ float m_EngineMaxFreq;
    /* 0x020 */ float m_EngineMaxSpeed;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class StartData {  // size 0x0B0
public:
    /* 0x000 */ char macVersion[32];
    /* 0x020 */ RwV4d maStartPos[4];
    /* 0x060 */ RwV4d maStartDir[4];
    /* 0x0A0 */ int mnGameDataHeaderSize;
    /* 0x0A4 */ int manPad[3];
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class StartLineSequence {  // size 0x010
public:
    /* 0x000 */ int mbBurnoutEnabled;
    /* 0x004 */ int mbBurningOut;
    /* 0x008 */ int mbReleaseEnabled;
    /* 0x00C */ int mbAcceleratorEnabled;
};

// declared in 1 file(s), e.g. gamesource\Sound\SoundTraffic.cpp
class STWave {  // size 0x008
public:
    /* 0x000 */ char *m_WaveName;
    /* 0x004 */ EWaveDictionary m_Dictionary;
};

// declared in 1 file(s), e.g. gamesource\Sound\SoundCar.cpp
class SWave {  // size 0x008
public:
    /* 0x000 */ char *m_WaveName;
    /* 0x004 */ EWaveDictionary m_Dictionary;
};

// declared in 1 file(s), e.g. gamesource\Race\CGhostCar.cpp
class t_GHOSTHEADER {  // size 0x00C
public:
    /* 0x000 */ int Version;
    /* 0x004 */ int NumGhostFrames;
    /* 0x008 */ float CurrGhostTime;
};

// declared in 1 file(s), e.g. gamesource\Race\CReplay.cpp
class t_REPLAY_HEADER {  // size 0x020
public:
    /* 0x000 */ int Version;
    /* 0x004 */ int NumFrames;
    /* 0x008 */ signed char GameMode;
    /* 0x009 */ signed char Track;
    /* 0x00A */ signed char CarID[4];
    /* 0x00E */ RwRGBA Color[4];
};

// declared in 1 file(s), e.g. gamesource\Race\CTrack.cpp
class t_TRACKPATH {  // size 0x00C
public:
    /* 0x000 */ int Index;
    /* 0x004 */ char *Path;
    /* 0x008 */ char *Name;
};

// declared in 1 file(s), e.g. p2resort.c
struct tagStackEntry {  // size 0x00C
    /* 0x000 */ unsigned char *l;
    /* 0x004 */ unsigned char *r;
    /* 0x008 */ unsigned int bit;
};

// declared in 1 file(s), e.g. p2define.c
struct tagTopSortData {  // size 0x008
    /* 0x000 */ RxPipeline *pipeline;
    /* 0x004 */ unsigned int nodesArraySlot;
};

// declared in 1 file(s), e.g. texcache.c
struct TexCacheState {  // size 0x040
    /* 0x000 */ u_long128 texFlushGsCommand;
    /* 0x010 */ u_long128 trxPos0GsCommand;
    /* 0x020 */ u_long128 trxDir0GsCommand;
    /* 0x030 */ u_long128 refUploadSetupGifTag5;
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class tGS_BGCOLOR {  // size 0x008
public:
    /* 0x000 */ unsigned int R : 8;  // bit offset 0
    /* 0x000 */ unsigned int G : 8;  // bit offset 8
    /* 0x000 */ unsigned int B : 8;  // bit offset 16
    /* 0x000 */ unsigned int p0 : 8;  // bit offset 24
    /* 0x004 */ unsigned int p1;
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class tGS_DISPFB1 {  // size 0x008
public:
    /* 0x000 */ unsigned int FBP : 9;  // bit offset 0
    /* 0x000 */ unsigned int FBW : 6;  // bit offset 9
    /* 0x000 */ unsigned int PSM : 5;  // bit offset 15
    /* 0x000 */ unsigned int p0 : 12;  // bit offset 20
    /* 0x004 */ unsigned int DBX : 11;  // bit offset 0
    /* 0x004 */ unsigned int DBY : 11;  // bit offset 11
    /* 0x004 */ unsigned int p1 : 10;  // bit offset 22
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class tGS_DISPFB2 {  // size 0x008
public:
    /* 0x000 */ unsigned int FBP : 9;  // bit offset 0
    /* 0x000 */ unsigned int FBW : 6;  // bit offset 9
    /* 0x000 */ unsigned int PSM : 5;  // bit offset 15
    /* 0x000 */ unsigned int p0 : 12;  // bit offset 20
    /* 0x004 */ unsigned int DBX : 11;  // bit offset 0
    /* 0x004 */ unsigned int DBY : 11;  // bit offset 11
    /* 0x004 */ unsigned int p1 : 10;  // bit offset 22
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class tGS_DISPLAY1 {  // size 0x008
public:
    /* 0x000 */ unsigned int DX : 12;  // bit offset 0
    /* 0x000 */ unsigned int DY : 11;  // bit offset 12
    /* 0x000 */ unsigned int MAGH : 4;  // bit offset 23
    /* 0x000 */ unsigned int MAGV : 2;  // bit offset 27
    /* 0x000 */ unsigned int p0 : 3;  // bit offset 29
    /* 0x004 */ unsigned int DW : 12;  // bit offset 0
    /* 0x004 */ unsigned int DH : 11;  // bit offset 12
    /* 0x004 */ unsigned int p1 : 9;  // bit offset 23
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class tGS_DISPLAY2 {  // size 0x008
public:
    /* 0x000 */ unsigned int DX : 12;  // bit offset 0
    /* 0x000 */ unsigned int DY : 11;  // bit offset 12
    /* 0x000 */ unsigned int MAGH : 4;  // bit offset 23
    /* 0x000 */ unsigned int MAGV : 2;  // bit offset 27
    /* 0x000 */ unsigned int p0 : 3;  // bit offset 29
    /* 0x004 */ unsigned int DW : 12;  // bit offset 0
    /* 0x004 */ unsigned int DH : 11;  // bit offset 12
    /* 0x004 */ unsigned int p1 : 9;  // bit offset 23
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class tGS_PMODE {  // size 0x008
public:
    /* 0x000 */ unsigned int EN1 : 1;  // bit offset 0
    /* 0x000 */ unsigned int EN2 : 1;  // bit offset 1
    /* 0x000 */ unsigned int CRTMD : 3;  // bit offset 2
    /* 0x000 */ unsigned int MMOD : 1;  // bit offset 5
    /* 0x000 */ unsigned int AMOD : 1;  // bit offset 6
    /* 0x000 */ unsigned int SLBG : 1;  // bit offset 7
    /* 0x000 */ unsigned int ALP : 8;  // bit offset 8
    /* 0x000 */ unsigned int p0 : 16;  // bit offset 16
    /* 0x004 */ unsigned int p1;
};

// declared in 1 file(s), e.g. gamesource\Render\CSun.cpp
class tGS_SMODE2 {  // size 0x008
public:
    /* 0x000 */ unsigned int INT : 1;  // bit offset 0
    /* 0x000 */ unsigned int FFMD : 1;  // bit offset 1
    /* 0x000 */ unsigned int DPMS : 2;  // bit offset 2
    /* 0x000 */ unsigned int p0 : 28;  // bit offset 4
    /* 0x004 */ unsigned int p1;
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\common\rwarpc.c
struct ThreadParam {  // size 0x030
    /* 0x000 */ int status;
    /* 0x004 */ void (*entry)(void *);
    /* 0x008 */ void *stack;
    /* 0x00C */ int stackSize;
    /* 0x010 */ void *gpReg;
    /* 0x014 */ int initPriority;
    /* 0x018 */ int currentPriority;
    /* 0x01C */ unsigned int attr;
    /* 0x020 */ unsigned int option;
    /* 0x024 */ int waitType;
    /* 0x028 */ int waitId;
    /* 0x02C */ int wakeupCount;
};

// declared in 58 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class TimeStamp {  // size 0x018
public:
    /* 0x000 */ long pts;
    /* 0x008 */ long dts;
    /* 0x010 */ int pos;
    /* 0x014 */ int len;
};

// declared in 1 file(s), e.g. bafsys.c
struct tm {  // size 0x024
    /* 0x000 */ int tm_sec;
    /* 0x004 */ int tm_min;
    /* 0x008 */ int tm_hour;
    /* 0x00C */ int tm_mday;
    /* 0x010 */ int tm_mon;
    /* 0x014 */ int tm_year;
    /* 0x018 */ int tm_wday;
    /* 0x01C */ int tm_yday;
    /* 0x020 */ int tm_isdst;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class TrackData {  // size 0x3E0
public:
    /* 0x000 */ int mnSeed;
    /* 0x004 */ int mnFirstCheckpointTime;
    /* 0x008 */ int mnNumLaps;
    /* 0x00C */ int mnNumTrafficVehicles;
    /* 0x010 */ EB2VehicleType maeTrafficVehicleTypes[32];
    /* 0x090 */ unsigned char mauTrafficVehicleTypeDistribution8[32];
    /* 0x0B0 */ unsigned char mauTrafficVehicleColourDistribution8[32][16];
    /* 0x2B0 */ float mrGlobalTrafficDensity;
    /* 0x2B4 */ ECarID maeStartType[3];
    /* 0x2C0 */ TriggerData mInitialTriggerData;
    /* 0x3D0 */ unsigned int mauStartHull[2];
    /* 0x3D8 */ int manPad[2];
};

// declared in 1 file(s), e.g. gamesource\Race\CTrack.cpp
class TrackWeatherParamsTag {  // size 0x024
public:
    /* 0x000 */ EPrecipitationType mePrecipitation;
    /* 0x004 */ float mrMinPrecipitationDensity;
    /* 0x008 */ float mrMaxPrecipitationDensity;
    /* 0x00C */ int mbWeatherOffNightlights;
    /* 0x010 */ int mbWeatherOnNightlights;
    /* 0x014 */ int mbWeatherOffReflections;
    /* 0x018 */ int mbWeatherOnReflections;
    /* 0x01C */ int mbWeatherOffSpray;
    /* 0x020 */ int mbWeatherOnSpray;
};

// declared in 1 file(s), e.g. gamesource\Race\CTrafficVehicle.cpp
class TrafficBeepData {  // size 0x008
public:
    /* 0x000 */ float mrStart;
    /* 0x004 */ float mrEnd;
};

// declared in 1 file(s), e.g. gamesource\Race\CTrafficVehicle.cpp
class TrafficBeepPatternData {  // size 0x020
public:
    /* 0x000 */ int mnNumBeeps;
    /* 0x004 */ float mrTotalDuration;
    /* 0x008 */ TrafficBeepData maTrafficBeepData[3];
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class TrafficCarStructure {  // size 0xF00
public:
    /* 0x000 */ EB2VehicleType meVehicleID;
    /* 0x004 */ float mrVehicleRadius;
    /* 0x008 */ int mnNumLODObjects[3];
    /* 0x014 */ GsPS2RenderObjectCar *mpLODObjects[3];
    /* 0x020 */ int mnNumFlyingObjects[3];
    /* 0x02C */ GsPS2RenderObjectCar *mpFlyingObjects[3];
    /* 0x038 */ short mnGlassMaterialIndices[3];
    /* 0x03E */ short mnPaddingData16;
    /* 0x040 */ int mnNumWheels;
    /* 0x044 */ float mrWheelRadii[6];
    /* 0x05C */ int mnWheelID;
    /* 0x060 */ RwTexture *mpTexture;
    /* 0x064 */ int mbFrontAxleExists;
    /* 0x068 */ float mrFrontAxleOffset;
    /* 0x06C */ int mbRearAxleExists;
    /* 0x070 */ float mrRearAxleOffset;
    /* 0x074 */ float mrGlassOpacity;
    /* 0x078 */ int mbMainSurfaceChangesColour;
    /* 0x07C */ int mbMainSurfaceHasEnvMap;
    /* 0x080 */ RwMatrixTag mMainMatrix;
    /* 0x0C0 */ RwMatrixTag mWheelMatrices[6];
    /* 0x240 */ RwMatrixTag mFlyingMatrices[3];
    /* 0x300 */ RwMatrixTag mWheelCache[6];
    /* 0x480 */ RwMatrixTag mFlyingCache[3];
    /* 0x540 */ SRCBBox mBBox;
    /* 0x560 */ SRCBBox mFlyingBBoxes[3];
    /* 0x5C0 */ TrafficPoint maTags[32];
    /* 0xBC0 */ TrafficPointOffset mFrontLights;
    /* 0xBC2 */ TrafficPointOffset mRearLights;
    /* 0xBC4 */ TrafficPointOffset mBrakeLights;
    /* 0xBC6 */ TrafficPointOffset mRunningLights;
    /* 0xBC8 */ TrafficPointOffset mLeftIndicators;
    /* 0xBCA */ TrafficPointOffset mRightIndicators;
    /* 0xBCC */ TrafficPointOffset mStrobes;
    /* 0xBCE */ TrafficPointOffset mExhaustPoints;
    /* 0xBD0 */ TrafficPointOffset mGlassPoints;
    /* 0xBD2 */ TrafficPointOffset mSteamPoints;
    /* 0xBD4 */ TrafficPointOffset mFirePoints;
    /* 0xBD6 */ short mnPaddingData16_2;
    /* 0xBD8 */ int manPaddingData_2[5];
    /* 0xBEC */ int mbBoundingHull;
    /* 0xBF0 */ BoundingHull mBoundingHull;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class TrafficFillerData {  // size 0x008
public:
    /* 0x000 */ unsigned short muLaneIndex16;
    /* 0x002 */ unsigned char mbFillerType8;
    /* 0x003 */ unsigned char muPad8;
    /* 0x004 */ unsigned short muStartFillerIndex16;
    /* 0x006 */ unsigned short muEndFillerIndex16;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class TrafficGeneratorData {  // size 0x008
public:
    /* 0x000 */ unsigned short muLaneIndex16;
    /* 0x002 */ unsigned short muPad16;
    /* 0x004 */ unsigned short muGenerateIndex16;
    /* 0x006 */ unsigned short muDestroyIndex16;
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class TrafficHullData {  // size 0x020
public:
    /* 0x000 */ int mnNumTrafficGenerators;
    /* 0x004 */ CTrafficGenerator *mpTrafficGenerators;
    /* 0x008 */ int mnNumTrafficFillers;
    /* 0x00C */ TrafficFillerData *mpTrafficFillerData;
    /* 0x010 */ int mnStartRacingLaneSegment;
    /* 0x014 */ int mnEndRacingLaneSegment;
    /* 0x018 */ float mrOuterBoundaryDistance;
    /* 0x01C */ float mrInnerBoundaryDistance;
};

// declared in 48 file(s), e.g. gamesource\Game\CProfile.cpp
class TrafficLightData {  // size 0x0B0
public:
    /* 0x000 */ unsigned char muInitialDelayTillGreen8;
    /* 0x001 */ unsigned char muTimeOnGreen8;
    /* 0x002 */ unsigned char muTimeOnOrange8;
    /* 0x003 */ unsigned char muTimeOnRed8;
    /* 0x004 */ unsigned char muNumPos8;
    /* 0x005 */ unsigned char muGroupIndex8;
    /* 0x006 */ unsigned short muNumLanes16;
    /* 0x008 */ short manStartNode16[4];
    /* 0x010 */ short manStopNode16[4];
    /* 0x018 */ short manEndNode16[4];
    /* 0x020 */ CLane *mapLanes[4];
    /* 0x030 */ RwV3d maCoronaPos[4];
    /* 0x060 */ RwV3d maCoronaDir[4];
    /* 0x090 */ float marCoronaSpacing[4];
    /* 0x0A0 */ float marCoronaHeightAboveRoad[4];
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class TrafficLightGroupData {  // size 0x020
public:
    /* 0x000 */ int mnNumTrafficLights;
    /* 0x004 */ unsigned char muNumMaxLaps8;
    /* 0x005 */ unsigned char muPeriod8;
    /* 0x006 */ unsigned char mauTrafficLightIndex8[18];
    /* 0x018 */ unsigned char mauTriggerTime8[8];
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class TrafficPoint {  // size 0x030
public:
    /* 0x000 */ RwV3d mPos;
    /* 0x00C */ int mnID;
    /* 0x010 */ RwV3d mNormal;
    /* 0x01C */ float mrSize;
    /* 0x020 */ RwRGBAReal mColour;
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class TrafficPointOffset {  // size 0x002
public:
    /* 0x000 */ signed char mnNumPoints;
    /* 0x001 */ signed char mnOffset;
};

// declared in 2 file(s), e.g. gamesource\Race\CTrafficSystem.cpp
class TrafficRaceCarInfo {  // size 0x060
public:
    /* 0x000 */ RwV3d mPosition;
    /* 0x00C */ int mbIsAPlayer;
    /* 0x010 */ RwMatrixTag *mpMatrix;
    /* 0x014 */ float supx;
    /* 0x018 */ float supz;
    /* 0x01C */ int mbCarHorn;
    /* 0x020 */ RwMatrixTag mMatrix;
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
class TrafficSegmentData {  // size 0x030
public:
    /* 0x000 */ unsigned short muChangeLaneIndices16[6];
    /* 0x00C */ unsigned short muChangeLaneSegments16[6];
    /* 0x018 */ unsigned char muChangeLaneWeightings8[11];
    /* 0x023 */ unsigned char muTrafficDensity8[7];
    /* 0x02A */ unsigned char muSpeed8;
    /* 0x02B */ unsigned char mxIndicate8;
    /* 0x02C */ unsigned char muProxDistance8;
    /* 0x02D */ unsigned char muMinTrafficLOD;
    /* 0x02E */ unsigned char mauChangeLaneDirection8[2];
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
class TrafficStreamStructure {  // size 0x18640
public:
    /* 0x000 */ unsigned int mxVersionNumber;
    /* 0x004 */ int mxLoadedState;
    /* 0x008 */ unsigned int munDataSize;
    /* 0x00C */ unsigned int munNumVehicles;
    /* 0x010 */ GsPS2RenderObjectCar *mpWheelObject;
    /* 0x014 */ RwTexture *mpWheelTexture;
    /* 0x018 */ int mnPaddingData[10];
    /* 0x040 */ TrafficCarStructure mTrafficModels[26];
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class TrailGroup {  // size 0x0B0
public:
    /* 0x000 */ short *mpGroupID;
    /* 0x004 */ RwV3d mBasePos;
    /* 0x010 */ RwV3d mVert;
    /* 0x01C */ int mSpawnIndex;
    /* 0x020 */ int mbSpawning;
    /* 0x024 */ int mbOldSpawning;
    /* 0x028 */ int mNumAlive;
    /* 0x02C */ TrailParams mParams;
    /* 0x084 */ float mMinSpawnDist;
    /* 0x088 */ RwRGBAReal mDiffColour;
    /* 0x098 */ float mDiffSize;
    /* 0x09C */ TSPosTime *mpPosTime[2];
    /* 0x0A4 */ TSTangFlag *mpTangFlag[2];
    /* 0x0AC */ int mMaxTrails;
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class TrailParams {  // size 0x058
public:
    /* 0x000 */ ETrailType mType;
    /* 0x004 */ char mTexName[32];
    /* 0x024 */ unsigned int mBlendMode;
    /* 0x028 */ float mStartSize;
    /* 0x02C */ float mEndSize;
    /* 0x030 */ RwRGBAReal mStartColour;
    /* 0x040 */ RwRGBAReal mEndColour;
    /* 0x050 */ float mBaseLife;
    /* 0x054 */ RwTexture *mpTexture;
};

// declared in 1 file(s), e.g. bameshop.c
struct TriBinEntry {  // size 0x024
    /* 0x000 */ unsigned int tri;
    /* 0x004 */ Edge *edge[3];
    /* 0x010 */ TriBinEntry *next;
    /* 0x014 */ TriBinEntry *prev;
    /* 0x018 */ int used;
    /* 0x01C */ int used2;
    /* 0x020 */ unsigned char adjCount;
};

// declared in 1 file(s), e.g. bameshop.c
struct TriBinList {  // size 0x004
    /* 0x000 */ TriBinEntry *head;
};

// declared in 81 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class TriggerData {  // size 0x110
public:
    /* 0x000 */ int mnAddTime;
    /* 0x004 */ int mnDelay;
    /* 0x008 */ unsigned int mxTriggerTargetEnable;
    /* 0x00C */ unsigned char muLap8;
    /* 0x00D */ unsigned char muSector8;
    /* 0x00E */ unsigned short muNumTargets16;
    /* 0x010 */ CTriggerTarget *mapTriggerTarget[32];
    /* 0x090 */ unsigned short mauTriggerStartDistance16[32];
    /* 0x0D0 */ unsigned short mauTriggerEndDistance16[32];
};

// declared in 81 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
class TriggerGroupData {  // size 0x044
public:
    /* 0x000 */ RwV3d mPosition;
    /* 0x00C */ ETriggerType meType;
    /* 0x010 */ RwV3d mPlaneNormal;
    /* 0x01C */ float mrRadius;
    /* 0x020 */ int mnNumTriggers;
    /* 0x024 */ CTrigger *mapTriggers[8];
};

// declared in 1 file(s), e.g. bameshop.c
struct TriStripList {  // size 0x004
    /* 0x000 */ TriStripListEntry *head;
};

// declared in 1 file(s), e.g. bameshop.c
struct TriStripListEntry {  // size 0x010
    /* 0x000 */ unsigned short *strip;
    /* 0x004 */ unsigned int stripLen;
    /* 0x008 */ unsigned int stripSize;
    /* 0x00C */ TriStripListEntry *next;
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class TSPosTime {  // size 0x010
public:
    /* 0x000 */ RwV3d pos;
    /* 0x00C */ float spawntime;
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class TSTangFlag {  // size 0x010
public:
    /* 0x000 */ RwV3d tang;
    /* 0x00C */ unsigned int flag;
};

// declared in 72 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp  // VARIANT 1 of 2
class UValue {  // size 0x004
public:
    /* 0x000 */ int mnRecord;
    /* 0x000 */ float mrRecord;
};

// declared in 72 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp  // VARIANT 2 of 2
class UValue {  // size 0x004
public:
    /* 0x000 */ unsigned int munRecord;
    /* 0x000 */ float mrRecord;
};

// declared in 58 file(s), e.g. gamesource\Game\CLessonLogic.cpp
class ViBuf {  // size 0x060
public:
    /* 0x000 */ u_long128 *data;
    /* 0x004 */ u_long128 *tag;
    /* 0x008 */ int n;
    /* 0x00C */ int dmaStart;
    /* 0x010 */ int dmaN;
    /* 0x014 */ int readBytes;
    /* 0x018 */ int buffSize;
    /* 0x01C */ sceIpuDmaEnv env;
    /* 0x040 */ int sema;
    /* 0x044 */ int isActive;
    /* 0x048 */ long totalBytes;
    /* 0x050 */ TimeStamp *ts;
    /* 0x054 */ int n_ts;
    /* 0x058 */ int count_ts;
    /* 0x05C */ int wt_ts;
};

// declared in 1 file(s), e.g. gamesource\Race\CGameData.cpp
class Weighting {  // size 0x002
public:
    /* 0x000 */ unsigned char muWeight8;
    /* 0x001 */ unsigned char muEnum8;
};

// declared in 1 file(s), e.g. gamesource\Race\CTrack.cpp
class WorldCollData {  // size 0x014
public:
    /* 0x000 */ RwV3d normal;
    /* 0x00C */ float distance;
    /* 0x010 */ int tag;
};

// declared in 57 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum eAIAvoidanceRiskType {  // size 4
    eAI_AVOID_RISK_NONE = 0,
    eAI_AVOID_HARD_NOGO_SIDES = 1,
    eAI_AVOID_HARD_NOGO_CENTRE = 2,
    eAI_AVOID_RISK_TRAFFIC = 3,
    eAI_AVOID_RISK_CRASHING_RACECAR = 4,
    eAI_AVOID_RISK_RACING_RACECAR = 5,
    eAI_AVOID_RISK_SOFT_NOGO = 6,
    eAI_AVOID_MAX_RISK = 7,
};

// declared in 1 file(s), e.g. gamesource\Race\CAICar.cpp
enum eAIDEBUG {  // size 4
    eAIDEBUG_MAIN = 0,
    eAIDEBUG_TARGET = 1,
    eAIDEBUG_AVOID = 2,
    eAIDEBUG_ARB = 3,
    eAIDEBUG_PHYSICS = 4,
    eAIDEBUG_DRIVER = 5,
    eAIDEBUG_MAX = 6,
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum EAISegmentTypes {  // size 4
    eAI_SEGMENT_SAMEWAY = 0,
    eAI_SEGMENT_ONCOMING = 1,
    eAI_SEGMENT_SAMEWAY_DETOUR = 2,
    eAI_SEGMENT_ONCOMING_DETOUR = 3,
    eAI_SEGMENT_SOFT_NOGO = 4,
    eAI_SEGMENT_HARD_NOGO = 5,
    eAI_SEGMENT_MAX_TYPES = 6,
};

// declared in 57 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum EAITargetCornerState {  // size 4
    eAITARGET_CORNER = 0,
    eAITARGET_STRAIGHT = 1,
    eAITARGET_UNKNOWN = 2,
    eAITARGET_CORNER_STATE_MAX = 3,
};

// declared in 57 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum EAITargetPositionWithinCorner {  // size 4
    eAITARGET_BEFORE_START = 0,
    eAITARGET_BETWEEN_START_APEX = 1,
    eAITARGET_BETWEEN_APEX_END = 2,
    eAITARGET_AFTER_END = 3,
    eAITARGET_NO_POSITION = 4,
    eAITARGET_POSITION_WITHIN_CORNER_MAX = 5,
};

// declared in 57 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum EAITargetTurnType {  // size 4
    eAITARGET_TURN_NONE = 0,
    eAITARGET_TURN_LEFT = 1,
    eAITARGET_TURN_HARD_LEFT = 2,
    eAITARGET_TURN_RIGHT = 3,
    eAITARGET_TURN_HARD_RIGHT = 4,
    eAITARGET_TURN_TYPE_MAX = 5,
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
enum EAspectRatio {  // size 4
    eASPECT_RATIO_4_3 = 0,
    eASPECT_RATIO_16_9 = 1,
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
enum EAutoSaveState {  // size 4
    eAS_STATE_CHECKSTART = 0,
    eAS_STATE_CHECKING = 1,
    eAS_STATE_SAVING = 2,
    eAS_STATE_SAVESUCCESS = 3,
    eAS_STATE_USERERROR = 4,
    eAS_STATE_USERERRORWARNDISABLE = 5,
    eAS_STATE_SAVEERROR = 6,
    eAS_STATE_SAVEERRORWARNDISABLE = 7,
    eAS_STATE_NUM = 8,
    eAS_STATE_PAD = -1,
};

// declared in 82 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
enum EB2PropType {  // size 4
    eB2PT_NONE = 0,
    eB2PT_TRAFFICCONE = 1,
    eB2PT_WOODBOX = 2,
    eB2PT_METALBOX = 3,
    eB2PT_BARRIER = 4,
    eB2PT_METALBARRIER = 5,
    eB2PT_SIGNPOST = 6,
    eB2PT_ROTATING = 7,
    eB2PT_CARDBOARDBOX = 8,
    eB2PT_CARWHEEL = 9,
    eB2PT_CARBODYWORK = 10,
    eB2PT_PAD = -1,
};

// declared in 89 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum EB2VehicleType {  // size 4
    eB2VEHICLE_NULL = 0,
    eB2VEHICLE_CAR_COMPACT = 1,
    eB2VEHICLE_CAR_ESTATE = 2,
    eB2VEHICLE_CAR_LUXURY = 3,
    eB2VEHICLE_CAR_PEOPLECARRIER = 4,
    eB2VEHICLE_CAR_PICKUP = 5,
    eB2VEHICLE_CAR_SUV = 6,
    eB2VEHICLE_CAR_TAXI = 7,
    eB2VEHICLE_VAN_STANDARD = 8,
    eB2VEHICLE_VAN_SOFTDRINKS = 9,
    eB2VEHICLE_BUS_TOWN = 10,
    eB2VEHICLE_BUS_STANDARD = 11,
    eB2VEHICLE_BUS_AIRPORT = 12,
    eB2VEHICLE_CAB_1 = 13,
    eB2VEHICLE_CAB_2 = 14,
    eB2VEHICLE_PAYLOAD_CABLE = 15,
    eB2VEHICLE_PAYLOAD_CONTAINER = 16,
    eB2VEHICLE_PAYLOAD_FLATBED = 17,
    eB2VEHICLE_PAYLOAD_PIPES = 18,
    eB2VEHICLE_PAYLOAD_TANKER = 19,
    eB2VEHICLE_PAYLOAD_TARPAULIN = 20,
    eB2VEHICLE_PROP_TRAIN_CARRIAGE = 21,
    eB2VEHICLE_PROP_TRAIN_ENGINE = 22,
    eB2VEHICLE_PROP_MONORAIL_CARRIAGE = 23,
    eB2VEHICLE_PROP_LIGHTAIRCRAFT = 24,
    eB2VEHICLE_PROP_AIRLINER = 25,
    eB2VEHICLE_MAX_TYPES = 26,
};

// declared in 113 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum EBoundingVolume {  // size 4
    eBV_SPHERE = 0,
    eBV_BOX = 1,
    eBV_HULL = 2,
};

// declared in 2 file(s), e.g. gamesource\Menu\CMenuGfxComponentButtons.cpp
enum EButtonImage {  // size 4
    eMENUIMAGE_BUTTON_TRIANGLE = 0,
    eMENUIMAGE_BUTTON_CROSS = 1,
    eMENUIMAGE_BUTTON_CIRCLE = 2,
    eMENUIMAGE_BUTTON_SQUARE = 3,
    eMENUIMAGE_SETTINGS_DPADH = 4,
    eMENUIMAGE_SETTINGS_DPADV = 5,
    eMENUIMAGE_SETTINGS_DPAD_LEFT = 6,
    eMENUIMAGE_SETTINGS_DPAD_RIGHT = 7,
    eMENUIMAGE_SETTINGS_DPAD_DOWN = 8,
    eMENUIMAGE_SETTINGS_DPAD_UP = 9,
    eMENUIMAGE_SETTINGS_SLIDEROFF = 10,
    eMENUIMAGE_SETTINGS_SLIDERON = 11,
    eMENUIMAGE_CAROUSEL_BACKGROUND = 12,
    eMENUIMAGE_CAROUSEL_OUTLINE = 13,
    eMENUIMAGE_CAROUSEL_SELECTED = 14,
    eMENUIMAGE_CAROUSEL_WREATH = 15,
    eMENUIMAGE_CAROUSEL_LARROW = 16,
    eMENUIMAGE_CAROUSEL_RARROW = 17,
    eMENUIMAGE_PANEL_TOPLEFT = 18,
    eMENUIMAGE_PANEL_TOPRIGHT = 19,
    eMENUIMAGE_PANEL_BOTTOMLEFT = 20,
    eMENUIMAGE_PANEL_BOTTOMRIGHT = 21,
    eMENUIMAGE_PANEL_LEFT = 22,
    eMENUIMAGE_PANEL_TOP = 23,
    eMENUIMAGE_PANEL_RIGHT = 24,
    eMENUIMAGE_PANEL_BOTTOM = 25,
    eMENUIMAGE_PANEL_FILL = 26,
    eMENUIMAGE_BORDER_TOP = 27,
    eMENUIMAGE_BORDER_TOPRIGHT = 28,
    eMENUIMAGE_BORDER_RIGHT = 29,
    eMENUIMAGE_BORDER_BOTTOMRIGHT = 30,
    eMENUIMAGE_BORDER_BOTTOM = 31,
    eMENUIMAGE_BORDER_FILL = 32,
    eMENUIMAGE_BORDER_CLEAR = 33,
    eMENUIMAGE_TRACKBUTTON = 34,
    eMENUIMAGE_REVERSETRACKBUTTON = 49,
    eMENUIMAGE_REVERSETRACKICON = 50,
    eMENUIMAGE_NUM = 51,
    eMENUIMAGE_NONE = 51,
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageMemoryCard.cpp
enum EButtonListState {  // size 4
    eBLS_DISABLE = 0,
    eBLS_LOCKED = 1,
    eBLS_NO_SAVE = 2,
    eBLS_SAVE_ONLY = 3,
    eBLS_LOAD_AND_SAVE = 4,
    eBLS_NUM = 5,
    eBLS_PAD = -1,
};

// declared in 92 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum ECameraMode {  // size 4
    eCAMERA_BUMPER = 0,
    eCAMERA_FOLLOW = 1,
    eCAMERA_LOOKBACK = 2,
    eCAMERA_LOOKBACKEXTERNAL = 3,
    eCAMERA_STATIC = 4,
    eCAMERA_STATIC_PAN = 5,
    eCAMERA_HELICAM = 6,
    eCAMERA_WING = 7,
    eCAMERA_CHASE = 8,
    eCAMERA_LEAD = 9,
    eCAMERA_CRASH = 10,
    eCAMERA_CRASHFLYBY = 11,
    eCAMERA_SPLINE_PAN = 12,
    eCAMERA_SPLINE = 13,
    eCAMERA_USER_CONTROLLED = 14,
    eCAMERA_CRASHSITEVIEW = 15,
    eCAMERA_DEBUG_TOPDOWN = 16,
    eCAMERA_DEBUG_TOPDOWN_LOWER = 17,
    eCAMERA_PURSUIT_STARTLINE = 18,
    eCAMERA_PURSUIT_END = 19,
    eCAMERA_MAX = 20,
};

// declared in 123 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum ECarID {  // size 4
    eCAR_NONE = -1,
    eCAR_COMPACT = 0,
    eCAR_COUPE = 1,
    eCAR_SPORT = 2,
    eCAR_ROADSTER = 3,
    eCAR_PICKUP = 4,
    eCAR_MUSCLE = 5,
    eCAR_SUV = 6,
    eCAR_COMPACT_CS = 7,
    eCAR_COUPE_CS = 8,
    eCAR_SPORT_CS = 9,
    eCAR_ROADSTER_CS = 10,
    eCAR_PICKUP_CS = 11,
    eCAR_MUSCLE_CS = 12,
    eCAR_SUV_CS = 13,
    eCAR_POLICE = 14,
    eCAR_HOTROD = 15,
    eCAR_OVALRACER = 16,
    eCAR_JAPANESE_MUSCLE = 17,
    eCAR_SUPER = 18,
    eCAR_CLASSIC = 19,
    eCAR_GANGSTER = 20,
    eCAR_DRIVING_SCHOOL = 21,
    eCAR_NUM_CARS = 22,
};

// declared in 3 file(s), e.g. gamesource\Race\CAICar.cpp
enum EChaseState {  // size 4
    eCHASESTATE_NO_CRASHES = 0,
    eCHASESTATE_POLICE_CRASHING = 1,
    eCHASESTATE_SUSPECT_CRASHING = 2,
    eNUM_CHASESTATES = 3,
};

// declared in 6 file(s), e.g. gamesource\Game\CProfile.cpp
enum ECheat {  // size 4
    eCHEAT_NONE = -1,
    eCHEAT_FREERUN = 0,
    eCHEAT_FACEOFF = 1,
    eCHEAT_NUM = 2,
};

// declared in 113 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum ECollidingBodyType {  // size 4
    eCRB_RACECAR = 0,
    eCRB_TRAFFICCAR = 1,
    eCRB_TRAFFICARTICULATED = 2,
    eCRB_PROP = 3,
};

// declared in 2 file(s), e.g. gamesource\Race\CRace.cpp
enum ECollisionObjectType {  // size 4
    eCOLLISIONOBJECT_RACECAR = 0,
    eCOLLISIONOBJECT_COLLIDINGRIGIDBODY = 1,
    eCOLLISIONOBJECT_TRAFFICVEHICLE = 2,
    eCOLLISIONOBJECT_STATICPROP = 3,
    eCOLLISIONOBJECT_COUNT = 4,
};

// declared in 113 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum ECollisionTag {  // size 4
    eCTAG_NONE = 0,
    eCTAG_ROADTARMAC = 1,
    eCTAG_ROADCONCRETE = 2,
    eCTAG_WHITECHEVRONS = 3,
    eCTAG_ROADDIRT = 4,
    eCTAG_ROADGRAVEL = 5,
    eCTAG_OFFLINETARMAC = 6,
    eCTAG_OFFLINECONCRETE = 7,
    eCTAG_OFFLINEDIRT = 8,
    eCTAG_OFFLINEGRASS = 9,
    eCTAG_OFFLINEGRAVEL = 10,
    eCTAG_PAVEMENT = 11,
    eCTAG_SAND = 12,
    eCTAG_SNOW = 13,
    eCTAG_WALLDIRTBANK = 14,
    eCTAG_WALLRAILINGS = 15,
    eCTAG_WALLARMCO = 16,
    eCTAG_WALLSTONE = 17,
    eCTAG_WALLHEDGE = 18,
    eCTAG_WALLWOODFENCE = 19,
    eCTAG_WALLCHAINFENCE = 20,
    eCTAG_WALLCORRMETAL = 21,
    eCTAG_WALLBILLBOARDS = 22,
    eCTAG_WALLBARRIERS = 23,
    eCTAG_WALLTREES = 24,
    eCTAG_INVISIBLE = 25,
    eCTAG_CAMERA = 26,
    eCTAG_SHADOW = 27,
    eCTAG_GAMECHEVRONS = 28,
    eCTAG_DRIVECOLLIDEONLY = 29,
    eCTAG_MISC_1 = 30,
    eCTAG_MISC_2 = 31,
    eCTAG_MISC_3 = 32,
    eCTAG_MISC_4 = 33,
    eCTAG_MISC_5 = 34,
    eCTAG_MISC_6 = 35,
    eCTAG_MISC_7 = 36,
    eCTAG_MISC_8 = 37,
    eCTAG_CRASHRAMP = 38,
    eCTAG_NUMTAGS = 39,
};

// declared in 72 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum EControllerRemoved {  // size 4
    eCONTROLLER_NONE_REMOVED = 0,
    eCONTROLLER_PLAYER1_REMOVED = 1,
    eCONTROLLER_PLAYER2_REMOVED = 2,
    eCONTROLLER_BOTH_REMOVED = 3,
};

// declared in 3 file(s), e.g. gamesource\Physics\CVehiclePhysics.cpp
enum ECPUMonitorPage {  // size 4
    eCPU_MONITOR_PAGE_GENERAL = 0,
    eCPU_MONITOR_PAGE_AI_CARS0 = 1,
    eCPU_MONITOR_PAGE_AI_CARS1 = 2,
    eCPU_MONITOR_PAGE_AI_CARS2 = 3,
    eCPU_MONITOR_PAGE_AI_CARS3 = 4,
    eCPU_MONITOR_PAGE_MAX = 5,
};

// declared in 1 file(s), e.g. gamesource\Sound\SoundValueDB.cpp
enum ECrashAudioPage {  // size 4
    eCrashPage_Crash = 0,
    eCrashPage_Nudges = 1,
    eCrashPage_GlassSmashes = 2,
    eCrashPage_ScrapesArmco = 3,
    eCrashPage_ScrapesRailing = 4,
    eCrashPage_ScrapesStone = 5,
    eCrashPage_ScrapesGeneric = 6,
    eCrashPage_WorldImpactsArmco = 7,
    eCrashPage_WorldImpactsRailing = 8,
    eCrashPage_WorldImpactsStone = 9,
    eCrashPage_WorldImpactsGeneric = 10,
    eCrashPage_MaxPages = 11,
};

// declared in 1 file(s), e.g. gamesource\Render\CCrashReplayCamera.cpp
enum ECrashCamType {  // size 4
    eCAMERA_PLAYER_TRACK = 0,
    eCAMERA_PLAYER_PAN = 1,
    eCAMERA_INTEREST_TRACK = 2,
    eCAMERA_INTEREST_PAN = 3,
    eCAMERA_INTEREST_PLAYERCAR = 4,
    eCAMERA_CARNAGE_CAM = 5,
    eCAMERA_NUM_TYPES = 6,
};

// declared in 1 file(s), e.g. gamesource\Hud\CHudComponentCrashDamageScore.cpp
enum ECrashDamageText {  // size 4
    eDAMAGETITLE_TEXT = 0,
    eDAMAGESCORE_TEXT = 1,
    eBONUSTITLE_TEXT = 2,
    eBONUSMULTIPLIER_TEXT = 3,
    ePOPUP1_TEXT = 4,
    ePOPUP2_TEXT = 5,
    ePOPUP3_TEXT = 6,
    eNUM_TEXTS = 7,
};

// declared in 58 file(s), e.g. gamesource\Game\CCrashForCashData.cpp
enum ECrashGroup {  // size 4
    eCRASH_GROUP1 = 0,
    eCRASH_GROUP2 = 1,
    eCRASH_GROUP3 = 2,
    eCRASH_GROUP4 = 3,
    eCRASH_GROUP5 = 4,
    eNUM_CRASH_GROUPS = 5,
};

// declared in 7 file(s), e.g. gamesource\Game\CCrashForCashData.cpp
enum ECrashMedal {  // size 4
    eCRASH_NO_MEDAL = 0,
    eCRASH_BRONZE_MEDAL = 1,
    eCRASH_SILVER_MEDAL = 2,
    eCRASH_GOLD_MEDAL = 3,
    eNUM_CRASH_MEDALS = 4,
};

// declared in 1 file(s), e.g. gamesource\Game\CCrashForCashData.cpp
enum ECrashMedalThreshold {  // size 4
    eCRASH_BRONZE_THRESHOLD = 0,
    eCRASH_SILVER_THRESHOLD = 1,
    eCRASH_GOLD_THRESHOLD = 2,
    eNUM_CRASH_MEDAL_THRESHOLDS = 3,
};

// declared in 1 file(s), e.g. gamesource\Sound\GameSound.cpp
enum eCrashType {  // size 4
    eCrashType_Crash = 0,
    eCrashType_Nudge = 1,
    eCrashType_GlassSmash = 2,
    eCrashType_WorldImpact = 3,
    eCrashType_TyreBounce = 4,
    eCrashType_MetalProp = 5,
    eCrashType_GenericProp = 6,
    eCrashType_CardboardProp = 7,
    eCrashType_MetalBarrierProp = 8,
    eCrashType_SignpostProp = 9,
    eCrashType_TrafficConeProp = 10,
    eCrashType_WoodBarrierProp = 11,
    eCrashType_KerbBounce = 12,
    eCrashType_ComponentRemove = 13,
    eCrashType_Ntypes = 14,
};

// declared in 1 file(s), e.g. gamesource\Hud\CHudComponentCrashValue.cpp
enum ECrashValueText {  // size 4
    eCRASHVALUE_NONE = -1,
    eCRASHVALUE_TEXT1 = 0,
    eCRASHVALUE_TEXT2 = 1,
    eCRASHVALUE_TEXT3 = 2,
    eNUM_CRASHVALUE_TEXT = 3,
};

// declared in 57 file(s), e.g. gamesource\Game\CCrashForCashData.cpp
enum ECrashZone {  // size 4
    eCRASH_ZONE1 = 0,
    eCRASH_ZONE2 = 1,
    eCRASH_ZONE3 = 2,
    eCRASH_ZONE4 = 3,
    eCRASH_ZONE5 = 4,
    eCRASH_ZONE6 = 5,
    eCRASH_ZONE7 = 6,
    eCRASH_ZONE8 = 7,
    eCRASH_ZONE9 = 8,
    eCRASH_ZONE10 = 9,
    eCRASH_ZONE11 = 10,
    eCRASH_ZONE12 = 11,
    eCRASH_ZONE13 = 12,
    eCRASH_ZONE14 = 13,
    eCRASH_ZONE15 = 14,
    eNUM_CRASH_ZONES = 15,
};

// declared in 72 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum ECredits {  // size 4
    eCREDITS_NONE = 0,
    eCREDITS_BASIC = 1,
    eCREDITS_FINAL = 2,
};

// declared in 2 file(s), e.g. gamesource\Sound\GameSound.cpp
enum eCurrentScrapeType {  // size 4
    ESFXCurrent_NoScrape = 0,
    ESFXCurrent_ArmcoScrape = 1,
    ESFXCurrent_StoneScrape = 2,
    ESFXCurrent_GenericScrape = 3,
    ESFXCurrent_RailScrape = 4,
    ESFXCurrent_ScrapeNTypes = 5,
    ESFXCurrent_ForceLong = 134217727,
};

// declared in 3 file(s), e.g. gamesource\Physics\CVehiclePhysics.cpp
enum EDebugModes {  // size 4
    eDEBUG_NODEBUG = 0,
    eDEBUG_AIAVOIDANCE = 1,
    eDEBUG_APPPROFILE = 2,
    eDEBUG_AICARDEBUG = 3,
    eDEBUG_TRAFFICDEBUG = 4,
    eDEBUG_GAMEDATADEBUG = 5,
    eDEBUG_COLLISIONS = 6,
    eDEBUG_SOUNDTRAFFICHORNS = 7,
    eDEBUG_SOUNDENGINE = 8,
    eDEBUG_AIRACING = 9,
    eDEBUG_COLLISIONTAGS = 10,
    eDEBUG_WORLDMIPMAPEDITOR = 11,
    eDEBUG_VALUEEDITOR = 12,
    eDEBUG_CPUMONITOR = 13,
    eDEBUG_RACECARCOLOUR = 14,
    eDEBUG_AILANES = 15,
    eDEBUG_ONSCREEN = 16,
    eDEBUG_RACECAR = 17,
    eDEBUG_WEATHER = 18,
    eDEBUG_SCREENSHOT = 19,
    eDEBUG_MAX = 20,
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum EDriftState {  // size 4
    eDRIFT_NONE = 0,
    eDRIFT_FACINGRIGHT = 1,
    eDRIFT_FACINGLEFT = 2,
    eDRIFT_DISABLED = 3,
    eDRIFT_AIOVERRIDE = 4,
};

// declared in 98 file(s), e.g. gamesource\Game\CLessonLogic.cpp
enum EFileError {  // size 4
    eGTF_ERROR_NOERROR = 0,
    eGTF_ERROR_FILESYSTEM = 1,
    eGTF_ERROR_FILE = 2,
    eGTF_ERROR_DISKFULL = 3,
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\GTFileSystemPS2DVD.cpp
enum EFileMoveMethod {  // size 4
    eGTF_BEGIN = 0,
    eGTF_CURRENT = 1,
    eGTF_END = 2,
};

// declared in 98 file(s), e.g. gamesource\Game\CLessonLogic.cpp
enum EFileStatus {  // size 4
    eGTF_STATUS_CLOSED = 0,
    eGTF_STATUS_READY = 1,
    eGTF_STATUS_BUSY = 2,
    eGTF_STATUS_ERROR = 3,
};

// declared in 98 file(s), e.g. gamesource\Game\CLessonLogic.cpp
enum EFileSystemError {  // size 4
    eGTFS_ERROR_NOERROR = 0,
    eGTFS_ERROR_TOOMANYFILESYSTEMS = 1,
    eGTFS_ERROR_FILENOTFOUND = 2,
    eGTFS_ERROR_TOOMANYOPENFILES = 3,
    eGTFS_ERROR_WRITEPROTECTED = 4,
    eGTFS_ERROR_FILENAMETOOLONG = 5,
};

// declared in 98 file(s), e.g. gamesource\Game\CLessonLogic.cpp
enum EFileSystemStatus {  // size 4
    eGTFS_STATUS_NOTREADY = 0,
    eGTFS_STATUS_READY = 1,
    eGTFS_STATUS_DOOROPEN = 2,
    eGTFS_STATUS_NOMEDIA = 3,
    eGTFS_STATUS_WRONGMEDIA = 4,
    eGTFS_STATUS_RETRYING = 5,
};

// declared in 1 file(s), e.g. gamesource\Sound\GameSound.cpp
enum eFrontEndSFXEvent {  // size 4
    eFE_TICK = 0,
    eFE_CONFIRM_BIG = 1,
    eFE_CONFIRM_SMALL = 2,
    eFE_CANCEL = 3,
    eFE_ILLEGAL = 4,
    eFE_GEARCHANGE = 5,
    eFE_COLOURCHANGE = 6,
    eFE_RESET_SETTINGS = 7,
    eFE_TRACK_REV_CHANGE = 8,
    eFE_TRACK_FWD_CHANGE = 9,
    eFE_FLAME_LOOP = 10,
    eFE_MAIN_MENU_MOVE = 11,
    eFE_EDGE_MENU_MOVE = 12,
    eFE_ROTATE = 13,
    eFE_MAP_ZOOM = 14,
    eFE_SFX_TEST = 15,
    eFE_SPEECH_TEST = 16,
    eFE_FE_MOVE_V = 17,
    eFE_FE_MOVE_H = 18,
    eFE_FE_IN = 19,
    eFE_FE_OUT = 20,
    eFE_FE_ENTER = 21,
    eFE_FE_DELETE = 22,
    eFE_FE_TICK = 23,
    eFE_Ntypes = 24,
    eFE_ForceLong = 134217727,
};

// declared in 95 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum EGameMode {  // size 4
    eGAMEMODE_FRONTEND = 0,
    eGAMEMODE_ONEPLAYERRACE = 1,
    eGAMEMODE_ONEPLAYERGRANDPRIX = 2,
    eGAMEMODE_ONEPLAYERPURSUIT = 3,
    eGAMEMODE_ONEPLAYERCHAMPIONSHIPPURSUIT = 4,
    eGAMEMODE_ONEPLAYERFACEOFF = 5,
    eGAMEMODE_ONEPLAYERCHAMPIONSHIPFACEOFF = 6,
    eGAMEMODE_ONEPLAYERCRASH = 7,
    eGAMEMODE_ONEPLAYERTIMEATTACK = 8,
    eGAMEMODE_ONEPLAYERFREERUN = 9,
    eGAMEMODE_TWOPLAYERSSRACE = 10,
    eGAMEMODE_TWOPLAYERSSFACEOFF = 11,
    eGAMEMODE_TWOPLAYERSSPURSUIT = 12,
    eGAMEMODE_TURNBASEDGAME = 13,
    eGAMEMODE_TURNBASEDCRASH = 14,
    eGAMEMODE_DRIVINGLESSON = 15,
    eGAMEMODE_ILINKRACE = 16,
    eGAMEMODE_ILINKFREERUN = 17,
    eGAMEMODE_CREDITS = 18,
    eGAMEMODE_DEMOLOOP = 19,
    eGAMEMODE_CARVIEWER = 20,
    eGAMEMODE_NUM_GAMEMODES = 21,
};

// declared in 2 file(s), e.g. gamesource\Race\CGameData.cpp
enum EGameModeUniqueTypes {  // size 4
    eGAMEMODE_NORMAL = 0,
    eGAMEMODE_CUSTOM_SERIES = 1,
    eGAMEMODE_TIME_ATTACK = 2,
    eGAMEMODE_PURSUIT = 3,
    eGAMEMODE_CRASH = 4,
    eGAMEMODE_DRIVERS_ED = 5,
    eGAMEMODE_MAX_UNIQUE_TYPES = 6,
};

// declared in 89 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum EGlassState {  // size 4
    eGLASS_NORMAL = 0,
    eGLASS_CRACKED = 1,
    eGLASS_SHATTERED = 2,
};

// declared in 99 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum EGSPS2PipelineID {  // size 4
    eGSPS2PIPELINE_PRELITWORLD = 0,
    eGSPS2PIPELINE_PRELITWORLD_BFC = 1,
    eGSPS2PIPELINE_PRELITWORLD_SPECULAR = 2,
    eGSPS2PIPELINE_PRELITWORLD_BFC_SPECULAR = 3,
    eGSPS2PIPELINE_PRELITWORLD_WATER = 4,
    eGSPS2PIPELINE_PRELITWORLD_GLASS = 5,
    eGSPS2PIPELINE_PRELITWORLD_BFC_GLASS = 6,
    eGSPS2PIPELINE_PRELITINSTANCES = 7,
};

// declared in 1 file(s), e.g. gamesource\Sound\GameSound.cpp
enum eHudSFXEvent {  // size 4
    eFE_HUD_Three = 0,
    eFE_HUD_Two = 1,
    eFE_HUD_One = 2,
    eFE_HUD_Go = 3,
    eFE_HUD_TimeAdded = 4,
    eFE_HUD_TimerCountDown = 5,
    eFE_HUD_PerfectLap = 6,
    eFE_HUD_FinalLap = 7,
    eFE_HUD_SplitTime = 8,
    eFE_HUD_OncomingTick = 9,
    eFE_HUD_OncomingFinish = 10,
    eFE_HUD_DriftTick = 11,
    eFE_HUD_DriftFinish = 12,
    eFE_HUD_NearMiss = 13,
    eFE_HUD_AirtimeTick = 14,
    eFE_HUD_AirtimeFinish = 15,
    eFE_HUD_BoostReady = 16,
    eFE_HUD_MenuMove = 17,
    eFE_HUD_Selection = 18,
    eFE_HUD_Cancel = 19,
    eFE_HUD_VolumeTick = 20,
    eFE_HUD_CheckPoint = 21,
    eFE_HUD_NTypes = 22,
};

// declared in 1 file(s), e.g. gamesource\Render\CCoronas.cpp
enum EInGameCoronaType {  // size 4
    eCTYPE_SPOTGLOW = 0,
    eCTYPE_REFLECTED = 1,
    eCTYPE_GLOW = 2,
    eCTYPE_STAR = 3,
    eCTYPE_HEADLIGHT = 4,
    eCTYPE_NUM_TYPES = 5,
};

// declared in 68 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
enum EIntroState {  // size 4
    eSTATE_IDLE = 0,
    eSTATE_PLAYING = 1,
    eSTATE_FINISHING = 2,
    eSTATE_FINISHED = 3,
    eSTATE_SKIP = 4,
};

// declared in 4 file(s), e.g. gamesource\Menu\CMenuPageIntro.cpp
enum EIntroType {  // size 4
    eINTRO_1PLAYER = 0,
    eINTRO_2PLAYER = 1,
    eOUTRO_1PLAYER = 2,
    eOUTRO_2PLAYER = 3,
    eINTRO_REPLAY = 4,
    eINTRO_MAX_TYPES = 5,
};

// declared in 57 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum ELaneDirection {  // size 4
    eLANE_DIRECTION_INSIDE = 0,
    eLANE_DIRECTION_LEFT = 1,
    eLANE_DIRECTION_RIGHT = 2,
    eLANE_DIRECTION_FWD = 4,
    eLANE_DIRECTION_BACK = 8,
    eLANE_DIRECTION_MAX = 16,
};

// declared in 74 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum ELanguage {  // size 4
    eUSENGLISH = 0,
    eUKENGLISH = 1,
    eFRENCH = 2,
    eSPANISH = 3,
    eITALIAN = 4,
    eGERMAN = 5,
    eJAPANESE = 6,
    eLANGUAGE_MAX = 7,
};

// declared in 73 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum ELessonID {  // size 4
    eLESSON_NONE = -1,
    eLESSON_ONE = 0,
    eLESSON_TWO = 1,
    eLESSON_THREE = 2,
    eLESSON_FOUR = 3,
    eLESSON_FIVE = 4,
    eLESSON_SIX = 5,
    eLESSON_NUM_LESSONS = 6,
};

// declared in 72 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum ELessonMedal {  // size 4
    eLESSON_MEDAL_FAIL = -2,
    eLESSON_MEDAL_NONE = -1,
    eLESSON_MEDAL_BRONZE = 0,
    eLESSON_MEDAL_SILVER = 1,
    eLESSON_MEDAL_GOLD = 2,
    eLESSON_NUM_MEDALS = 3,
};

// declared in 5 file(s), e.g. gamesource\Game\CDrivingLessonProgression.cpp
enum ELessonObjective {  // size 4
    eLESSON_OBJECTIVE_TIME = 0,
    eLESSON_OBJECTIVE_ONCOMING = 1,
    eLESSON_OBJECTIVE_NEAR_MISSES = 2,
    eLESSON_OBJECTIVE_DRIFT = 3,
    eLESSON_OBJECTIVE_AIR = 4,
    eLESSON_OBJECTIVE_CHAINED_BURNOUTS = 5,
    eLESSON_OBJECTIVE_NUM_OBJECTIVES = 6,
};

// declared in 3 file(s), e.g. gamesource\Menu\CMenuPageMemoryCard.cpp
enum EMemDevError {  // size 4
    eMEMDEV_OK = 0,
    eMEMDEV_ERROR_NO_CARD = 1,
    eMEMDEV_ERROR_CARD_CHANGED = 2,
    eMEMDEV_ERROR_NOT_FORMATTED = 3,
    eMEMDEV_ERROR_WRONG_REGION = 4,
    eMEMDEV_ERROR_CARD_CORRUPT = 5,
    eMEMDEV_ERROR_CARD_DAMAGED = 6,
    eMEMDEV_ERROR_INCOMPATIBLE = 7,
    eMEMDEV_ERROR_NO_FILE = 8,
    eMEMDEV_ERROR_FILE_CORRUPT = 9,
    eMEMDEV_ERROR_INSUFFICIENT_SPACE = 10,
    eMEMDEV_ERROR_INSUFFICIENT_FILES = 11,
    eMEMDEV_ERROR = 12,
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\MemoryCard\ps2\GTMemoryDevicePS2.cpp
enum EMemDevPollOrWait {  // size 4
    eMEMDEV_POLL = 0,
    eMEMDEV_WAIT = 1,
};

// declared in 3 file(s), e.g. gamesource\Menu\CMenuPageMemoryCard.cpp
enum EMemDevStatus {  // size 4
    eMEMDEV_STATUS_IDLE = 0,
    eMEMDEV_STATUS_BUSY = 1,
    eMEMDEV_STATUS_MOUNTING = 2,
    eMEMDEV_STATUS_UNMOUNTING = 3,
    eMEMDEV_STATUS_OPENING = 4,
    eMEMDEV_STATUS_CLOSING = 5,
    eMEMDEV_STATUS_DELETING = 6,
    eMEMDEV_STATUS_READING = 7,
    eMEMDEV_STATUS_WRITING = 8,
    eMEMDEV_STATUS_FORMATTING = 9,
    eMEMDEV_STATUS_MKDIRING = 10,
    eMEMDEV_STATUS_FILESIZING = 11,
    eMEMDEV_STATUS_ERROR = 12,
    eMEMDEV_STATUS_MAX = 13,
};

// declared in 2 file(s), e.g. gamesource\Menu\CMenuPageMemoryCard.cpp
enum EMemoryCardCheckResult {  // size 4
    eMCCR_NOSAVE = 0,
    eMCCR_INSUFFICIENTSPACE = 1,
    eMCCR_CORRUPT = 2,
    eMCCR_SAME = 3,
    eMCCR_DIFFERENT = 4,
    eMCCR_NUM = 5,
    eMCCR_PAD = -1,
};

// declared in 2 file(s), e.g. gamesource\Menu\CMenuPageMemoryCard.cpp
enum EMemoryCardOperation {  // size 4
    eMCO_NONE = 0,
    eMCO_SAVE = 1,
    eMCO_CHECK = 2,
    eMCO_LOAD = 3,
    eMCO_FORMAT = 4,
    eMCO_PAD = -1,
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageMemoryCard.cpp
enum EMemoryCardPageState {  // size 4
    MCPS_NONE = 0,
    MCPS_NOSAVE = 1,
    MCPS_CHECKSTART = 2,
    MCPS_CHECKING = 3,
    MCPS_CHECKED = 4,
    MCPS_CHECKERROR = 5,
    MCPS_CHECKUNFORMATTED = 6,
    MCPS_NAMEENTRY = 7,
    MCPS_NAMEENTRYUNFORMATTED = 8,
    MCPS_FORMATSTART = 9,
    MCPS_FORMATTING = 10,
    MCPS_FORMATERROR = 11,
    MCPS_FORMATPROMPT = 12,
    MCPS_SAVESTART = 13,
    MCPS_SAVING = 14,
    MCPS_SAVED = 15,
    MCPS_SAVEERROR = 16,
    MCPS_OVERWRITEPROMPT = 17,
    MCPS_LOADSTART = 18,
    MCPS_LOADED = 19,
    MCPS_LOADERROR = 20,
    MCPS_LOSEDATAPROMPT = 21,
    MCPS_NUM = 22,
    MCPS_PAD = -1,
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
enum EMemoryCardScreenID {  // size 4
    eMEMORYCARDSCREEN_INITIAL = 1,
    eMEMORYCARDSCREEN_MAIN = 2,
    eMEMORYCARDSCREEN_PAD = -1,
};

// declared in 2 file(s), e.g. gamesource\Menu\CMenuPageMemoryCard.cpp
enum EMemoryCardState {  // size 4
    eMCS_READY = 0,
    eMCS_BUSY = 1,
    eMCS_ERROR = 2,
    eMCS_PAD = -1,
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
enum EMenuBackButtons {  // size 4
    eBACK_BUTTON_NONE = 0,
    eBACK_BUTTON_BACK = 1,
    eBACK_BUTTON_CANCEL = 2,
    eBACK_BUTTON_REPLAY = 3,
    eBACK_BUTTON_NUM = 4,
    eBACK_BUTTON_PAD = -1,
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
enum EMenuConfirmButtons {  // size 4
    eCONFIRM_BUTTON_NONE = 0,
    eCONFIRM_BUTTON_CONFIRM = 1,
    eCONFIRM_BUTTON_SELECT = 2,
    eCONFIRM_BUTTON_CONTINUE = 3,
    eCONFIRM_BUTTON_NUM = 4,
    eCONFIRM_BUTTON_PAD = -1,
};

// declared in 6 file(s), e.g. gamesource\Menu\CMenuGfxComponentSummary.cpp
enum EMenuFont {  // size 4
    eFONT_HEADLINE = 0,
    eFONT_BODY = 1,
    eFONT_BIGNUMBERS = 2,
    eNUM_FONTS = 3,
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
enum EMenuPage {  // size 4
    eMENU_NONE = -1,
    eMENU_MAIN = 0,
    eMENU_CARSELECT = 1,
    eMENU_TRACKSELECT = 2,
    eMENU_CHAMPIONSHIPSELECT = 3,
    eMENU_CRASHPLAYERSSELECT = 4,
    eMENU_CRASHGROUPSELECT = 5,
    eMENU_ONEPLAYERCRASHZONESELECT = 6,
    eMENU_LESSON_SELECT = 7,
    eMENU_LESSON_SUMMARY = 8,
    eMENU_RECORDS = 9,
    eMENU_PROFILEVIEW = 10,
    eMENU_MEMORYCARD = 11,
    eMENU_SETTINGS = 12,
    eMENU_SPLASHSCREENS = 13,
    eMENU_CREDITS = 14,
    eMENU_PAUSE = 15,
    eMENU_INTRO = 16,
    eMENU_OUTRO = 17,
    eMENU_RESULTS = 18,
    eMENU_GETREADY = 19,
    eMENU_LOADING = 20,
    eNUM_MENUS = 21,
};

// declared in 7 file(s), e.g. gamesource\Hud\CHudComponentCrashDamageScore.cpp
enum EMenuRaster {  // size 4
    eRASTER_CRITERION_LOGO = 0,
    eRASTER_ACCLAIM_LOGO = 1,
    eRASTER_RENDERWARE_LOGO = 2,
    eRASTER_TRACK_MAP = 3,
    eRASTER_WORLD = 33,
    eRASTER_MAP_TOP = 34,
    eRASTER_MAP_BOTTOM = 35,
    eRASTER_MAP_SIDES = 36,
    eRASTER_CAR_SELECT_FLOOR = 37,
    eRASTER_CAR_SELECT_ENVMAP = 38,
    eRASTER_CAR_ICON_BACKGROUND = 39,
    eRASTER_FE_PARTS2 = 40,
    eRASTER_STAGE_AWARD = 41,
    eRASTER_TRACK_BUTTONS = 63,
    eRASTER_TRACK_ICON = 64,
    eNUM_FEONLY_RASTERS = 94,
    eRASTER_FLAG = 94,
    eRASTER_BORDER = 95,
    eRASTER_MENU_BITS1 = 96,
    eRASTER_CAR_ICON = 97,
    eRASTER_FIRE = 119,
    eRASTER_BURN_BAR = 179,
    eRASTER_INDICATOR = 180,
    eRASTER_MEDAL_GOLD = 181,
    eRASTER_MEDAL_SILVER = 182,
    eRASTER_MEDAL_BRONZE = 183,
    eRASTER_FONT_IMPACT = 184,
    eRASTER_CRASH_DAMAGE_METER = 185,
    eRASTER_BURNOUT2_LOGO = 186,
    eNUM_RASTERS = 187,
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
enum EMenuResultsScreenID {  // size 4
    eMRS_RESULT_GP_ONEPLAYER = 0,
    eMRS_RESULT_SINGLERACE_ONEPLAYER = 1,
    eMRS_RESULT_SINGLERACE_TWOPLAYER = 2,
    eMRS_RESULT_CRASH_MULTIPLAYER = 3,
    eMRS_RESULT_DRIVINGLESSON = 4,
    eMRS_RESULT_FACEOFF_ONEPLAYER = 5,
    eMRS_RESULT_FACEOFF_TWOPLAYER = 6,
    eMRS_RESULT_PURSUIT_ONEPLAYER = 7,
    eMRS_RESULT_PURSUIT_TWOPLAYER = 8,
    eMRS_STANDINGS_GP = 9,
    eMRS_STANDINGS_SINGLERACE_TWOPLAYER = 10,
    eMRS_STANDINGS_FACEOFF_TWOPLAYER = 11,
    eMRS_STANDINGS_CRASH_MULTIPLAYER = 12,
    eMRS_NEWRECORD_PLAYER1 = 13,
    eMRS_NEWRECORD_CRASH_PLAYER = 14,
    eMRS_NEWRECORD_PLAYER2_CONTROLLER2 = 15,
    eMRS_RECORDS_TRACK = 16,
    eMRS_RECORDS_TRACK_LAP_TIMES = 17,
    eMRS_RECORDS_TRACK_TOTAL_TIMES = 18,
    eMRS_RECORDS_TRACK_SCORE = 19,
    eMRS_RECORDS_TRACK_SKILL = 20,
    eMRS_RECORDS_TIMEATTACK = 21,
    eMRS_RECORDS_CRASH = 22,
    eMRS_RECORDS_CRASH_MULTIPLAYER = 23,
    eMRS_NEXTRACE_GP = 24,
    eMRS_NEXTRACE_CRASH_MULTIPLAYER = 25,
    eMRS_LAST_SINGLE = 26,
    eMRS_LAST_SINGLE_TWOPLAYER = 27,
    eMRS_LAST_TIMEATTACK = 28,
    eMRS_LAST_CRASH_ONEPLAYER = 29,
    eMRS_LAST_CRASH_MULTIPLAYER = 30,
    eMRS_LAST_LESSON = 31,
    eMRS_LAST_PURSUIT_CHAMPIONSHIP = 32,
    eMRS_LAST_PURSUIT_ONEPLAYER = 33,
    eMRS_LAST_FACEOFF_CHAMPIONSHIP = 34,
    eMRS_LAST_FACEOFF_ONEPLAYER = 35,
    eMRS_AUTOSAVE = 36,
    eMRS_NUM = 37,
    eMRS_PAD = -1,
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
enum EMenuStatus {  // size 4
    eMENUSTATUS_RUNNING = 0,
    eMENUSTATUS_STARTGAME = 1,
    eMENUSTATUS_QUIT = 2,
    eMENUSTATUS_RESUME = 3,
    eMENUSTATUS_RESTART = 4,
    eMENUSTATUS_RESTARTCRASH = 5,
    eMENUSTATUS_NEXTRACE = 6,
    eMENUSTATUS_SELECT = 7,
    eMENUSTATUS_ENDSESSION = 8,
    eMENUSTATUS_NONE = -1,
    eMENUSTATUS_PAD = -1,
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
enum EMenuTestButtons {  // size 4
    eTEST_BUTTON_NONE = 0,
    eTEST_BUTTON_TEST = 1,
    eTEST_BUTTON_RESTART = 2,
    eTEST_BUTTON_DELETE = 3,
    eTEST_BUTTON_NUM = 4,
    eTEST_BUTTON_PAD = -1,
};

// declared in 3 file(s), e.g. gamesource\Menu\CMenuPageSplashScreens.cpp
enum EMusicStatus {  // size 4
    eMUSIC_FE_NONE = 0,
    eMUSIC_FE_MENU = 1,
    eMUSIC_FE_FMV = 2,
    eMUSIC_INTRO = 3,
    eMUSIC_FIRSTSECOND = 4,
    eMUSIC_INGAME = 5,
    eMUSIC_REPLAY = 6,
};

// declared in 6 file(s), e.g. gamesource\Menu\CMenuGfxComponentPanel.cpp
enum EOnePlayerCrashState {  // size 4
    eONEPLAYERCRASH_STATE_NO_CRASH = 0,
    eONEPLAYERCRASH_STATE_CRASHING = 1,
    eONEPLAYERCRASH_STATE_CRASH_ENDED = 2,
    eONEPLAYERCRASH_STATE_OVERSHOT = 3,
    eONEPLAYERCRASH_STATE_NUM_ONEPLAYERCRASH_STATES = 4,
};

// declared in 6 file(s), e.g. gamesource\Menu\CMenuGfxComponentButtonList.cpp
enum EPanelType {  // size 4
    ePT_STAGE_SELECT = 0,
    ePT_STAGE_AWARD = 1,
    ePT_TRACK_SELECT = 2,
    ePT_MEDAL_TARGET_LESSON = 3,
    ePT_MEDAL_AWARD_LESSON = 4,
    ePT_MEDAL_TARGET_CRASH = 5,
    ePT_CAR_STAT = 6,
    ePT_CUSTOM = 7,
    ePT_NUM = 8,
    ePT_PAD = -1,
};

// declared in 1 file(s), e.g. gamesource\Render\CParticles.cpp
enum EParticleBatch {  // size 4
    eBATCH_DEBRIS1 = 0,
    eBATCH_DEBRIS2 = 1,
    eBATCH_DUST = 2,
    eBATCH_HAZE = 3,
    eBATCH_SMOKE = 4,
    eBATCH_POP = 5,
    eBATCH_BLACKSMOKE = 6,
    eBATCH_STEAM = 7,
    eBATCH_MUD = 8,
    eBATCH_SAND = 9,
    eBATCH_SNOW = 10,
    eBATCH_GLASS = 11,
    eBATCH_SPRAY = 12,
    eBATCH_EXHAUST = 13,
    eNUM_BATCHES = 14,
};

// declared in 1 file(s), e.g. gamesource\Render\CParticles.cpp
enum EParticleBlendMode {  // size 4
    ePARTICLE_BLEND_NORMAL = 0,
    ePARTICLE_BLEND_ADDITIVE = 1,
    ePARTICLE_BLEND_SUBTRACTIVE = 2,
};

// declared in 1 file(s), e.g. gamesource\Render\CParticles.cpp
enum EParticleType {  // size 4
    eTYPE_DUST = 0,
    eTYPE_TYRESMOKE = 1,
    eTYPE_CRASHDEBRIS = 2,
    eTYPE_CRASHDUSTBIG = 3,
    eTYPE_CRASHDUSTSMALL = 4,
    eTYPE_ENGINESMOKE = 5,
    eTYPE_ENGINESTEAM = 6,
    eTYPE_KICKUP_MUD = 7,
    eTYPE_KICKUP_SAND = 8,
    eTYPE_KICKUP_SNOW = 9,
    eTYPE_KICKUP_SPRAY = 10,
    eTYPE_EXHAUST = 11,
    eNUM_TYPES = 12,
};

// declared in 79 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum EPlayerStatus {  // size 4
    ePLAYER_RESET = 0,
    ePLAYER_STARTLINE = 1,
    ePLAYER_RACING = 2,
    ePLAYER_STOPPING = 3,
    ePLAYER_STOPPED = 4,
    ePLAYER_ABOUTTOEND = 5,
    ePLAYER_END = 6,
    ePLAYER_START_OF_RACE_REPLAY = 7,
    ePLAYER_RUNNING_RACE_REPLAY = 8,
    ePLAYER_STATUSUNCHANGED = 9,
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
enum EPrecipitationType {  // size 4
    ePRECIPITATION_NONE = 0,
    ePRECIPITATION_RAIN = 1,
    ePRECIPITATION_SNOW = 2,
    ePRECIPITATION_NUM_TYPES = 3,
};

// declared in 1 file(s), e.g. gamesource\Race\CStaticWorld.cpp
enum EPSSRenderPipeline {  // size 4
    ePSS_RENDERPIPELINE_PRELIT = 0,
    ePSS_RENDERPIPELINE_PRELIT_BFC = 1,
    ePSS_RENDERPIPELINE_PRELIT_SPECULAR = 2,
    ePSS_RENDERPIPELINE_PRELIT_SPECULAR_BFC = 3,
    ePSS_RENDERPIPELINE_WATER = 4,
    ePSS_RENDERPIPELINE_REFLECTIVE = 5,
    ePSS_RENDERPIPELINE_REFLECTIVE_BFC = 6,
    ePSS_RENDERPIPELINE_INSTANCES_PRELIT = 7,
    ePSS_RENDERPIPELINE_INSTANCES_LIT = 8,
    ePSS_RENDERPIPELINE_LINELIST = 9,
    ePSS_RENDERPIPELINE_NUMPIPELINES = 10,
    ePSS_RENDERPIPELINE_MAX_ENUM = 2147483647,
};

// declared in 1 file(s), e.g. gamesource\Race\CStaticWorld.cpp
enum EPSSWeather {  // size 4
    ePSS_WEATHER_OFF = 0,
    ePSS_WEATHER_ON_MIN = 1,
    ePSS_WEATHER_ON_MAX = 2,
    ePSS_WEATHER_MAX = 3,
    ePSS_WEATHER_MAX_ENUM = 2147483647,
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
enum EPSWFrustumTestResult {  // size 4
    ePSW_FRUSTUMTESTRESULT_INSIDE = 1,
    ePSW_FRUSTUMTESTRESULT_OUTSIDE = 2,
    ePSW_FRUSTUMTESTRESULT_CLIP = 3,
    ePSW_FRUSTUMTESTRESULT_CULL = 4,
    ePSW_FRUSTUMTESTRESULT_MAX = 2147483647,
};

// declared in 87 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum ERaceCarTrafficInfluence {  // size 4
    eRACE_CAR_TRAFFIC_INFLUENCE_NONE = 0,
    eRACE_CAR_TRAFFIC_INFLUENCE_CAMERA = 1,
    eRACE_CAR_TRAFFIC_INFLUENCE_CAR = 2,
};

// declared in 87 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum ERaceCarType {  // size 4
    eRACE_CAR_AI = 0,
    eRACE_CAR_PLAYER = 1,
    eRACE_CAR_NETWORK = 2,
    eRACE_CAR_GHOST = 3,
    eRACE_CAR_FRONTEND = 4,
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
enum ERecordsID {  // size 4
    eRECORDS_TRACK = 1,
    eRECORDS_TIMEATTACK = 2,
    eRECORDS_CRASH = 3,
    eRECORDS_NUM = 4,
    eRECORDS_PAD = -1,
};

// declared in 1 file(s), e.g. gamesource\Game\CRecords.cpp
enum ERecordTestTypes {  // size 4
    eRECORDTT_LESSTHAN = 0,
    eRECORDTT_EQUALTO = 1,
    eRECORDTT_SAME = 2,
    eRECORDTT_GREATERTHAN = 3,
    eRECORDTT_PAD = -1,
};

// declared in 1 file(s), e.g. gamesource\Render\CRaceReplayCamera.cpp
enum EReplayCameraBehaviourFlag {  // size 4
    eFLAG_DYNAMIC_FOV = 1,
    eFLAG_MOTION_BLUR = 2,
    eFLAG_PROXIMITY_SHAKE = 4,
    eFLAG_HANDYCAM = 8,
    eFLAG_STEADINESS = 16,
};

// declared in 4 file(s), e.g. gamesource\Menu\CMenuPageDrivingLessonSummary.cpp
enum EReplayCameraTypeFlag {  // size 4
    eFLAG_STATIC_CAMERA = 32,
    eFLAG_STATIC_PAN_CAMERA = 64,
    eFLAG_STATIC_CAR_CAMERA = 128,
    eFLAG_STATIC_INCAR_CAMERA = 256,
    eFLAG_ANIMATED_TARGET = 512,
    eFLAG_ANIMATED_TARGET_END = 1024,
};

// declared in 4 file(s), e.g. gamesource\Menu\CMenuPageDrivingLessonSummary.cpp
enum EReplayState {  // size 4
    eSTATE_UPDATE = 0,
    eSTATE_CUT = 1,
    eSTATE_TRANSITION = 2,
};

// declared in 1 file(s), e.g. gamesource\Race\CReplayTriggerManager.cpp
enum EReplayTriggerTypeFlag {  // size 4
    eFLAG_TRIGGERTYPE_PLANE = 2048,
    eFLAG_TRIGGERTYPE_BOX = 4096,
};

// declared in 68 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp  // VARIANT 1 of 2
enum EResetStage {  // size 4
    eRESET_STAGE_PLAYERS = 0,
    eRESET_STAGE_SOUND = 1,
    eRESET_STAGE_TRACK = 2,
    eRESET_STAGE_CAR0 = 3,
    eRESET_STAGE_CAR1 = 4,
    eRESET_STAGE_CAR2 = 5,
    eRESET_STAGE_CAR3 = 6,
    eRESET_STAGE_STREAM1 = 7,
    eRESET_STAGE_STREAM2 = 8,
    eRESET_STAGE_RESET = 9,
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp  // VARIANT 2 of 2
enum EResetStage {  // size 4
    eRESET_STAGE_STATICWORLD = 0,
    eRESET_STAGE_GAMEDATA = 1,
    eRESET_STAGE_CAMERADATA = 2,
    eRESET_STAGE_TRAFFIC = 3,
    eRESET_STAGE_LOADED = 4,
    eRESET_STAGE_STREAM1 = 5,
    eRESET_STAGE_STREAM2 = 6,
};

// declared in 6 file(s), e.g. gamesource\Menu\CMenuGfxComponentGrandPrixSummary.cpp
enum ERewardThreshold {  // size 4
    eREWARD_THRESHOLD_RANKED = 0,
    eREWARD_THRESHOLD_COMPLETE = 1,
    eREWARD_THRESHOLD_ALL_GOLD = 2,
};

// declared in 6 file(s), e.g. gamesource\Menu\CMenuGfxComponentGrandPrixSummary.cpp
enum ERewardType {  // size 4
    eREWARD_TYPE_CAR = 0,
    eREWARD_TYPE_STAGE = 1,
    eREWARD_TYPE_CREDITS = 2,
    eREWARD_TYPE_CUSTOM_SERIES = 3,
    eREWARD_TYPE_CHEAT = 4,
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
enum EScreenMode {  // size 4
    eRENDERER_SCREENMODE_FULL = 0,
    eRENDERER_SCREENMODE_SPLIT_HORIZ = 1,
    eRENDERER_SCREENMODE_SPLIT_VERT = 2,
};

// declared in 2 file(s), e.g. gamesource\Race\CAIAvoidance.cpp
enum ESegmentLinkTypes {  // size 4
    eSEGMENT_LINK_FRONT_LEFT = 0,
    eSEGMENT_LINK_FRONT_RIGHT = 1,
    eSEGMENT_LINK_BACK_LEFT = 2,
    eSEGMENT_LINK_BACK_RIGHT = 3,
    eSEGMENT_LINK_LEFT = 4,
    eSEGMENT_LINK_RIGHT = 5,
    eSEGMENT_LINK_MAX_TYPES = 6,
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
enum ESettingsScreenID {  // size 4
    eSETTINGSSCREEN_CONTROLS = 1,
    eSETTINGSSCREEN_CONTROLLER1 = 2,
    eSETTINGSSCREEN_CONTROLLER2 = 3,
    eSETTINGSSCREEN_AUDIO = 4,
    eSETTINGSSCREEN_MUSICPLAYER = 5,
    eSETTINGSSCREEN_DISPLAY = 6,
    eSETTINGSSCREEN_DISPLAYOFFSET = 7,
    eSETTINGSSCREEN_CHEATS = 8,
    eSETTINGSSCREEN_PAD = -1,
};

// declared in 4 file(s), e.g. gamesource\Menu\CMenuGfxComponentSettingsList.cpp
enum ESettingsType {  // size 4
    eTYPE_TEXTCAROUSEL = 0,
    eTYPE_VOLUME = 1,
    eTYPE_SELECT = 2,
    eTYPE_ADJUSTSCREEN = 3,
    eTYPE_NUM = 4,
    eTYPE_PAD = -1,
};

// declared in 2 file(s), e.g. gamesource\Sound\GameSound.cpp
enum ESoundCarType {  // size 4
    eSoundAICar = 0,
    eSoundPlayerCar = 1,
};

// declared in 30 file(s), e.g. gamesource\Hud\CHudComponentBonus.cpp
enum ESoundPriority {  // size 4
    ePriority_Low = 0,
    ePriority_Normal = 1,
    ePriority_High = 2,
};

// declared in 1 file(s), e.g. gamesource\Menu\CMenuPageSplashScreens.cpp
enum ESplashType {  // size 4
    eSPLASH_SCREEN = 0,
    eSPLASH_FMV = 1,
    eSPLASH_PRESS_START = 2,
};

// declared in 94 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum EStageID {  // size 4
    eSTAGE_NONE = -1,
    eSTAGE_GRANDPRIX_1 = 0,
    eSTAGE_FACEOFF_1 = 1,
    eSTAGE_PTP_1 = 2,
    eSTAGE_PURSUIT_1 = 3,
    eSTAGE_GRANDPRIX_2 = 4,
    eSTAGE_FACEOFF_2 = 5,
    eSTAGE_PTP_2 = 6,
    eSTAGE_PURSUIT_2 = 7,
    eSTAGE_GRANDPRIX_3 = 8,
    eSTAGE_FACEOFF_3 = 9,
    eSTAGE_PTP_3 = 10,
    eSTAGE_PURSUIT_3 = 11,
    eSTAGE_GRANDPRIX_4 = 12,
    eSTAGE_FACEOFF_4 = 13,
    eSTAGE_FACEOFF_5 = 14,
    eSTAGE_CUSTOM_SERIES_1 = 15,
    eSTAGE_PURSUIT_4 = 16,
    eSTAGE_CUSTOM_SERIES_2 = 17,
    eSTAGE_PURSUIT_5 = 18,
    eSTAGE_CUSTOM_SERIES_3 = 19,
    eSTAGE_PURSUIT_6 = 20,
    eSTAGE_CUSTOM_SERIES_4 = 21,
    eSTAGE_NUM_STAGES = 22,
};

// declared in 6 file(s), e.g. gamesource\Menu\CMenuGfxComponentGrandPrixSummary.cpp
enum EStageType {  // size 4
    eSTAGE_TYPE_GRANDPRIX = 0,
    eSTAGE_TYPE_PTP = 1,
    eSTAGE_TYPE_PURSUIT = 2,
    eSTAGE_TYPE_FACEOFF = 3,
};

// declared in 58 file(s), e.g. gamesource\Game\CLessonLogic.cpp
enum EStringID {  // size 4
    eSTRING_NONE = 0,
    eSTRING_SINGLE_PLAYER = 1,
    eSTRING_MULTI_PLAYER = 2,
    eSTRING_SINGLE = 3,
    eSTRING_MULTI = 4,
    eSTRING_OPTIONS = 5,
    eSTRING_RECORDS = 6,
    eSTRING_CHAMPIONSHIP = 7,
    eSTRING_CUSTOM_SERIES_CHAMPIONSHIP = 8,
    eSTRING_SINGLE_RACE = 9,
    eSTRING_TIME_ATTACK = 10,
    eSTRING_DRIVING_SCHOOL = 11,
    eSTRING_CRASH = 12,
    eSTRING_PURSUIT = 13,
    eSTRING_FREE_RUN = 14,
    eSTRING_FACE_OFF = 15,
    eSTRING_CAR_VIEWER = 16,
    eSTRING_CONTROLS = 17,
    eSTRING_AUDIO = 18,
    eSTRING_MUSICPLAYER = 19,
    eSTRING_DISPLAY = 20,
    eSTRING_LOADSAVE = 21,
    eSTRING_CHEATS = 22,
    eSTRING_CREDITS = 23,
    eSTRING_VIEWPROFILE = 24,
    eSTRING_TROPHYCABINET = 25,
    eSTRING_TRACK_RECORDS = 26,
    eSTRING_TIME_ATTACK_RECORDS = 27,
    eSTRING_CRASH_RECORDS = 28,
    eSTRING_LAP_TIMES = 29,
    eSTRING_TOTAL_TIMES = 30,
    eSTRING_SCORE_RECORDS = 31,
    eSTRING_SKILL_RECORDS = 32,
    eSTRING_CAR_SELECT_TITLE_1PLAYER = 33,
    eSTRING_CAR_SELECT_TITLE_2PLAYER_P1 = 34,
    eSTRING_CAR_SELECT_TITLE_2PLAYER_P2 = 35,
    eSTRING_CAR_SELECT_TITLE_PURSUIT_CAR = 36,
    eSTRING_CAR_SELECT_TITLE_ESCAPE_CAR = 37,
    eSTRING_CAR_SELECT_TITLE_PURSUIT_CAR_P1 = 38,
    eSTRING_CAR_SELECT_TITLE_ESCAPE_CAR_P2 = 39,
    eSTRING_CAR_SELECT_TITLE_DUEL_CAR = 40,
    eSTRING_CAR_SELECT_TITLE_RIVAL_CAR = 41,
    eSTRING_CAR_SELECT_MODEL = 42,
    eSTRING_CAR_SELECT_COLOUR = 43,
    eSTRING_CAR_SELECT_TRANSMISSION = 44,
    eSTRING_CAR_STAT_ACCELERATION = 45,
    eSTRING_CAR_STAT_HANDLING = 46,
    eSTRING_CAR_STAT_TOPSPEED = 47,
    eSTRING_TRANSMISSION_AUTO = 48,
    eSTRING_TRANSMISSION_MANUAL = 49,
    eSTRING_TRACK_SELECT_SELECT_TRACK = 50,
    eSTRING_TRACK_SELECT_TRACK = 51,
    eSTRING_TRACK_SELECT_WEATHER = 52,
    eSTRING_TRACK_SELECT_TRACK_RECORD = 53,
    eSTRING_TRACK_SELECT_FASTEST_LAP = 54,
    eSTRING_TRACK_SELECT_NUMBER_OF_LAPS = 55,
    eSTRING_TRACK_SELECT_COURSE_LENGTH = 56,
    eSTRING_TRACK_SELECT_CONDITIONS = 57,
    eSTRING_TRACK_SELECT_CONDITION_NIGHT = 58,
    eSTRING_TRACK_SELECT_CONDITION_SUNSET = 59,
    eSTRING_TRACK_SELECT_CONDITION_RAIN = 60,
    eSTRING_TRACK_SELECT_CONDITION_SHOWERS = 61,
    eSTRING_TRACK_SELECT_CONDITION_WET = 62,
    eSTRING_TRACK_SELECT_CONDITION_SUNNY = 63,
    eSTRING_TRACK_SELECT_CONDITION_SNOW = 64,
    eSTRING_TRACK_SELECT_CONDITION_OVERCAST = 65,
    eSTRING_TRACK_SELECT_CONDITION_FOG = 66,
    eSTRING_MEDAL_TARGETS = 67,
    eSTRING_GOLD = 68,
    eSTRING_SILVER = 69,
    eSTRING_BRONZE = 70,
    eSTRING_CHAMPSELECT_SELECT_STAGE = 71,
    eSTRING_CHAMPSELECT_TROPHY = 72,
    eSTRING_CHAMPSELECT_WINCAR = 73,
    eSTRING_CHAMPSELECT_RACEFRAC = 74,
    eSTRING_CHAMPSELECT_UNAVAILABLE = 75,
    eSTRING_CHAMPSELECT_GOLDMEDALS = 76,
    eSTRING_CHAMPSELECT_SILVERMEDALS = 77,
    eSTRING_CHAMPSELECT_BRONZEMEDALS = 78,
    eSTRING_CRASH_SELECT_PLAYERS = 79,
    eSTRING_CRASH_SELECT_ONEPLAYER = 80,
    eSTRING_CRASH_SELECT_TWOPLAYER = 81,
    eSTRING_CRASH_SELECT_THREEPLAYER = 82,
    eSTRING_CRASH_SELECT_FOURPLAYER = 83,
    eSTRING_CRASH_SELECT_GROUP = 84,
    eSTRING_CRASH_SELECT_GROUP_1 = 85,
    eSTRING_CRASH_SELECT_GROUP_2 = 86,
    eSTRING_CRASH_SELECT_GROUP_3 = 87,
    eSTRING_CRASH_SELECT_GROUP_4 = 88,
    eSTRING_CRASH_SELECT_GROUP_5 = 89,
    eSTRING_CRASH_SELECT_FIRST_GROUP = 90,
    eSTRING_CRASH_SELECT_SECOND_GROUP = 91,
    eSTRING_CRASH_SELECT_THIRD_GROUP = 92,
    eSTRING_CRASH_SELECT_FOURTH_GROUP = 93,
    eSTRING_CRASH_SELECT_FIFTH_GROUP = 94,
    eSTRING_CRASH_SELECT_GROUP_MESSAGE = 95,
    eSTRING_CRASH_FOR_CASH = 96,
    eSTRING_CRASH_SCORE_TITLE = 97,
    eSTRING_RESULTS_RACE_RESULTS = 98,
    eSTRING_RESULTS_TOTALTIME = 99,
    eSTRING_RESULTS_FASTESTLAP = 100,
    eSTRING_RESULTS_INSURANCEDAMAGE = 101,
    eSTRING_RESULTS_SCORE = 102,
    eSTRING_RESULTS_REPLAY_R = 103,
    eSTRING_RESULTS_FIRST = 104,
    eSTRING_RESULTS_SECOND = 105,
    eSTRING_RESULTS_THIRD = 106,
    eSTRING_RESULTS_FOURTH = 107,
    eSTRING_RESULTS_WINNER = 108,
    eSTRING_RESULTS_LOSER = 109,
    eSTRING_RESULTS_FAILED_TO_FINISH = 110,
    eSTRING_RESULTS_DAMAGE = 111,
    eSTRING_RESULTS_FAILED_TO_CRASH = 112,
    eSTRING_RESULTS_YOU_WIN = 113,
    eSTRING_RESULTS_YOU_LOSE = 114,
    eSTRING_RESULTS_WON_TROPHY = 115,
    eSTRING_RESULTS_PLACED_2ND = 116,
    eSTRING_RESULTS_PLACED_3RD = 117,
    eSTRING_RESULTS_PLACED_LAST = 118,
    eSTRING_RESULTS_STANDINGS = 119,
    eSTRING_RESULTS_GRAND_PRIX_WON = 120,
    eSTRING_RESULTS_GRAND_PRIX_COMPLETED = 121,
    eSTRING_RESULTS_GRAND_PRIX_FAILED = 122,
    eSTRING_RESULTS_STAGE_WON = 123,
    eSTRING_RESULTS_STAGE_COMPLETED = 124,
    eSTRING_RESULTS_STAGE_FAILED = 125,
    eSTRING_RESULTS_NO_TROPHY_AWARDED = 126,
    eSTRING_RESULTS_SORRY = 127,
    eSTRING_RESULTS_FAILED_TO_COMPLETE = 128,
    eSTRING_RESULTS_ALL_ITEMS_UNLOCKED = 129,
    eSTRING_RESULTS_1_ITEM_LOCKED = 130,
    eSTRING_RESULTS_N_ITEMS_LOCKED = 131,
    eSTRING_RESULTS_CAR = 132,
    eSTRING_RESULTS_NAME = 133,
    eSTRING_RESULTS_GP = 134,
    eSTRING_RESULTS_TOTAL = 135,
    eSTRING_RESULTS_POINTS = 136,
    eSTRING_RESULTS_POSITION = 137,
    eSTRING_RESULTS_GPPOSITION = 138,
    eSTRING_RESULTS_GPTOTAL = 139,
    eSTRING_RESULTS_P1 = 140,
    eSTRING_RESULTS_P2 = 141,
    eSTRING_RESULTS_P3 = 142,
    eSTRING_RESULTS_P4 = 143,
    eSTRING_RESULTS_COM1 = 144,
    eSTRING_RESULTS_COM2 = 145,
    eSTRING_RESULTS_COM3 = 146,
    eSTRING_RESULTS_COM4 = 147,
    eSTRING_RESULTS_NEWRECORD = 148,
    eSTRING_RESULTS_CONGRATUALTIONS = 149,
    eSTRING_RESULTS_NEWRECORDPLAYER = 150,
    eSTRING_RESULTS_NEWRECORDPLAYER1 = 151,
    eSTRING_RESULTS_NEWRECORDPLAYER2 = 152,
    eSTRING_RESULTS_NEWRECORDPLAYER3 = 153,
    eSTRING_RESULTS_NEWRECORDPLAYER4 = 154,
    eSTRING_RESULTS_ENTERNAME = 155,
    eSTRING_RESULTS_UNLOCKEDCAR = 156,
    eSTRING_RESULTS_UNLOCKEDCARS = 157,
    eSTRING_RESULTS_UNLOCKEDCHEAT = 158,
    eSTRING_RESULTS_UNLOCKEDCHEATS = 159,
    eSTRING_RESULTS_UNLOCKEDSTAGE = 160,
    eSTRING_RESULTS_UNLOCKEDSTAGES = 161,
    eSTRING_RESULTS_UNLOCKEDTRACK = 162,
    eSTRING_RESULTS_UNLOCKEDTRACKS = 163,
    eSTRING_RESULTS_UNLOCKEDGAMEMODE = 164,
    eSTRING_RESULTS_UNLOCKEDGAMEMODES = 165,
    eSTRING_RESULTS_UNLOCKEDZONE = 166,
    eSTRING_RESULTS_UNLOCKEDZONES = 167,
    eSTRING_RESULTS_DEL = 168,
    eSTRING_RESULTS_END = 169,
    eSTRING_RESULTS_RECORDS = 170,
    eSTRING_RESULTS_SESSIONBEST = 171,
    eSTRING_RESULTS_BESTLAPTIMES = 172,
    eSTRING_RESULTS_BESTTOTALTIMES = 173,
    eSTRING_RESULTS_BESTSCORE = 174,
    eSTRING_RESULTS_BESTSKILL = 175,
    eSTRING_RESULTS_HIGHSCORE = 176,
    eSTRING_RESULTS_BURNOUTTOTAL = 177,
    eSTRING_RESULTS_AIR = 178,
    eSTRING_RESULTS_DRIFT = 179,
    eSTRING_RESULTS_ONCOMING = 180,
    eSTRING_RESULTS_BIGCOMBO = 181,
    eSTRING_RESULTS_BIGCRASH = 182,
    eSTRING_RESULTS_RACECRASHTOTAL = 183,
    eSTRING_RESULTS_PURSUIT_SUCCEEDED = 184,
    eSTRING_RESULTS_PURSUIT_FAILED = 185,
    eSTRING_RESULTS_PURSUIT_TARGET_SUCCEEDED = 186,
    eSTRING_RESULTS_PURSUIT_TARGET_FAILED = 187,
    eSTRING_RESULTS_TIMED_OUT = 188,
    eSTRING_RESULTS_SESSION_FINISHED = 189,
    eSTRING_RESULTS_RACE_FINISHED = 190,
    eSTRING_RESULTS_RETIRED = 191,
    eSTRING_CONTROLS_CONTROLLER1 = 192,
    eSTRING_CONTROLS_CONTROLLER2 = 193,
    eSTRING_CONTROLLER_BUTTONS_ANALOG = 194,
    eSTRING_CONTROLLER_BUTTONS_DIGITAL = 195,
    eSTRING_CONTROLLER_VIBRATION = 196,
    eSTRING_CONTROLLER_VIBRATION_P1 = 197,
    eSTRING_CONTROLLER_VIBRATION_P2 = 198,
    eSTRING_CONTROLLER_FORCEFEEDBACK = 199,
    eSTRING_CONTROLLER_FORCEFEEDBACK_P1 = 200,
    eSTRING_CONTROLLER_FORCEFEEDBACK_P2 = 201,
    eSTRING_CONTROLLER_BUTTONS = 202,
    eSTRING_CONTROLLER_BUTTONS_P1 = 203,
    eSTRING_CONTROLLER_BUTTONS_P2 = 204,
    eSTRING_AUDIO_OUTPUT = 205,
    eSTRING_AUDIO_OUTPUT_MONO = 206,
    eSTRING_AUDIO_OUTPUT_STEREO = 207,
    eSTRING_AUDIO_OUTPUT_DOLBYSURROUND = 208,
    eSTRING_AUDIO_OUTPUT_DOLBYDIGITAL = 209,
    eSTRING_AUDIO_EFFECTS_VOLUME = 210,
    eSTRING_AUDIO_MUSIC_VOLUME = 211,
    eSTRING_MUSICPLAYER_TRACK = 212,
    eSTRING_MUSICPLAYER_TRACK_1 = 213,
    eSTRING_MUSICPLAYER_TRACK_2 = 214,
    eSTRING_MUSICPLAYER_TRACK_3 = 215,
    eSTRING_MUSICPLAYER_TRACK_4 = 216,
    eSTRING_MUSICPLAYER_TRACK_5 = 217,
    eSTRING_MUSICPLAYER_TRACK_6 = 218,
    eSTRING_MUSICPLAYER_TRACK_7 = 219,
    eSTRING_MUSICPLAYER_TRACK_8 = 220,
    eSTRING_MUSICPLAYER_TRACK_9 = 221,
    eSTRING_MUSICPLAYER_TRACK_10 = 222,
    eSTRING_MUSICPLAYER_PLAY = 223,
    eSTRING_MUSICPLAYER_STOP = 224,
    eSTRING_DISPLAY_VIDEOOUTPUT = 225,
    eSTRING_DISPLAY_VIDEOOUTPUT_NORMAL = 226,
    eSTRING_DISPLAY_VIDEOOUTPUT_SPECIAL = 227,
    eSTRING_DISPLAY_ASPECTRATIO = 228,
    eSTRING_DISPLAY_ASPECTRATIO_4_3 = 229,
    eSTRING_DISPLAY_ASPECTRATIO_16_9 = 230,
    eSTRING_DISPLAY_ADJUSTSCREEN = 231,
    eSTRING_CHEATS_NONE = 232,
    eSTRING_CHEATS_FREE_RUN = 233,
    eSTRING_CHEATS_FACE_OFF = 234,
    eSTRING_PROFILE_HOURS = 235,
    eSTRING_PROFILE_DATE_OF_SAVE = 236,
    eSTRING_PROFILE_NAME = 237,
    eSTRING_PROFILE_TROPHIES_WON = 238,
    eSTRING_PROFILE_GOLD_MEDALS_WON = 239,
    eSTRING_PROFILE_RACES_FINISHED = 240,
    eSTRING_PROFILE_1ST_PERCENTAGE = 241,
    eSTRING_PROFILE_2ND_PERCENTAGE = 242,
    eSTRING_PROFILE_3RD_PERCENTAGE = 243,
    eSTRING_PROFILE_4TH_PERCENTAGE = 244,
    eSTRING_PROFILE_FAVOURITE_VEHICLE = 245,
    eSTRING_PROFILE_FAVOURITE_TRACK = 246,
    eSTRING_PROFILE_DISTANCE_DRIVEN = 247,
    eSTRING_PROFILE_PLAYING_TIME = 248,
    eSTRING_PROFILE_BIGGEST_BURNOUT_CHAIN = 249,
    eSTRING_PROFILE_BIGGEST_CRASH_DAMAGE = 250,
    eSTRING_PROFILE_MOST_CARS_IN_CRASH = 251,
    eSTRING_PROFILE_BIGGEST_COMBO = 252,
    eSTRING_PROFILE_BIGGEST_ONCOMMING = 253,
    eSTRING_PROFILE_BIGGEST_AIR = 254,
    eSTRING_PROFILE_BIGGEST_DRIFT = 255,
    eSTRING_PROFILE_TOTAL_BURNOUTS = 256,
    eSTRING_PROFILE_TOTAL_DISTANCE = 257,
    eSTRING_PROFILE_TOTAL_TIME = 258,
    eSTRING_PROFILE_TOTAL_ONCOMMING = 259,
    eSTRING_PROFILE_TOTAL_AIR = 260,
    eSTRING_PROFILE_TOTAL_DRIFT = 261,
    eSTRING_PROFILE_TOTAL_NEAR_MISSES = 262,
    eSTRING_PROFILE_TOTAL_CRASHES = 263,
    eSTRING_PROFILE_TOTAL_CRASH_DAMAGE = 264,
    eSTRING_MC_MENU_NEW = 265,
    eSTRING_MC_MENU_LOAD = 266,
    eSTRING_MC_MENU_SAVE = 267,
    eSTRING_MC_MENU_DONTSAVE = 268,
    eSTRING_MC_MENU_EMPTYPROFILE = 269,
    eSTRING_MC_MENU_PROFILE1 = 270,
    eSTRING_MC_MENU_PROFILE2 = 271,
    eSTRING_MC_MENU_PROFILE3 = 272,
    eSTRING_MC_MENU_ENTERPROFILENAME = 273,
    eSTRING_MC_MESSAGE_NOCARD = 274,
    eSTRING_MC_MESSAGE_NODATA = 275,
    eSTRING_MC_MESSAGE_UNFORMATTED = 276,
    eSTRING_MC_MESSAGE_UNFORMATTEDPROMPT = 277,
    eSTRING_MC_MESSAGE_FORMATTING = 278,
    eSTRING_MC_MESSAGE_FORMATFAILED = 279,
    eSTRING_MC_MESSAGE_CANCELFORMATPROMPT = 280,
    eSTRING_MC_MESSAGE_INSUFFICIENTSPACE = 281,
    eSTRING_MC_MESSAGE_SAVING = 282,
    eSTRING_MC_MESSAGE_SAVEFAILED = 283,
    eSTRING_MC_MESSAGE_SAVESUCCESSFUL = 284,
    eSTRING_MC_MESSAGE_OVERWRITEPROMPT = 285,
    eSTRING_MC_MESSAGE_LOADFAILED = 286,
    eSTRING_MC_MESSAGE_LOADSUCCESSFUL = 287,
    eSTRING_MC_MESSAGE_CHECKING = 288,
    eSTRING_MC_MESSAGE_CORRUPT = 289,
    eSTRING_MC_MESSAGE_WARNLOSEDATAPROMPT = 290,
    eSTRING_MC_HEADING_AUTOSAVING = 291,
    eSTRING_MC_MESSAGE_AUTOSAVING = 292,
    eSTRING_MC_MESSAGE_AUTOSAVESUCCESSFUL = 293,
    eSTRING_MC_MESSAGE_AUTOSAVEFAILED = 294,
    eSTRING_MC_MESSAGE_AUTOSAVEUSERERROR = 295,
    eSTRING_MC_MESSAGE_WARNAUTOSAVEDISABLE = 296,
    eSTRING_BUTTON_SELECT = 297,
    eSTRING_BUTTON_CONFIRM = 298,
    eSTRING_BUTTON_BACK = 299,
    eSTRING_BUTTON_CONTINUE = 300,
    eSTRING_BUTTON_REPLAY = 301,
    eSTRING_BUTTON_CANCEL = 302,
    eSTRING_BUTTON_RESTART = 303,
    eSTRING_BUTTON_TESTOUTPUT = 304,
    eSTRING_BUTTON_DELETE = 305,
    eSTRING_MENU_RESUME = 306,
    eSTRING_MENU_RESTART = 307,
    eSTRING_MENU_RETRY = 308,
    eSTRING_MENU_CHANGECAR = 309,
    eSTRING_MENU_CHANGECARS = 310,
    eSTRING_MENU_NEXTRACE = 311,
    eSTRING_MENU_NEXTLESSON = 312,
    eSTRING_MENU_ENDSESSION = 313,
    eSTRING_MENU_LESSONSELECT = 314,
    eSTRING_MENU_NEXTZONE = 315,
    eSTRING_MENU_NEWGAME = 316,
    eSTRING_MENU_QUIT = 317,
    eSTRING_MENU_MAINMENU = 318,
    eSTRING_MENU_PAUSE = 319,
    eSTRING_MENU_RETIRE = 320,
    eSTRING_MENU_AREYOUSUREQUIT = 321,
    eSTRING_MENU_AREYOUSURERESTART = 322,
    eSTRING_MENU_AREYOUSUREENDSESSION = 323,
    eSTRING_MENU_AREYOUSURERETIRE = 324,
    eSTRING_MENU_AREYOUSURECHANGECAR = 325,
    eSTRING_MENU_AREYOUSURELESSONSELECT = 326,
    eSTRING_MENU_AREYOUSURERESTARTGP = 327,
    eSTRING_MENU_INFORM_SINGLEPLAYER = 328,
    eSTRING_MENU_INFORM_MULTIPLAYER = 329,
    eSTRING_NEW = 330,
    eSTRING_LOADING = 331,
    eSTRING_PLEASE_WAIT = 332,
    eSTRING_LOADING_PLEASE_WAIT = 333,
    eSTRING_LOCKED = 334,
    eSTRING_ON = 335,
    eSTRING_OFF = 336,
    eSTRING_YES = 337,
    eSTRING_NO = 338,
    eSTRING_HUD_1ST = 339,
    eSTRING_HUD_2ND = 340,
    eSTRING_HUD_3RD = 341,
    eSTRING_HUD_4TH = 342,
    eSTRING_HUD_ONCOMING = 343,
    eSTRING_HUD_DRIFT = 344,
    eSTRING_HUD_AIR = 345,
    eSTRING_HUD_NEARMISS = 346,
    eSTRING_HUD_SCORE = 347,
    eSTRING_HUD_POSITION = 348,
    eSTRING_HUD_GET_READY = 349,
    eSTRING_HUD_GO = 350,
    eSTRING_HUD_CHECKPOINT = 351,
    eSTRING_HUD_PERFECT_LAP = 352,
    eSTRING_HUD_FINAL_LAP = 353,
    eSTRING_HUD_WRONG_WAY = 354,
    eSTRING_HUD_BOOST_AVAILABLE = 355,
    eSTRING_HUD_BURNOUT = 356,
    eSTRING_HUD_BURNOUT_CHAIN = 357,
    eSTRING_TRACK_CITY_SHORT = 358,
    eSTRING_TRACK_CITY_LONG = 359,
    eSTRING_TRACK_AIRPORT_SHORT = 360,
    eSTRING_TRACK_AIRPORT_LONG = 361,
    eSTRING_TRACK_DESERT_SHORT = 362,
    eSTRING_TRACK_DESERT_LONG = 363,
    eSTRING_TRACK_FREEWAY_SHORT = 364,
    eSTRING_TRACK_FREEWAY_LONG = 365,
    eSTRING_TRACK_COAST_SHORT = 366,
    eSTRING_TRACK_COAST_LONG = 367,
    eSTRING_TRACK_MOUNTAIN_SHORT = 368,
    eSTRING_TRACK_MOUNTAIN_LONG = 369,
    eSTRING_TRACK_PTP_1 = 370,
    eSTRING_TRACK_PTP_2 = 371,
    eSTRING_TRACK_PTP_3 = 372,
    eSTRING_TRACK_CITY_SHORT_REV = 373,
    eSTRING_TRACK_CITY_LONG_REV = 374,
    eSTRING_TRACK_AIRPORT_SHORT_REV = 375,
    eSTRING_TRACK_AIRPORT_LONG_REV = 376,
    eSTRING_TRACK_DESERT_SHORT_REV = 377,
    eSTRING_TRACK_DESERT_LONG_REV = 378,
    eSTRING_TRACK_FREEWAY_SHORT_REV = 379,
    eSTRING_TRACK_FREEWAY_LONG_REV = 380,
    eSTRING_TRACK_COAST_SHORT_REV = 381,
    eSTRING_TRACK_COAST_LONG_REV = 382,
    eSTRING_TRACK_MOUNTAIN_SHORT_REV = 383,
    eSTRING_TRACK_MOUNTAIN_LONG_REV = 384,
    eSTRING_TRACK_PTP_1_REV = 385,
    eSTRING_TRACK_PTP_2_REV = 386,
    eSTRING_TRACK_PTP_3_REV = 387,
    eSTRING_DEBUG_FINISH = 388,
    eSTRING_DEBUG_FINISH_1ST = 389,
    eSTRING_DEBUG_FINISH_2ND = 390,
    eSTRING_DEBUG_FINISH_3RD = 391,
    eSTRING_DEBUG_FINISH_4TH = 392,
    eSTRING_STAGE_GRANDPRIX_1 = 393,
    eSTRING_STAGE_FACEOFF_1 = 394,
    eSTRING_STAGE_PTP_1 = 395,
    eSTRING_STAGE_PURSUIT_1 = 396,
    eSTRING_STAGE_GRANDPRIX_2 = 397,
    eSTRING_STAGE_FACEOFF_2 = 398,
    eSTRING_STAGE_PTP_2 = 399,
    eSTRING_STAGE_PURSUIT_2 = 400,
    eSTRING_STAGE_GRANDPRIX_3 = 401,
    eSTRING_STAGE_FACEOFF_3 = 402,
    eSTRING_STAGE_PTP_3 = 403,
    eSTRING_STAGE_PURSUIT_3 = 404,
    eSTRING_STAGE_GRANDPRIX_4 = 405,
    eSTRING_STAGE_FACEOFF_4 = 406,
    eSTRING_STAGE_FACEOFF_5 = 407,
    eSTRING_STAGE_CUSTOM_SERIES_1 = 408,
    eSTRING_STAGE_PURSUIT_4 = 409,
    eSTRING_STAGE_CUSTOM_SERIES_2 = 410,
    eSTRING_STAGE_PURSUIT_5 = 411,
    eSTRING_STAGE_CUSTOM_SERIES_3 = 412,
    eSTRING_STAGE_PURSUIT_6 = 413,
    eSTRING_STAGE_CUSTOM_SERIES_4 = 414,
    eSTRING_STAGEBRIEF_GRANDPRIX_1 = 415,
    eSTRING_STAGEBRIEF_FACEOFF_1 = 416,
    eSTRING_STAGEBRIEF_PTP_1 = 417,
    eSTRING_STAGEBRIEF_PURSUIT_1 = 418,
    eSTRING_STAGEBRIEF_GRANDPRIX_2 = 419,
    eSTRING_STAGEBRIEF_FACEOFF_2 = 420,
    eSTRING_STAGEBRIEF_PTP_2 = 421,
    eSTRING_STAGEBRIEF_PURSUIT_2 = 422,
    eSTRING_STAGEBRIEF_GRANDPRIX_3 = 423,
    eSTRING_STAGEBRIEF_FACEOFF_3 = 424,
    eSTRING_STAGEBRIEF_PTP_3 = 425,
    eSTRING_STAGEBRIEF_PURSUIT_3 = 426,
    eSTRING_STAGEBRIEF_GRANDPRIX_4 = 427,
    eSTRING_STAGEBRIEF_FACEOFF_4 = 428,
    eSTRING_STAGEBRIEF_FACEOFF_5 = 429,
    eSTRING_STAGEBRIEF_CUSTOM_SERIES_1 = 430,
    eSTRING_STAGEBRIEF_PURSUIT_4 = 431,
    eSTRING_STAGEBRIEF_CUSTOM_SERIES_2 = 432,
    eSTRING_STAGEBRIEF_PURSUIT_5 = 433,
    eSTRING_STAGEBRIEF_CUSTOM_SERIES_3 = 434,
    eSTRING_STAGEBRIEF_PURSUIT_6 = 435,
    eSTRING_STAGEBRIEF_CUSTOM_SERIES_4 = 436,
    eSTRING_CAR_COMPACT = 437,
    eSTRING_CAR_COUPE = 438,
    eSTRING_CAR_SPORT = 439,
    eSTRING_CAR_ROADSTER = 440,
    eSTRING_CAR_PICKUP = 441,
    eSTRING_CAR_MUSCLE = 442,
    eSTRING_CAR_SUV = 443,
    eSTRING_CAR_COMPACT_CS = 444,
    eSTRING_CAR_COUPE_CS = 445,
    eSTRING_CAR_SPORT_CS = 446,
    eSTRING_CAR_ROADSTER_CS = 447,
    eSTRING_CAR_PICKUP_CS = 448,
    eSTRING_CAR_MUSCLE_CS = 449,
    eSTRING_CAR_SUV_CS = 450,
    eSTRING_CAR_POLICE = 451,
    eSTRING_CAR_HOTROD = 452,
    eSTRING_CAR_OVALRACER = 453,
    eSTRING_CAR_JAPANESE_MUSCLE = 454,
    eSTRING_CAR_SUPER = 455,
    eSTRING_CAR_CLASSIC = 456,
    eSTRING_CAR_GANGSTER = 457,
    eSTRING_CAR_DRIVING_SCHOOL = 458,
    eSTRING_VEHICLE_CAR_COMPACT = 459,
    eSTRING_VEHICLE_CAR_ESTATE = 460,
    eSTRING_VEHICLE_CAR_LUXURY = 461,
    eSTRING_VEHICLE_CAR_PEOPLECARRIER = 462,
    eSTRING_VEHICLE_CAR_PICKUP = 463,
    eSTRING_VEHICLE_CAR_SUV = 464,
    eSTRING_VEHICLE_CAR_TAXI = 465,
    eSTRING_VEHICLE_VAN_STANDARD = 466,
    eSTRING_VEHICLE_VAN_SOFTDRINKS = 467,
    eSTRING_VEHICLE_BUS_TOWN = 468,
    eSTRING_VEHICLE_BUS_STANDARD = 469,
    eSTRING_VEHICLE_BUS_AIRPORT = 470,
    eSTRING_VEHICLE_CAB1 = 471,
    eSTRING_VEHICLE_CAB2 = 472,
    eSTRING_VEHICLE_PAYLOAD_CABLE = 473,
    eSTRING_VEHICLE_PAYLOAD_CONTAINER = 474,
    eSTRING_VEHICLE_PAYLOAD_FLATBED = 475,
    eSTRING_VEHICLE_PAYLOAD_PIPES = 476,
    eSTRING_VEHICLE_PAYLOAD_TANKER = 477,
    eSTRING_VEHICLE_PAYLOAD_TARPAULIN = 478,
    eSTRING_CRASH_ZONE_1 = 479,
    eSTRING_CRASH_ZONE_2 = 480,
    eSTRING_CRASH_ZONE_3 = 481,
    eSTRING_CRASH_ZONE_4 = 482,
    eSTRING_CRASH_ZONE_5 = 483,
    eSTRING_CRASH_ZONE_6 = 484,
    eSTRING_CRASH_ZONE_7 = 485,
    eSTRING_CRASH_ZONE_8 = 486,
    eSTRING_CRASH_ZONE_9 = 487,
    eSTRING_CRASH_ZONE_10 = 488,
    eSTRING_CRASH_ZONE_11 = 489,
    eSTRING_CRASH_ZONE_12 = 490,
    eSTRING_CRASH_ZONE_13 = 491,
    eSTRING_CRASH_ZONE_14 = 492,
    eSTRING_CRASH_ZONE_15 = 493,
    eSTRING_CRASH_ZONEBRIEF_1 = 494,
    eSTRING_CRASH_ZONEBRIEF_2 = 495,
    eSTRING_CRASH_ZONEBRIEF_3 = 496,
    eSTRING_CRASH_ZONEBRIEF_4 = 497,
    eSTRING_CRASH_ZONEBRIEF_5 = 498,
    eSTRING_CRASH_ZONEBRIEF_6 = 499,
    eSTRING_CRASH_ZONEBRIEF_7 = 500,
    eSTRING_CRASH_ZONEBRIEF_8 = 501,
    eSTRING_CRASH_ZONEBRIEF_9 = 502,
    eSTRING_CRASH_ZONEBRIEF_10 = 503,
    eSTRING_CRASH_ZONEBRIEF_11 = 504,
    eSTRING_CRASH_ZONEBRIEF_12 = 505,
    eSTRING_CRASH_ZONEBRIEF_13 = 506,
    eSTRING_CRASH_ZONEBRIEF_14 = 507,
    eSTRING_CRASH_ZONEBRIEF_15 = 508,
    eSTRING_CRASH_RESULTS_ZONE_CLEARED = 509,
    eSTRING_CRASH_RESULTS_TARGET_MEDAL_TITLES = 510,
    eSTRING_CRASH_RESULTS_DAMAGE_TITLE = 511,
    eSTRING_CRASH_RESULTS_BRONZE_MEDAL = 512,
    eSTRING_CRASH_RESULTS_SILVER_MEDAL = 513,
    eSTRING_CRASH_RESULTS_GOLD_MEDAL = 514,
    eSTRING_CRASH_RESULTS_NO_MEDAL = 515,
    eSTRING_CRASH_RESULTS_FAILED_TO_CRASH = 516,
    eSTRING_CRASH_RESULTS_NO_MONEY = 517,
    eSTRING_CRASH_RESULTS_CRASH_RESULTS = 518,
    eSTRING_CRASH_RESULTS_PLAYER_1_LONG = 519,
    eSTRING_CRASH_RESULTS_PLAYER_2_LONG = 520,
    eSTRING_CRASH_RESULTS_PLAYER_3_LONG = 521,
    eSTRING_CRASH_RESULTS_PLAYER_4_LONG = 522,
    eSTRING_CRASH_RESULTS_POSITION = 523,
    eSTRING_CRASH_RESULTS_PLAYER = 524,
    eSTRING_CRASH_RESULTS_CAR = 525,
    eSTRING_CRASH_RESULTS_TOTAL_DAMAGE = 526,
    eSTRING_CRASH_RESULTS_CRASH_STANDINGS = 527,
    eSTRING_CRASH_RESULTS_BRONZE_AWARDED = 528,
    eSTRING_CRASH_RESULTS_SILVER_AWARDED = 529,
    eSTRING_CRASH_RESULTS_GOLD_AWARDED = 530,
    eSTRING_CRASH_RESULTS_NO_AWARD = 531,
    eSTRING_CRASH_RESULTS_FAILED = 532,
    eSTRING_CRASH_RESULTS_ZONE_COMPLETED = 533,
    eSTRING_CRASH_RESULTS_ZONE_FAILED = 534,
    eSTRING_CRASH_RESULTS_PLAYER_1_WINS = 535,
    eSTRING_CRASH_RESULTS_PLAYER_2_WINS = 536,
    eSTRING_CRASH_RESULTS_PLAYER_3_WINS = 537,
    eSTRING_CRASH_RESULTS_PLAYER_4_WINS = 538,
    eSTRING_CRASH_RESULTS_NO_PLAYER_WINS = 539,
    eSTRING_CRASH_RESULTS_MULTIPLAYER_CRASH_FINISHED = 540,
    eSTRING_CRASH_RESULTS_VEHICLES = 541,
    eSTRING_CRASH_RESULTS_DAMAGE = 542,
    eSTRING_CRASH_RESULTS_GOLD = 543,
    eSTRING_CRASH_RESULTS_SILVER = 544,
    eSTRING_CRASH_RESULTS_BRONZE = 545,
    eSTRING_CRASH_RESULTS_OVERALL_STANDINGS = 546,
    eSTRING_CRASH_RESULTS_PLAYER_STANDINGS = 547,
    eSTRING_CRASH_RESULTS_WINS = 548,
    eSTRING_CRASH_RESULTS_MULTIPLIER = 549,
    eSTRING_CRASH_RESULTS_TOTAL = 550,
    eSTRING_LESSON_SELECT_LESSON = 551,
    eSTRING_LESSON_TARGETS = 552,
    eSTRING_LESSON_ONE_TITLE = 553,
    eSTRING_LESSON_TWO_TITLE = 554,
    eSTRING_LESSON_THREE_TITLE = 555,
    eSTRING_LESSON_FOUR_TITLE = 556,
    eSTRING_LESSON_FIVE_TITLE = 557,
    eSTRING_LESSON_SIX_TITLE = 558,
    eSTRING_LESSON_RESULT_TITLE1 = 559,
    eSTRING_LESSON_RESULT_TITLE2 = 560,
    eSTRING_LESSON_RESULT_TITLE3 = 561,
    eSTRING_LESSON_RESULT_TITLE4 = 562,
    eSTRING_LESSON_RESULT_TITLE5 = 563,
    eSTRING_LESSON_RESULT_TITLE6 = 564,
    eSTRING_LESSON_ONE_HUD = 565,
    eSTRING_LESSON_TWO_HUD = 566,
    eSTRING_LESSON_THREE_HUD = 567,
    eSTRING_LESSON_FOUR_HUD = 568,
    eSTRING_LESSON_FIVE_HUD = 569,
    eSTRING_LESSON_SIX_HUD = 570,
    eSTRING_LESSON_ONE_TAGLINE = 571,
    eSTRING_LESSON_ONE_INTRO = 572,
    eSTRING_LESSON_ONE_INTRO2 = 573,
    eSTRING_LESSON_TWO_TAGLINE = 574,
    eSTRING_LESSON_TWO_INTRO = 575,
    eSTRING_LESSON_TWO_INTRO2 = 576,
    eSTRING_LESSON_THREE_TAGLINE = 577,
    eSTRING_LESSON_THREE_INTRO = 578,
    eSTRING_LESSON_THREE_INTRO2 = 579,
    eSTRING_LESSON_FOUR_TAGLINE = 580,
    eSTRING_LESSON_FOUR_INTRO = 581,
    eSTRING_LESSON_FOUR_INTRO2 = 582,
    eSTRING_LESSON_FIVE_TAGLINE = 583,
    eSTRING_LESSON_FIVE_INTRO = 584,
    eSTRING_LESSON_FIVE_INTRO2 = 585,
    eSTRING_LESSON_SIX_TAGLINE = 586,
    eSTRING_LESSON_SIX_INTRO = 587,
    eSTRING_LESSON_SIX_INTRO2 = 588,
    eSTRING_LESSON_PASSED = 589,
    eSTRING_LESSON_FAILED = 590,
    eSTRING_LESSON_GOLD_SCORE = 591,
    eSTRING_LESSON_SILVER_SCORE = 592,
    eSTRING_LESSON_BRONZE_SCORE = 593,
    eSTRING_LESSON_TARGET_TIME = 594,
    eSTRING_LESSON_TARGET_DISTANCE = 595,
    eSTRING_LESSON_TARGET_BURNOUTS = 596,
    eSTRING_LESSON_TARGET_NEAR_MISSES = 597,
    eSTRING_LESSON_GOLD_MEDAL_WON = 598,
    eSTRING_LESSON_SILVER_MEDAL_WON = 599,
    eSTRING_LESSON_BRONZE_MEDAL_WON = 600,
    eSTRING_LESSON_TRY_AGAIN = 601,
    eSTRING_LESSON_UNITS_FEET = 602,
    eSTRING_LESSON_UNITS_METRES = 603,
    eSTRING_LESSON_UNITS_SECONDS = 604,
    eSTRING_LESSON_UNITS_MISS = 605,
    eSTRING_LESSON_UNITS_MISSES = 606,
    eSTRING_LESSON_UNITS_BURNOUT = 607,
    eSTRING_LESSON_UNITS_BURNOUTS = 608,
    eSTRING_TURNBASED_GET_READY_PLAYER_1 = 609,
    eSTRING_TURNBASED_GET_READY_PLAYER_2 = 610,
    eSTRING_TURNBASED_GET_READY_PLAYER_3 = 611,
    eSTRING_TURNBASED_GET_READY_PLAYER_4 = 612,
    eSTRING_TIMEATTACK_BEST_LAP = 613,
    eSTRING_TIMEATTACK_CURRENT_LAP = 614,
    eSTRING_TIMEATTACK_LAP_RECORD = 615,
    eSTRING_PURSUIT_DISTANCE_TITLE = 616,
    eSTRING_PURSUIT_ESCAPE_DISTANCE_TITLE = 617,
    eSTRING_PURSUIT_HEALTH = 618,
    eSTRING_PURSUIT_TARGET = 619,
    eSTRING_PURSUIT_TARGET_HEALTH = 620,
    eSTRING_PURSUIT_UNITS_MILES = 621,
    eSTRING_PURSUIT_UNITS_KILOMETERS = 622,
    eSTRING_OUTRO_UNLUCKY = 623,
    eSTRING_OUTRO_CROSS_LINE_WITHOUT_CRASHING = 624,
    eSTRING_OUTRO_LESSON_FAILED_CRASHED = 625,
    eSTRING_OUTRO_FAILED_TO_GAIN_A_MEDAL = 626,
    eSTRING_OUTRO_CONGRATULATIONS = 627,
    eSTRING_OUTRO_WON_NEW_CAR = 628,
    eSTRING_OUTRO_SESSION_BEST = 629,
    eSTRING_OUTRO_DAMAGE_FORMAT = 630,
    eSTRING_OUTRO_WON_BRONZE_MEDAL = 631,
    eSTRING_OUTRO_WON_SILVER_MEDAL = 632,
    eSTRING_OUTRO_WON_GOLD_MEDAL = 633,
    eSTRING_OUTRO_WON_NO_MEDAL = 634,
    eSTRING_OUTRO_FAILED_TO_CRASH = 635,
    eSTRING_OUTRO_CRASH_TO_SCORE = 636,
    eSTRING_OUTRO_YOU_WIN = 637,
    eSTRING_OUTRO_YOU_LOSE = 638,
    eSTRING_OUTRO_NO_FASTEST_LAP_TIME = 639,
    eSTRING_OUTRO_FASTEST_LAP_TIME_FORMAT = 640,
    eSTRING_OUTRO_MONEY_FORMAT = 641,
    eSTRING_INTRO_CITY_SHORT = 642,
    eSTRING_INTRO_CITY_LONG = 643,
    eSTRING_INTRO_AIRPORT_SHORT = 644,
    eSTRING_INTRO_AIRPORT_LONG = 645,
    eSTRING_INTRO_DESERT_SHORT = 646,
    eSTRING_INTRO_DESERT_LONG = 647,
    eSTRING_INTRO_FREEWAY_SHORT = 648,
    eSTRING_INTRO_FREEWAY_LONG = 649,
    eSTRING_INTRO_COAST_SHORT = 650,
    eSTRING_INTRO_COAST_LONG = 651,
    eSTRING_INTRO_MOUNTAIN_SHORT = 652,
    eSTRING_INTRO_MOUNTAIN_LONG = 653,
    eSTRING_INTRO_PTP_1 = 654,
    eSTRING_INTRO_PTP_2 = 655,
    eSTRING_INTRO_PTP_3 = 656,
    eSTRING_INTRO_CITY_SHORT_REV = 657,
    eSTRING_INTRO_CITY_LONG_REV = 658,
    eSTRING_INTRO_AIRPORT_SHORT_REV = 659,
    eSTRING_INTRO_AIRPORT_LONG_REV = 660,
    eSTRING_INTRO_DESERT_SHORT_REV = 661,
    eSTRING_INTRO_DESERT_LONG_REV = 662,
    eSTRING_INTRO_FREEWAY_SHORT_REV = 663,
    eSTRING_INTRO_FREEWAY_LONG_REV = 664,
    eSTRING_INTRO_COAST_SHORT_REV = 665,
    eSTRING_INTRO_COAST_LONG_REV = 666,
    eSTRING_INTRO_MOUNTAIN_SHORT_REV = 667,
    eSTRING_INTRO_MOUNTAIN_LONG_REV = 668,
    eSTRING_INTRO_PTP_1_REV = 669,
    eSTRING_INTRO_PTP_2_REV = 670,
    eSTRING_INTRO_PTP_3_REV = 671,
};

// declared in 8 file(s), e.g. gamesource\Menu\CMenuGfxComponentSummary.cpp
enum ESummaryItem {  // size 4
    eNO_SUMMARY_ITEM = 0,
    eTEXT_SUMMARY_ITEM = 1,
    eITALIC_TEXT_SUMMARY_ITEM = 2,
    eIMAGE_SUMMARY_ITEM = 3,
    eNUM_SUMMARY_ITEMS = 4,
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum ESwerveType {  // size 4
    eSWERVE_NONE = 0,
    eSWERVE_ONLY = 1,
    eSWERVE_WITH_HORN = 2,
    eSWERVE_WITH_FLASH = 3,
    eSWERVE_MAX_TYPES = 4,
};

// declared in 5 file(s), e.g. gamesource\Game\CRecords.cpp
enum ETimeAttackState {  // size 4
    eSTATE_NONE = 0,
    eSTATE_SETUP = 1,
    eSTATE_FINISHED = 2,
    eSTATE_RESET = 3,
    eSTATE_NUM_STATES = 4,
};

// declared in 122 file(s), e.g. gamesource\Game\CCrashForCashData.cpp
enum ETrackID {  // size 4
    eTRACK_NONE = -1,
    eTRACK_CITY_SHORT = 0,
    eTRACK_CITY_LONG = 1,
    eTRACK_AIRPORT_SHORT = 2,
    eTRACK_AIRPORT_LONG = 3,
    eTRACK_DESERT_SHORT = 4,
    eTRACK_DESERT_LONG = 5,
    eTRACK_FREEWAY_SHORT = 6,
    eTRACK_FREEWAY_LONG = 7,
    eTRACK_COAST_SHORT = 8,
    eTRACK_COAST_LONG = 9,
    eTRACK_MOUNTAIN_SHORT = 10,
    eTRACK_MOUNTAIN_LONG = 11,
    eTRACK_PTP_1 = 12,
    eTRACK_PTP_2 = 13,
    eTRACK_PTP_3 = 14,
    eTRACK_CITY_SHORT_REV = 15,
    eTRACK_CITY_LONG_REV = 16,
    eTRACK_AIRPORT_SHORT_REV = 17,
    eTRACK_AIRPORT_LONG_REV = 18,
    eTRACK_DESERT_SHORT_REV = 19,
    eTRACK_DESERT_LONG_REV = 20,
    eTRACK_FREEWAY_SHORT_REV = 21,
    eTRACK_FREEWAY_LONG_REV = 22,
    eTRACK_COAST_SHORT_REV = 23,
    eTRACK_COAST_LONG_REV = 24,
    eTRACK_MOUNTAIN_SHORT_REV = 25,
    eTRACK_MOUNTAIN_LONG_REV = 26,
    eTRACK_PTP_1_REV = 27,
    eTRACK_PTP_2_REV = 28,
    eTRACK_PTP_3_REV = 29,
    eTRACK_NUM_TRACKS = 30,
};

// declared in 47 file(s), e.g. gamesource\Game\CProfile.cpp
enum ETrafficChangeLaneTypes {  // size 4
    eTRAFFIC_CHANGELANE_PROX_NONE = 0,
    eTRAFFIC_CHANGELANE_PROX_LEFT = 1,
    eTRAFFIC_CHANGELANE_PROX_RIGHT = 2,
    eTRAFFIC_CHANGELANE_PROX_LEFT_FAKE = 3,
    eTRAFFIC_CHANGELANE_PROX_RIGHT_FAKE = 4,
    eTRAFFIC_CHANGELANE_MAX_PROX_TYPES = 5,
    eTRAFFIC_CHANGELANE_NONE = 6,
    eTRAFFIC_CHANGELANE_FRONTLEFT = 7,
    eTRAFFIC_CHANGELANE_FRONTRIGHT = 8,
    eTRAFFIC_CHANGELANE_LEFT = 9,
    eTRAFFIC_CHANGELANE_RIGHT = 10,
    eTRAFFIC_CHANGELANE_MAX_TYPES = 11,
};

// declared in 48 file(s), e.g. gamesource\Game\CProfile.cpp
enum ETrafficLightState {  // size 4
    eTL_GREEN = 0,
    eTL_ORANGE = 1,
    eTL_RED = 2,
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum ETrafficParamState {  // size 4
    eTP_STATE_INVALID = 0,
    eTP_STATE_NORMAL = 1,
    eTP_STATE_STOPPING_FOR_LIGHTS = 2,
    eTP_STATE_MATCHING_SPEEDS = 3,
    eTP_STATE_STOPPING_FOR_CRASH = 4,
    eTP_STATE_NEAR_CAR_SLOW = 5,
    eTP_STATE_CHANGE_LANE_CAR_SLOW = 6,
};

// declared in 2 file(s), e.g. gamesource\Race\CTrack.cpp
enum ETrafficSystemTypes {  // size 4
    eTRAFFIC_SYSTEM_NULL = 0,
    eTRAFFIC_SYSTEM_1P_SETUP = 1,
    eTRAFFIC_SYSTEM_2P_SETUP = 2,
    eTRAFFIC_SYSTEM_MAX_SETUPS = 3,
};

// declared in 47 file(s), e.g. gamesource\Game\CLessonLogic.cpp
enum ETrailType {  // size 4
    eTS_TYRESKID = 0,
    eTS_DIRTTRACK = 1,
    eTS_WATERTRAIL = 2,
    eTS_NUMTYPES = 3,
};

// declared in 81 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
enum ETriggerType {  // size 4
    eTRIG_CHECKPOINT = 0,
    eTRIG_PLANAR = 1,
    eTRIG_CIRCULAR = 2,
    eTRIG_NUMTYPES = 3,
};

// declared in 69 file(s), e.g. gamesource\Game\CGrandPrixTable.cpp
enum ETrigWarnType {  // size 4
    eWRN_LEFT_TURN = 0,
    eWRN_LEFT_HAIRPIN = 1,
    eWRN_LEFT_CHICANE = 2,
    eWRN_LEFT_ONRAMP = 3,
    eWRN_LEFT_OFFRAMP = 4,
    eWRN_BUMPS = 5,
    eWRN_CROSSROAD = 6,
    eWRN_EXCLAMATION = 7,
    eWRN_NUMUNIQUETYPES = 8,
    eWRN_RIGHT_TURN = 8,
    eWRN_RIGHT_HAIRPIN = 9,
    eWRN_RIGHT_CHICANE = 10,
    eWRN_RIGHT_ONRAMP = 11,
    eWRN_RIGHT_OFFRAMP = 12,
    eWRN_NUMTYPES = 13,
};

// declared in 2 file(s), e.g. gamesource\Menu\CMenuResultsScreens.cpp
enum ETurnBasedState {  // size 4
    eTURNBASED_STATE_START_TURNS = 0,
    eTURNBASED_STATE_PLAYING_TURNS = 1,
    eTURNBASED_STATE_END_OF_TURNS = 2,
    eTURNBASED_STATE_END_OF_GAME = 3,
    eTURNBASED_STATE_NUM_TURNBASED_STATES = 4,
};

// declared in 90 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum EVehicleClass {  // size 4
    eVC_NULL = 0,
    eVC_CAR = 1,
    eVC_TAXI = 2,
    eVC_VAN = 3,
    eVC_BUS = 4,
    eVC_ARTIC = 5,
    eVC_MAX_NORMAL_CLASSES = 6,
    eVC_PAD = 7,
    eVC_PROP_TRAIN_CARRIAGE = 8,
    eVC_PROP_MONORAIL_CARRIAGE = 9,
    eVC_PROP_LIGHTAIRCRAFT = 10,
    eVC_PROP_AIRLINER = 11,
    eVC_PROP_RAMP_PICKUP = 12,
    eVC_NUMCLASSES = 13,
};

// declared in 88 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum EVehicleColour {  // size 4
    eVC_WHITE = 0,
    eVC_COLOUR2 = 1,
    eVC_COLOUR3 = 2,
    eVC_COLOUR4 = 3,
    eVC_COLOUR5 = 4,
    eVC_COLOUR6 = 5,
    eVC_COLOUR7 = 6,
    eVC_COLOUR8 = 7,
    eVC_COLOUR9 = 8,
    eVC_COLOUR10 = 9,
    eVC_COLOUR11 = 10,
    eVC_COLOUR12 = 11,
    eVC_COLOUR13 = 12,
    eVC_COLOUR14 = 13,
    eVC_COLOUR15 = 14,
    eVC_COLOUR16 = 15,
    eVC_MAX_COLOURS = 16,
};

// declared in 3 file(s), e.g. gamesource\Sound\GameSound.cpp
enum EWaveDictionary {  // size 4
    eBank_CarExtras = 0,
    eBank_Traffic = 1,
    eBank_Crashes = 2,
    eBank_FrontendMenu = 3,
    eBank_IngameMenu = 4,
    eBank_DryWeather = 5,
    eBank_WeatherSpecific = 6,
    eBank_LevelSpecific = 7,
    eBank_ModeSpecific = 8,
    NUM_DICTIONARIES = 9,
};

// declared in 89 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum EWheelState {  // size 4
    eWS_ATTACHED = 0,
    eWS_BROKEN = 1,
    eWS_LOOSE = 2,
};

// declared in 51 file(s), e.g. gamesource\Game\CProfile.cpp
enum RpLightType {  // size 4
    rpNALIGHTTYPE = 0,
    rpLIGHTDIRECTIONAL = 1,
    rpLIGHTAMBIENT = 2,
    rpLIGHTPOINT = 128,
    rpLIGHTSPOT = 129,
    rpLIGHTSPOTSOFT = 130,
    rpLIGHTTYPEFORCEENUMSIZEINT = 2147483647,
};

// declared in 11 file(s), e.g. fastim3d.c
enum RpMeshHeaderFlags {  // size 4
    rpMESHHEADERTRISTRIP = 1,
    rpMESHHEADERTRIFAN = 2,
    rpMESHHEADERLINELIST = 4,
    rpMESHHEADERPOLYLINE = 8,
    rpMESHHEADERPOINTLIST = 16,
    rpMESHHEADERPRIMMASK = 255,
    rpMESHHEADERUNINDEXED = 256,
    rpMESHHEADERFLAGSFORCEENUMSIZEINT = 2147483647,
};

// declared in 1 file(s), e.g. basky.c
enum RpSkyRenderState {  // size 4
    rpSKYRENDERSTATENARENDERSTATE = 0,
    rpSKYRENDERSTATEDITHER = 1,
    rpSKYRENDERSTATEALPHA_1 = 2,
    rpSKYRENDERSTATEATEST_1 = 3,
    rpSKYRENDERSTATEFARFOGPLANE = 4,
    rpSKYRENDERSTATEMAXMIPLEVELS = 5,
    rpSKYRENDERSTATEFORCEENUMSIZEINT = 2147483647,
};

// declared in 9 file(s), e.g. babinwor.c
enum RpWorldRenderOrder {  // size 4
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawaveconv.c
enum RwaPCMType {  // size 4
    rwaNAPCMTYPE = 0,
    rwaPCMTYPE_8U = 1,
    rwaPCMTYPE_8S = 2,
    rwaPCMTYPE_16U = 3,
    rwaPCMTYPE_16S = 4,
    rwaPCMTYPEFORCEENUMSIZEINT = 2147483647,
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\common\rwarpc.c
enum RwaRPCCommandType {  // size 4
    rwaNARPC = 0,
    rwaRPC_IOPGETVERSION = 1,
    rwaRPC_DMAGETWORKAREAADDRESS = 2,
    rwaRPC_DMAIOPTOEE = 3,
    rwaRPC_DMAEETOIOP = 4,
    rwaRPC_DMAIOPTOSRAM = 5,
    rwaRPC_DMASRAMTOIOP = 6,
    rwaRPC_DMAEETOSRAM = 7,
    rwaRPC_DMASRAMTOEE = 8,
    rwaRPC_IOPGETVERSION_ACK = 9,
    rwaRPC_DMAGETWORKAREAADDRESS_ACK = 10,
    rwaRPC_DMAIOPTOEE_ACK = 11,
    rwaRPC_DMAEETOIOP_ACK = 12,
    rwaRPC_DMAIOPTOSRAM_ACK = 13,
    rwaRPC_DMASRAMTOIOP_ACK = 14,
    rwaRPC_DMAEETOSRAM_ACK = 15,
    rwaRPC_DMASRAMTOEE_ACK = 16,
    rwaRPC_CREATE = 17,
    rwaRPC_DESTROY = 18,
    rwaRPC_IOPGETMEMSTATS = 19,
    rwaRPC_UPDATE = 20,
    rwaRPC_TRADEDMASTATEADDRESSES = 21,
    rwaRPC_INITAUTODMA = 22,
    rwaRPC_STOPAUTODMA = 23,
    rwaRPC_SETSPEAKERCONFIG = 24,
    rwaRPC_AUTODMA_ACK = 25,
    rwaRPC_CREATE_ACK = 26,
    rwaRPC_IOPGETMEMSTATS_ACK = 27,
    rwaRPC_TRADEDMASTATEADDRESSES_ACK = 28,
    rwaRPC_STOPAUTODMA_ACK = 29,
    rwaRPC_STREAMALLOC_EE0 = 30,
    rwaRPC_STREAMALLOC_EE1 = 31,
    rwaRPC_STREAMALLOC_IOP0 = 32,
    rwaRPC_STREAMALLOC_IOP1 = 33,
    rwaRPC_STREAMFREE_EE = 34,
    rwaRPC_STREAMFREE_IOP = 35,
    rwaRPC_STREAMALLOC_EEPCM0 = 36,
    rwaRPC_STREAMALLOC_EEPCM1 = 37,
    rwaRPC_STREAMALLOC_IOPCM0 = 38,
    rwaRPC_STREAMALLOC_IOPCM1 = 39,
    rwaRPC_STREAMFREE_EEPCM = 40,
    rwaRPC_STREAMFREE_IOPCM = 41,
    rwaRPC_IOPCOREOPEN = 42,
    rwaRPC_IOPCOREOPEN_ACK = 43,
    rwaRPC_IOPCORECLOSE = 44,
    rwaRPC_IOPCORECLOSE_ACK = 45,
    rwaRPC_SPU2IOPSTREAM_CREATE = 46,
    rwaRPC_SPU2IOPSTREAM_CREATE_ACK = 47,
    rwaRPC_SPU2IOPSTREAM_DESTROY = 48,
    rwaRPC_SPU2IOPSTREAM_DESTROY_ACK = 49,
    rwaRPC_SPU2IOPSTREAM_UPDATE = 50,
    rwaRPC_SPU2IOPSTREAM_UPDATE_ACK = 51,
    rwaRPC_SPU2IOPSTREAM_TRADESTATEADDR = 52,
    rwaRPC_SPU2IOPSTREAM_TRADESTATEADDR_ACK = 53,
    rwaRPC_FORCEENUMSIZEINT = 2147483647,
};

// declared in 2 file(s), e.g. C:\dev\rwaudio\source\objects\src\rwasoftoutputobj.c
enum RwaSpeakerConfig {  // size 4
    rwaNASPEAKERCONFIG = 0,
    rwaSPEAKERCONFIG_STEREO = 1,
    rwaSPEAKERCONFIG_MONO = 2,
    rwaSPEAKERCONFIG_HEADPHONES = 3,
    rwaSPEAKERCONFIG_SURROUND = 4,
    rwaSPEAKERCONFIG_5POINT1 = 5,
    rwaSPEAKERCONFIG_FORCEENUMSIZEINT = 2147483647,
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2out.c
enum RwaSPU2OutputReverbMode {  // size 4
    rwaSPU2OUTPUTREVERBMODENA = 0,
    rwaSPU2OUTPUTREVERBMODE_OFF = 1,
    rwaSPU2OUTPUTREVERBMODE_ROOM = 2,
    rwaSPU2OUTPUTREVERBMODE_STUDIOA = 3,
    rwaSPU2OUTPUTREVERBMODE_STUDIOB = 4,
    rwaSPU2OUTPUTREVERBMODE_STUDIOC = 5,
    rwaSPU2OUTPUTREVERBMODE_HALL = 6,
    rwaSPU2OUTPUTREVERBMODE_SPACE = 7,
    rwaSPU2OUTPUTREVERBMODE_ECHO = 8,
    rwaSPU2OUTPUTREVERBMODE_DELAY = 9,
    rwaSPU2OUTPUTREVERBMODE_PIPE = 10,
    rwaSPU2OUTPUTREVERBMODEMAX = 2147483647,
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2stream.c
enum RwaSPU2StreamCurrentUpdateType {  // size 4
    rwaNASPU2STREAMCURRENTUPDATETYPE = 0,
    rwaSPU2STREAMCURRENTUPDATETYPE_NORMAL = 1,
    rwaSPU2STREAMCURRENTUPDATETYPE_MEDIAOPENED = 2,
    rwaSPU2STREAMCURRENTUPDATETYPE_FORCEENUMSIZEINT = 2147483647,
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2stream.c
enum RwaStreamMediaStatus {  // size 4
    rwaNASTREAMMEDIASTATUS = 0,
    rwaSTREAMMEDIASTATUS_OPENING = 1,
    rwaSTREAMMEDIASTATUS_STOPPED = 2,
    rwaSTREAMMEDIASTATUS_PAUSING = 3,
    rwaSTREAMMEDIASTATUS_PAUSED = 4,
    rwaSTREAMMEDIASTATUS_PLAYING = 5,
    rwaSTREAMMEDIASTATUS_STARVED = 6,
    rwaSTREAMMEDIASTATUS_STOPPING = 7,
    rwaSTREAMMEDIASTATUS_FORCEENUMSIZEINT = 2147483647,
};

// declared in 2 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\common\rwastreamcontainer.c
enum RwaStreamMediaType {  // size 4
    rwaNASTREAMMEDIATYPE = 0,
    rwaSTREAMMEDIATYPE_FILENAME = 1,
    rwaSTREAMMEDIATYPE_FILEPTR = 2,
    rwaSTREAMMEDIATYPE_RWSTREAM = 3,
    rwaSTREAMMEDIATYPE_FORCEENUMSIZEINT = 2147483647,
};

// declared in 2 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\common\rwastreamcontainer.c
enum RwaStreamPlayState {  // size 4
    rwaNASTREAMPLAYSTATE = 0,
    rwaSTREAMPLAYSTATE_STOP = 1,
    rwaSTREAMPLAYSTATE_PLAY = 2,
    rwaSTREAMPLAYSTATE_PAUSE = 3,
    rwaSTREAMPLAYSTATE_FORCEENUMSIZEINT = 2147483647,
};

// declared in 2 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\common\rwastreamcontainer.c
enum RwaStreamPosSegmentType {  // size 4
    rwaNASTREAMPOSSEGMENTTYPE = 0,
    rwaSTREAMPOSSEGMENTTYPE_NAME = 1,
    rwaSTREAMPOSSEGMENTTYPE_UUID = 2,
    rwaSTREAMPOSSEGMENTTYPE_INDEX = 3,
    rwaSTREAMPOSSEGMENTTYPE_FORCEENUMSIZEINT = 2147483647,
};

// declared in 2 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\common\rwastreamcontainer.c
enum RwaStreamPosTimeType {  // size 4
    rwaNASTREAMPOSTIMETYPE = 0,
    rwaSTREAMPOSTIMETYPE_TIME = 1,
    rwaSTREAMPOSTIMETYPE_SAMPLES = 2,
    rwaSTREAMPOSTIMETYPE_FORCEENUMSIZEINT = 2147483647,
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2stream.c
enum RwaStreamRenderStatus {  // size 4
    rwaNASTREAMRENDERSTATUS = 0,
    rwaSTREAMRENDERSTATUS_INITIALIZING = 1,
    rwaSTREAMRENDERSTATUS_STOPPED = 2,
    rwaSTREAMRENDERSTATUS_PAUSING = 3,
    rwaSTREAMRENDERSTATUS_PAUSED = 4,
    rwaSTREAMRENDERSTATUS_PLAYING = 5,
    rwaSTREAMRENDERSTATUS_STARVED = 6,
    rwaSTREAMRENDERSTATUS_STOPPING = 7,
    rwaSTREAMRENDERSTATUS_FORCEENUMSIZEINT = 2147483647,
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\ps2\spu2\ee\src\rwaspu2stream.c
enum RwaStreamStatus {  // size 4
    rwaNASTREAMSTATUS = 0,
    rwaSTREAMSTATUS_OPENING = 1,
    rwaSTREAMSTATUS_STOPPED = 2,
    rwaSTREAMSTATUS_PAUSING = 3,
    rwaSTREAMSTATUS_PAUSED = 4,
    rwaSTREAMSTATUS_PLAYING = 5,
    rwaSTREAMSTATUS_STARVED = 6,
    rwaSTREAMSTATUS_STOPPING = 7,
    rwaSTREAMSTATUS_NOMEDIA = 8,
    rwaSTREAMSTATUS_FORCEENUMSIZEINT = 2147483647,
};

// declared in 45 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedef.c
enum RwaType {  // size 4
    rwaTYPE_UINT8 = 1,
    rwaTYPE_INT8 = 2,
    rwaTYPE_UINT16 = 4,
    rwaTYPE_INT16 = 8,
    rwaTYPE_UINT32 = 16,
    rwaTYPE_INT32 = 32,
    rwaTYPE_UINT64 = 64,
    rwaTYPE_INT64 = 128,
    rwaTYPE_UINT128 = 256,
    rwaTYPE_INT128 = 512,
    rwaTYPE_FLOAT = 1024,
    rwaTYPE_DOUBLE = 2048,
    rwaTYPE_POINTER = 4096,
    rwaTYPE_ARRAY = 8192,
    rwaTYPE_ALIAS = 16384,
};

// declared in 16 file(s), e.g. baim3d.c
enum RwBlendFunction {  // size 4
    rwBLENDNABLEND = 0,
    rwBLENDZERO = 1,
    rwBLENDONE = 2,
    rwBLENDSRCCOLOR = 3,
    rwBLENDINVSRCCOLOR = 4,
    rwBLENDSRCALPHA = 5,
    rwBLENDINVSRCALPHA = 6,
    rwBLENDDESTALPHA = 7,
    rwBLENDINVDESTALPHA = 8,
    rwBLENDDESTCOLOR = 9,
    rwBLENDINVDESTCOLOR = 10,
    rwBLENDSRCALPHASAT = 11,
    rwBLENDFUNCTIONFORCEENUMSIZEINT = 2147483647,
};

// declared in 104 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum RwCameraProjection {  // size 4
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};

// declared in 5 file(s), e.g. basky.c
enum RwCullMode {  // size 4
    rwCULLMODENACULLMODE = 0,
    rwCULLMODECULLNONE = 1,
    rwCULLMODECULLBACK = 2,
    rwCULLMODECULLFRONT = 3,
    rwCULLMODEFORCEENUMSIZEINT = 2147483647,
};

// declared in 16 file(s), e.g. baim3d.c
enum RwFogType {  // size 4
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};

// declared in 96 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum RwFrustumTestResult {  // size 4
    rwSPHEREOUTSIDE = 0,
    rwSPHEREBOUNDARY = 1,
    rwSPHEREINSIDE = 2,
    rwFRUSTUMTESTRESULTFORCEENUMSIZEINT = 2147483647,
};

// declared in 2 file(s), e.g. imrascnv.c
enum rwImageAlphaType {  // size 4
    rwIMAGEALPHA_OPAQUE = 1,
    rwIMAGEALPHA_MASKED = 2,
    rwIMAGEALPHA_SMOOTH = 3,
    rwIMAGEALPHATYPEFORCEENUMSIZEINT = 2147483647,
};

// declared in 3 file(s), e.g. baframe.c
enum RwOpCombineType {  // size 4
    rwCOMBINEREPLACE = 0,
    rwCOMBINEPRECONCAT = 1,
    rwCOMBINEPOSTCONCAT = 2,
    rwOPCOMBINETYPEFORCEENUMSIZEINT = 2147483647,
};

// declared in 1 file(s), e.g. native.c
enum RwPlatformID {  // size 4
    rwID_PCD3D7 = 1,
    rwID_PCOGL = 2,
    rwID_MAC = 3,
    rwID_PS2 = 4,
    rwID_XBOX = 5,
    rwID_GAMECUBE = 6,
    rwID_SOFTRAS = 7,
    rwID_PCD3D8 = 8,
    rwPLATFROMIDFORCEENUMSIZEINT = 2147483647,
};

// declared in 25 file(s), e.g. badevice.c
enum RwPrimitiveType {  // size 4
    rwPRIMTYPENAPRIMTYPE = 0,
    rwPRIMTYPELINELIST = 1,
    rwPRIMTYPEPOLYLINE = 2,
    rwPRIMTYPETRILIST = 3,
    rwPRIMTYPETRISTRIP = 4,
    rwPRIMTYPETRIFAN = 5,
    rwPRIMTYPEPOINTLIST = 6,
    rwPRIMITIVETYPEFORCEENUMSIZEINT = 2147483647,
};

// declared in 1 file(s), e.g. basky.c
enum RwRasterFormat {  // size 4
    rwRASTERFORMATDEFAULT = 0,
    rwRASTERFORMAT1555 = 256,
    rwRASTERFORMAT565 = 512,
    rwRASTERFORMAT4444 = 768,
    rwRASTERFORMATLUM8 = 1024,
    rwRASTERFORMAT8888 = 1280,
    rwRASTERFORMAT888 = 1536,
    rwRASTERFORMAT16 = 1792,
    rwRASTERFORMAT24 = 2048,
    rwRASTERFORMAT32 = 2304,
    rwRASTERFORMAT555 = 2560,
    rwRASTERFORMATAUTOMIPMAP = 4096,
    rwRASTERFORMATPAL8 = 8192,
    rwRASTERFORMATPAL4 = 16384,
    rwRASTERFORMATMIPMAP = 32768,
    rwRASTERFORMATPIXELFORMATMASK = 3840,
    rwRASTERFORMATMASK = 65280,
    rwRASTERFORMATFORCEENUMSIZEINT = 2147483647,
};

// declared in 1 file(s), e.g. skyblit.c
enum RwRasterType {  // size 4
    rwRASTERTYPENORMAL = 0,
    rwRASTERTYPEZBUFFER = 1,
    rwRASTERTYPECAMERA = 2,
    rwRASTERTYPETEXTURE = 4,
    rwRASTERTYPECAMERATEXTURE = 5,
    rwRASTERTYPEMASK = 7,
    rwRASTERDONTALLOCATE = 128,
    rwRASTERTYPEFORCEENUMSIZEINT = 2147483647,
};

// declared in 3 file(s), e.g. badevice.c
enum RwRenderState {  // size 4
    rwRENDERSTATENARENDERSTATE = 0,
    rwRENDERSTATETEXTURERASTER = 1,
    rwRENDERSTATETEXTUREADDRESS = 2,
    rwRENDERSTATETEXTUREADDRESSU = 3,
    rwRENDERSTATETEXTUREADDRESSV = 4,
    rwRENDERSTATETEXTUREPERSPECTIVE = 5,
    rwRENDERSTATEZTESTENABLE = 6,
    rwRENDERSTATESHADEMODE = 7,
    rwRENDERSTATEZWRITEENABLE = 8,
    rwRENDERSTATETEXTUREFILTER = 9,
    rwRENDERSTATESRCBLEND = 10,
    rwRENDERSTATEDESTBLEND = 11,
    rwRENDERSTATEVERTEXALPHAENABLE = 12,
    rwRENDERSTATEBORDERCOLOR = 13,
    rwRENDERSTATEFOGENABLE = 14,
    rwRENDERSTATEFOGCOLOR = 15,
    rwRENDERSTATEFOGTYPE = 16,
    rwRENDERSTATEFOGDENSITY = 17,
    rwRENDERSTATEFOGTABLE = 18,
    rwRENDERSTATEALPHAPRIMITIVEBUFFER = 19,
    rwRENDERSTATECULLMODE = 20,
    rwRENDERSTATESTENCILENABLE = 21,
    rwRENDERSTATESTENCILFAIL = 22,
    rwRENDERSTATESTENCILZFAIL = 23,
    rwRENDERSTATESTENCILPASS = 24,
    rwRENDERSTATESTENCILFUNCTION = 25,
    rwRENDERSTATESTENCILFUNCTIONREF = 26,
    rwRENDERSTATESTENCILFUNCTIONMASK = 27,
    rwRENDERSTATESTENCILFUNCTIONWRITEMASK = 28,
    rwRENDERSTATEFORCEENUMSIZEINT = 2147483647,
};

// declared in 1 file(s), e.g. resmem.c
enum rwResHeapBlockFlags {  // size 4
    rwRESHEAP_BLOCKUSED = 1,
    rwRESHEAPFLAGFORCEENUMSIZEINT = 2147483647,
};

// declared in 16 file(s), e.g. baim3d.c
enum RwShadeMode {  // size 4
    rwSHADEMODENASHADEMODE = 0,
    rwSHADEMODEFLAT = 1,
    rwSHADEMODEGOURAUD = 2,
    rwSHADEMODEFORCEENUMSIZEINT = 2147483647,
};

// declared in 28 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedict.c
enum RwStreamAccessType {  // size 4
    rwNASTREAMACCESS = 0,
    rwSTREAMREAD = 1,
    rwSTREAMWRITE = 2,
    rwSTREAMAPPEND = 3,
    rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 2147483647,
};

// declared in 1 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedict.c
enum RwStreamChunksType {  // size 4
    rwNASTREAMCHUNKSTYPE = 0,
    rwSTREAMCHUNKSTYPE_HEADER = 1,
    rwSTREAMCHUNKSTYPE_DATA = 2,
    rwSTREAMCHUNKSTYPE = 2147483647,
};

// declared in 28 file(s), e.g. C:\dev\rwaudio\source\core\src\rwawavedict.c
enum RwStreamType {  // size 4
    rwNASTREAM = 0,
    rwSTREAMFILE = 1,
    rwSTREAMFILENAME = 2,
    rwSTREAMMEMORY = 3,
    rwSTREAMCUSTOM = 4,
    rwSTREAMTYPEFORCEENUMSIZEINT = 2147483647,
};

// declared in 19 file(s), e.g. babintex.c
enum RwTextureAddressMode {  // size 4
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0,
    rwTEXTUREADDRESSWRAP = 1,
    rwTEXTUREADDRESSMIRROR = 2,
    rwTEXTUREADDRESSCLAMP = 3,
    rwTEXTUREADDRESSBORDER = 4,
    rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 2147483647,
};

// declared in 19 file(s), e.g. babintex.c
enum RwTextureFilterMode {  // size 4
    rwFILTERNAFILTERMODE = 0,
    rwFILTERNEAREST = 1,
    rwFILTERLINEAR = 2,
    rwFILTERMIPNEAREST = 3,
    rwFILTERMIPLINEAR = 4,
    rwFILTERLINEARMIPNEAREST = 5,
    rwFILTERLINEARMIPLINEAR = 6,
    rwTEXTUREFILTERMODEFORCEENUMSIZEINT = 2147483647,
};

// declared in 1 file(s), e.g. babintex.c
enum RwTextureStreamFlags {  // size 4
    rwNATEXTURESTREAMFLAG = 0,
    rwTEXTURESTREAMFLAGSUSERMIPMAPS = 1,
    rwTEXTURESTREAMFLAGSFORCEENUMSIZEINT = 2147483647,
};

// declared in 4 file(s), e.g. badevice.c
enum RwVideoModeFlag {  // size 4
    rwVIDEOMODEEXCLUSIVE = 1,
    rwVIDEOMODEINTERLACE = 2,
    rwVIDEOMODEFFINTERLACE = 4,
    rwVIDEOMODEFSAA0 = 8,
    rwVIDEOMODEFSAA1 = 16,
    rwVIDEOMODEFLAGFORCEENUMSIZEINT = 2147483647,
};

// declared in 140 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum RxClusterForcePresent {  // size 4
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};

// declared in 140 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum RxClusterValid {  // size 4
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};

// declared in 140 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum RxClusterValidityReq {  // size 4
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};

// declared in 140 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum rxEmbeddedPacketState {  // size 4
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};

// declared in 9 file(s), e.g. fastim3d.c
enum RxInstanceFlags {  // size 4
    rxINSTANCENAINSTANCEFLAG = 0,
    rxINSTANCEDONTINSTANCE = 1,
    rxINSTANCEINPLACEINSTANCE = 2,
    rxINSTANCECONGRUENTINSTANCE = 4,
    rxINSTANCEFULLINSTANCE = 8,
    rxINSTANCETYPEMASK = 14,
    rxINSTANCEXYZ = 16,
    rxINSTANCENORMAL = 32,
    rxINSTANCERGBA = 64,
    rxINSTANCEUV = 128,
    rxINSTANCEUV1 = 128,
    rxINSTANCEUV2 = 256,
    rxINSTANCEUV3 = 512,
    rxINSTANCEUV4 = 1024,
    rxINSTANCEUV5 = 2048,
    rxINSTANCEUV6 = 4096,
    rxINSTANCEUV7 = 8192,
    rxINSTANCEUV8 = 16384,
    rxINSTANCEUSER1 = 32768,
    rxINSTANCEUSER2 = 65536,
    rxINSTANCEUSER3 = 131072,
    rxINSTANCEUSER4 = 262144,
    rxINSTANCEALL = 524272,
    rxINSTANCEMASK = 524287,
    rxINSTANCEFORCEENUMSIZEINT = 2147483647,
};

// declared in 140 file(s), e.g. gamesource\Game\CCrashForCashLogic.cpp
enum RxNodeDefEditable {  // size 4
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};

// declared in 1 file(s), e.g. nodeps2all.c
enum RxPipelineNodePS2AllCallBackType {  // size 4
    rxPS2ALLCALLBACKNACALLBACK = 0,
    rxPS2ALLCALLBACKOBJECTSETUP = 1,
    rxPS2ALLCALLBACKOBJECTFINALIZE = 2,
    rxPS2ALLCALLBACKFORCEENUMSIZEINT = 2147483647,
};

// declared in 1 file(s), e.g. ps2allmat.c
enum RxPipelineNodePS2AllMatCallBackType {  // size 4
    rxPS2ALLMATCALLBACKNACALLBACK = 0,
    rxPS2ALLMATCALLBACKMESHINSTANCETEST = 1,
    rxPS2ALLMATCALLBACKRESENTRYALLOC = 2,
    rxPS2ALLMATCALLBACKINSTANCE = 3,
    rxPS2ALLMATCALLBACKBRIDGE = 4,
    rxPS2ALLMATCALLBACKPOSTMESH = 5,
    rxPS2ALLMATCALLBACKFORCEENUMSIZEINT = 2147483647,
};

// declared in 4 file(s), e.g. nodeps2manager.c
enum RxPS2ObjectType {  // size 4
    rxOBJTYPE_WORLDSECTOR = 0,
    rxOBJTYPE_ATOMIC = 1,
    rxOBJTYPE_IM3D = 2,
    rxOBJTYPEFORCEENUMSIZEINT = 2147483647,
};

// declared in 4 file(s), e.g. nodeps2manager.c
enum RxSkyTransTypeFlags {  // size 4
    rxSKYTRANSTYPENATRANSTYPE = 0,
    rxSKYTRANSTYPEFOG = 1,
    rxSKYTRANSTYPECLIP = 2,
    rxSKYTRANSTYPELIST = 4,
    rxSKYTRANSTYPEISO = 8,
    rxSKYTRANSTYPELINE = 16,
    rxSKYTRANSTYPECULL = 32,
    rxSKYTRANSTYPEFLAGSFORCEENUMSIZEINT = 2147483647,
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\Mpeg\ps2\GtMpegPs2.cpp
enum sceMpegCbType {  // size 4
    sceMpegCbError = 0,
    sceMpegCbNodata = 1,
    sceMpegCbStopDMA = 2,
    sceMpegCbRestartDMA = 3,
    sceMpegCbBackground = 4,
    sceMpegCbTimeStamp = 5,
    sceMpegCbStr = 6,
};

// declared in 56 file(s), e.g. gamesource\Game\CLessonLogic.cpp
enum SlotState {  // size 4
    eSTATE_EMPTY = 0,
    eSTATE_LOADING = 1,
    eSTATE_READY = 2,
    eSTATE_SHUTDOWN = 3,
};

