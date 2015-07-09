//
// Created by alex on 09/07/2015.
//

#ifndef LUA_BITWISE_H
#define LUA_BITWISE_H

#define DLL_EXPORT __declspec(dllexport)

extern "C" {
    #include "lua.h"
    #include "lauxlib.h"
    #include "lualib.h"

    void DLL_EXPORT lua_bitwiseopen(lua_State *L);
}

#endif //LUA_BITWASE_H
