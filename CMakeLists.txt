cmake_minimum_required(VERSION 3.0)
project(pseudocolor)
set(CMAKE_BUILD_TYPE RELEASE)
set(CMAKE_C_FLAGS "-O0 -ggdb")
set(CMAKE_C_FLAGS_DEBUG "-Og -ggdb")
set(CMAKE_C_FLAGS_RELEASE "-O3 -march=native -flto")
set(CMAKE_CXX_FLAGS "-O0 -ggdb")
set(CMAKE_CXX_FLAGS_DEBUG "-Og -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -march=native -flto")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_COMPILER "C:/Program Files/msys2/mingw64/bin/g++.exe")
set(CMAKE_C_COMPILER "C:/Program Files/msys2/mingw64/bin/gcc.exe")
include_directories(${PROJECT_SOURCE_DIR}/src)
find_package(OpenCV REQUIRED PATHS "C:/Program Files/msys2/mingw64/include/opencv4")
file(GLOB all_SRCS
        "${PROJECT_SOURCE_DIR}/include/*.h"
        "${PROJECT_SOURCE_DIR}/include/*.hpp"
        "${PROJECT_SOURCE_DIR}/src/*.cpp"
        "${PROJECT_SOURCE_DIR}/src/*.c"
        )
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(pseudocolor ${all_SRCS})
target_link_libraries(pseudocolor ${OpenCV_LIBS})