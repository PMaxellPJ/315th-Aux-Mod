#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};
#include "CfgSettings.hpp"
enableDebugConsole = 1;

class CfgFactionClasses {
    class 6315th_Aux {
        displayName = "315th Aux Mod";
        priority = 3;
        side = 1;
    };
    class 315th_Aux_Empty {
        displayName = "315TH Aux Mod";
        priority = 3;
        side = 1;
    };
};

class CfgEditorCategories {
    class EdCat_315th_Main {
        displayName = "315th Aux Mod";
    };

    class EdCat_61st_Supplies{
        displayName = "315th Supplies";
    };
};

class CfgEditorSubcategories {
    class EdSubcat_315th_resupply {
        displayName = "Resupply";
    };
};


