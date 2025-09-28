# CMakeLists.txt SUBDIRECTORY in homeWork/src

# Error Handling Program, 9.10.2025
add_executable(errorHandler errorHandler.c)

# U-Testing 9.25.2025
add_library(name_length name_length.c)
target_include_directories(name_length PUBLIC ${PROJECT_SOURCE_DIR}/include)
add_executable(main main.c)

target_link_libraries(main name_length)