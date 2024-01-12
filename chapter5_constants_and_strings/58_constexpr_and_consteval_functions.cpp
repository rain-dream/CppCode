#include <type_traits>
#include <iostream>

// 5.8 Coonstexpr and consteval functions
/*
1. Constexpr functions can be evaluated at compile-time

2. To be eligible for compile-time evaluation, a function must have a constexpr return type and 
not call any non-constexpr functions when evaluated at compile-time.
Additionally, a call to the function must have arguments that are constant expressions (e.g. compile-time constant variables or literals).

3. Constexpr functions can also be evaluated at runtime

4. When is a constexpr function evaluated at compile-time
(1). According to the C++ standard, a constexpr function that is eligible for compile-time evaluation must be evaluated at compile-time 
if the return value is used where a constant expression is required. 
Otherwise, the compiler is free to evaluate the function at either compile-time or runtime.
(2). This also means that your compiler may make different choices for debug vs. release builds (as debug builds typically have optimizations turned off).

5. Forcing a constexpr function to be evaluated at compile-time
(1). Use consteval if you have a function that must run at compile-time for some reason (e.g. performance).
Such functions are called immediate functions.
(2). The downside of consteval functions is that such functions can’t evaluate at runtime, 
making them less flexible than constexpr functions, which can do either.
(3). Constexpr/consteval functions are implicitlly inline
constexpr functions are often defined in header files, so they can be #included into any .cpp file that requires the full definition.
(4). Constexpr/consteval function parameters are not constexpr (but can be used as arguments to other constexpr functions).
(5). Can a constexpr function call a non-constexpr function?
The answer is yes, but only when the constexpr function is being evaluated in a non-constant context.

6. Why not constexpr every eligible function?
(1). Unless you have a specific reason not to, a function that can be made constexpr generally should be made constexpr.
*/

constexpr int greater(int x, int y){
    return (x > y ? x : y);
}

constexpr int someFunction(){
    if(std::is_constant_evaluated())  // if compile-time evaluation
        return 1;
    else 
        return 0;
}

int main(){
    constexpr int x = {5};
    constexpr int y = {6};

    std::cout << greater(x, y) << '\n';

    return 0;
}