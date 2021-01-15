cmake_minimum_required(VERSION 3.16)

project(ChessAlgo)


add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(chess)

target_include_directories(${PROJECT_NAME} PUBLIC chess/cpp_binding)

target_link_directories(${PROJECT_NAME} PRIVATE chess/cpp_binding)

target_link_libraries(${PROJECT_NAME} chess)