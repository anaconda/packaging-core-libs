#include "calculator.h"

#include <iostream>


int main() {
    Calculator calc;

    std::cout << "Calculator library version " << calc.version << std::endl;

    // Add two numbers.
    const float a = 5.7358742f;
    const float b = 3.2812366f;
    std::cout << "Performing addition..." << std::endl;
    std::cout << a << " + " << b << " = " << calc.add(a, b) << std::endl;

    // Test direct access to public members.
    std::cout << "Last result value: " << calc.lastResult << std::endl;

    return 0;
}
