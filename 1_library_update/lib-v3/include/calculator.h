#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    Calculator();
    ~Calculator();

    /**
     * Adds two floating point values and returns their sum. Additionally, the input parameters are saved in lastA and
     * lastB and the result of the last add() call is saved in lastResult.
     *
     * @param a The first value to add.
     * @param b The second value to add.
     * @param precision The number of decimal places to return.
     * @return The sum of the two values rounded to the nearest place specified by precision.
     */
    float add(float a, float b, int precision);

    char version[16];
    float lastA;
    float lastB;
    float lastResult;
};

#endif // CALCULATOR_H
