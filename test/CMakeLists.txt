cmake_minimum_required(VERSION 3.2)
project(calculator_tests)


enable_testing()
find_package(GTest REQUIRED)

add_executable(test-calculator FibonacciCalculationTest.cpp)
target_link_libraries(test-calculator GTest::GTest GTest::Main calculation)

add_test(AllCalculatorTests test-calculator)
