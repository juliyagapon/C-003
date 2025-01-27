cmake_minimum_required(VERSION 3.10)
project(1.MatrixMultiplication)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the library
add_library(matrixMultiplication src/matrixMultiplication.cpp)

# Add the test executable
add_executable(test_matrixMultiplication tests/test_matrixMultiplication.cpp)
target_link_libraries(test_matrixMultiplication matrixMultiplication)

# Add the palindrome_checker executable
add_executable(matrixMultiplication_main src/main.cpp)
target_link_libraries(matrixMultiplication_main matrixMultiplication)
