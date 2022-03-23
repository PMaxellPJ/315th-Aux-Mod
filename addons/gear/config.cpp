class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        weapons[] = {QGVAR(Pilot_Radio_Pack)};
        requiredVersion =;
        author = "AUTHOR";
        VERSION_CONFIG =;
    };
};

class CfgInventoryGlobalVariable {
    maxSoldierLoad = 2000;
};

#include "CfgWeapons.hpp"