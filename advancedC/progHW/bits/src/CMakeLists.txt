add_executable(printBits printBits.c)
add_executable(negativeInts negativeInts.c)

target_include_directories(printBits PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_include_directories(negativeInts PRIVATE ${PROJECT_SOURCE_DIR}/include)
