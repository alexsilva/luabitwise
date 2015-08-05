//
// Created by alex on 09/07/2015.
//

#include "lbitwise.h"

static void b_arshift(lua_State *L) {
    lua_error(L, (char *) "b_arshift: not implemented!");
}

/* bit and
 *
 * a & b
 *
 * */
static void b_and(lua_State *L) {
    int a = luaL_check_int(L, 1);
    int b = luaL_check_int(L, 2);
    lua_pushnumber(L, a & b);
}

/* bit not
 *
 * ~a
 *
 * */
static void b_not(lua_State *L) {
    int a = luaL_check_int(L, 1);
    lua_pushnumber(L, ~a);
}

/* bit or
 *
 * a | b
 *
 * */
static void b_or(lua_State *L) {
    int a = luaL_check_int(L, 1);
    int b = luaL_check_int(L, 2);
    lua_pushnumber(L, a | b);
}

/* bit xor
 *
 * a ^ b
 *
 * */
static void b_xor(lua_State *L) {
    int a = luaL_check_int(L, 1);
    int b = luaL_check_int(L, 2);
    lua_pushnumber(L, a ^ b);
}

static void b_lrot(lua_State *L) {
    lua_error(L, (char *) "b_lrot: not implemented!");
}

/* bit lshift
 *
 * a << b
 *
 * */
static void b_lshift(lua_State *L) {
    int a = luaL_check_int(L, 1);
    int b = luaL_check_int(L, 2);
    lua_pushnumber(L, a << b);
}

static void b_rrot(lua_State *L) {
    lua_error(L, (char *) "b_rrot: not implemented!");
}

/* bit rshift
 *
 * a >> b
 *
 * */
static void b_rshift(lua_State *L) {
    int a = luaL_check_int(L, 1);
    int b = luaL_check_int(L, 2);
    lua_pushnumber(L, a >> b);
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


LUA_LIBRARY void lua_lbitwiseopen(lua_State *L) {
    luaL_openlib(L, bitlib, (sizeof(bitlib) / sizeof(bitlib[0])));
}
