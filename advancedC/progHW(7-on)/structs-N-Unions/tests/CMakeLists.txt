# Setup of unit tests for testing structs and unions homework project
add_executable(rectangleTests rectangleTests.c)

# Make sure the test target can find the utest.h header in the repo-level third_party
target_include_directories(rectangleTests PRIVATE
	"${CMAKE_SOURCE_DIR}/progHW(7-on)/third_party"
	"${PROJECT_SOURCE_DIR}/include"
)

target_link_libraries(rectangleTests PRIVATE rectangleLib)

add_test(NAME rectangleTests COMMAND rectangleTests)