cmake_minimum_required(VERSION 3.10)
project(2.MergeSort)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the library
add_library(mergeSort src/mergeSort.cpp)

# Add the test executable
add_executable(test_mergeSort tests/test_mergeSort.cpp)
target_link_libraries(test_mergeSort mergeSort)

# Add the palindrome_checker executable
add_executable(mergeSort_main src/main.cpp)
target_link_libraries(mergeSort_main mergeSort)
