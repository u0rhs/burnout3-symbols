// I:\GameShared\GameClasses\FileSystem\ps2\iop\gtfsstreamiop.c
// Outline rebuilt from the debug information of GTFSB2.IRX (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int GtsMainRPCThread();  // 0x000002BC
void *GTSHandleRPC(unsigned int, void *, int);  // 0x000004A4
void GTSCmdHandler(void *, void *);  // 0x00000584
int GTSEETransferThread();  // 0x00000970
int GTSReadThread();  // 0x00000E7C
int GTSOpenIOP(char *);  // 0x000016C4
void GTSCloseIOP(int);  // 0x00001794
unsigned int GTSReadIOP(int, unsigned int, void *);  // 0x000017F0
int GTSSeekIOP(int, int, int);  // 0x0000197C
_libhead gtfsdvd_entry;  // 0x00001A90
_moduleinfo Module;  // 0x00001AE8
GtsIOPGlobalsTag gGlobals;  // 0x00001B00
struct @anon1 cmdDriveErrorHdr;  // 0x00001B50
struct @anon1 cmdNotifyHdr;  // 0x00001B60
int gRpcRet[4];  // 0x00001B70
int gRpcArg[32];  // 0x00001B80

// ---- functions ----

// 0x00000228-0x000002BC (148 bytes), lines 273-306
int start()
{
    {   // 0x00000228-0x000002BC
        ThreadParam param;  // $sp+28
    }
}

// 0x000002BC-0x000004A4 (488 bytes), lines 319-397
static int GtsMainRPCThread()
{
    {   // 0x000002BC-0x000004A4
        _sif_serve_data sd;  // $sp+124
        _sif_queue_data qd;  // $sp+100
        ThreadParam tpThreadParams;  // $sp+80
        EventFlagParam epEventParams;  // $sp+68
        SemaParam spSemaphoreParams;  // $sp+52
    }
}

// 0x000004A4-0x00000584 (224 bytes), lines 410-454
static void *GTSHandleRPC(unsigned int command, void *data)
{
    // param unsigned int command  (in $v0)
    // param void *data  (in $v1)
    {   // 0x000004A4-0x00000584
    }
}

// 0x00000584-0x000005C4 (64 bytes), lines 469-480
static void GTSCmdHandler(void *pCmdHeader)
{
    // param void *pCmdHeader  (in $v0)
    {   // 0x00000584-0x000005C4
        GtsIOPFileTag *fpFile;  // in $a1
    }
}

// 0x000005C4-0x000006E4 (288 bytes), lines 494-546
static void GTSOpenEE(char *sFilename, GtsOpenedFileTag *fpReturnedFile)
{
    // param char *sFilename  (in $s3)
    // param GtsOpenedFileTag *fpReturnedFile  (in $s2)
    {   // 0x000005C4-0x000006E4
        GtsIOPFileTag *fpFile;  // in $s1
        int nIndex;  // in $s0
    }
}

// 0x000006E4-0x000007A0 (188 bytes), lines 559-589
static int GTSReadEE(int nFileID, unsigned int nTransferSectors, void *vpTransferAddress)
{
    // param int nFileID  (in $v0)
    // param unsigned int nTransferSectors  (in $s2)
    // param void *vpTransferAddress  (in $s1)
    {   // 0x000006E4-0x000007A0
        GtsIOPFileTag *fpFile;  // in $s3
        int ret_val;  // in $s0
    }
}

// 0x000007A0-0x00000918 (376 bytes), lines 602-668
static int GTSSeekEE(int nFileID, int nSectors, int nOrigin)
{
    // param int nFileID  (in $s5)
    // param int nSectors  (in $s4)
    // param int nOrigin  (in $s3)
    {   // 0x000007A0-0x00000918
        int nTargetLSN;  // in $v0
        GtsIOPFileTag *fpFile;  // in $s1
        int ret_val;  // in $s0
    }
}

// 0x00000918-0x00000970 (88 bytes), lines 681-693
static void GTSCloseEE(int nFileID)
{
    // param int nFileID  (in $v0)
    {   // 0x00000918-0x00000970
        GtsIOPFileTag *fpFile;  // in $s0
    }
}

// 0x00000970-0x00000A0C (156 bytes), lines 706-749
static int GTSEETransferThread()
{
    {   // 0x00000970-0x00000A0C
        unsigned long nFlagValue;  // $sp+44
        GtsIOPTransferRequestTag rActiveRequest;  // $sp+24
        int bValidRequest;  // in $s0
    }
}

// 0x00000A0C-0x00000AC4 (184 bytes), lines 764-782
static void GTSEETransferNotifyCompletion(int nFileID, unsigned int nSectorsUnread)
{
    // param int nFileID  (in $s1)
    // param unsigned int nSectorsUnread  (in $s0)
    {   // 0x00000A0C-0x00000AC4
    }
}

// 0x00000AC4-0x00000BB4 (240 bytes), lines 795-834
static void GTSEETransferRequestCompleted(GtsIOPTransferRequestTag *rpRequest)
{
    // param GtsIOPTransferRequestTag *rpRequest  (in $s1)
    {   // 0x00000AC4-0x00000BB4
        GtsIOPFileTag *fpFile;  // in $v0
    }
}

// 0x00000BB4-0x00000CCC (280 bytes), lines 848-905
static int GTSGetNextEETransferCommand(GtsIOPTransferRequestTag *rpRequest)
{
    // param GtsIOPTransferRequestTag *rpRequest  (in $s1)
    {   // 0x00000BB4-0x00000CCC
        unsigned int nTransferSize;  // in $v0
        unsigned int nDataAvailable;  // in $v0
        GtsIOPFileTag *fpFile;  // in $a0
        int nIndex;  // in $s0
    }
}

// 0x00000CCC-0x00000DE8 (284 bytes), lines 918-970
static void GTSTransferToEE(GtsIOPTransferRequestTag *rpRequest)
{
    // param GtsIOPTransferRequestTag *rpRequest  (in $s1)
    {   // 0x00000CCC-0x00000DE8
        unsigned int nTransferSize;  // in $s0
        struct @anon3 dDMA;  // $sp+32
        unsigned int nDMAId;  // in $s0
    }
}

// 0x00000DE8-0x00000E7C (148 bytes), lines 983-1000
static void GTSEENotifyError(unsigned int nErrorID)
{
    // param unsigned int nErrorID  (in $s0)
    {   // 0x00000DE8-0x00000E7C
    }
}

// 0x00000E7C-0x00000F18 (156 bytes), lines 1014-1057
static int GTSReadThread()
{
    {   // 0x00000E7C-0x00000F18
        unsigned long nFlagValue;  // $sp+44
        GtsIOPReadRequestTag rActiveRequest;  // $sp+28
        int bValidRequest;  // in $s0
    }
}

// 0x00000F18-0x00000FC0 (168 bytes), lines 1072-1100
static void GTSReadRequestCompleted(GtsIOPReadRequestTag *rpRequest)
{
    // param GtsIOPReadRequestTag *rpRequest  (in $v0)
    {   // 0x00000F18-0x00000FC0
    }
}

// 0x00000FC0-0x00001100 (320 bytes), lines 1114-1164
static int GTSGetNextReadCommand(GtsIOPReadRequestTag *rpRequest)
{
    // param GtsIOPReadRequestTag *rpRequest  (in $s2)
    {   // 0x00000FC0-0x00001100
        GtsIOPFileTag *fpFile;  // in $s1
        int nIndex;  // in $s0
    }
}

// 0x00001100-0x00001258 (344 bytes), lines 1211-1314
static int GTSOpenFile(char *sFileName, GtsIOPFileTag *fpFile)
{
    // param char *sFileName  (in $s0)
    // param GtsIOPFileTag *fpFile  (in $s1)
    {   // 0x00001100-0x00001258
        struct @anon0 fSceFile;  // $sp+100
        char nIndex;  // in $s0
        char sNameBuffer[64];  // $sp+36
        int bFileOpened;  // in $s0
    }
}

// 0x00001258-0x00001270 (24 bytes), lines 1328-1341
static void GTSCloseFile(GtsIOPFileTag *fpFile)
{
    // param GtsIOPFileTag *fpFile  (in $v0)
    {   // 0x00001258-0x00001270
    }
}

// 0x00001270-0x000012A4 (52 bytes), lines 1355-1380
static void GTSSeekFile(GtsIOPFileTag *fpFile, int nTargetLSN)
{
    // param GtsIOPFileTag *fpFile  (in $v0)
    // param int nTargetLSN  (in $v0)
    {   // 0x00001270-0x000012A4
    }
}

// 0x000012A4-0x000012BC (24 bytes), lines 1394-1395
static int GTSFileIsEOF(GtsIOPFileTag *fpFile)
{
    // param GtsIOPFileTag *fpFile  (in $v0)
    {   // 0x000012A4-0x000012BC
    }
}

// 0x000012BC-0x00001404 (328 bytes), lines 1408-1495
static void GTSReadFile(GtsIOPReadRequestTag *rpRequest)
{
    // param GtsIOPReadRequestTag *rpRequest  (in $s2)
    {   // 0x000012BC-0x00001404
        enum @enum nLastIssuedError;  // in $s1
        int nErrorCode;  // in $s0
        struct @anon4 mode;  // at 0x00001AF8
    }
}

// 0x00001404-0x00001664 (608 bytes), lines 1508-1571
static void GTSInitialise(GtsConfigTag *cpConfig, GtsIOPFuncsTag *fpFileFuncs)
{
    // param GtsConfigTag *cpConfig  (in $v0)
    // param GtsIOPFuncsTag *fpFileFuncs  (in $s2)
    {   // 0x00001404-0x00001664
        int nDiskType;  // in $v0
        int nIndex;  // in $s0
    }
}

// 0x00001664-0x0000167C (24 bytes), lines 1586-1589
static void GTSFlushRingBuffer(GtsIOPRingBufferTag *rbpRingBuffer)
{
    // param GtsIOPRingBufferTag *rbpRingBuffer  (in $v0)
    {   // 0x00001664-0x0000167C
    }
}

// 0x0000167C-0x000016C4 (72 bytes), lines 1595-1604
static void GtsAdvanceRingBuffer(GtsIOPRingBufferTag *rbpRingBuffer, unsigned int nSectors)
{
    // param GtsIOPRingBufferTag *rbpRingBuffer  (in $v0)
    // param unsigned int nSectors  (in $v0)
    {   // 0x0000167C-0x000016C4
    }
}

// 0x000016C4-0x00001794 (208 bytes), lines 1618-1653
int GTSOpenIOP(char *sFilename)
{
    // param char *sFilename  (in $s2)
    {   // 0x000016C4-0x00001794
        GtsIOPFileTag *fpFile;  // in $s1
        int nIndex;  // in $s0
    }
}

// 0x00001794-0x000017F0 (92 bytes), lines 1667-1682
void GTSCloseIOP(int nFileID)
{
    // param int nFileID  (in $v0)
    {   // 0x00001794-0x000017F0
        GtsIOPFileTag *fpFile;  // in $s0
    }
}

// 0x000017F0-0x0000197C (396 bytes), lines 1695-1787
unsigned int GTSReadIOP(int nFileID, unsigned int nBytesToRead, void *pBuffer)
{
    // param int nFileID  (in $v0)
    // param unsigned int nBytesToRead  (in $s4)
    // param void *pBuffer  (in $s3)
    {   // 0x000017F0-0x0000197C
        GtsIOPReadRequestTag rRequest;  // $sp+56
        unsigned int nNumWholeSectors;  // in $s2
        GtsIOPReadRequestTag rRequest;  // $sp+40
        unsigned int nReadSize;  // in $v0
        GtsIOPFileTag *fpFile;  // in $s1
        unsigned int nBytesRead;  // in $s0
    }
}

// 0x0000197C-0x00001A90 (276 bytes), lines 1802-1867
int GTSSeekIOP(int nFileID, int nOffset, int nOrigin)
{
    // param int nFileID  (in $v0)
    // param int nOffset  (in $v0)
    // param int nOrigin  (in $v0)
    {   // 0x0000197C-0x00001A90
        int bBufferUsed;  // in $a3
        unsigned int nBufferStartPos;  // in $a2
        unsigned int nTargetFilePos;  // in $v0
        int nTargetPosition;  // in $v0
        GtsIOPFileTag *fpFile;  // in $v0
    }
}

