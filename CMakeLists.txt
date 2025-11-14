cmake_minimum_required(VERSION 3.25)

project(iof)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 20)

add_executable(${CMAKE_PROJECT_NAME} 
    ${CMAKE_SOURCE_DIR}/client/rl/main.cpp
    ${CMAKE_SOURCE_DIR}/client/settings.cpp
    ${CMAKE_SOURCE_DIR}/client/localization.cpp
)

include_directories(
    ${CMAKE_SOURCE_DIR}/client 
    ${CMAKE_SOURCE_DIR}/server 
    ${CMAKE_SOURCE_DIR}/shared
    ${CMAKE_SOURCE_DIR}/deps/json
    ${CMAKE_SOURCE_DIR}/deps/raylib/src
)

add_subdirectory(${CMAKE_SOURCE_DIR}/deps/raylib)

target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE raylib)