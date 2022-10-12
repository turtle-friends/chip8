cmake_minimum_required(VERSION 3.10)

project(chip8)

file(GLOB SRC src/*.cc src/*.cpp)
file(GLOB INC inc/*.inc inc/*.h)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(${PROJECT_NAME} ${SRC})
target_include_directories(
	${PROJECT_NAME}
		PRIVATE ${INC}
)

target_compile_options(${PROJECT_NAME} PRIVATE -Wall -g)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)
target_link_libraries(${PROJECT_NAME} PRIVATE ${CONAN_LIBS})