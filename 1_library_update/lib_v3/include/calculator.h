#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    Calculator();
    ~Calculator();

    float add(float a, float b, int precision);

    char version[16];
    float last_result;
};

#endif // CALCULATOR_H