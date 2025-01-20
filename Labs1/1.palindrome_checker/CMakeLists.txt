cmake_minimum_required(VERSION 3.10)
project(1_palindrome_checker)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the library
add_library(palindrome src/palindrome.cpp)

# Add the test executable
add_executable(test_palindrome tests/test_palindrome.cpp)
target_link_libraries(test_palindrome palindrome)

# Add the palindrome_checker executable
add_executable(palindrome_checker src/main.cpp)
target_link_libraries(palindrome_checker palindrome)
