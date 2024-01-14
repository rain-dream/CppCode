#include <iostream>
#include <cmath>

// 6.3 Remainder and exponentiation
/*
1. If you want to do integer exponentiation, you’re best off using your own function to do so.

2. The constexpr tag allows the compiler to
evaluate this function at compile-time when the arguments are constant expressions.
*/

int main(){
    // Due to rounding errors in floating point numbers, 
    // the results of pow() may not be precise (even if you pass it integers or whole numbers).
    double x = {std::pow(3.0, 4.0)};
    std::cout << x << '\n';

    return 0;
}