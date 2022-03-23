#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {QGVAR(Pilot_Radio_Pack)};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(MAIN_ADDON), "A3_Data_F", "A3_Weapons_F", "ace_medical_engine", "ace_medical_treatment"};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};

class CfgInventoryGlobalVariable {
    maxSoldierLoad = 2000;
};

#include "CfgVehicles.hpp"