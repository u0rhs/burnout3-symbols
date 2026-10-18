// I:\Burnout 2 Code\gamesource\Race\CReplay.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int _frameno;
ReplayFrame *_gpReplayBuffer;  // 0x00310658
CGTFileSystem *gpGTFileSystem;  // 0x003107C0
ReplayFrame *_gpReplayBufferUCA;  // 0x00310F38
static char *_gReplayPlayingPrint;  // 0x00310F3C
static char *_gReplayRecordingPrint;  // 0x00310F40
unsigned int gCRBHash;  // 0x00310F44
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CPlayerCar gaPlayerCars[4];  // 0x0034AD80
CAICar gaAICars[4];  // 0x00362A80

// ---- functions ----

// 0x0023F140-0x0023F36C (556 bytes), lines 453-606
// LoadFromDisk__7CReplayFv
int CReplay::LoadFromDisk()
{
    // param CReplay *this  (in $s3)
    {   // 0x0023F140-0x0023F36C
        int c;  // in $t1
        t_REPLAY_HEADER Header;  // $sp+400
        char FileName[256];  // $sp+144
        char TrackName[20];  // $sp+112
        char TrackBasePath[20];  // $sp+80
        CGTFile *pFile;  // in $s0
    }
}

// 0x0023F370-0x0023FC14 (2212 bytes), lines 144-330
// NextFrame__7CReplayFP16CDrivingControls
int CReplay::NextFrame(CDrivingControls *lpDrivingControls)
{
    // param CReplay *this  (in $s0)
    // param CDrivingControls *lpDrivingControls  (in $v0)
    {   // 0x0023F370-0x0023FC14
        int i;  // in $a3
        int i;  // in $a2
        unsigned char temp;  // in $v0
        RwV3d pos;  // $sp+48
    }
}

// 0x0023FC20-0x0023FC60 (64 bytes), lines 111-135
// Reset__7CReplayFi
void CReplay::Reset(int bPlaying)
{
    // param CReplay *this  (in $v0)
    // param int bPlaying  (in $v0)
    {   // 0x0023FC20-0x0023FC60
    }
}

