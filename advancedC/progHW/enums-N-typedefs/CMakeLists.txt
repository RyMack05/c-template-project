cmake_minimum_required(VERSION 3.28)
project(enum_typedef C)
set(CMAKE_C_STANDARD 23)

include_directories(${PROJECT_SOURCE_DIR}/include)
add_subdirectory(src)