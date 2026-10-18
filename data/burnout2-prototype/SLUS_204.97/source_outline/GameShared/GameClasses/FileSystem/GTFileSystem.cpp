// I:\GameShared\GameClasses\FileSystem\GTFileSystem.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int FExist(char *);  // 0x001FB330
int FFlush(void *);  // 0x001FB380
int FSeek(void *, long, int);  // 0x001FB390
int FEof(void *);  // 0x001FB420
int FPuts(char *, void *);  // 0x001FB440
char *FGets(char *, int, void *);  // 0x001FB450
unsigned int FWrite(void *, unsigned int, unsigned int, void *);  // 0x001FB460
unsigned int FRead(void *, unsigned int, unsigned int, void *);  // 0x001FB4B0
int FClose(void *);  // 0x001FB500
void *FOpen(char *, char *);  // 0x001FB530
unsigned int CGTFileSystem::mnNumFilesystems;  // 0x00310C1C
int CGTFileSystem::mbInstalledToRW;  // 0x00310C20
CGTFileSystem *CGTFileSystem::mpDefaultFilesystem;  // 0x00310C24
CGTFileSystem *CGTFileSystem::mpaFilesystems[2];  // 0x00310C28
RwFileFunctions CGTFileSystem::mStdRwFileInterface;  // 0x00455CA0
char CGTFileSystem::msaFSNames[2][5];  // 0x00455CD0

// ---- functions ----

// 0x001FB330-0x001FB378 (72 bytes), lines 465-476
// FExist__13CGTFileSystemFPCc
int CGTFileSystem::FExist(char *name)
{
    // param char *name  (in $s0)
    {   // 0x001FB330-0x001FB378
        CGTFileSystem *lpFileSys;  // in $v0
    }
}

// 0x001FB380-0x001FB388 (8 bytes), lines 461-461
// FFlush__13CGTFileSystemFPv
int CGTFileSystem::FFlush()
{
    {   // 0x001FB380-0x001FB388
    }
}

// 0x001FB390-0x001FB41C (140 bytes), lines 425-454
// FSeek__13CGTFileSystemFPvli
int CGTFileSystem::FSeek(void *fptr, long offset, int origin)
{
    // param void *fptr  (in $v0)
    // param long offset  (in $v0)
    // param int origin  (in $v0)
    {   // 0x001FB390-0x001FB41C
        CGTFile *lpFile;  // in $v0
    }
}

// 0x001FB420-0x001FB434 (20 bytes), lines 420-421
// FEof__13CGTFileSystemFPv
int CGTFileSystem::FEof(void *fptr)
{
    // param void *fptr  (in $v0)
    {   // 0x001FB420-0x001FB434
        CGTFile *lpFile;  // in $v0
    }
}

// 0x001FB440-0x001FB448 (8 bytes), lines 414-414
// FPuts__13CGTFileSystemFPCcPv
int CGTFileSystem::FPuts()
{
    {   // 0x001FB440-0x001FB448
    }
}

// 0x001FB450-0x001FB458 (8 bytes), lines 407-407
// FGets__13CGTFileSystemFPciPv
char *CGTFileSystem::FGets()
{
    {   // 0x001FB450-0x001FB458
    }
}

// 0x001FB460-0x001FB4A4 (68 bytes), lines 396-400
// FWrite__13CGTFileSystemFPCvUiUiPv
unsigned int CGTFileSystem::FWrite(void *addr, unsigned int size, unsigned int count, void *fptr)
{
    // param void *addr  (in $v0)
    // param unsigned int size  (in $s0)
    // param unsigned int count  (in $v0)
    // param void *fptr  (in $v0)
    {   // 0x001FB460-0x001FB4A4
        unsigned int lnBytesWritten;  // in $v0
    }
}

// 0x001FB4B0-0x001FB4F4 (68 bytes), lines 388-392
// FRead__13CGTFileSystemFPvUiUiPv
unsigned int CGTFileSystem::FRead(void *addr, unsigned int size, unsigned int count, void *fptr)
{
    // param void *addr  (in $v0)
    // param unsigned int size  (in $s0)
    // param unsigned int count  (in $v0)
    // param void *fptr  (in $v0)
    {   // 0x001FB4B0-0x001FB4F4
        unsigned int lnBytesRead;  // in $v0
    }
}

// 0x001FB500-0x001FB528 (40 bytes), lines 379-384
// FClose__13CGTFileSystemFPv
int CGTFileSystem::FClose(void *fptr)
{
    // param void *fptr  (in $v0)
    {   // 0x001FB500-0x001FB528
    }
}

// 0x001FB530-0x001FB5F0 (192 bytes), lines 329-375
// FOpen__13CGTFileSystemFPCcPCc
void *CGTFileSystem::FOpen(char *name, char *access)
{
    // param char *name  (in $s2)
    // param char *access  (in $s1)
    {   // 0x001FB530-0x001FB5F0
        int lnFlags;  // in $s0
        CGTFile *lpFile;  // in $v0
        CGTFileSystem *lpFileSys;  // in $v0
    }
}

// 0x001FB5F0-0x001FB6DC (236 bytes), lines 287-319
// Open__13CGTFileSystemFPCcUi
CGTFile *CGTFileSystem::Open(char *sFilename, unsigned int nOpenFlags)
{
    // param CGTFileSystem *this  (in $s3)
    // param char *sFilename  (in $s2)
    // param unsigned int nOpenFlags  (in $s1)
    {   // 0x001FB5F0-0x001FB6DC
        CGTFile *lpNextFile;  // in $s5
        unsigned int lnIndex;  // in $s4
        CGTFile *lpFile;  // in $s0
    }
}

// 0x001FB6E0-0x001FB7A8 (200 bytes), lines 241-273
// Init__13CGTFileSystemFUiPCc
int CGTFileSystem::Init(unsigned int nMaxOpenFiles, char *sRWName)
{
    // param CGTFileSystem *this  (in $s1)
    // param unsigned int nMaxOpenFiles  (in $v0)
    // param char *sRWName  (in $v0)
    {   // 0x001FB6E0-0x001FB7A8
        CGTFile *lpFile;  // in $v0
        unsigned int lnIndex;  // in $s0
    }
}

// 0x001FB7B0-0x001FB7B8 (8 bytes), lines 228-228
// SetAsDefaultFilesystem__13CGTFileSystemFv
void CGTFileSystem::SetAsDefaultFilesystem()
{
    // param CGTFileSystem *this  (in $v0)
    {   // 0x001FB7B0-0x001FB7B8
    }
}

// 0x001FB7C0-0x001FB8A0 (224 bytes), lines 185-213
// BuildFileName__13CGTFileSystemFPciPCcPCcc
char *CGTFileSystem::BuildFileName(char *lpBuffer, int nBufferLength, char *lpDriveName, char *lpFilePath, char cSeparator)
{
    // param char *lpBuffer  (in $s5)
    // param int nBufferLength  (in $s1)
    // param char *lpDriveName  (in $s4)
    // param char *lpFilePath  (in $s3)
    // param char cSeparator  (in $s2)
    {   // 0x001FB7C0-0x001FB8A0
        int lnIndex;  // in $a3
        int lnPathLength;  // in $s1
        int lnDriveLength;  // in $s0
    }
}

// 0x001FB8A0-0x001FB8D8 (56 bytes), lines 159-168
// GetFileNameFromDeviceName__13CGTFileSystemFPCc
char *CGTFileSystem::GetFileNameFromDeviceName(char *spName)
{
    // param char *spName  (in $v0)
    {   // 0x001FB8A0-0x001FB8D8
        char *lpPath;  // in $v0
        int nIndex;  // in $a1
    }
}

// 0x001FB8E0-0x001FB9A0 (192 bytes), lines 113-140
// GetFileSystemFromFileName__13CGTFileSystemFPCc
CGTFileSystem *CGTFileSystem::GetFileSystemFromFileName(char *spName)
{
    // param char *spName  (in $v0)
    {   // 0x001FB8E0-0x001FB9A0
        CGTFileSystem *lpFileSys;  // in $s1
        char lsDeviceName[5];  // $sp+56
        unsigned int nIndex;  // in $s0
    }
}

// 0x001FB9A0-0x001FBABC (284 bytes), lines 45-76
// InstallToRenderWare__13CGTFileSystemFv
int CGTFileSystem::InstallToRenderWare()
{
    {   // 0x001FB9A0-0x001FBABC
        RwFileFunctions *lpFileFunctions;  // in $v0
    }
}

