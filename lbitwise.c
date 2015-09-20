//
// Created by alex on 09/07/2015.
//

#include "lbitwise.h"

static void b_arshift(lua_State *L) {
    lua_error(L, "b_arshift: not implemented!");
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
    lua_error(L, "b_lrot: not implemented!");
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
    lua_error(L, "b_rrot: not implemented!");
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
    {"barshift", b_arshift},
    {"band",     b_and},
    {"bnot",     b_not},
    {"bor",      b_or},
    {"bxor",     b_xor},
    {"blrotate", b_lrot},
    {"blshift",  b_lshift},
    {"brrotate", b_rrot},
    {"brshift",  b_rshift}
};


LUA_LIBRARY void lua_lbitwiseopen(lua_State *L) {
    luaL_openlib(L, bitlib, (sizeof(bitlib) / sizeof(bitlib[0])));
}
