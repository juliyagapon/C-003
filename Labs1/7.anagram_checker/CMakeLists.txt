cmake_minimum_required(VERSION 3.10)
project(7.anagram_checker)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the library
add_library(anagram_checker src/anagram_checker.cpp)

# Add the executable for tests
add_executable(test_anagram_checker tests/test_anagram_checker.cpp)

# Link the library to the test executable
target_link_libraries(test_anagram_checker anagram_checker)

# Add the anagram_checker executable
add_executable(anagram_checker_main src/main.cpp)
target_link_libraries(anagram_checker_main anagram_checker)
