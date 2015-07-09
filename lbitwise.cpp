//
// Created by alex on 09/07/2015.
//

#include "lbitwise.h"

static void b_arshift(void) {

}

static void b_and(void) {

}

static void b_not(void) {

}

static void b_or(void) {

}

static void b_xor(void) {

}

static void b_lrot(void) {

}

static void b_lshift(void) {

}

static void b_rrot(void) {

}

static void b_rshift(void) {

}

static struct luaL_reg bitlib[] = {
    {(char *) "arshift", b_arshift},
    {(char *) "band",    b_and},
    {(char *) "bnot",    b_not},
    {(char *) "bor",     b_or},
    {(char *) "bxor",    b_xor},
    {(char *) "lrotate", b_lrot},
    {(char *) "lshift",  b_lshift},
    {(char *) "rrotate", b_rrot},
    {(char *) "rshift",  b_rshift}
};


void DLL_EXPORT lua_bitwiseopen(lua_State *L) {
    lua_state = L;
    luaL_openlib(bitlib, (sizeof(bitlib) / sizeof(bitlib[0])));
}