cmake_minimum_required(VERSION 3.2)
project(lbitwise)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(
    ${LUA_DIR}/include
)

set(SOURCE_FILES
    lbitwise.cpp
    lbitwise.h
)


add_library(lbitwise SHARED ${SOURCE_FILES})
target_link_libraries(lbitwise ${LUA_LIB})
set_target_properties(lbitwise PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")