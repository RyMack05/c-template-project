# MAIN CmakeLists.txt in homeWork

# Setup
cmake_minimum_required(VERSION 3.21)
project(homeworkProjects VERSION 1.0 LANGUAGES C)
set(CMAKE_C_STANDARD 23)

include_directories(${PROJECT_SOURCE_DIR}/include)

# U-Testing 9.25.2025
add_subdirectory(src)
enable_testing()
add_subdirectory(tests)

# Pointers Sessions 5 & 6, 9.23.2025-9..2025
# exercise 1
add_executable(pointers_1 pointers_1.c)

# exercise 2
add_executable(pointersQuestions pointersQuestions.c)