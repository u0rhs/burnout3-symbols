// I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
// Outline rebuilt from the debug information of GTFSHOST.IRX (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
struct @anon0 cmdDriveErrorHdr;
int GtsMainRPCThread();  // 0x000002D0
void *GTSHandleRPC(unsigned int, void *, int);  // 0x000004B8
void GTSCmdHandler(void *, void *);  // 0x000005AC
int GTSEETransferThread();  // 0x000009B8
int GTSReadThread();  // 0x00000E48
int GTSOpenIOP(char *);  // 0x00001644
void GTSCloseIOP(int);  // 0x00001714
unsigned int GTSReadIOP(int, unsigned int, void *);  // 0x00001770
int GTSSeekIOP(int, int, int);  // 0x000018FC
_libhead gtfsdvd_entry;  // 0x00001A5C
_moduleinfo Module;  // 0x00001AA8
GtsIOPGlobalsTag gGlobals;  // 0x00001BD0
struct @anon0 cmdNotifyHdr;  // 0x00001C40
int gRpcRet[4];  // 0x00001C50
int gRpcArg[32];  // 0x00001C60

// ---- functions ----

// 0x0000023C-0x000002D0 (148 bytes), lines 305-338
int start()
{
    {   // 0x0000023C-0x000002D0
        ThreadParam param;  // $sp+28
    }
}

// 0x000002D0-0x000004B8 (488 bytes), lines 351-429
static int GtsMainRPCThread()
{
    {   // 0x000002D0-0x000004B8
        _sif_serve_data sd;  // $sp+124
        _sif_queue_data qd;  // $sp+100
        ThreadParam tpThreadParams;  // $sp+80
        EventFlagParam epEventParams;  // $sp+68
        SemaParam spSemaphoreParams;  // $sp+52
    }
}

// 0x000004B8-0x000005AC (244 bytes), lines 442-486
static void *GTSHandleRPC(unsigned int command, void *data)
{
    // param unsigned int command  (in $a0)
    // param void *data  (in $v1)
    {   // 0x000004B8-0x000005AC
    }
}

// 0x000005AC-0x000005EC (64 bytes), lines 501-512
static void GTSCmdHandler(void *pCmdHeader)
{
    // param void *pCmdHeader  (in $v0)
    {   // 0x000005AC-0x000005EC
        GtsIOPFileTag *fpFile;  // in $a1
    }
}

// 0x000005EC-0x0000070C (288 bytes), lines 526-578
static void GTSOpenEE(char *sFilename, GtsOpenedFileTag *fpReturnedFile)
{
    // param char *sFilename  (in $s3)
    // param GtsOpenedFileTag *fpReturnedFile  (in $s2)
    {   // 0x000005EC-0x0000070C
        GtsIOPFileTag *fpFile;  // in $s1
        int nIndex;  // in $s0
    }
}

// 0x0000070C-0x000007D8 (204 bytes), lines 591-621
static int GTSReadEE(int nFileID, unsigned int nTransferSectors, void *vpTransferAddress)
{
    // param int nFileID  (in $v0)
    // param unsigned int nTransferSectors  (in $s2)
    // param void *vpTransferAddress  (in $s1)
    {   // 0x0000070C-0x000007D8
        GtsIOPFileTag *fpFile;  // in $s3
        int ret_val;  // in $s0
    }
}

// 0x000007D8-0x00000960 (392 bytes), lines 634-700
static int GTSSeekEE(int nFileID, int nSectors, int nOrigin)
{
    // param int nFileID  (in $s5)
    // param int nSectors  (in $s4)
    // param int nOrigin  (in $s3)
    {   // 0x000007D8-0x00000960
        int nTargetLSN;  // in $v0
        GtsIOPFileTag *fpFile;  // in $s1
        int ret_val;  // in $s0
    }
}

// 0x00000960-0x000009B8 (88 bytes), lines 713-725
static void GTSCloseEE(int nFileID)
{
    // param int nFileID  (in $v0)
    {   // 0x00000960-0x000009B8
        GtsIOPFileTag *fpFile;  // in $s0
    }
}

// 0x000009B8-0x00000A54 (156 bytes), lines 738-781
static int GTSEETransferThread()
{
    {   // 0x000009B8-0x00000A54
        unsigned long nFlagValue;  // $sp+44
        GtsIOPTransferRequestTag rActiveRequest;  // $sp+24
        int bValidRequest;  // in $s0
    }
}

// 0x00000A54-0x00000B0C (184 bytes), lines 796-814
static void GTSEETransferNotifyCompletion(int nFileID, unsigned int nSectorsUnread)
{
    // param int nFileID  (in $s1)
    // param unsigned int nSectorsUnread  (in $s0)
    {   // 0x00000A54-0x00000B0C
    }
}

// 0x00000B0C-0x00000C08 (252 bytes), lines 827-866
static void GTSEETransferRequestCompleted(GtsIOPTransferRequestTag *rpRequest)
{
    // param GtsIOPTransferRequestTag *rpRequest  (in $s1)
    {   // 0x00000B0C-0x00000C08
        GtsIOPFileTag *fpFile;  // in $v0
    }
}

// 0x00000C08-0x00000D20 (280 bytes), lines 880-937
static int GTSGetNextEETransferCommand(GtsIOPTransferRequestTag *rpRequest)
{
    // param GtsIOPTransferRequestTag *rpRequest  (in $s1)
    {   // 0x00000C08-0x00000D20
        unsigned int nTransferSize;  // in $v0
        unsigned int nDataAvailable;  // in $v0
        GtsIOPFileTag *fpFile;  // in $a0
        int nIndex;  // in $s0
    }
}

// 0x00000D20-0x00000E48 (296 bytes), lines 950-1005
static void GTSTransferToEE(GtsIOPTransferRequestTag *rpRequest)
{
    // param GtsIOPTransferRequestTag *rpRequest  (in $s1)
    {   // 0x00000D20-0x00000E48
        int lOldStat;  // $sp+52
        unsigned int nTransferSize;  // in $s0
        struct @anon2 dDMA;  // $sp+36
        unsigned int nDMAId;  // in $s0
        int nOldStat;  // $sp+32
    }
}

// 0x00000E48-0x00000EE4 (156 bytes), lines 1049-1092
static int GTSReadThread()
{
    {   // 0x00000E48-0x00000EE4
        unsigned long nFlagValue;  // $sp+44
        GtsIOPReadRequestTag rActiveRequest;  // $sp+28
        int bValidRequest;  // in $s0
    }
}

// 0x00000EE4-0x00000FA0 (188 bytes), lines 1107-1135
static void GTSReadRequestCompleted(GtsIOPReadRequestTag *rpRequest)
{
    // param GtsIOPReadRequestTag *rpRequest  (in $v0)
    {   // 0x00000EE4-0x00000FA0
    }
}

// 0x00000FA0-0x000010E0 (320 bytes), lines 1149-1199
static int GTSGetNextReadCommand(GtsIOPReadRequestTag *rpRequest)
{
    // param GtsIOPReadRequestTag *rpRequest  (in $s2)
    {   // 0x00000FA0-0x000010E0
        GtsIOPFileTag *fpFile;  // in $s1
        int nIndex;  // in $s0
    }
}

// 0x000010E0-0x00001254 (372 bytes), lines 1246-1363
static int GTSOpenFile(char *sFileName, GtsIOPFileTag *fpFile)
{
    // param char *sFileName  (in $s0)
    // param GtsIOPFileTag *fpFile  (in $s1)
    {   // 0x000010E0-0x00001254
        int nFileDescriptor;  // in $s2
        char sNameBuffer[64];  // $sp+32
        int bFileOpened;  // in $s0
    }
}

// 0x00001254-0x000012C4 (112 bytes), lines 1376-1390
static void GTSCloseFile(GtsIOPFileTag *fpFile)
{
    // param GtsIOPFileTag *fpFile  (in $s0)
    {   // 0x00001254-0x000012C4
    }
}

// 0x000012C4-0x00001348 (132 bytes), lines 1403-1429
static void GTSSeekFile(GtsIOPFileTag *fpFile, int nTargetLSN)
{
    // param GtsIOPFileTag *fpFile  (in $s1)
    // param int nTargetLSN  (in $s0)
    {   // 0x000012C4-0x00001348
    }
}

// 0x00001348-0x00001360 (24 bytes), lines 1443-1444
static int GTSFileIsEOF(GtsIOPFileTag *fpFile)
{
    // param GtsIOPFileTag *fpFile  (in $v0)
    {   // 0x00001348-0x00001360
    }
}

// 0x00001360-0x000013B8 (88 bytes), lines 1457-1544
static void GTSReadFile(GtsIOPReadRequestTag *rpRequest)
{
    // param GtsIOPReadRequestTag *rpRequest  (in $s0)
    {   // 0x00001360-0x000013B8
    }
}

// 0x000013B8-0x000015E4 (556 bytes), lines 1823-1895
static void GTSInitialise(GtsConfigTag *cpConfig, GtsIOPFuncsTag *fpFileFuncs)
{
    // param GtsConfigTag *cpConfig  (in $v0)
    // param GtsIOPFuncsTag *fpFileFuncs  (in $s2)
    {   // 0x000013B8-0x000015E4
        int nOldStat;  // $sp+36
        int nIndex;  // in $s0
    }
}

// 0x000015E4-0x000015FC (24 bytes), lines 1910-1913
static void GTSFlushRingBuffer(GtsIOPRingBufferTag *rbpRingBuffer)
{
    // param GtsIOPRingBufferTag *rbpRingBuffer  (in $v0)
    {   // 0x000015E4-0x000015FC
    }
}

// 0x000015FC-0x00001644 (72 bytes), lines 1919-1928
static void GtsAdvanceRingBuffer(GtsIOPRingBufferTag *rbpRingBuffer, unsigned int nSectors)
{
    // param GtsIOPRingBufferTag *rbpRingBuffer  (in $v0)
    // param unsigned int nSectors  (in $v0)
    {   // 0x000015FC-0x00001644
    }
}

// 0x00001644-0x00001714 (208 bytes), lines 1942-1977
int GTSOpenIOP(char *sFilename)
{
    // param char *sFilename  (in $s2)
    {   // 0x00001644-0x00001714
        GtsIOPFileTag *fpFile;  // in $s1
        int nIndex;  // in $s0
    }
}

// 0x00001714-0x00001770 (92 bytes), lines 1991-2006
void GTSCloseIOP(int nFileID)
{
    // param int nFileID  (in $v0)
    {   // 0x00001714-0x00001770
        GtsIOPFileTag *fpFile;  // in $s0
    }
}

// 0x00001770-0x000018FC (396 bytes), lines 2019-2111
unsigned int GTSReadIOP(int nFileID, unsigned int nBytesToRead, void *pBuffer)
{
    // param int nFileID  (in $v0)
    // param unsigned int nBytesToRead  (in $s4)
    // param void *pBuffer  (in $s3)
    {   // 0x00001770-0x000018FC
        GtsIOPReadRequestTag rRequest;  // $sp+56
        unsigned int nNumWholeSectors;  // in $s2
        GtsIOPReadRequestTag rRequest;  // $sp+40
        unsigned int nReadSize;  // in $v0
        GtsIOPFileTag *fpFile;  // in $s1
        unsigned int nBytesRead;  // in $s0
    }
}

// 0x000018FC-0x00001A5C (352 bytes), lines 2126-2206
int GTSSeekIOP(int nFileID, int nOffset, int nOrigin)
{
    // param int nFileID  (in $v0)
    // param int nOffset  (in $v0)
    // param int nOrigin  (in $v0)
    {   // 0x000018FC-0x00001A5C
        GtsIOPReadRequestTag rRequest;  // $sp+32
        int bBufferUsed;  // in $a2
        unsigned int nBufferStartPos;  // in $a0
        unsigned int nTargetFilePos;  // in $v0
        int nTargetPosition;  // in $v0
        GtsIOPFileTag *fpFile;  // in $s0
    }
}

