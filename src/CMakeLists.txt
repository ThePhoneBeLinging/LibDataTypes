cmake_minimum_required(VERSION 3.31)
project(LibDataTypes)


set(CMAKE_CXX_STANDARD 20)
add_library(LibDataTypes
        Double2.cpp
        Double3.cpp
        Ray.cpp
        Sphere.cpp
        Image.cpp
)
include(FetchContent)
set(RAYLIB_VERSION 5.0)
FetchContent_Declare(
        raylib
        DOWNLOAD_EXTRACT_TIMESTAMP OFF
        URL https://github.com/raysan5/raylib/archive/refs/tags/${RAYLIB_VERSION}.tar.gz
)
FetchContent_GetProperties(raylib)
if (NOT raylib_POPULATED) # Have we downloaded raylib yet?
    set(FETCHCONTENT_QUIET NO)
    set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
    FetchContent_MakeAvailable(raylib)
endif ()

target_link_libraries(LibDataTypes PUBLIC raylib)
target_include_directories(LibDataTypes PUBLIC include)