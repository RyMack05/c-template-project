add_executable(errorHandler errorHandler.c)
add_executable(logger logger.c)

target_include_directories(errorHandler PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_include_directories(logger PRIVATE ${PROJECT_SOURCE_DIR}/include)
