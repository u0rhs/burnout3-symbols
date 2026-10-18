// bastream.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwModuleInfo streamModule;  // 0x003108D0
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x0014DCB0-0x0014DD30 (128 bytes), lines 104-124
void *_rwStreamModuleOpen(void *instance, int offset)
{
    // param void *instance  (in $s1)
    // param int offset  (in $v0)
    {   // 0x0014DCB0-0x0014DD30
    }
}

// 0x0014DD30-0x0014DD90 (96 bytes), lines 137-150
void *_rwStreamModuleClose(void *instance)
{
    // param void *instance  (in $s1)
    {   // 0x0014DD30-0x0014DD90
    }
}

// 0x0014DD90-0x0014DEA4 (276 bytes), lines 193-238
static RwStream *StreamFileNameInitialize(RwStream *stream, RwStreamAccessType accessType, void *pData)
{
    // param RwStream *stream  (in $s3)
    // param RwStreamAccessType accessType  (in $v0)
    // param void *pData  (in $v0)
    {   // 0x0014DD90-0x0014DEA4
        RwError _rwErrorCode;  // $sp+88
        RwError _rwErrorCode;  // $sp+80
        char *cpFile;  // in $s2
        void *fp;  // in $s1
        RwStream *result;  // in $s0
    }
}

// 0x0014DEB0-0x0014DF5C (172 bytes), lines 244-292
static RwStream *StreamMemoryInitialize(RwStream *stream, RwStreamAccessType accessType, void *pData)
{
    // param RwStream *stream  (in $v0)
    // param RwStreamAccessType accessType  (in $v0)
    // param void *pData  (in $v0)
    {   // 0x0014DEB0-0x0014DF5C
        RwError _rwErrorCode;  // $sp+40
        RwMemory *mepMem;  // in $v0
        RwStream *result;  // in $s0
    }
}

// 0x0014DF60-0x0014E068 (264 bytes), lines 347-387
RwStream *_rwStreamInitialize(RwStream *stream, int rwOwned, RwStreamType type, RwStreamAccessType accessType, void *pData)
{
    // param RwStream *stream  (in $s1)
    // param int rwOwned  (in $v0)
    // param RwStreamType type  (in $v0)
    // param RwStreamAccessType accessType  (in $v0)
    // param void *pData  (in $s0)
    {   // 0x0014DF60-0x0014E068
        RwError _rwErrorCode;  // $sp+72
        RwStream *result;  // in $s2
    }
}

// 0x0014E070-0x0014E200 (400 bytes), lines 411-477
unsigned int RwStreamRead(RwStream *stream, void *buffer, unsigned int length)
{
    // param RwStream *stream  (in $a3)
    // param void *buffer  (in $s2)
    // param unsigned int length  (in $s1)
    {   // 0x0014E070-0x0014E200
        RwError _rwErrorCode;  // $sp+104
        RwError _rwErrorCode;  // $sp+96
        RwStreamMemory *smpMem;  // in $s0
        RwError _rwErrorCode;  // $sp+88
        RwError _rwErrorCode;  // $sp+80
        unsigned int nBytesRead;  // in $s0
        void *fp;  // in $s3
    }
}

// 0x0014E200-0x0014E424 (548 bytes), lines 501-601
RwStream *RwStreamWrite(RwStream *stream, void *buffer, unsigned int length)
{
    // param RwStream *stream  (in $s4)
    // param void *buffer  (in $s3)
    // param unsigned int length  (in $s2)
    {   // 0x0014E200-0x0014E424
        RwError _rwErrorCode;  // $sp+120
        RwError _rwErrorCode;  // $sp+112
        void *pData;  // in $v0
        unsigned int nAllocSize;  // in $s1
        RwError _rwErrorCode;  // $sp+104
        RwStreamMemory *smpMem;  // in $s0
        RwError _rwErrorCode;  // $sp+96
        unsigned int nBytesWritten;  // in $v0
    }
}

// 0x0014E430-0x0014E590 (352 bytes), lines 625-701
RwStream *RwStreamSkip(RwStream *stream, unsigned int offset)
{
    // param RwStream *stream  (in $s0)
    // param unsigned int offset  (in $v0)
    {   // 0x0014E430-0x0014E590
        RwError _rwErrorCode;  // $sp+88
        RwError _rwErrorCode;  // $sp+80
        RwStreamMemory *smpMem;  // in $v1
        RwError _rwErrorCode;  // $sp+72
        RwStream *retVal;  // in $v0
        void *fp;  // in $s1
    }
}

// 0x0014E590-0x0014E6B4 (292 bytes), lines 725-785
int RwStreamClose(RwStream *stream, void *pData)
{
    // param RwStream *stream  (in $s1)
    // param void *pData  (in $v0)
    {   // 0x0014E590-0x0014E6B4
        RwError _rwErrorCode;  // $sp+56
        RwMemory *mepMem;  // in $v0
        int result;  // in $v0
    }
}

// 0x0014E6C0-0x0014E76C (172 bytes), lines 831-848
RwStream *RwStreamOpen(RwStreamType type, RwStreamAccessType accessType, void *pData)
{
    // param RwStreamType type  (in $s4)
    // param RwStreamAccessType accessType  (in $s3)
    // param void *pData  (in $s2)
    {   // 0x0014E6C0-0x0014E76C
        RwStream *stream;  // in $s2
    }
}

