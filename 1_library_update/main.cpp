#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;

    std::cout << "Calculator library version " << calc.version << std::endl;

    // Add two numbers
    std::cout << "5.7358742 + 3.2812366 = " << calc.add(5.7358742f, 3.2812366f) << std::endl;

    // Test direct access to public members
    std::cout << "Last result: " << calc.last_result << std::endl;

    return 0;
}