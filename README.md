# Introduction

Implement the sequence generator for the famous mathematical fibonacci sequence.

# Requirements

- googletest
- cmake
- make
- binutils
- c++ compiler

# Tasks
## A) Satisfy the existing test
Find the empty function in `src/calculation/FibonacciCalculation.cpp` and make the test in `test/FibonacciCalculationTest.cpp` pass. Before you can start compiling and testing you will need to create a `build/` once and cd there. Then you will need to generate the Makefiles by running `cmake ..`. Now you can compile everything by running `make`. Then you can execute the tests with `test/test-calculator`. Hint: Use you shell to combine both commands so you compile and, if successful, run the tests immediately.

## B) Create a FibonacciCalculatorServer service
This server should be able to respond back with the n'th fibonacci number whenever it is asked by a another process/client. It should be able to handle multiple simultaneous requests asynchronously and must use the FibonacciCalculation library.

Use one of the following IPC method that suits you best.

- sockets (preferred)
  - either raw sockets
  - or abstracted with [boost::asio](https://www.boost.org/doc/libs/1_66_0/doc/html/boost_asio.html) for example
- shared memory
- pipes
- filesystem (not recommended)

## C) Discuss you solution with the team
