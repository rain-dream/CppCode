#include "pi.h"
#include "math.h"
#include <iostream>

// 5.7 Inline functions and variables
/*
1. However, one downside of using a function is that every time a function is called, there is a certain amount of performance overhead that occurs.

2. For functions that are large and/or perform complex tasks, 
the overhead of the function call is typically insignificant compared to the amount of time the function takes to run. 
However, for small functions (such as min() above), the overhead costs can be larger than the time needed to actually execute the function’s code!

3. Inline expansion
(1). Fortunately, the C++ compiler has a trick that it can use to avoid such overhead cost: 
Inline expansion is a process where a function call is replaced by the code from the called function’s definition.
(2). Beyond removing the cost of function call, inline expansion can also allow the compiler to optimize the resulting code more efficiently.
(3). However, inline expansion has its own potential cost: 
if the body of the function being expanded takes more instructions than the function call being replaced, 
then each inline expansion will cause the executable to grow larger. Larger executables tend to be slower (due to not fitting as well in memory caches).
(4). Modern optimizing compilers make the decision about when functions should be expanded inline.
(5). The inline keyword, historically
(6). The inline keyword, modernly
In modern C++, the term inline has evolved to mean “multiple definitions are allowed”. 
Thus, an inline function is one that is allowed to be defined in multiple files.
The linker will consolidate all inline function definitions for an identifier into a single definition 
(thus still meeting the requirements of the one definition rule).
Inline functions are typically defined in header files, 
where they can be #included into the top of any code file that needs to see the full definition of the identifier.
This is particularly useful for header-only libraries, 
which are one or more header files that implement some capability (no .cpp files are included).
Header-only libraries are popular because there are no source files 
that need to be added to a project to use them and nothing that needs to be linked. 
You simply #include the header-only library and then can use it.
The following are implicitly inline:
Functions defined inside a class, struct, or union type definition (14.3 -- Member functions).
Constexpr / consteval functions (5.8 -- Constexpr and consteval functions).
Functions implicitly instantiated from function templates (11.7 -- Function template instantiation).

(7). Inline variables
C++17 introduces inline variables, which are variables that are allowed to be defined in multiple files. 
Inline variables work similarly to inline functions, 
and have the same requirements (the compiler must be able to see an identical full definition everywhere the variable is used).
*/


int main(){
    std::cout << pi() << '\n';
    std::cout << circumference(2.0) << '\n';

    return 0;
}