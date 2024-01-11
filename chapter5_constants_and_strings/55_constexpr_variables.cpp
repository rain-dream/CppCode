#include <iostream>

// 5.5 Constexpr variables
/*
1. Because compile-time constants also allow for better optimization (and have little downside), 
we typically want to use compile-time constants wherever possible.

2. When using const, our variables could end up as either a compile-time const or a runtime const, 
depending on whether the initializer is a constant expression or not.

3. The constexpr keyword
(1). Fortunately, we can enlist the compiler’s help to ensure we get a compile-time constant variable where we desire one. 
To do so, we use the constexpr keyword instead of const in a variable’s declaration. 
(2). Note that non-integral types can be made constexpr.
(3). Any constant variable whose initializer is a constant expression should be declared as constexpr.
Any constant variable whose initializer is not a constant expression should be declared as const.
(4). In the future we will discuss some types that are not fully compatible with constexpr 
(including std::string, std::vector, and other types that use dynamic memory allocation). 
For constant objects of these types, 
either use const instead of constexpr, or pick a different type that is constexpr compatible (e.g. std::string_view or std::array).

4. Const and constexpr function parameters
(1). Because the initialization of function parameters happens at runtime, this leads to two consequences:
const function parameters are treated as runtime constants (even when the supplied argument is a compile-time constant);
Function parameters cannot be declared as constexpr, since their initialization value isn’t determined until runtime.
(2). C++ does support functions that can be evaluated at compile-time (and thus can be used in constant expressions). 
We discuss these in lesson 5.8 -- Constexpr and consteval functions.
(3). C++ also supports a way to pass compile-time constants to a function. We discuss these in lesson 11.9 -- Non-type template parameters.
*/

int main(){
    constexpr double gravity = {9.8};
    constexpr int sum = {4+5};

    std::cout << gravity << '\n';
    std::cout << sum << '\n';

    return 0;
}