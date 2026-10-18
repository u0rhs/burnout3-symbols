// Every class, struct, union and enum in the debug information of GTFSHOST.IRX
// Burnout 2 prototype, 29 July 2002
// Offsets are in /* */ before each member; sizes in bytes. Types appear once per distinct layout:
// a name with more than one layout is marked VARIANT (headers changed between files, or two
// different types share the name). Base classes are listed with their offsets.
// u_long128 is the EE's 128-bit integer. MW CodeWarrior did not record const, typedefs or
// member functions in the types; the functions of each class are listed from the code.

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
struct _libcaller {  // size 0x014
    /* 0x000 */ unsigned long magic;
    /* 0x004 */ _libcaller *client;
    /* 0x008 */ unsigned short version;
    /* 0x00A */ unsigned short flags;
    /* 0x00C */ char name[8];
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
struct _libhead {  // size 0x014
    /* 0x000 */ _libhead *next;
    /* 0x004 */ _libcaller *client;
    /* 0x008 */ unsigned short version;
    /* 0x00A */ unsigned short flags;
    /* 0x00C */ char name[8];
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
struct _moduleinfo {  // size 0x008
    /* 0x000 */ char *name;
    /* 0x004 */ unsigned short version;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
struct _sif_client_data {  // size 0x028
    /* 0x000 */ _sif_rpc_data rpcd;
    /* 0x010 */ unsigned int command;
    /* 0x014 */ void *buff;
    /* 0x018 */ void *cbuff;
    /* 0x01C */ void (*func)(void *);
    /* 0x020 */ void *para;
    /* 0x024 */ _sif_serve_data *serve;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
struct _sif_queue_data {  // size 0x018
    /* 0x000 */ int key;
    /* 0x004 */ int active;
    /* 0x008 */ _sif_serve_data *link;
    /* 0x00C */ _sif_serve_data *start;
    /* 0x010 */ _sif_serve_data *end;
    /* 0x014 */ _sif_queue_data *next;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
struct _sif_rpc_data {  // size 0x010
    /* 0x000 */ void *paddr;
    /* 0x004 */ unsigned int pid;
    /* 0x008 */ int tid;
    /* 0x00C */ unsigned int mode;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
struct _sif_serve_data {  // size 0x044
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

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
struct EventFlagParam {  // size 0x00C
    /* 0x000 */ unsigned int attr;
    /* 0x004 */ unsigned int option;
    /* 0x008 */ unsigned int initPattern;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
struct GtsConfigTag {  // size 0x010
    /* 0x000 */ unsigned int nNumEEStreams;
    /* 0x004 */ unsigned int nNumIOPStreams;
    /* 0x008 */ unsigned int nRingBufferSize;
    /* 0x00C */ unsigned int nBufferReadSize;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
struct GtsIOPFileTag {  // size 0x044
    /* 0x000 */ int bInUse;
    /* 0x004 */ int nFileDescriptor;
    /* 0x008 */ unsigned int nReadLSN;
    /* 0x00C */ unsigned int nCurrentLSN;
    /* 0x010 */ unsigned int nLastLSN;
    /* 0x014 */ unsigned int nFileLength;
    /* 0x018 */ GtsIOPRingBufferTag rbBuffer;
    /* 0x028 */ GtsIOPTransferQueueTag trTransfer;
    /* 0x034 */ GtsIOPSeekQueueTag sqSeekReq;
    /* 0x03C */ int bAbortRequest;
    /* 0x040 */ unsigned int nSerialID;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
struct GtsIOPFuncsTag {  // size 0x010
    /* 0x000 */ int (*GtsOpenIOP)(char *);
    /* 0x004 */ void (*GtsCloseIOP)(int);
    /* 0x008 */ unsigned int (*GtsReadIOP)(int, unsigned int, void *);
    /* 0x00C */ int (*GtsSeekIOP)(int, int, int);
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
struct GtsIOPGlobalsTag {  // size 0x064
    /* 0x000 */ unsigned int nNumEEStreams;
    /* 0x004 */ unsigned int nNumIOPStreams;
    /* 0x008 */ unsigned int nRingBufferSize;
    /* 0x00C */ unsigned int nBufferReadSize;
    /* 0x010 */ GtsIOPFileTag *fpEEFiles;
    /* 0x014 */ GtsIOPFileTag *fpIOPFiles;
    /* 0x018 */ int tMainThread;
    /* 0x01C */ int tReadingThread;
    /* 0x020 */ int tTransferThread;
    /* 0x024 */ int eEventFlag;
    /* 0x028 */ int sDiskSemaphore;
    /* 0x02C */ int sQueuesSemaphore;
    /* 0x030 */ int sIOPSemaphore;
    /* 0x034 */ unsigned int nNotifyCmdID;
    /* 0x038 */ unsigned int nDriveErrorCmdID;
    /* 0x03C */ struct {  // size 0x008
        /* 0x000 */ void (*func)(void *, void *);
        /* 0x004 */ void *data;
    } mCmdBuffer[5];
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
struct GtsIOPReadRequestTag {  // size 0x010
    /* 0x000 */ GtsIOPFileTag *fpFile;
    /* 0x004 */ unsigned int nSectorsToRead;
    /* 0x008 */ void *vpBuffer;
    /* 0x00C */ unsigned int nSerialID;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
struct GtsIOPRingBufferTag {  // size 0x010
    /* 0x000 */ unsigned int nBaseReadSector;
    /* 0x004 */ unsigned int nNextReadSector;
    /* 0x008 */ unsigned int nEmptySectors;
    /* 0x00C */ char *vpSectorBuffer;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
struct GtsIOPSeekQueueTag {  // size 0x008
    /* 0x000 */ int bActive;
    /* 0x004 */ int nTargetLSN;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
struct GtsIOPTransferQueueTag {  // size 0x00C
    /* 0x000 */ int bActive;
    /* 0x004 */ unsigned int nSectorsToTransfer;
    /* 0x008 */ char *vpBuffer;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
struct GtsIOPTransferRequestTag {  // size 0x014
    /* 0x000 */ GtsIOPFileTag *fpFile;
    /* 0x004 */ int nFileID;
    /* 0x008 */ unsigned int nStartingSector;
    /* 0x00C */ unsigned int nSectorsToTransfer;
    /* 0x010 */ unsigned int nDestAddr;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
struct GtsOpenedFileTag {  // size 0x00C
    /* 0x000 */ int nFileID;
    /* 0x004 */ unsigned int nFileLength;
    /* 0x008 */ unsigned int nNumSectors;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
struct SemaParam {  // size 0x010
    /* 0x000 */ unsigned int attr;
    /* 0x004 */ unsigned int option;
    /* 0x008 */ int initCount;
    /* 0x00C */ int maxCount;
};

// declared in 1 file(s), e.g. I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
struct ThreadParam {  // size 0x014
    /* 0x000 */ unsigned int attr;
    /* 0x004 */ unsigned int option;
    /* 0x008 */ void *entry;
    /* 0x00C */ int stackSize;
    /* 0x010 */ int initPriority;
};

