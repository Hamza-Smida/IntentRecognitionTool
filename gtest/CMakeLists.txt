set(This ${CMAKE_PROJECT_NAME}_tst)
include_directories(../include)
file(GLOB TEST_SOURCES LIST_DIRECTORIES false "*.cpp")
set(SOURCES ${TEST_SOURCES})
add_executable(${This} ${TEST_SOURCES} )
add_test(
    NAME ${This}
    COMMAND ${This}
)
target_link_libraries(${This} PUBLIC ${CMAKE_PROJECT_NAME}_lib -fprofile-arcs -Wwrite-strings gtest gtest_main)

# Setup for lcov
add_definitions(-fprofile-arcs -ftest-coverage)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -std=c++17 -g -O0 -fprofile-arcs -Wwrite-strings")
set(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE ON)
set(OBJECT_DIR ${CMAKE_BINARY_DIR}/src/CMakeFiles/${CMAKE_PROJECT_NAME}.dir)

add_custom_target(gtest_run
    COMMAND make gcov
    COMMAND make lcov
    )

add_custom_target(gcov
    COMMAND mkdir -p gcoverage
    COMMAND ${CMAKE_MAKE_PROGRAM} test
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    )

add_custom_target(lcov
COMMAND mkdir -p lcoverage
)

add_custom_target(init
    COMMAND ${CMAKE_MAKE_PROGRAM} clean
    COMMAND rm -f ${OBJECT_DIR}/*.gcno
    COMMAND rm -f ${OBJECT_DIR}/*.gcda
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    )

add_custom_command(TARGET gcov
    COMMAND echo "=================== GCOV ===================="
    COMMAND gcov -b ${CMAKE_SOURCE_DIR}/src/*.cpp -o ${OBJECT_DIR}
    COMMAND echo "-- Source diretorie: ${CMAKE_SOURCE_DIR}/src/"
    COMMAND echo "-- Coverage files have been output to ${CMAKE_BINARY_DIR}/gcoverage"
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/gcoverage
    )

add_custom_command(TARGET lcov
    COMMAND echo "=================== LCOV ===================="
    COMMAND echo "-- Passing lcov tool under code coverage"
    COMMAND lcov --capture --directory ../src --output-file lcoverage/main_coverage.info --rc lcov_branch_coverage=1
    COMMAND lcov --remove lcoverage/main_coverage.info '*10*' '*include*' '*Main*' -o lcoverage/main_coverage.info --rc lcov_branch_coverage=1
    COMMAND echo "-- Generating HTML output files"
    COMMAND genhtml lcoverage/main_coverage.info --output-directory lcoverage
    COMMAND firefox lcoverage/index.html
    )