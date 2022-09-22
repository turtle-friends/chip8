file(GLOB DEPS_SRC **/*.c**)
file(GLOB DEPS_INC **/*.h)

list(APPEND SRC ${DEPS_SRC})
list(APPEND INC ${DEPS_INC})