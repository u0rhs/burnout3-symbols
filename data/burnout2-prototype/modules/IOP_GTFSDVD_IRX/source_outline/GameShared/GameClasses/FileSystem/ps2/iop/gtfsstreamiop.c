// I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
// Outline rebuilt from the debug information of GTFSDVD.IRX (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int GtsMainRPCThread();  // 0x000002E0
void *GTSHandleRPC(unsigned int, void *, int);  // 0x000004C8
void GTSCmdHandler(void *, void *);  // 0x000005A8
int GTSEETransferThread();  // 0x00000994
int GTSReadThread();  // 0x00000EAC
int GTSOpenIOP(char *);  // 0x00001BFC
void GTSCloseIOP(int);  // 0x00001CCC
unsigned int GTSReadIOP(int, unsigned int, void *);  // 0x00001D28
int GTSSeekIOP(int, int, int);  // 0x00001EB4
_libhead gtfsdvd_entry;  // 0x00002014
_moduleinfo Module;  // 0x00002068
static int _gnNumDirectories;  // 0x00002100
int _gnNumFiles;  // 0x00002104
struct @anon3 _gaTableOfContents[750];  // 0x00002108
char _gaacDirectoryNames[160][128];  // 0x00007310
unsigned char _gaucLoadBuf[2048];  // 0x0000C340
GtsIOPGlobalsTag gGlobals;  // 0x0000CB40
struct @anon0 cmdDriveErrorHdr;  // 0x0000CBB0
struct @anon0 cmdNotifyHdr;  // 0x0000CBC0
int gRpcRet[4];  // 0x0000CBD0
int gRpcArg[32];  // 0x0000CBE0

// ---- functions ----

// 0x0000024C-0x000002E0 (148 bytes), lines 305-338
int start()
{
    {   // 0x0000024C-0x000002E0
        ThreadParam param;  // $sp+28
    }
}

// 0x000002E0-0x000004C8 (488 bytes), lines 351-429
static int GtsMainRPCThread()
{
    {   // 0x000002E0-0x000004C8
        _sif_serve_data sd;  // $sp+124
        _sif_queue_data qd;  // $sp+100
        ThreadParam tpThreadParams;  // $sp+80
        EventFlagParam epEventParams;  // $sp+68
        SemaParam spSemaphoreParams;  // $sp+52
    }
}

// 0x000004C8-0x000005A8 (224 bytes), lines 442-486
static void *GTSHandleRPC(unsigned int command, void *data)
{
    // param unsigned int command  (in $v0)
    // param void *data  (in $v1)
    {   // 0x000004C8-0x000005A8
    }
}

// 0x000005A8-0x000005E8 (64 bytes), lines 501-512
static void GTSCmdHandler(void *pCmdHeader)
{
    // param void *pCmdHeader  (in $v0)
    {   // 0x000005A8-0x000005E8
        GtsIOPFileTag *fpFile;  // in $a1
    }
}

// 0x000005E8-0x00000708 (288 bytes), lines 526-578
static void GTSOpenEE(char *sFilename, GtsOpenedFileTag *fpReturnedFile)
{
    // param char *sFilename  (in $s3)
    // param GtsOpenedFileTag *fpReturnedFile  (in $s2)
    {   // 0x000005E8-0x00000708
        GtsIOPFileTag *fpFile;  // in $s1
        int nIndex;  // in $s0
    }
}

// 0x00000708-0x000007C4 (188 bytes), lines 591-621
static int GTSReadEE(int nFileID, unsigned int nTransferSectors, void *vpTransferAddress)
{
    // param int nFileID  (in $v0)
    // param unsigned int nTransferSectors  (in $s2)
    // param void *vpTransferAddress  (in $s1)
    {   // 0x00000708-0x000007C4
        GtsIOPFileTag *fpFile;  // in $s3
        int ret_val;  // in $s0
    }
}

// 0x000007C4-0x0000093C (376 bytes), lines 634-700
static int GTSSeekEE(int nFileID, int nSectors, int nOrigin)
{
    // param int nFileID  (in $s5)
    // param int nSectors  (in $s4)
    // param int nOrigin  (in $s3)
    {   // 0x000007C4-0x0000093C
        int nTargetLSN;  // in $v0
        GtsIOPFileTag *fpFile;  // in $s1
        int ret_val;  // in $s0
    }
}

// 0x0000093C-0x00000994 (88 bytes), lines 713-725
static void GTSCloseEE(int nFileID)
{
    // param int nFileID  (in $v0)
    {   // 0x0000093C-0x00000994
        GtsIOPFileTag *fpFile;  // in $s0
    }
}

// 0x00000994-0x00000A30 (156 bytes), lines 738-781
static int GTSEETransferThread()
{
    {   // 0x00000994-0x00000A30
        unsigned long nFlagValue;  // $sp+44
        GtsIOPTransferRequestTag rActiveRequest;  // $sp+24
        int bValidRequest;  // in $s0
    }
}

// 0x00000A30-0x00000AE8 (184 bytes), lines 796-814
static void GTSEETransferNotifyCompletion(int nFileID, unsigned int nSectorsUnread)
{
    // param int nFileID  (in $s1)
    // param unsigned int nSectorsUnread  (in $s0)
    {   // 0x00000A30-0x00000AE8
    }
}

// 0x00000AE8-0x00000BD8 (240 bytes), lines 827-866
static void GTSEETransferRequestCompleted(GtsIOPTransferRequestTag *rpRequest)
{
    // param GtsIOPTransferRequestTag *rpRequest  (in $s1)
    {   // 0x00000AE8-0x00000BD8
        GtsIOPFileTag *fpFile;  // in $v0
    }
}

// 0x00000BD8-0x00000CF0 (280 bytes), lines 880-937
static int GTSGetNextEETransferCommand(GtsIOPTransferRequestTag *rpRequest)
{
    // param GtsIOPTransferRequestTag *rpRequest  (in $s1)
    {   // 0x00000BD8-0x00000CF0
        unsigned int nTransferSize;  // in $v0
        unsigned int nDataAvailable;  // in $v0
        GtsIOPFileTag *fpFile;  // in $a0
        int nIndex;  // in $s0
    }
}

// 0x00000CF0-0x00000E18 (296 bytes), lines 950-1005
static void GTSTransferToEE(GtsIOPTransferRequestTag *rpRequest)
{
    // param GtsIOPTransferRequestTag *rpRequest  (in $s1)
    {   // 0x00000CF0-0x00000E18
        int lOldStat;  // $sp+52
        unsigned int nTransferSize;  // in $s0
        struct @anon2 dDMA;  // $sp+36
        unsigned int nDMAId;  // in $s0
        int nOldStat;  // $sp+32
    }
}

// 0x00000E18-0x00000EAC (148 bytes), lines 1018-1035
static void GTSEENotifyError(unsigned int nErrorID)
{
    // param unsigned int nErrorID  (in $s0)
    {   // 0x00000E18-0x00000EAC
    }
}

// 0x00000EAC-0x00000F48 (156 bytes), lines 1049-1092
static int GTSReadThread()
{
    {   // 0x00000EAC-0x00000F48
        unsigned long nFlagValue;  // $sp+44
        GtsIOPReadRequestTag rActiveRequest;  // $sp+28
        int bValidRequest;  // in $s0
    }
}

// 0x00000F48-0x00000FF0 (168 bytes), lines 1107-1135
static void GTSReadRequestCompleted(GtsIOPReadRequestTag *rpRequest)
{
    // param GtsIOPReadRequestTag *rpRequest  (in $v0)
    {   // 0x00000F48-0x00000FF0
    }
}

// 0x00000FF0-0x00001130 (320 bytes), lines 1149-1199
static int GTSGetNextReadCommand(GtsIOPReadRequestTag *rpRequest)
{
    // param GtsIOPReadRequestTag *rpRequest  (in $s2)
    {   // 0x00000FF0-0x00001130
        GtsIOPFileTag *fpFile;  // in $s1
        int nIndex;  // in $s0
    }
}

// 0x00001130-0x00001264 (308 bytes), lines 1246-1363
static int GTSOpenFile(char *sFileName, GtsIOPFileTag *fpFile)
{
    // param char *sFileName  (in $s0)
    // param GtsIOPFileTag *fpFile  (in $s1)
    {   // 0x00001130-0x00001264
        char nIndex;  // in $s0
        char sNameBuffer[64];  // $sp+32
        int bFileOpened;  // in $s0
    }
}

// 0x00001264-0x0000127C (24 bytes), lines 1377-1390
static void GTSCloseFile(GtsIOPFileTag *fpFile)
{
    // param GtsIOPFileTag *fpFile  (in $v0)
    {   // 0x00001264-0x0000127C
    }
}

// 0x0000127C-0x000012B0 (52 bytes), lines 1404-1429
static void GTSSeekFile(GtsIOPFileTag *fpFile, int nTargetLSN)
{
    // param GtsIOPFileTag *fpFile  (in $v0)
    // param int nTargetLSN  (in $v0)
    {   // 0x0000127C-0x000012B0
    }
}

// 0x000012B0-0x000012C8 (24 bytes), lines 1443-1444
static int GTSFileIsEOF(GtsIOPFileTag *fpFile)
{
    // param GtsIOPFileTag *fpFile  (in $v0)
    {   // 0x000012B0-0x000012C8
    }
}

// 0x000012C8-0x00001410 (328 bytes), lines 1457-1544
static void GTSReadFile(GtsIOPReadRequestTag *rpRequest)
{
    // param GtsIOPReadRequestTag *rpRequest  (in $s2)
    {   // 0x000012C8-0x00001410
        enum @enum nLastIssuedError;  // in $s1
        int nErrorCode;  // in $s0
        struct @anon4 mode;  // at 0x00002078
    }
}

// 0x00001410-0x0000146C (92 bytes), lines 1561-1563
static int _makeInt(int start)
{
    // param int start  (in $v0)
    {   // 0x00001410-0x0000146C
    }
}

// 0x0000146C-0x000014EC (128 bytes), lines 1593-1610
static void _TOCRead(long lnSize, long lnLoc, char *lpBuf)
{
    // param long lnSize  (in $s3)
    // param long lnLoc  (in $s2)
    // param char *lpBuf  (in $s1)
    {   // 0x0000146C-0x000014EC
        int lnResult;  // in $s0
        struct @anon4 lMode;  // at 0x0000207C
    }
}

// 0x000014EC-0x0000153C (80 bytes), lines 1625-1635
static void _catString(char *lpacTarget, int lnFirst, int lnLast)
{
    // param char *lpacTarget  (in $v0)
    // param int lnFirst  (in $v0)
    // param int lnLast  (in $v0)
    {   // 0x000014EC-0x0000153C
    }
}

// 0x0000153C-0x00001830 (756 bytes), lines 1649-1743
static void _GetDirDetails(int lnStartSec, int lnNumSectors)
{
    // param int lnStartSec  (in $s6)
    // param int lnNumSectors  (in $s7)
    {   // 0x0000153C-0x00001830
        int lnDoNext;  // in $s4
        int lnToDo;  // in $s3
        unsigned int lnCurrentDir;  // in $s2
        unsigned long laaunDirsToDo[256][2];  // $sp+72
        unsigned long lnLength;  // $sp+68
        unsigned long lnValue;  // $sp+64
        int lnLast;  // $sp+60
        int lnFirst;  // $sp+56
        int j;  // in $s1
        int i;  // in $s0
    }
}

// 0x00001830-0x0000188C (92 bytes), lines 1757-1774
static void _ReadTOC()
{
    {   // 0x00001830-0x0000188C
        int lnNumSectors;  // in $v0
        int lnSector;  // in $a3
    }
}

// 0x0000188C-0x00001940 (180 bytes), lines 1788-1807
static int GTSSearchTOC(char *sFileName, GtsIOPFileTag *fpFile)
{
    // param char *sFileName  (in $s3)
    // param GtsIOPFileTag *fpFile  (in $s0)
    {   // 0x0000188C-0x00001940
        char lacFullName[256];  // $sp+40
        struct @anon3 *lpFile;  // in $s2
        int nIndex;  // in $s1
    }
}

// 0x00001940-0x00001B9C (604 bytes), lines 1823-1895
static void GTSInitialise(GtsConfigTag *cpConfig, GtsIOPFuncsTag *fpFileFuncs)
{
    // param GtsConfigTag *cpConfig  (in $v0)
    // param GtsIOPFuncsTag *fpFileFuncs  (in $s2)
    {   // 0x00001940-0x00001B9C
        int nOldStat;  // $sp+36
        int nDiskType;  // in $v0
        int nIndex;  // in $s0
    }
}

// 0x00001B9C-0x00001BB4 (24 bytes), lines 1910-1913
static void GTSFlushRingBuffer(GtsIOPRingBufferTag *rbpRingBuffer)
{
    // param GtsIOPRingBufferTag *rbpRingBuffer  (in $v0)
    {   // 0x00001B9C-0x00001BB4
    }
}

// 0x00001BB4-0x00001BFC (72 bytes), lines 1919-1928
static void GtsAdvanceRingBuffer(GtsIOPRingBufferTag *rbpRingBuffer, unsigned int nSectors)
{
    // param GtsIOPRingBufferTag *rbpRingBuffer  (in $v0)
    // param unsigned int nSectors  (in $v0)
    {   // 0x00001BB4-0x00001BFC
    }
}

// 0x00001BFC-0x00001CCC (208 bytes), lines 1942-1977
int GTSOpenIOP(char *sFilename)
{
    // param char *sFilename  (in $s2)
    {   // 0x00001BFC-0x00001CCC
        GtsIOPFileTag *fpFile;  // in $s1
        int nIndex;  // in $s0
    }
}

// 0x00001CCC-0x00001D28 (92 bytes), lines 1991-2006
void GTSCloseIOP(int nFileID)
{
    // param int nFileID  (in $v0)
    {   // 0x00001CCC-0x00001D28
        GtsIOPFileTag *fpFile;  // in $s0
    }
}

// 0x00001D28-0x00001EB4 (396 bytes), lines 2019-2111
unsigned int GTSReadIOP(int nFileID, unsigned int nBytesToRead, void *pBuffer)
{
    // param int nFileID  (in $v0)
    // param unsigned int nBytesToRead  (in $s4)
    // param void *pBuffer  (in $s3)
    {   // 0x00001D28-0x00001EB4
        GtsIOPReadRequestTag rRequest;  // $sp+56
        unsigned int nNumWholeSectors;  // in $s2
        GtsIOPReadRequestTag rRequest;  // $sp+40
        unsigned int nReadSize;  // in $v0
        GtsIOPFileTag *fpFile;  // in $s1
        unsigned int nBytesRead;  // in $s0
    }
}

// 0x00001EB4-0x00002014 (352 bytes), lines 2126-2206
int GTSSeekIOP(int nFileID, int nOffset, int nOrigin)
{
    // param int nFileID  (in $v0)
    // param int nOffset  (in $v0)
    // param int nOrigin  (in $v0)
    {   // 0x00001EB4-0x00002014
        GtsIOPReadRequestTag rRequest;  // $sp+32
        int bBufferUsed;  // in $a2
        unsigned int nBufferStartPos;  // in $a0
        unsigned int nTargetFilePos;  // in $v0
        int nTargetPosition;  // in $v0
        GtsIOPFileTag *fpFile;  // in $s0
    }
}

