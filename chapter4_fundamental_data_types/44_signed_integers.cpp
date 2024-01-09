#include <iostream>

// 4.4 Signed integers
/*
1. 4 primary fundamental integer types: short int, int, long int, long long int.
2. By default, integers in C++ are signed, which means the number’s sign is stored as part of the number. 
In binary representation, a single bit (called the sign bit) is used to store the sign of the number.
The non-sign bits (called the magnitude bits) determine the magnitude of the number.
3. Overflow
(1). assigning value 140 to an 8-bit signed integer will result in undefined behavior.
4. Integer division
(1). When doing division with two integers (called integer division), 
C++ always produces an integer result. 
Since integers can’t hold fractional values, any fractional portion is simply dropped (not rounded!).
*/

int main(){
    short a = {10};
    int b = {10};
    long c = {10};
    long long d = {10};

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;

    std::cout << 8/5 << std::endl;

    return 0;
}