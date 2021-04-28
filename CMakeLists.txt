set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_STANDARD 11)
cmake_minimum_required(VERSION 3.16)

project(ChessAlgo)

include(CheckIPOSupported)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(chess/cpp_binding)

add_subdirectory(chess/tree_handler)

target_include_directories(${PROJECT_NAME} PUBLIC chess/cpp_binding tree_handler/Tree)

target_link_directories(${PROJECT_NAME} PRIVATE chess/cpp_binding tree_handler/Tree)

target_link_libraries(${PROJECT_NAME} chess-cpp tree-cpp)