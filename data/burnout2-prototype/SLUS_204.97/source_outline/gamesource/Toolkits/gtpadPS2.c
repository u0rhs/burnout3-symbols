// I:\Burnout 2 Code\gamesource\Toolkits\gtpadPS2.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static int nGPads;  // 0x0031129C
static int nGNumWheels;  // 0x003112A0
static int nGSupportedPadTypes;  // 0x003112A4
static int nGStride;  // 0x003112A8
int nGHint;  // 0x003112AC
static unsigned char nGActuatorAlign[6];  // 0x003112B0
static void *pGData;  // 0x003112B8
static int nGSlots[4];  // 0x004A44D0
static unsigned char nGActuatorDirect[2][6];  // 0x004A44E0

// ---- functions ----

// 0x00281850-0x00282834 (4068 bytes), lines 1440-1639
// gtPadRead__FP15GtPadDataPS2Tag
int gtPadRead(GtPadDataPS2Tag *pData)
{
    // param GtPadDataPS2Tag *pData  (in $s0)
    {   // 0x00281850-0x00282834
        GtPadDataDualShockTag *pPad;  // in $v0
        int len;  // in $v0
    }
}

// 0x00282840-0x00282CA8 (1128 bytes), lines 1095-1399
int GtPadStateSet(int padID, int type, void *data)
{
    // param int padID  (in $v0)
    // param int type  (in $v0)
    // param void *data  (in $s1)
    {   // 0x00282840-0x00282CA8
        GtPadDataLogitechWheelClassATag *pPS2LWCAData;  // in $s0
        GtPadLogitechWheelForceData *pForceEffect;  // in $v0
        int ret;  // in $v0
        unsigned char actdata;  // in $t0
        unsigned char actdata;  // in $t0
        unsigned int *naActuatorData;  // in $v0
        int nLock;  // in $s2
        unsigned char *pData;  // in $v0
        GtPadDataDualShockTag *pPad;  // in $v0
        GtPadDataPS2Tag *pPS2PadData;  // in $v0
        int nSlot;  // in $v1
        int nPort;  // in $v0
        int bResult;  // in $a3
    }
}

// 0x00282CB0-0x002838A8 (3064 bytes), lines 438-1091
int GtPadStateGet(int padID, GtPadDataTag **data)
{
    // param int padID  (in $v0)
    // param GtPadDataTag **data  (in $v0)
    {   // 0x00282CB0-0x002838A8
        int device;  // $sp+140
        int i;  // in $s1
        lgDevDeviceDesc description;  // $sp+112
        GtPadDataLogitechWheelClassBTag *pPS2LWCBData;  // in $a2
        GtPadDataLogitechWheelClassATag *pPS2LWCAData;  // in $v0
        GtPadDataLogitechWheelClassBTag *pPS2LWCBData;  // in $v0
        GtPadDataLogitechWheelClassATag *pPS2LWCAData;  // in $v0
        int ret;  // in $v0
        GtPadDataDualShockTag *pPad;  // in $v0
        GtPadDataPS2Tag *pPS2PadData;  // in $v0
        int i;  // in $a0
        int nResult;  // in $s0
        signed char *pCurPad;  // in $v0
        int nExtID;  // in $v0
        int nID;  // in $v0
        int nState;  // in $v0
        int nSlot;  // in $s4
        int nPort;  // in $s3
    }
}

// 0x002838B0-0x00283E48 (1432 bytes), lines 134-395
int GtPadInit(int nPads, int nSupportedPadTypes, void *data, int nSize)
{
    // param int nPads  (in $s5)
    // param int nSupportedPadTypes  (in $s2)
    // param void *data  (in $s4)
    // param int nSize  (in $v0)
    {   // 0x002838B0-0x00283E48
        int ret;  // in $v0
        int device;  // $sp+188
        lgDevDeviceDesc description;  // $sp+160
        GtPadDataLogitechWheelClassBTag *pPS2LWCBData;  // in $v0
        GtPadDataLogitechWheelClassATag *pPS2LWCAData;  // in $v0
        GtPadDataPS2Tag *pPS2PadData;  // in $v0
        signed char *pCurPad;  // in $v0
        int j;  // in $a3
        int n;  // in $s0
        int i;  // in $a1
    }
}

