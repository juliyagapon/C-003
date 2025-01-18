cmake_minimum_required(VERSION 3.10)
project(2_array_reversal)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the library
add_library(remove_duplicates src/remove_duplicates.cpp)

# Add the executable for tests
add_executable(test_remove_duplicates tests/test_remove_duplicates.cpp)

# Link the library to the test executable
target_link_libraries(test_remove_duplicates remove_duplicates)

# Add the remove_duplicates executable
add_executable(remove_duplicates_main src/main.cpp)
target_link_libraries(remove_duplicates_main remove_duplicates)
