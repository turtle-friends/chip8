cmake_minimum_required(VERSION 3.10)

file(GLOB SRC src/*.cc)
file(GLOB INC inc/*.h)

include(deps/CMakeLists.txt)
project(chip8)

find_package(sdl2)

add_executable(${PROJECT_NAME} ${SRC})
target_include_directories(
	${PROJECT_NAME}
		PRIVATE ${INC}
		PRIVATE ${SDL2_INCLUDE_DIRS}
)


target_link_libraries(${PROJECT_NAME} PRIVATE ${SDL2_LIBRARIES})