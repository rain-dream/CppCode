#include <iostream>

// 4.2 Void
/*
1. Void is our first example of an incomplete type. An incomplete type is a type that has been declared but not yet defined. 
The compiler knows about the existence of such types, but does not have enough information to determine how much memory to 
allocate for objects of that type. void is intentionally incomplete since it represents the lack of a type, and thus cannot be defined.
*/

int main(){
    int x = {100};

    std::cout << x << std::endl;

    return 0;
}