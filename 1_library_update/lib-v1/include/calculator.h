#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    Calculator();
    ~Calculator();

    /**
     * Adds two floating point values and returns their sum. Additionally, the result of the last add() call is saved
     * in lastResult.
     *
     * @param a The first value to add.
     * @param b The second value to add.
     * @return The sum of the two values.
     */
    float add(float a, float b);

    char version[16];
    float lastResult;
};

#endif // CALCULATOR_H
