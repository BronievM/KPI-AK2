cmake_minimum_required(VERSION 3.10)
project(calculator CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Ninja)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Ninja)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Ninja)

set(SOURCE_EXE main.cpp)
add_library(calculator STATIC calculator.cpp)
add_executable(main ${SOURCE_EXE})
target_link_libraries(main calculator)