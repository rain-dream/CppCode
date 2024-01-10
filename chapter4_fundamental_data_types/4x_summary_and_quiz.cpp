#include <iostream>

// 4.x Summary and quiz
/*
1. Fixed-width integers are integers with guaranteed sizes, but they may not exist on all architectures. 
The fast and least integers are the fastest and smallest integers that are at least some size. 
std::int8_t and std::uint8_t should generally be avoided, as they tend to behave like chars instead of integers.

2. A rounding error can occur when too many significant digits are stored in a floating point number that can’t hold that much precision.
Rounding errors happen all the time, even with simple numbers such as 0.1. 
Because of this, you shouldn’t compare floating point numbers directly.

3. A rounding error can occur when too many significant digits are stored in a floating point number that can’t hold that much precision.
*/