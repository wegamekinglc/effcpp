FIND_PACKAGE(Boost)

file(GLOB FILES "*.hpp" "*.cpp")
add_executable(item4 ${FILES})