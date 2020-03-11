#include <cstdint>
#include <iostream>
#include <random>

#include "calculation/FibonacciCalculation.hpp"

int main(int argc, char const* argv[])
{
	std::mt19937 generator{123321};
	std::uniform_int_distribution<> distribution{0, 400};

	FibonacciCalculation fibonacciCalculation;
	auto calculate = [&fibonacciCalculation](uint32_t nthNumberToCalculate) {
		std::cout << "fibonacciCalculation(" << nthNumberToCalculate << ") = " << std::flush
		          << fibonacciCalculation(nthNumberToCalculate) << std::endl;
	};

	for (int n = 0; n < 20; ++n)
	{
		calculate(distribution(generator));
	}

	// f(300);
	return 0;
}
