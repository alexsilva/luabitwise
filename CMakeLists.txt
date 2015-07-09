cmake_minimum_required(VERSION 3.2)
project(lbitwise)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(
    ${LUA_DIR}/include
    ${LUA_DIR}/src
)

set(LIBRARIES
    ${LUA_DIR}/lib/mingw3/liblua.a
    ${LUA_DIR}/lib/mingw3/liblualib.a
)

set(SOURCE_FILES
    lbitwise.cpp
    lbitwise.h
)


add_library(lbitwise SHARED ${SOURCE_FILES})
target_link_libraries(lbitwise ${LIBRARIES})