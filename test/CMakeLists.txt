file(GLOB SRC *.cpp ../src/*.cpp)
list(FILTER SRC EXCLUDE REGEX Runner\.cpp)

set(PROJECT_NAME ${PROJECT_NAME}_test)


add_executable(${PROJECT_NAME} ${SRC})


target_include_directories(
	${PROJECT_NAME}
		PRIVATE ${CMAKE_SOURCE_DIR}/inc
)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)
target_compile_definitions(${PROJECT_NAME} PRIVATE SDL_MAIN_HANDLED)
target_compile_options(${PROJECT_NAME} PRIVATE -Wall -g)
target_link_libraries(${PROJECT_NAME} PRIVATE ${CONAN_LIBS})

add_test(gtest_tests ${CMAKE_BINARY_DIR}/bin/${PROJECT_NAME})