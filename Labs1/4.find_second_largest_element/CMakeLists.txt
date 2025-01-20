cmake_minimum_required(VERSION 3.10)
project(4.find_second_largest_element)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the library
add_library(find_second_largest_element src/find_second_largest_element.cpp)

# Add the executable for tests
add_executable(test_find_second_largest_element tests/test_find_second_largest_element.cpp)

# Link the library to the test executable
target_link_libraries(test_find_second_largest_element find_second_largest_element)

# Add the find_second_largest_element executable
add_executable(find_second_largest_element_main src/main.cpp)
target_link_libraries(find_second_largest_element_main find_second_largest_element)
