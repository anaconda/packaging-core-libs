#include "calculator.h"
#include <cstring>

Calculator::Calculator() : last_result(0.0f) {
    strcpy(version, "1.0.0");
}

Calculator::~Calculator() {
}

float Calculator::add(float a, float b) {
    last_result = a + b;
    return last_result;
}