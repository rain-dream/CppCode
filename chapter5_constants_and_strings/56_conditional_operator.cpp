#include <iostream>

// 5.6 The conditional operator
/*
1. The type of the expressions must match or be convertible
(1). The type of the second and third operand must match.
(2). The compiler must be able to find a way to convert one or both of the second and third operands to matching types. 
The conversion rules the compiler uses are fairly complex and may yield surprising results in some cases
*/

int main(){
    constexpr bool inBigClassroom = {true};

    constexpr int classSize = {inBigClassroom ? 30 : 20};

    std::cout << classSize << '\n';

    return 0;
}