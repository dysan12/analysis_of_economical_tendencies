cmake_minimum_required(VERSION 3.9)
project(AET)

set(CMAKE_CXX_STANDARD 17)
link_libraries(ws2_32 wsock32)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_subdirectory(service/utilities/ConnectionManager)

add_executable(AET application/src/main.cpp)