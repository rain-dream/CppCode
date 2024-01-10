#include <iomanip>
#include <iostream>

// 4.8 Floating point numbers
/*
1. There are three different floating point data types: float, double, and long double. 
As with integers, C++ does not define the actual size of these types 
(but it does guarantee minimum sizes).

2. Printing floating point numbers

3. Floating point precision
(1). The precision of a floating point type defines how many significant digits 
it can represent without information loss.
(2). When precision is lost because a number can’t be stored precisely, this is called a rounding error.
(3). Favor double over float unless space is at a premium, 
as the lack of precision in a float will often lead to inaccuracies.

4. Outputting floating point values

5. Rounding errors make floating point comparisons tricky
*/

int main(){
    int x = {5};
    double y = {5.0};    // 5.0 is a floating point literal (no suffix means double type by default)
    float z = {5.0f};   

    std::cout << 5.0 << '\n';
    std::cout << 6.7f << '\n';
    std::cout << 9876543.21 << '\n';

    std::cout << 3.33333333333333333333333333333333333333f <<'\n'; // f suffix means float
    std::cout << 3.33333333333333333333333333333333333333 << '\n'; // no suffix means double

    double d = {0.1};
    std::cout << d << '\n';
    std::cout << std::setprecision(17);
    std::cout << d << '\n';

    return 0;
}