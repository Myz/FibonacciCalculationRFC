cmake_minimum_required(VERSION 3.2)
project(calculator)

add_subdirectory(calculation)
set(SOURCE_FILES main.cpp)

add_executable(calculator ${SOURCE_FILES})
target_link_libraries(calculator calculation)
install(TARGETS calculator DESTINATION ${DIVISIBLE_INSTALL_BIN_DIR})
