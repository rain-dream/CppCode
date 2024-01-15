#include <iostream>

// 7.6 Internal linkage
/*
1. An identifier’s linkage determines whether other declarations of 
that name refer to the same object or not.

2. Global variable and functions identifiers can have either internal linkage or external linkage. 

3. An identifier with internal linkage can be seen and used within a single translation unit, 
but it is not accessible from other translation units (that is, it is not exposed to the linker). 
This means that if two source files have identically named identifiers with internal linkage, 
those identifiers will be treated as independent (and do not result in an ODR violation for having duplicate definitions).

4. Global variables with internal linkage
(1). Global variables with internal linkage are sometimes called internal variables.

5. Functions with internal linkage

6. static vs unnamed namespaces
(1). In modern C++, use of the static keyword for giving identifiers internal linkage is falling out of favor. 
Unnamed namespaces can give internal linkage to a wider range of identifiers (e.g. type identifiers), 
and they are better suited for giving many identifiers internal linkage.

7. Why bother giving identifiers internal linkage?
(1). Consider giving all identifiers you don’t want accessible to other files internal linkage (use an unnamed namespace for this).
*/

static int g_x{};      // non-constant globals have external linkage by default, but can be given internal linkage via the static keyword
const int g_y{1};      // const globals have internal linkage by default
constexpr int g_z{2};  // constexpr globals have internal linkage by default

int main(){
    std::cout << g_x << g_y << g_z << '\n';

    return 0;
}