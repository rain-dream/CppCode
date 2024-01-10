#include <iostream>

// 4.11 Chars
/*
1. The char data type is an integral type, meaning the underlying value is stored as an integer (ASCII character).

2. Printing chars

3. Char size, range, and default sign
(1). Char is defined by C++ to always be 1 byte in size. By default, a char may be signed or unsigned (though it’s usually signed).

4. Escape sequences
*/

int main(){
    char ch1 = {'a'};
    char ch2 = 98;

    std::cout << ch1 << '\n';
    std::cout << ch2 << '\n';


    return 0;
}