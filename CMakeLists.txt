cmake_minimum_required(VERSION 3.10)

project(chip8)

file(GLOB INC inc/*.h)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_subdirectory(src)
add_subdirectory(test)