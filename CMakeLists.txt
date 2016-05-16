cmake_minimum_required(VERSION 3.5)
project(EffectiveCPP)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

FIND_PACKAGE(Boost)

add_subdirectory(Item1)
add_subdirectory(Item2)
add_subdirectory(Item3)
add_subdirectory(Item4)
add_subdirectory(Item5)
add_subdirectory(Item6)