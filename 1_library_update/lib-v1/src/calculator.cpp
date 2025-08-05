#include "calculator.h"

#include <cstring>


Calculator::Calculator() : lastResult(0.0f) {
    strcpy(version, "1.0.0");
}

Calculator::~Calculator() {

}

float Calculator::add(const float a, const float b) {
    lastResult = a + b;
    return lastResult;
}
