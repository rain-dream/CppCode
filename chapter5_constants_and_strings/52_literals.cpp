#include <iostream>

// 5.2 Literals
/*
1. Literals are sometimes called literal constants because their meaning cannot be redefined.

2. The type of a literal
(1). Integral literals
(2). Floating point literals
(3). String literals
C-style string literals are const objects that are created at the start of the program 
and are guaranteed to exist for the entirety of the program.
Unlike C-style string literals, std::string and std::string_view literals create temporary objects. 
These temporary objects must be used immediately, as they are destroyed 
at the end of the full expression in which they are created.

3. Magic numbers
(1). Avoid magic numbers in your code (use constexpr variables instead, 
see lesson 5.5 -- Constexpr variables).
*/

int main(){
    double avogadro = {6.02e23};
    double electronCharge = {1.6e-19};

    std::cout << avogadro << '\n';
    std::cout << electronCharge << '\n';

    return 0;
}