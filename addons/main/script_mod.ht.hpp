#define MAINPREFIX {{mainprefix}}
#define PREFIX {{prefix}}

#include "script_version.hpp"

#define VERSION MAJOR.MINOR.PATCH.BUILD
#define VERSION_AR MAJOR,MINOR,PATCH,BUILD

#define REQUIRED_VERSION 1.88

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(315th - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(315th - COMPONENT)
#endif
