
#include "lambda.h"
#include <functional>

class Example {
public:
    Example();
    int factorial(int n);
private:
    std::function<int(int)> factorialFunc;
};

#endif
