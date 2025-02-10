cmake_minimum_required(VERSION 3.10)
project(5.CustomSort)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the library
add_library(customSort src/customSort.cpp)

# Add the test executable
add_executable(test_customSort tests/test_customSort.cpp)
target_link_libraries(test_customSort customSort)

# Add the palindrome_checker executable
add_executable(customSort_main src/main.cpp)
target_link_libraries(customSort_main customSort)
