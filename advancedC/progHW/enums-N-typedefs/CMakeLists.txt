cmake_minimum_required(VERSION 3.10)
project(enum_typedef C)
set(CMAKE_C_STANDARD 99)

include_directories(${PROJECT_SOURCE_DIR}/include)
add_subdirectory(src)