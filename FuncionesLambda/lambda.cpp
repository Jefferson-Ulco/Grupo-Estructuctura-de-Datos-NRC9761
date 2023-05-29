#include "lambda.h"

Example::Example() {
    factorialFunc = [this](int n) {
        return n > 1 ? n * factorialFunc(n - 1) : 1;
    };
}

int Example::factorial(int n) {
    return factorialFunc(n);
}
