cmake_minimum_required(VERSION 3.10)
project(3.FunctionPointer)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the library
add_library(functionPointer src/functionPointer.cpp)

# Add the test executable
add_executable(test_functionPointer tests/test_functionPointer.cpp)
target_link_libraries(test_functionPointer functionPointer)

# Add the palindrome_checker executable
add_executable(functionPointer_main src/main.cpp)
target_link_libraries(functionPointer_main functionPointer)
