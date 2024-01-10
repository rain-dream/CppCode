#include <iostream>

#define MY_NAME "Alex"

// 5.1 Constant variables(named constants)
/*
1. C++ supports two different kinds of constant variables:
(1). Named constants are constant values that are associated with an identifier. 
These are also sometimes called symbolic constants, or occasionally just constants.
(2). Literal constants are constant values that are not associated with an identifier.

2. Types of named constants
(1). Constant variables
(2). Object-like macros with substitution text 
(3). Enumerated constants

3. Const variables must be initialized when you define them, 
and then that value can not be changed via assignment.

4. Const function parameters
(1). However, in modern C++ we don’t make value parameters const 
because we generally don’t care if the function changes the value of the parameter 
(since it’s just a copy that will be destroyed at the end of the function anyway). 
The const keyword also adds a small amount of unnecessary clutter to the function prototype.
(2). Don’t use const when passing by value.
(3). Later in this tutorial series, we’ll talk about two other ways to pass arguments to functions: 
pass by reference, and pass by address. When using either of these methods, 
proper use of const is important.

5. Const return values
(1). Don't use const when returning by value.

6. Object-like macros with substitution text
(1). Prefer constant variables to preprocessor macros.

7. Using constant variables throughout a multi-file program
(1). It’s better to declare them once in a central location and use them wherever needed. 
That way, if you ever need to change them, you only need to change them in one place.
There are multiple ways to facilitate this within C++ -- 
we cover this topic in full detail in lesson 7.9 -- 
Sharing global constants across multiple files (using inline variables).

8. Type qualifiers
(1). As of C++23, C++ only has two type qualifiers: const and volatile.
(2). The volatile qualifier is used to tell the compiler that 
an object may have its value changed at any time. 
This rarely-used qualifier disables certain types of optimizations.
*/

int main(){
    const double gravity = {9.8};    // preferred use of const before type
    int const sidesInSquare = {4};   // "east const" style, okay but not preferred

    std::cout << MY_NAME << '\n';

    return 0;
}