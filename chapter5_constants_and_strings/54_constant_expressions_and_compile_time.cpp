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
(2). A compile-time constant is a constant whose value must be known at compile time.
(3). Const variables that are not compile-time constants are sometimes called runtime constants. Runtime constants cannot be used in a constant expression.
(4). Const non-integral variables are always runtime constants (even if they have a constant expression initializer). 
If you need such variables to be compile-time constants, define them as constexpr variables instead (see lesson 5.5 -- Constexpr variables).
(4). An expression that is not a constant expression is sometimes called a runtime expression.

4. Partial optimization of constant subexpressions
(1). Compilers have long been able to optimize constant subexpressions, even when the full expression is a runtime expression. 
This optimization process is called “constant folding”, and is allowed under the as-if rule.

5. Optimization of non-constant expressions

6. Key insight
(1). Making a variable constant helps the compiler optimize.
(2). Compile-time constant variables can also be used in constant expressions, which are more likely to be evaluated at compile-time than runtime expressions.
*/

int getNumber(){
    std::cout << "Enter a number: ";
    int y = {0};
    std::cin >> y;

    return y;
}

int main(){
    // Non-const variables:
    int a = {5};                 // 5 is a constant expression
    double b = {1.2 + 3.4};      // 1.2 + 3.4 is a constant expression

    // Const integral variables with a constant expression initializer
    // are compile-time constants:
    const int c = {5};           // 5 is a constant expression
    const int d = {c};           // c is a constant expression
    const long e = {c + 2};      // c + 2 is a constant expression

    // Other const variables are runtime constants:
    const int f = {a};           // a is not a constant expression
    const int g = {a + 1};       // a + 1 is not a constant expression
    const long h = {a + c};      // a + c is not a constant expression
    const int i = {getNumber()}; // getNumber() is not a constant expression

    const double j = {b};        // b is not a constant expression
    const double k = {1.2};      // 1.2 is a constant expression

    std::cout << 3 + 4 << '\n';  // "3+4" is a constant subexpression

    return 0;
}