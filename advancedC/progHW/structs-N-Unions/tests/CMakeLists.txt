# Setup of unit tests for testing structs and unions homework project
add_executable(rectangleTests rectangleTests.c)

# Make sure the test target can find the utest.h header in the repo-level third_party
target_include_directories(rectangleLib PRIVATE ${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/third_party)

target_link_libraries(rectangleTests PRIVATE rectangleLib)

add_test(NAME rectangleTests COMMAND rectangleTests)