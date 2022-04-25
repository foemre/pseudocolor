cmake_minimum_required(VERSION 3.0)
project(pseudocolor)
set(CMAKE_CXX_STANDARD 11)
#custom installation path for Windows, you need to add OpenCV path to your environment vars
set(CMAKE_PREFIX_PATH "C:\\Program Files\\opencv\\build\\")
include_directories(${PROJECT_SOURCE_DIR}/src)
find_package(OpenCV REQUIRED)
file(GLOB all_SRCS
        "${PROJECT_SOURCE_DIR}/include/*.h"
        "${PROJECT_SOURCE_DIR}/include/*.hpp"
        "${PROJECT_SOURCE_DIR}/src/*.cpp"
        "${PROJECT_SOURCE_DIR}/src/*.c"
        )
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(pseudocolor ${all_SRCS})
target_link_libraries(pseudocolor ${OpenCV_LIBS})