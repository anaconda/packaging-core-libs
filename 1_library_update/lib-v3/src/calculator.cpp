#include "calculator.h"

#include <cstring>
#include <cmath>


Calculator::Calculator() : lastResult(0.0f) {
    strcpy(version, "3.0.0");
}

Calculator::~Calculator() {

}

float Calculator::add(const float a, const float b, int precision) {
    lastA = a;
    lastB = b;

    float result = a + b;
    // Round to specified decimal places
    float multiplier = std::pow(10.0f, precision);
    lastResult = std::round(result * multiplier) / multiplier;
    return lastResult;
}
