#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    Calculator();
    ~Calculator();

    float add(float a, float b);

    char version[16];
    float lastResult;
};

#endif // CALCULATOR_H
