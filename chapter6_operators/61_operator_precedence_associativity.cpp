#include <iostream>

// 6.1 Operator precedence and associativity
/*
1. If two operators with the same precedence level are adjacent to each other in an expression, the operator’s associativity 
tells the compiler whether to evaluate the operators from left to right or from right to left. 

2. The order of evaluation of operands and function arguments is mostly unspecified
(1). Operands, function arguments, and subexpressions may be evaluated in any order.
*/

int getValue(){
    std::cout << "Enter an integer: ";

    int x = {0};
    std::cin >> x;

    return x;
}

int main(){
    // std::cout << getValue() + (getValue()*getValue()) << '\n';

    // The above program can be made unambiguous by making each function call a separate statement.
    int a = {getValue()};
    int b = {getValue()};
    int c = {getValue()};

    std::cout << a + (b * c) << '\n';

    return 0;
}