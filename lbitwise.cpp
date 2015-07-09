//
// Created by alex on 09/07/2015.
//

#include "lbitwise.h"

static void b_arshift(void) {
    lua_error((char *) "b_arshift: not implemented!");
}

/* bit and
 *
 * a & b
 *
 * */
static void b_and(void) {
    int a = luaL_check_int(1);
    int b = luaL_check_int(2);
    lua_pushnumber(a & b);
}

/* bit not
 *
 * ~a
 *
 * */
static void b_not(void) {
    int a = luaL_check_int(1);
    lua_pushnumber(~a);
}

/* bit or
 *
 * a | b
 *
 * */
static void b_or(void) {
    int a = luaL_check_int(1);
    int b = luaL_check_int(2);
    lua_pushnumber(a | b);
}

/* bit xor
 *
 * a ^ b
 *
 * */
static void b_xor(void) {
    int a = luaL_check_int(1);
    int b = luaL_check_int(2);
    lua_pushnumber(a ^ b);
}

static void b_lrot(void) {
    lua_error((char *) "b_lrot: not implemented!");
}

/* bit lshift
 *
 * a << b
 *
 * */
static void b_lshift(void) {
    int a = luaL_check_int(1);
    int b = luaL_check_int(2);
    lua_pushnumber(a << b);
}

static void b_rrot(void) {
    lua_error((char *) "b_rrot: not implemented!");
}

/* bit rshift
 *
 * a >> b
 *
 * */
static void b_rshift(void) {
    int a = luaL_check_int(1);
    int b = luaL_check_int(2);
    lua_pushnumber(a >> b);
}

static struct luaL_reg bitlib[] = {
    {(char *) "barshift", b_arshift},
    {(char *) "band",    b_and},
    {(char *) "bnot",    b_not},
    {(char *) "bor",     b_or},
    {(char *) "bxor",    b_xor},
    {(char *) "blrotate", b_lrot},
    {(char *) "blshift",  b_lshift},
    {(char *) "brrotate", b_rrot},
    {(char *) "brshift",  b_rshift}
};


DLL_EXPORT void lua_lbitwiseopen(lua_State *L) {
    lua_state = L;
    luaL_openlib(bitlib, (sizeof(bitlib) / sizeof(bitlib[0])));
}
