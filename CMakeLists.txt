cmake_minimum_required(VERSION 3.10)

file(GLOB SRC src/*.cpp)
file(GLOB INC inc/*.h)

include(deps/CMakeLists.txt)

project(chip8)

add_executable(${PROJECT_NAME} ${SRC})

target_include_directories(${PROJECT_NAME} PRIVATE ${INC})