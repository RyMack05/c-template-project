# Setup for src in structs and unions homework project
add_library(rectangleLib rectangleLib.c)
add_executable(rectangle rectangle.c)
target_link_libraries(rectangle PRIVATE rectangleLib)

target_include_directories(rectangleLib PUBLIC ${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/third_party)
