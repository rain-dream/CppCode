#include <iostream>

// 7.8 Why (non-const) global variables are evil
/*
1. By far the biggest reason non-const global variables are dangerous 
is because their values can be changed by any function that is called, 
and there is no easy way for the programmer to know that this will happen.

2. The initialization order problem of global variables 
(1). Initialization of static variables (which includes global variables) 
happens as part of program startup, before execution of the main function. This proceeds in two phases:
static initialization; dynamic initialization
(2). Dynamic initialization of global variables causes a lot of problems in C++. 
Avoid dynamic initialization whenever possible.

3. Protecting yourself fromglobal destruction
(1). First, prefix all non-namespaced global variables with “g” or “g_”, 
or better yet, put them in a namespace.
(2). Second, instead of allowing direct access to the global variable, 
it’s a better practice to “encapsulate” the variable. 
(3). Third, when writing an otherwise standalone function that uses the global variable, 
don’t use the variable directly in your function body. 
*/

int initX();
int initY();

int g_x = {initX()};
int g_y = {initY()};

int initX(){
    return g_y;
}

int initY(){
    return 5;
}

namespace constants{
    constexpr double gravity = {9.8};
}

double getGravity(){
    return constants::gravity;
}

int main(){
    std::cout << g_x << ' ' << g_y << '\n';

    return 0;
}