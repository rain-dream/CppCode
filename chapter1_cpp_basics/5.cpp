#include <iostream>

// Keywords and naming identifiers

// Whitespace and basic formatting

// Introduction to literals and operators
/*
1. A literal (also known as a literal constant) is a fixed value that has been inserted directly into the source code.
2. Objects and variables represent memory locations that hold values. 
These values can be fetched on demand.
3. Operators
(1). There are also a number of operators that are keywords (e.g. new, delete, and throw).
(2). An operator (or function) that has some observable effect beyond producing a return value 
is said to have a side effect.
(3). Operators with side effects are usually called for the behavior of 
the side effect rather than for the return value (if any) those operators produce.
*/


int main() {
    int x = {2};
    std::cout << (x=5) << std::endl;

    return 0;
}