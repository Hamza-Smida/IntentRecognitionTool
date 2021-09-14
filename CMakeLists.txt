cmake_minimum_required( VERSION 3.14 )
set(CMAKE_BUILD_TYPE Debug)
set(This IntentRec)
project (${This} CXX)

#specify the c++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#downloading googletest libary 
include(FetchContent)
FetchContent_Declare(
  	googletest
  	GIT_REPOSITORY https://github.com/google/googletest.git
  	GIT_TAG release-1.10.0
)
FetchContent_MakeAvailable(googletest)
FetchContent_GetProperties(googletest)

#enable googletest
enable_testing()

#depenedencies
add_subdirectory(src)
add_subdirectory(gtest)
#add_subdirectory(googletest)
