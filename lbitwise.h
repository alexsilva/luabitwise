//
// Created by alex on 09/07/2015.
//

#ifndef LUA_BITWISE_H
#define LUA_BITWISE_H

#if defined(_MSC_VER)
    //  Microsoft
    #define LUA_LIBRARY __declspec(dllexport)
#else
    //  GCC
    #define LUA_LIBRARY __attribute__((visibility("default")))
#endif

extern "C" {
    #include "lua.h"
    #include "lauxlib.h"
    #include "lualib.h"

    LUA_LIBRARY void lua_lbitwiseopen(lua_State *L);
}

#endif //LUA_BITWASE_H
