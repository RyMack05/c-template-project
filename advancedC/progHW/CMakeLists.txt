# Setup for programming HW projects
cmake_minimum_required(VERSION 3.28)
project(progHW VERSION 1.0 LANGUAGES C)
set(CMAKE_C_STANDARD 23)

# Export compilation database so VS Code's C/C++ extension can read exact
# compiler include paths (fixes "includePath" squiggles in the editor).
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


add_subdirectory(structs-N-Unions)

# 10.21.2025
add_subdirectory(bits)

# Enums And Typdefs
add_subdirectory(enums-N-typedefs)

# Preprocessor
add_subdirectory(preprocessor)