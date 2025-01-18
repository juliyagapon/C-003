cmake_minimum_required(VERSION 3.10)
project(9.string_permutations)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the library
add_library(string_permutations src/string_permutations.cpp)

# Add the executable for tests
add_executable(test_string_permutations tests/test_string_permutations.cpp)

# Link the library to the test executable
target_link_libraries(test_string_permutations string_permutations)

# Add the string_permutations executable
add_executable(string_permutations_main src/main.cpp)
target_link_libraries(string_permutations_main string_permutations)
