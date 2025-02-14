cmake_minimum_required(VERSION 3.10)
project(1.MatrixClass)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the library
add_library(matrixClass src/matrixClass.cpp)

# Add the test executable
add_executable(test_matrixClass tests/test_matrixClass.cpp)
target_link_libraries(test_matrixClass matrixClass)

# Add the palindrome_checker executable
add_executable(matrixClass_main src/main.cpp)
target_link_libraries(matrixClass_main matrixClass)
