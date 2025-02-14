cmake_minimum_required(VERSION 3.10)

# Project Name
project(MultipleInheritance)

# Enable C++11 or higher
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/include)

# Collect all source files except `main.cpp`
file(GLOB SOURCES src/*.cpp)
list(REMOVE_ITEM SOURCES ${CMAKE_SOURCE_DIR}/src/main.cpp)

# Define the main executable
add_executable(MultipleInheritance src/main.cpp ${SOURCES})

# Enable testing with Doctest
enable_testing()

# Define test executable (Excludes `main.cpp`)
add_executable(test_WorkingStudent tests/test_WorkingStudent.cpp ${SOURCES})

# Include the Doctest header
target_include_directories(test_WorkingStudent PRIVATE ${CMAKE_SOURCE_DIR}/include)

# Define a test
add_test(NAME WorkingStudentTests COMMAND test_WorkingStudent)
