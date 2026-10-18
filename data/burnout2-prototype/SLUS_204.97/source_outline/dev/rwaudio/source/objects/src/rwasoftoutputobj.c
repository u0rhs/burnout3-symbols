// C:\dev\rwaudio\source\objects\src\rwasoftoutputobj.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void (*RwaSoftOutputPreMixCallback)(int *, unsigned int);
short *_RwaSoftOutputMixCallback(unsigned int, unsigned int);
RwaObj *_RwaSoftOutputGetParams(RwaObj *, void *);
void _RwaSoftOutputDestroy(RwaObj *, void (*)(RwaObj *, void *), void *);
RwaObj *_RwaSoftOutputCreate(RwaObj *, RwaObj *, void *, void *(*)(RwaObjDef *, void *, void *, unsigned int), void *);
int _rwaObjFindByObjDefCallback(RwaObj *, void *);  // 0x0026C9D0
signed char _rwMsbBit[];  // 0x002A2A90
RwaUUID rwaSOFTOUTPUTID;  // 0x002D9DD0
RwaUUID rwaSPU2OUTPUTID;  // 0x002DA410
RwaObjDef *_rwaGnullObjDef;  // 0x003111AC

// ---- functions ----

