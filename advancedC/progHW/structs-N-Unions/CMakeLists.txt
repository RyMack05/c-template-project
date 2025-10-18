cmake_minimum_required(VERSION 3.28)
project(structs-N-Unions VERSION 1.0 LANGUAGES C)
set(CMAKE_C_STANDARD 23)

# Setup for stucts and unions homework project
add_subdirectory(src)
include_directories(${PROJECT_SOURCE_DIR}/include)

add_subdirectory(tests)
enable_testing()