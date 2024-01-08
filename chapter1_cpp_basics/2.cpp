#include <iostream>

// List initialization
/*
1. The modern way to initialize objects in C++ is to use a form of initialization that makes use of curly braces. 
This is called list initialization (or uniform initialization or brace initialization).

2. List initialization has an added benefit: it disallows “narrowing conversions”. 
This means that if you try to brace initialize a variable using a value that the variable can not safely hold, the compiler will produce an error. 

3. Best practice
(1). Prefer direct list initialization (or value initialization) for initializing your variables.
(2). Initialize your variables upon creation. You may eventually find cases where you want to ignore this advice for a specific reason 
(e.g. a performance critical section of code that uses a lot of variables), and that’s okay, as long the choice is made deliberately.

4. Unused initialized variables warnings

5. The [[maybe_unused]] attribute (C++17)
*/

int main(){
    int a;  // no initializer (default initialization)
    int b = 5;  // copy initialization
    int c(6);  // direct initialization

    int d {7};  // direct list initialization
    int e = {8};  // copy list initialization
    int f {};  // value initialization (use value initialization if the value is temporary and will be replaced)

    [[maybe_unused]] double pi {3.14159};

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;
    std::cout << f << std::endl;

    return 0;
}