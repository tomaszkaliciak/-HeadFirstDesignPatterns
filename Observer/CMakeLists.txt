cmake_minimum_required(VERSION 3.0.0)

project(Observer)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_executable(Observer main.cpp
				${SOURCE_FILES})

target_include_directories(Observer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

