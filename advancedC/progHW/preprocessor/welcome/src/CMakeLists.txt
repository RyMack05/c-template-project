
add_library(lib lib.c)
add_executable(welcome_app main.c)

target_include_directories(lib PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_include_directories(welcome_app PRIVATE ${PROJECT_SOURCE_DIR}/include)

target_link_libraries(welcome_app PRIVATE lib)