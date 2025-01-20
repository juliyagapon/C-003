cmake_minimum_required(VERSION 3.10)
project(8.subarray_with_maximum_sum)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the library
add_library(subarray_with_maximum_sum src/subarray_with_maximum_sum.cpp)

# Add the executable for tests
add_executable(test_subarray_with_maximum_sum tests/test_subarray_with_maximum_sum.cpp)

# Link the library to the test executable
target_link_libraries(test_subarray_with_maximum_sum subarray_with_maximum_sum)

# Add the subarray_with_maximum_sum executable
add_executable(subarray_with_maximum_sum_main src/main.cpp)
target_link_libraries(subarray_with_maximum_sum_main subarray_with_maximum_sum)
