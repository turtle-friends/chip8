file(GLOB SRC *.cpp)

add_executable(${PROJECT_NAME} ${SRC})

message(${CONAN_LIBS_GTEST})
list(REMOVE_ITEM CONAN_LIBS ${CONAN_LIBS_GTEST})

target_include_directories(
	${PROJECT_NAME}
		PRIVATE ${CMAKE_SOURCE_DIR}/inc
)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)
target_compile_definitions(${PROJECT_NAME} PRIVATE SDL_MAIN_HANDLED)
target_compile_options(${PROJECT_NAME} PRIVATE -Wall -g)
target_link_libraries(${PROJECT_NAME} PRIVATE ${CONAN_LIBS})