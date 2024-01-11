#include <iostream>

// 5.4 Constant expressions and compile-time
/*
1. The as-if rule
(1). The as-if rule says that the compiler can modify a program however it likes in order to produce more optimized code, 
so long as those modifications do not affect a program’s “observable behavior”.

2. Compile-time evaluation of expressions

3. Constant expressions
(1). One kind of expression that can always be evaluated at compile time is called a “constant expression”. 
we’ll take a simplified view: A constant expression is an expression that contains only compile-time constants and operators/functions that support compile-time evaluation.
(2). Const variables that are not compile-time constants are sometimes called runtime constants. Runtime constants cannot be used in a constant expression.
(3). Const non-integral variables are always runtime constants (even if they have a constant expression initializer). 
If you need such variables to be compile-time constants, define them as constexpr variables instead (see lesson 5.5 -- Constexpr variables).
(4). An expression that is not a constant expression is sometimes called a runtime expression.
*/

int main(){
    

    return 0;
}