// I:\Burnout 2 Code\gamesource\Race\CInterestOMeter.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static RwV3d kYAxis;  // 0x002DB140
CRace gRace;  // 0x0031D4B0

// ---- functions ----

// 0x0027B920-0x0027B9E0 (192 bytes), lines 276-336
// CalculateInterest__15CInterestOMeterFP5RwV3dP15CTrafficVehicle
float CInterestOMeter::CalculateInterest(RwV3d *lpResult, CTrafficVehicle *lpVehicle)
{
    // param RwV3d *lpResult  (in $v0)
    // param CTrafficVehicle *lpVehicle  (in $v0)
    {   // 0x0027B920-0x0027B9E0
        float lrInterest;  // $sp+0
        float lrTypeMulti;  // $sp+0
    }
}

// 0x0027B9E0-0x0027BC0C (556 bytes), lines 173-255
// CalculateInterest__15CInterestOMeterFP5RwV3dP8CRaceCar
float CInterestOMeter::CalculateInterest(RwV3d *lpResult, CRaceCar *lpCar)
{
    // param RwV3d *lpResult  (in $s1)
    // param CRaceCar *lpCar  (in $s0)
    {   // 0x0027B9E0-0x0027BC0C
        float lrInterestFactor;  // $sp+80
        float lrInterest;  // $sp+80
        float lrTypeMulti;  // $sp+80
    }
}

// 0x0027BC10-0x0027BDBC (428 bytes), lines 83-153
// Update__15CInterestOMeterFPP8CRaceCarPP15CTrafficVehicleP8CRaceCar
int CInterestOMeter::Update(CRaceCar **lppResultRaceCar, CTrafficVehicle **lppResultTrafficCar, CRaceCar *lpCar)
{
    // param CInterestOMeter *this  (in $s5)
    // param CRaceCar **lppResultRaceCar  (in $s4)
    // param CTrafficVehicle **lppResultTrafficCar  (in $s3)
    // param CRaceCar *lpCar  (in $s2)
    {   // 0x0027BC10-0x0027BDBC
        int lnIndex;  // in $s1
        int lnIndex;  // in $s1
        RwV3d lvInterestingPos;  // $sp+128
        float lrInterest;  // $sp+144
        int lbResult;  // in $s0
    }
}

