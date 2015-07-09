//
// Created by alex on 09/07/2015.
//

#ifndef LUA_BITWISE_H
#define LUA_BITWISE_H

#define LUA_LIBRARY __declspec(dllexport)

extern "C" {
    #include "lua.h"
    #include "lauxlib.h"
    #include "lualib.h"

LUA_LIBRARY void lua_lbitwiseopen(lua_State *L);
}

#endif //LUA_BITWASE_H
