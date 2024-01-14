#include <iostream>

// 6.6 Relational operators and floating point comparisons
/*
1. Comparison of calculated floating point values can be problematic
(1). Floating point equality and inequality
The equality operators (== and !=) are much more troublesome.
There is one notable exception case to the above: 
it is okay to compare a low-precision (few significant digits) 
floating point literal to the same literal value of the same type.
(2). The most common method of doing floating point equality 
involves using a function that looks to see if two numbers are almost the same.
*/

int main(){
    double d1 = {100.0 - 99.99};
    double d2 = {10.0 - 9.99};

    if (d1 == d2)
    {
        std::cout << "d1 == d2" << '\n';
    }
    else if (d1 > d2)
    {
        std::cout << "d1 > d2" << '\n';
    }
    else if (d1 < d2)
    {
        std::cout << "d1 < d2" << '\n';
    }
    
    return 0;
}