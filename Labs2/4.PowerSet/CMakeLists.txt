cmake_minimum_required(VERSION 3.10)
project(4.PowerSet)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the library
add_library(powerSet src/powerSet.cpp)

# Add the test executable
add_executable(test_powerSet tests/test_powerSet.cpp)
target_link_libraries(test_powerSet powerSet)

# Add the palindrome_checker executable
add_executable(powerSet_main src/main.cpp)
target_link_libraries(powerSet_main powerSet)
