#pragma once

#include <cstdint>

class FibonacciCalculation
{
 private:
	FibonacciCalculation(const FibonacciCalculation& other) = default;

 public:
	FibonacciCalculation() = default;

	uint64_t operator()(uint32_t nthNumberToCalculate);
};
