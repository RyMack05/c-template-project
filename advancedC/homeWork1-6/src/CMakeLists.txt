# CMakeLists.txt SUBDIRECTORY in homeWork/src

# Error Handling Program, 9.10.2025
add_executable(errorHandler errorHandler.c)

# U-Testing 9.25.2025
add_library(name_length name_length.c)
target_include_directories(name_length PUBLIC ${PROJECT_SOURCE_DIR}/include)
add_executable(main main.c)

target_link_libraries(main name_length)

# Pointers Sessions 5 & 6, 9.29.2025
# exercise 1
add_executable(pointersSwap pointersSwap.c)

# exercise 2
# See pointersQuestions.txt

# exercise 3
add_executable(ptrCast ptrCast.c)

# exercise 4
add_executable(ptrCast2 ptrCast2.c)

# exercise 5
add_executable(strCat strCat.c)

# exercise 6
# Build main program
add_executable(mallocFun mallocFun.c)

# Build malloc library
add_library(mallocLibrary mallocLibrary.c)
target_link_libraries(mallocFun PRIVATE mallocLibrary)