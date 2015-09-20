cmake_minimum_required(VERSION 3.2)
project(lbitwise)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")

include_directories(${LUA_INCLUDE_DIR} ${LUA_INCLUDE_EXTRA})

set(SOURCE_FILES lbitwise.c lbitwise.h)

add_library(lbitwise SHARED ${SOURCE_FILES})
target_link_libraries(lbitwise ${LUA_LIBRARY_PATH})

# =====================
set_target_properties(lbitwise PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")
# =====================