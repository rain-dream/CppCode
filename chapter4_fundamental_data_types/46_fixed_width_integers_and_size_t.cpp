#include <cstdint>
#include <iostream>

// 4.6 Fixed-width integers and size_t
/*
1. C++ only guarantees that integer variables will have a minimum size -- but they could be larger, depending on the target system.

2. Fixed-width integers
(1). To address the above issues, C99 defined a set of fixed-width integers (in the stdint.h header) that are guaranteed to be the same size on any architecture.

3. Fast and least integers
(1). The fast types (std::int_fast#_t and std::uint_fast#_t) provide the fastest signed/unsigned integer type 
with a width of at least # bits (where # = 8, 16, 32, or 64). 
For example, std::int_fast32_t will give you the fastest signed integer type that’s at least 32 bits. 
By fastest, we mean the integral type that can be processed most quickly by the CPU.
(2). The least types (std::int_least#_t and std::uint_least#_t) provide the smallest signed/unsigned integer type with a width of 
at least # bits (where # = 8, 16, 32, or 64). For example, std::uint_least32_t will give you the smallest unsigned integer type that’s at least 32 bits.

4. When storing integral values where a specific size is important, 
it’s generally best to avoid std::int8_t and std::uint8_t (and the related fast and least types) and use std::int16_t or std::uint16_t instead.

5. Best practices for integral types
(1). Our stance is that it’s better to be correct than fast, and better to fail at compile time than runtime.

6. std::size_t
(1). Sizeof (and many functions that return a size or length value) return a value of type std::size_t. 
std::size_t is defined as an unsigned integral type, and it is typically used to represent the size or length of objects.
(2). Some compilers limit the largest creatable object to half the maximum value of std::size_t.
*/

int main(){
    // std::int16_t i = {15};
    // std::cout << i << '\n';

    // std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
	// std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
	// std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
	// std::cout << '\n';
	// std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
	// std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
	// std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";

    std::cout << sizeof(std::size_t) << '\n';

    return 0;
}