cmake_minimum_required(VERSION 3.2)
project(FibonacciCalculatorTests)


enable_testing()
find_package(GTest REQUIRED)

add_executable(test-calculation FibonacciCalculationTest.cpp)
target_link_libraries(test-calculation GTest::GTest GTest::Main calculation)

add_test(AllCalculatorTests test-calculation)
