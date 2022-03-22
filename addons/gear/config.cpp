class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] =
        weapons[] = {QGVAR(Pilot_Radio_Pack)}
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};

class CfgInventoryGlobalVariable {
    maxSoldierLoad = 2000;
};

#include "CfgWeapons.hpp"
