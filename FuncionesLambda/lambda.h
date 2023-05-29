#ifndef LAMBDA_H
#define LAMBDA_H

#include <functional>

class Example {
public:
    Example();
    int factorial(int n);
private:
    std::function<int(int)> factorialFunc;
};

#endif
