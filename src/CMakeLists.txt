include_directories(../include)
file(GLOB SOURCES "*.cpp")
set(This IntentRec)
add_definitions(-fprofile-arcs -ftest-coverage)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -g -O0 -fprofile-arcs")

add_executable(${This}_run ${SOURCES})
add_library(${This}_lib STATIC ${SOURCES})


