#include <iomanip>
#include <iostream>

// 10.3 Numeric conversions
/*

*/

int main(){
    float f = 0.123456789;
    std::cout << std::setprecision(9) << f << '\n';

    return 0;
}