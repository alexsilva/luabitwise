//
// Created by alex on 09/07/2015.
//

#ifndef BIT32_BITWASE_H
#define BIT32_BITWASE_H

#define DLL_EXPORT __declspec(dllexport)

extern "C" {
    #include "lua.h"
    #include "lauxlib.h"
    #include "lualib.h"

    void DLL_EXPORT lua_bitwaseopen(lua_State *L);
}

#endif //BIT32_BITWASE_H
