#include <iostream>

// 7.7 External linkage and variable forward declarations
/*
1. Identifiers with external linkage are truly “global” in that they can be used anywhere in your program.

2. Functions have external linkage by default

3. Global variables with external linkage
(1). Global variables with external linkage are sometimes called external variables. 

4. Variable forward declarations via the extern keyword
(1). Although constexpr variables can be given external linkage via the extern keyword, 
they can not be forward declared as constexpr. 
This is because the compiler needs to know the value of the constexpr variable (at compile time). 
If that value is defined in some other file, the compiler has no visibility on what value was defined in that other file.
However, you can forward declare a constexpr variable as const, which the compiler will treat as a runtime const. 
This isn’t particularly useful.
*/

extern int g_x;        // Global variables with external linkage are sometimes called external variables. 
extern const int g_y;  // This extern is a forward declaration of a const variable named g_y that is defined somewhere else.

int main(){
    std::cout << g_x << ' ' << g_y << '\n';

    return 0;
}