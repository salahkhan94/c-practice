cmake_minimum_required(VERSION 3.0.0)
project(Convay VERSION 0.1.0 LANGUAGES C CXX)


set(CMAKE_CXX_STANDARD 11)

# Include directories
include_directories(${CMAKE_SOURCE_DIR})

# Source files
set(SOURCES
    ansi_escapes.cc
    cell.cc
    grid.cc
    main.cc
)

# Header files
set(HEADERS
    ansi_escapes.h
    cell.h
    grid.h
    life.h
)

# Executable
add_executable(ConwaysGameOfLife ${SOURCES} ${HEADERS})
add_executable(2d_arr 2d_arrays.cpp)
