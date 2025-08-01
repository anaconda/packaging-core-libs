#include "calculator.h"
#include <cstring>
#include <cmath>

Calculator::Calculator() : last_result(0.0f) {
    strcpy(version, "3.0.0");
}

Calculator::~Calculator() {
}

float Calculator::add(float a, float b, int precision) {
    float result = a + b;
    // Round to specified decimal places
    float multiplier = std::pow(10.0f, precision);
    last_result = std::round(result * multiplier) / multiplier;
    return last_result;
}