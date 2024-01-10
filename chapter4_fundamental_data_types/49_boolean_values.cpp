#include <iostream>

// 4.9 Boolean values
/*
1. They are stored as integers. 
Because Booleans actually store integers, they are considered an integral type.

2. In any context where an integer can be converted to a Boolean, 
the integer 0 is converted to false, and any other integer is converted to true.
*/

bool isEqual(int x, int y);

int main(){
    bool b1 = !false;

    std::cout << b1 << '\n';
    std::cout << std::boolalpha;
    std::cout << b1 << '\n';
    std::cout << std::noboolalpha;
    std::cout << b1 << '\n';

    std::cout << isEqual(100, 100) << '\n';

    return 0;
}

bool isEqual(int x, int y){
    return x == y;
}