#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    Calculator();
    ~Calculator();

    float add(float a, float b, int precision);

    float last_result;
    char version[16];
};

#endif // CALCULATOR_H