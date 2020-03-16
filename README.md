# Introduction

Implement the sequence generator for the famous mathematical fibonacci sequence.

# Requirements

- googletest
- cmake
- make
- binutils
- c++ compiler
- nice to hace clang-format (version 9.0)

# Compiling

1. Create a `build/`
1. Go into this folder `cd build`
1. Run `cmake ..`
1. Now you could compile it by running `make`

# Tasks
## A) Satisfy the existing test
Find the empty function in `src/calculation/FibonacciCalculation.cpp` and make the test in `test/FibonacciCalculationTest.cpp` pass. Then you can execute the tests with `test/test-calculator`. Hint: Use your shell to combine both commands so you compile and, if successful, run the tests immediately.

## B) Create a FibonacciCalculatorHTTPServer web service
This server should be able to respond back with the n'th fibonacci number whenever it is requested. It should be able to handle multiple simultaneous requests asynchronously and must use the FibonacciCalculation library which contains your implementation.

For implementing the HTTP web server use the [boost::asio](https://www.boost.org/doc/libs/1_66_0/doc/html/boost_asio.html) library.

The new component must be integrated into the existing cmake build configuration.

## C) Discuss your solution with the team
