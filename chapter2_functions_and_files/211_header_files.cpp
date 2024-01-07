#include "add.h"
#include <iostream>

/*
1. As programs grow larger (and make use of more files), 
it becomes increasingly tedious to have to forward declare every function you want to use that is defined in a different file. 
Wouldn’t it be nice if you could put all your forward declarations in one place and then import them when you need them?

2. Unlike source files, header files should not be added to your compile command 
(they are implicitly included by #include statements and compiled as part of your source files).

3. How including definitions in a header file results in a violation of the one-definition rule
(1). You should avoid putting function or variable definitions in header files. 
Doing so will generally result in a violation of the one-definition rule (ODR) in cases 
where the header file is included into more than one source file.
(2). In future lessons, we will encounter additional kinds of definitions that can be safely defined in header files 
(because they are exempt from the ODR). This includes definitions for inline functions, inline variables, types, and templates. 
We’ll discuss this further when we introduce each of these.

4. Source files should include their paired header
(1). This allows the compiler to catch certain kinds of errors at compile time instead of link time.

5. Do not #include .cpp files
*/

int main(){
    std::cout << add(4, 5) << std::endl;
}