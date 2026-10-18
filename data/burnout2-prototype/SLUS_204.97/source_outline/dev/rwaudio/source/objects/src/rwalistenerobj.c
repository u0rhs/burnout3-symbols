// C:\dev\rwaudio\source\objects\src\rwalistenerobj.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwaObj *_RwaListenerCreate(RwaObj *, RwaObj *, void *, void *(*)(RwaObjDef *, void *, void *, unsigned int), void *);  // 0x00270BE0
signed char _rwMsbBit[];  // 0x002A2A90
static RwaInputParamDef _listenerInputParams[8];  // 0x002BAE10
static RwaOutputParamDef _listenerOutputParams[9];  // 0x002BAED0
RwaUUID rwaLISTENERID;  // 0x002D9F00
RwaObjDef *_rwaGnullObjDef;  // 0x003111AC
static RwaObjDefAliasInfo _listenerAliasInfo;  // 0x003111B8
static RwaObjDefInterfaceInfo _listenerInterfaceInfo;  // 0x00495760
static RwaObjDef _listenerDef;  // 0x00495780

// ---- functions ----

// 0x002705F0-0x00270600 (16 bytes), lines 1403-1406
static RwaObj *_RwaListenerGetRolloffFactor(RwaObj *obj, void *data)
{
    // param RwaObj *obj  (in $v0)
    // param void *data  (in $v0)
    {   // 0x002705F0-0x00270600
    }
}

// 0x00270600-0x00270610 (16 bytes), lines 1388-1391
static RwaObj *_RwaListenerSetRolloffFactor(RwaObj *obj, void *data)
{
    // param RwaObj *obj  (in $v0)
    // param void *data  (in $v0)
    {   // 0x00270600-0x00270610
    }
}

// 0x00270610-0x00270620 (16 bytes), lines 1373-1376
static RwaObj *_RwaListenerGetDistanceFactor(RwaObj *obj, void *data)
{
    // param RwaObj *obj  (in $v0)
    // param void *data  (in $v0)
    {   // 0x00270610-0x00270620
    }
}

// 0x00270620-0x00270630 (16 bytes), lines 1358-1361
static RwaObj *_RwaListenerSetDistanceFactor(RwaObj *obj, void *data)
{
    // param RwaObj *obj  (in $v0)
    // param void *data  (in $v0)
    {   // 0x00270620-0x00270630
    }
}

// 0x00270630-0x00270640 (16 bytes), lines 1343-1346
static RwaObj *_RwaListenerGetDopplerScale(RwaObj *obj, void *data)
{
    // param RwaObj *obj  (in $v0)
    // param void *data  (in $v0)
    {   // 0x00270630-0x00270640
    }
}

// 0x00270640-0x00270650 (16 bytes), lines 1328-1331
static RwaObj *_RwaListenerSetDopplerScale(RwaObj *obj, void *data)
{
    // param RwaObj *obj  (in $v0)
    // param void *data  (in $v0)
    {   // 0x00270640-0x00270650
    }
}

// 0x00270650-0x00270670 (32 bytes), lines 1313-1316
static RwaObj *_RwaListenerGetRight(RwaObj *obj, void *data)
{
    // param RwaObj *obj  (in $v0)
    // param void *data  (in $v0)
    {   // 0x00270650-0x00270670
    }
}

// 0x00270670-0x00270690 (32 bytes), lines 1298-1301
static RwaObj *_RwaListenerGetAt(RwaObj *obj, void *data)
{
    // param RwaObj *obj  (in $v0)
    // param void *data  (in $v0)
    {   // 0x00270670-0x00270690
    }
}

// 0x00270690-0x00270708 (120 bytes), lines 1283-1286
static RwaObj *_RwaListenerSetAt(RwaObj *obj, void *data)
{
    // param RwaObj *obj  (in $v0)
    // param void *data  (in $v0)
    {   // 0x00270690-0x00270708
    }
}

// 0x00270710-0x00270730 (32 bytes), lines 1268-1271
static RwaObj *_RwaListenerGetUp(RwaObj *obj, void *data)
{
    // param RwaObj *obj  (in $v0)
    // param void *data  (in $v0)
    {   // 0x00270710-0x00270730
    }
}

// 0x00270730-0x002707A4 (116 bytes), lines 1253-1256
static RwaObj *_RwaListenerSetUp(RwaObj *obj, void *data)
{
    // param RwaObj *obj  (in $v0)
    // param void *data  (in $v0)
    {   // 0x00270730-0x002707A4
    }
}

// 0x002707B0-0x002707E8 (56 bytes), lines 1238-1241
static RwaObj *_RwaListenerGetOrientation(RwaObj *obj, void *data)
{
    // param RwaObj *obj  (in $v0)
    // param void *data  (in $v0)
    {   // 0x002707B0-0x002707E8
    }
}

// 0x002707F0-0x00270828 (56 bytes), lines 1223-1226
static RwaObj *_RwaListenerSetOrientation(RwaObj *obj, void *data)
{
    // param RwaObj *obj  (in $v0)
    // param void *data  (in $v0)
    {   // 0x002707F0-0x00270828
    }
}

// 0x00270830-0x00270850 (32 bytes), lines 1208-1211
static RwaObj *_RwaListenerGetVelocity(RwaObj *obj, void *data)
{
    // param RwaObj *obj  (in $v0)
    // param void *data  (in $v0)
    {   // 0x00270830-0x00270850
    }
}

// 0x00270850-0x00270870 (32 bytes), lines 1193-1196
static RwaObj *_RwaListenerSetVelocity(RwaObj *obj, void *data)
{
    // param RwaObj *obj  (in $v0)
    // param void *data  (in $v0)
    {   // 0x00270850-0x00270870
    }
}

// 0x00270870-0x00270890 (32 bytes), lines 1178-1181
static RwaObj *_RwaListenerGetPosition(RwaObj *obj, void *data)
{
    // param RwaObj *obj  (in $v0)
    // param void *data  (in $v0)
    {   // 0x00270870-0x00270890
    }
}

// 0x00270890-0x002708B0 (32 bytes), lines 1163-1166
static RwaObj *_RwaListenerSetPosition(RwaObj *obj, void *data)
{
    // param RwaObj *obj  (in $v0)
    // param void *data  (in $v0)
    {   // 0x00270890-0x002708B0
    }
}

// 0x002708B0-0x00270BD4 (804 bytes), lines 1044-1146
RwaListener *_rwaListenerCalcVoiceAttributes(RwaListener *obj, RwaListenerVoiceAttributes *attrib)
{
    // param RwaListener *obj  (in $s5)
    // param RwaListenerVoiceAttributes *attrib  (in $s4)
    {   // 0x002708B0-0x00270BD4
        float maxdistance;  // optimised away
        RwaListenerState *listenerState;  // in $s2
        RwV3d *listenerRight;  // in $s1
        RwV3d *listenerAt;  // in $s0
        RwV3d *listenerVel;  // in $v0
        float dopplerscale;  // optimised away
        float rollofffactor;  // optimised away
        float distancefactor;  // optimised away
        float lastdistance;  // optimised away
        float distance;  // optimised away
        RwV3d currdiff;  // $sp+176
        RwV3d lastdiff;  // $sp+160
    }
}

// 0x00270BE0-0x00270C90 (176 bytes), lines 456-490
static RwaObj *_RwaListenerCreate(RwaObj *obj)
{
    // param RwaObj *obj  (in $v0)
    {   // 0x00270BE0-0x00270C90
        RwaListener *listener;  // in $v0
        RwV3d nullV3d;  // $sp+0
    }
}

// 0x00270C90-0x00270DAC (284 bytes), lines 316-370
RwaObjDef *RwaListenerRegisterUsingInterface()
{
    {   // 0x00270C90-0x00270DAC
        RwaObjInterfaceDef *defaultInterface;  // in $v0
        RwaObjDef *objDef;  // in $s0
    }
}

// 0x00270DB0-0x00270DD0 (32 bytes), lines 162-162
RwaListener *RwaListenerCreate(unsigned int creationFlags, void *(*creationCallback)(RwaObjDef *, void *, void *, unsigned int), void *callbackData)
{
    // param unsigned int creationFlags  (in $a0)
    // param void *(*creationCallback)(RwaObjDef *, void *, void *, unsigned int)  (in $v0)
    // param void *callbackData  (in $v0)
    {   // 0x00270DB0-0x00270DD0
    }
}

