cmake_minimum_required(VERSION 3.10)
project(5.longest_common_prefix)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the library
add_library(longest_common_prefix src/longest_common_prefix.cpp)

# Add the executable for tests
add_executable(test_longest_common_prefix tests/test_longest_common_prefix.cpp)

# Link the library to the test executable
target_link_libraries(test_longest_common_prefix longest_common_prefix)

# Add the longest_common_prefix executable
add_executable(longest_common_prefix_main src/main.cpp)
target_link_libraries(longest_common_prefix_main longest_common_prefix)
