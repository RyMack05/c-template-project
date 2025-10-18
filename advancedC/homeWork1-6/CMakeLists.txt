# MAIN CmakeLists.txt in homeWork

# Setup
cmake_minimum_required(VERSION 3.21)
project(homeworkProjects VERSION 1.0 LANGUAGES C)
set(CMAKE_C_STANDARD 23)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_subdirectory(src)

# U-Testing 9.25.2025
enable_testing()
add_subdirectory(tests)