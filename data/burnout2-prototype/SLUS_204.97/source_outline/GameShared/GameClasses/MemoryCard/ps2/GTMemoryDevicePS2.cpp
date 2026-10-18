// I:\GameShared\GameClasses\MemoryCard\ps2\GTMemoryDevicePS2.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static int knPort;  // 0x00310CA8
static int knSlot;  // 0x00310CAC

// ---- functions ----

// 0x0020CAF0-0x0020D0BC (1484 bytes), lines 983-1061
// GetFinishStatus__16CMemoryDevicePS2FiiPi
EMemDevStatus CMemoryDevicePS2::GetFinishStatus(int lnSyncCmd, int lnSyncResult, int *lpnSyncInfo)
{
    // param CMemoryDevicePS2 *this  (in $v0)
    // param int lnSyncCmd  (in $v0)
    // param int lnSyncResult  (in $v0)
    // param int *lpnSyncInfo  (in $v0)
    {   // 0x0020CAF0-0x0020D0BC
    }
}

// 0x0020D0C0-0x0020D1E8 (296 bytes), lines 848-900
// FinishedGetInfo__16CMemoryDevicePS2Fi
EMemDevStatus CMemoryDevicePS2::FinishedGetInfo(int lnSyncResult)
{
    // param CMemoryDevicePS2 *this  (in $v0)
    // param int lnSyncResult  (in $v0)
    {   // 0x0020D0C0-0x0020D1E8
    }
}

// 0x0020D1F0-0x0020D2B4 (196 bytes), lines 441-509
// GetRunStatus__16CMemoryDevicePS2Fi
EMemDevStatus CMemoryDevicePS2::GetRunStatus(int lnSyncCmd)
{
    // param int lnSyncCmd  (in $v0)
    {   // 0x0020D1F0-0x0020D2B4
    }
}

// 0x0020D2C0-0x0020D42C (364 bytes), lines 322-392
// Sync__16CMemoryDevicePS2F17EMemDevPollOrWaitPi
EMemDevStatus CMemoryDevicePS2::Sync(EMemDevPollOrWait lePollOrWait, int *lpnSyncInfo)
{
    // param CMemoryDevicePS2 *this  (in $s0)
    // param EMemDevPollOrWait lePollOrWait  (in $v0)
    // param int *lpnSyncInfo  (in $s1)
    {   // 0x0020D2C0-0x0020D42C
        int lnSyncResult;  // $sp+60
        int lnSyncCmd;  // $sp+56
        int lnSyncMode;  // in $v0
        int lnSyncExec;  // in $v0
    }
}

// 0x0020D430-0x0020D494 (100 bytes), lines 307-316
// MkDir__16CMemoryDevicePS2FPCc
int CMemoryDevicePS2::MkDir(char *lpacDirname)
{
    // param CMemoryDevicePS2 *this  (in $s0)
    // param char *lpacDirname  (in $v0)
    {   // 0x0020D430-0x0020D494
    }
}

// 0x0020D4A0-0x0020D530 (144 bytes), lines 285-302
// Format__16CMemoryDevicePS2Fv
int CMemoryDevicePS2::Format()
{
    // param CMemoryDevicePS2 *this  (in $s0)
    {   // 0x0020D4A0-0x0020D530
    }
}

// 0x0020D530-0x0020D5E8 (184 bytes), lines 256-281
// Write__16CMemoryDevicePS2FPCcUiUi
int CMemoryDevicePS2::Write(char *lpacBuffer, unsigned int lunLengthInBytes, unsigned int lunOffsetInBytes)
{
    // param CMemoryDevicePS2 *this  (in $s0)
    // param char *lpacBuffer  (in $v0)
    // param unsigned int lunLengthInBytes  (in $v0)
    // param unsigned int lunOffsetInBytes  (in $v0)
    {   // 0x0020D530-0x0020D5E8
    }
}

// 0x0020D5F0-0x0020D6A8 (184 bytes), lines 224-249
// Read__16CMemoryDevicePS2FPcUiUi
int CMemoryDevicePS2::Read(char *lpacBuffer, unsigned int lunLengthInBytes, unsigned int lunOffsetInBytes)
{
    // param CMemoryDevicePS2 *this  (in $s0)
    // param char *lpacBuffer  (in $v0)
    // param unsigned int lunLengthInBytes  (in $v0)
    // param unsigned int lunOffsetInBytes  (in $v0)
    {   // 0x0020D5F0-0x0020D6A8
    }
}

// 0x0020D6B0-0x0020D73C (140 bytes), lines 192-209
// CloseFile__16CMemoryDevicePS2Fv
int CMemoryDevicePS2::CloseFile()
{
    // param CMemoryDevicePS2 *this  (in $s0)
    {   // 0x0020D6B0-0x0020D73C
    }
}

// 0x0020D740-0x0020D830 (240 bytes), lines 148-188
// OpenFile__16CMemoryDevicePS2FPCcUi
int CMemoryDevicePS2::OpenFile(char *lpacFilename, unsigned int lunMode)
{
    // param CMemoryDevicePS2 *this  (in $s0)
    // param char *lpacFilename  (in $a1)
    // param unsigned int lunMode  (in $v0)
    {   // 0x0020D740-0x0020D830
        int lnOpenMode;  // in $v0
    }
}

// 0x0020D830-0x0020D850 (32 bytes), lines 129-134
// GetFreeSpace__16CMemoryDevicePS2Fv
int CMemoryDevicePS2::GetFreeSpace()
{
    // param CMemoryDevicePS2 *this  (in $v0)
    {   // 0x0020D830-0x0020D850
    }
}

// 0x0020D850-0x0020D8C0 (112 bytes), lines 113-122
// GetFileSize__16CMemoryDevicePS2FPCc
int CMemoryDevicePS2::GetFileSize(char *lpacFilename)
{
    // param CMemoryDevicePS2 *this  (in $s0)
    // param char *lpacFilename  (in $v0)
    {   // 0x0020D850-0x0020D8C0
    }
}

// 0x0020D8C0-0x0020D8C8 (8 bytes), lines 67-67
// GetError__16CMemoryDevicePS2Fv
EMemDevError CMemoryDevicePS2::GetError()
{
    // param CMemoryDevicePS2 *this  (in $v0)
    {   // 0x0020D8C0-0x0020D8C8
    }
}

// 0x0020D8D0-0x0020D910 (64 bytes), lines 42-53
// Init__16CMemoryDevicePS2Fv
int CMemoryDevicePS2::Init()
{
    // param CMemoryDevicePS2 *this  (in $v0)
    {   // 0x0020D8D0-0x0020D910
    }
}

