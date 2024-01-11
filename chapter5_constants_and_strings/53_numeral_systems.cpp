// #include <format>
#include <iostream>


// 5.3 Numeral systems (decimal, binary, hexadecimal, and octal)
/*
1. hexadecimal values are often used to represent memory addresses or raw data in memory (whose type isn’t known).

2. Binary literals
*/

int main(){
    int x = {012};  // 0 before the number means this is a octal
    std::cout << x << '\n';

    int y = {0xF};
    std::cout << y << '\n';

    int bin = {0b11};
    std::cout << bin << '\n';

    int a = {12};
    std::cout << std::oct << a << '\n';

    // std::cout << std::format("{:b}\n", 0b1010);
    // std::cout << std::format("{:#b}\n", 0b1010);

    return 0;
}