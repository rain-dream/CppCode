#include <cstdint>
#include <iostream>

// 4.12 Introduction to type conversion and static_casr
/*
1. Implicit type conversion
(1). Implicit type conversion warnings: Brace initialization will ensure we don’t try to initialize a variable with an initializer 
that will lose value when it is implicitly type converted.

2. Type conversion produces a new value
(1). Even though it is called a conversion, a type conversion does not actually change the value or type of the value being converted. 
Instead, the value to be converted is used as input, and the conversion results in a new value of the target type (via direct initialization).

3. An introduction to explicit type conversion via the static_cast operator
(1). It’s worth noting that the argument to static_cast evaluates as an expression. When we pass in a variable, that variable is evaluated to produce its value, 
and that value is then converted to the new type. The variable itself is not affected by casting its value to a new type.
(2). The static_cast operator doesn’t do any range checking, so if you cast a value to a type whose range doesn’t contain that value, undefined behavior will result.

4. std::int8_t and std::uint8_t likely behave like chars instead of integers
(1). Most compilers define and treat std::int8_t and std::uint8_t 
(and the corresponding fast and least fixed-width types) identically to types signed char and unsigned char respectively.
(2). When storing integral values where a specific size is important, 
it’s generally best to avoid std::int8_t and std::uint8_t (and the related fast and least types) and use std::int16_t or std::uint16_t instead.
*/

void print(int x){
    std::cout << x << '\n';
}

int main(){
    // print(static_cast<int>(5.5));

    std::int8_t myInt = {65};
    std::cout << myInt << '\n';
    std::cout << static_cast<int>(myInt) << '\n';


    return 0;
}