#include <iostream>
#include "lambda.h"

int main() {
    int a = 0;
    int b = 0;

    auto lambda1 = [&](int x) mutable {
        a = ++b + a;
    };
    lambda1(4);
    std::cout << a << "\n" << b << std::endl;

    auto lambda2 = [a, &b](int x) mutable {
        a = ++b + a;
    };
    lambda2(4);
    std::cout << a << "\n" << b << std::endl;

    auto lambda3 = [&](int x) mutable {
        a = ++b + a;
    };
    lambda3(4);
    std::cout << a << "\n" << b << std::endl;

    Example example;
    std::cout << example.factorial(5) << std::endl;

    return 0;
}
