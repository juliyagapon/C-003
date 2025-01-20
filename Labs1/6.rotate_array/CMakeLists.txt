cmake_minimum_required(VERSION 3.10)
project(6.rotate_array)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the library
add_library(rotate_array src/rotate_array.cpp)

# Add the executable for tests
add_executable(test_rotate_array tests/test_rotate_array.cpp)

# Link the library to the test executable
target_link_libraries(test_rotate_array rotate_array)

# Add the rotate_array executable
add_executable(rotate_array_main src/main.cpp)
target_link_libraries(rotate_array_main rotate_array)
