#define COMPONENT gear
#include "\{{mainprefix}}\{{prefix}}\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_GEAR
    #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_OTHER
    #define DEBUG_SETTINGS DEBUG_SETTINGS_GEAR
#endif

#include "\{{mainprefix}}\{{prefix}}\addons\main\script_macros.hpp"


#define uni_x(x,a) for "_i" from 1 to x do {_player addItemToUniform #a;};
#define vest_x(x,a) for "_i" from 1 to x do {_player addItemToVest #a;};
#define backpack_x(x,a) for "_i" from 1 to x do {_player addItemToBackpack #a;};