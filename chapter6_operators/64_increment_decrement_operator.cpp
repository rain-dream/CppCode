#include <iostream>

// 6.4 Increment/decrement operators, and side effects
/*
1. ++x: increment x, then return x;
x++: copy x, then increment x, then return the copy
2. The postfix version takes a lot more steps, and thus may not be as performant as the prefix version.
3. When to use prefix vs postfix

4. Side effects
(1). A function or expression is said to have a side effect if it has some observable effect beyond producing a return value.
(2). Side effects can cause order of evaluation issues.
(3). The sequencing of side effects
In many cases, C++ also does not specify when the side effects of operators must be applied. 
This can lead to undefined behavior in cases where an object with a side effect applied 
is used more than once in the same statement.
Don’t use a variable that has a side effect applied to it more than once in a given statement.
*/

int add(int x, int y){
    return x + y;
}

int main(){
    int x = {5};
    int y = {++x};
    int z = {x++};

    std::cout << x << " " << y << " " << z << '\n';

    int a = {5};
    int value = {add(a, ++a)};
    // value could be 11 or 12, depending on how the above line evaluates!
    // The C++ standard does not define the order in which function arguments are evaluated.
    std::cout << value << '\n';

    return 0;
}