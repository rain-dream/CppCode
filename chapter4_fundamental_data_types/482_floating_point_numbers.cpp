#include <iomanip>
#include <iostream>

/*
Rounding errors make floating point comparisons tricky

NaN and Inf
(1). INF stands for infinity, and IND stands for indeterminate. 

Conclusion
1. Floating point numbers often have small rounding errors, even when the number has fewer significant digits than the precision.
*/

int main(){
    double d = {0.1};
    std::cout << d << '\n';
    std::cout << std::setprecision(17);
    std::cout << d << '\n';

    double zero = {0.0};
    double posinf = {5.0/zero};
    std::cout << posinf << '\n';

    double neginf = {-5.0/zero};
    std::cout << neginf << '\n';

    double nan = {zero/zero};
    std::cout << nan << '\n';

    return 0;
}