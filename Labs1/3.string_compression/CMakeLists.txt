cmake_minimum_required(VERSION 3.10)
project(string_compression)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the library
add_library(string_compression src/string_compression.cpp)

# Add the executable for tests
add_executable(test_string_compression tests/test_string_compression.cpp)

# Link the library to the test executable
target_link_libraries(test_string_compression string_compression)

# Add the string_compression executable
add_executable(string_compression_main src/main.cpp)
target_link_libraries(string_compression_main string_compression)
