cmake_minimum_required(VERSION 3.10)
project(PalindromeChecker)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the library
add_library(array_reversal src/array_reversal.cpp)

# Add the executable for tests
add_executable(test_array_reversal tests/test_array_reversal.cpp)

# Link the library to the test executable
target_link_libraries(test_array_reversal array_reversal)

# Add the array_reversal executable
add_executable(array_reversal_checker src/main.cpp)
target_link_libraries(array_reversal_checker array_reversal)
