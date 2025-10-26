cmake_minimum_required(VERSION 3.28)
project(LinkedListProject C)

set(CMAKE_C_STANDARD 23)

# Utest folder
include_directories(${PROJECT_SOURCE_DIR}/third_party)

# Library 
add_library(linkedLib linkedLib.c)

# Tests
add_executable(linkedTest linkedTest.c)
target_link_libraries(linkedTest linkedLib)

# Empty main
add_executable(linkedMain linkedMain.c)
target_link_libraries(linkedMain linkedLib)

# Register tests
enable_testing()
add_test(NAME linkedTest COMMAND linkedTest)
