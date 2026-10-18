// I:\GameShared\GameClasses\FileSystem\ps2\GTFileSystemPS2DVD.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
sceSifCmdData CGTFilePS2DVD::mCmdBuffer[6];
void CmdErrorHandler(void *, void *);  // 0x001FBAC0
void CmdReadCompleteHandler(void *, void *);  // 0x001FBB20
/* vtable */ void *CGTFileSystemPS2DVD::__vtable[];  // 0x0030F700
/* vtable */ void *CGTFilePS2DVD::__vtable[];  // 0x0030F720
int CGTFilePS2DVD::mnRPCSemaphore;  // 0x00310C30
int CGTFilePS2DVD::mCmdHandle;  // 0x00310C34
GtsIOPFuncsTag CGTFileSystemPS2DVD::mIOPFileFuncs;  // 0x00455D00
int CGTFilePS2DVD::mRPCArguments[16];  // 0x00455D40
int CGTFilePS2DVD::mRPCResults[16];  // 0x00455D80
sceSifCmdHdr CGTFilePS2DVD::mCmdHdr;  // 0x00455DC0
_sif_client_data CGTFilePS2DVD::mRPCData;  // 0x00455DD0

// ---- functions ----

// 0x001FBAC0-0x001FBB1C (92 bytes), lines 736-762
// CmdErrorHandler__19CGTFileSystemPS2DVDFPvPv
void CGTFileSystemPS2DVD::CmdErrorHandler(void *pCmdHeader, void *pData)
{
    // param void *pCmdHeader  (in $v0)
    // param void *pData  (in $v0)
    {   // 0x001FBAC0-0x001FBB1C
        CGTFileSystemPS2DVD *lpFileSys;  // in $v0
    }
}

// 0x001FBB20-0x001FBB48 (40 bytes), lines 711-718
// CmdReadCompleteHandler__19CGTFileSystemPS2DVDFPvPv
void CGTFileSystemPS2DVD::CmdReadCompleteHandler(void *pCmdHeader, void *pData)
{
    // param void *pCmdHeader  (in $v0)
    // param void *pData  (in $v0)
    {   // 0x001FBB20-0x001FBB48
        CGTFilePS2DVD *lpFile;  // in $v1
    }
}

// 0x001FBB50-0x001FBB58 (8 bytes), lines 693-693
// GetStatus__19CGTFileSystemPS2DVDFv
EFileSystemStatus CGTFileSystemPS2DVD::GetStatus()
{
    // param CGTFileSystemPS2DVD *this  (in $v0)
    {   // 0x001FBB50-0x001FBB58
    }
}

// 0x001FBB60-0x001FBB68 (8 bytes), lines 679-679
// FileExists__19CGTFileSystemPS2DVDFPCc
int CGTFileSystemPS2DVD::FileExists()
{
    {   // 0x001FBB60-0x001FBB68
    }
}

// 0x001FBB70-0x001FBC24 (180 bytes), lines 650-665
// Abort__13CGTFilePS2DVDFv
int CGTFilePS2DVD::Abort()
{
    // param CGTFilePS2DVD *this  (in $s1)
    {   // 0x001FBB70-0x001FBC24
    }
}

// 0x001FBC30-0x001FBC84 (84 bytes), lines 629-638
// Sync__13CGTFilePS2DVDFi
EFileStatus CGTFilePS2DVD::Sync(int lbBlock)
{
    // param CGTFilePS2DVD *this  (in $s1)
    // param int lbBlock  (in $s0)
    {   // 0x001FBC30-0x001FBC84
    }
}

// 0x001FBC90-0x001FBE28 (408 bytes), lines 547-617
// SetPosition__13CGTFilePS2DVDFx15EFileMoveMethod
long long CGTFilePS2DVD::SetPosition(long long lnOffset, EFileMoveMethod ePosition)
{
    // param CGTFilePS2DVD *this  (in $s1)
    // param long long lnOffset  (in $v0)
    // param EFileMoveMethod ePosition  (in $v0)
    {   // 0x001FBC90-0x001FBE28
        long long lnBufferHighAddr;  // in $a0
        long long lnBufferLowAddr;  // in $v1
        long long lnTargetAddress;  // in $v0
    }
}

// 0x001FBE30-0x001FBE40 (16 bytes), lines 531-533
// Write__13CGTFilePS2DVDFPCvUi
unsigned int CGTFilePS2DVD::Write()
{
    // param CGTFilePS2DVD *this  (in $v0)
    {   // 0x001FBE30-0x001FBE40
    }
}

// 0x001FBE40-0x001FC1C4 (900 bytes), lines 362-516
// Read__13CGTFilePS2DVDFPvUi
unsigned int CGTFilePS2DVD::Read(void *pBuffer, unsigned int lnBytesToRead)
{
    // param CGTFilePS2DVD *this  (in $s4)
    // param void *pBuffer  (in $s3)
    // param unsigned int lnBytesToRead  (in $s2)
    {   // 0x001FBE40-0x001FC1C4
        unsigned int startSync;  // in $v0
        int lnNumWholeSectors;  // in $s6
        char *uncBuffer;  // in $s1
        int lnReadSize;  // in $v0
        long long lnLastPhysPos;  // in $v1
        int lnBytesRead;  // in $s5
    }
}

// 0x001FC1D0-0x001FC248 (120 bytes), lines 301-309
// Close__13CGTFilePS2DVDFv
void CGTFilePS2DVD::Close()
{
    // param CGTFilePS2DVD *this  (in $v0)
    {   // 0x001FC1D0-0x001FC248
    }
}

// 0x001FC250-0x001FC390 (320 bytes), lines 234-289
// Open__13CGTFilePS2DVDFP13CGTFileSystemPCcUi
EFileSystemError CGTFilePS2DVD::Open(CGTFileSystem *pFileSystem, char *lpFilename, unsigned int nOpenFlags)
{
    // param CGTFilePS2DVD *this  (in $s1)
    // param CGTFileSystem *pFileSystem  (in $s0)
    // param char *lpFilename  (in $v0)
    // param unsigned int nOpenFlags  (in $s2)
    {   // 0x001FC250-0x001FC390
        char lsDeviceFilename[64];  // $sp+96
        GtsOpenedFileTag *fpOpenedFile;  // in $v0
    }
}

// 0x001FC390-0x001FC398 (8 bytes), lines 219-219
// GetStatus__13CGTFilePS2DVDFv
EFileStatus CGTFilePS2DVD::GetStatus()
{
    // param CGTFilePS2DVD *this  (in $v0)
    {   // 0x001FC390-0x001FC398
    }
}

// 0x001FC3A0-0x001FC3B8 (24 bytes), lines 165-166
// GetFileObject__19CGTFileSystemPS2DVDFUi
CGTFile *CGTFileSystemPS2DVD::GetFileObject(unsigned int nIndex)
{
    // param CGTFileSystemPS2DVD *this  (in $v0)
    // param unsigned int nIndex  (in $v0)
    {   // 0x001FC3A0-0x001FC3B8
    }
}

// 0x001FC3C0-0x001FC5B4 (500 bytes), lines 62-150
// Init__19CGTFileSystemPS2DVDFUiP13CGTFilePS2DVDP19CGTFileBufferPS2DVDPCcP12GtsConfigTag
int CGTFileSystemPS2DVD::Init(unsigned int nMaxOpenFiles, CGTFilePS2DVD *pFileArray, CGTFileBufferPS2DVD *pBufferArray, char *sRWName, GtsConfigTag *lpConfig)
{
    // param CGTFileSystemPS2DVD *this  (in $s4)
    // param unsigned int nMaxOpenFiles  (in $s1)
    // param CGTFilePS2DVD *pFileArray  (in $v0)
    // param CGTFileBufferPS2DVD *pBufferArray  (in $v0)
    // param char *sRWName  (in $v0)
    // param GtsConfigTag *lpConfig  (in $s0)
    {   // 0x001FC3C0-0x001FC5B4
        GtsConfigTag *cpConfig;  // in $v0
        int i;  // in $v1
        SemaParam pParams;  // $sp+112
        unsigned int lnIndex;  // in $a2
    }
}

