#include <iomanip>  // for std::setw (which sets the width of the subsequent output)
#include <iostream>

/*
1. Object sizes
2. Fundamental data type sizes
(1). Perhaps surprisingly, the C++ standard does not define the exact size (in bits) for any of the fundamental types.

3. The sizeof operator
(1). sizeof does not include dynamically allocated memory used by an object. 
We discuss dynamic memory allocation in a future lesson.
(2). You might assume that types that use less memory would be faster than types that use more memory. 
This is not always true. CPUs are often optimized to process data of a certain size (e.g. 32 bits), 
and types that match that size may be processed quicker. On such a machine, a 32-bit int could be faster than a 16-bit short or an 8-bit char.
*/

int main(){
    std::cout << std::left;
    std::cout << std::setw(16) << "bool:" << sizeof(bool) << " bytes\n";
    std::cout << std::setw(16) << "char:" << sizeof(char) << " bytes\n";
    std::cout << std::setw(16) << "short:" << sizeof(short) << " bytes\n";
    std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n";
    std::cout << std::setw(16) << "long:" << sizeof(long) << " bytes\n";
    std::cout << std::setw(16) << "long long:" << sizeof(long long) << " bytes\n";
    std::cout << std::setw(16) << "float:" << sizeof(float) << " bytes\n";
    std::cout << std::setw(16) << "double:" << sizeof(double) << " bytes\n";
    std::cout << std::setw(16) << "long double:" << sizeof(long double) << " bytes\n";

    // You can also use the sizeof operator on a variable name
    int x = {0};
    std::cout << "x is " << sizeof(x) << " bytes\n";

    return 0;
}