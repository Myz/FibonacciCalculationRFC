cmake_minimum_required(VERSION 3.2)
project(calculation C CXX)

set(SOURCE_FILES
    FibonacciCalculation.hpp
    FibonacciCalculation.cpp
)

add_library(calculation SHARED STATIC ${SOURCE_FILES})

install(TARGETS calculation DESTINATION ${DIVISIBLE_INSTALL_LIB_DIR})
install(FILES calculation.hpp DESTINATION ${DIVISIBLE_INSTALL_INCLUDE_DIR})
