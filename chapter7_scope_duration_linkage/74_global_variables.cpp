#include <iostream>

// 7.4 Introduction to global variables
/*
1. Variables can also be declared outside of a function. Such variables are called global variables.
2. Global variables can also be defined inside a user-defined namespace.
3. Global variables have static duration
(1). Global variables are created when the program starts, and destroyed when it ends. 
This is called static duration. Variables with static duration are sometimes called static variables.

4. Global variable initialization
(1). Unlike local variables, which are uninitialized by default, 
variables with static duration are zero-initialized by default.

5. Constant global variables
(1). We discuss global constants in more detail in lesson 7.9 -- 
Sharing global constants across multiple files (using inline variables). 
(2). Use of non-constant global variables should generally be avoided altogether.
*/

namespace Foo{
    int g_x = {0};  // g_x is now inside the Foo namespace, but is still a global variable
}

void doSomething(){
    Foo::g_x = 3;
    std::cout << Foo::g_x << '\n';
}

int main(){
    doSomething();
    std::cout << Foo::g_x << '\n';

    Foo::g_x = 5;
    std::cout << Foo::g_x << '\n';

    return 0;
}