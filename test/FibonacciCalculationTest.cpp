#include <iostream>
#include <sstream>

#include <gtest/gtest.h>

#include "../src/calculation/FibonacciCalculation.hpp"

TEST(FibonacciCalculationTest, basic_calculation_for_static_values)
{
	FibonacciCalculation fibonacciCalculation;
	auto printingExecuter = [&fibonacciCalculation](uint32_t nthNumberToCalculate) {
		std::ostringstream os;
		os << fibonacciCalculation(nthNumberToCalculate);
		return os.str();
	};

	EXPECT_EQ("0", printingExecuter(0));
	EXPECT_EQ("1", printingExecuter(1));
	EXPECT_EQ("222232244629420445529739893461909967206666939096499764990979600", printingExecuter(300));
}
