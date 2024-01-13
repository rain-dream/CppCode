#include <iostream>
#include <string>

// 5.9 Introduction to std::string
/*
1. In modern C++, C-style string variables are best avoided.
2. std::string and std::string_view aren’t fundamental types, they’re class types.
3. If std::string doesn’t have enough memory to store a string,
it will request additional memory (at runtime) using a form of memory allocation known as dynamic memory allocation. 
This ability to acquire additional memory is part of what makes std::string so flexible, but also comparatively slow.

4. It turns out that when using operator>> to extract a string from std::cin, operator>> only returns characters up to 
the first whitespace it encounters. Any other characters are left inside std::cin, waiting for the next extraction.

5. Use std::getline() to input text

6. Whenever a std::string is initialized, a copy of the string used to initialize it is made. 
Making copies of strings is expensive, so care should be taken to minimize the number of copies made.
When a std::string is passed to a function by value, the std::string function parameter must be instantiated and initialized with the argument. 
This results in an expensive copy. We’ll discuss what to do instead (use std::string_view).
When a function returns by value to the caller, the return value is normally copied from the function back to the caller.
So you might expect that you should not return std::string by value, as doing so would return an expensive copy of a std::string.
However, as a rule of thumb, it is okay to return a std::string by value when the expression of the return statement resolves to any of the following:
A local variable of type std::string;
A std::string that has been returned by value from a function call or operator;
A std::string that is created as part of the return statement
std::string supports a capability called move semantics, 
which allows an object that will be destroyed at the end of the function to instead be returned by value without making a copy.
std::string may also be returned by (const) reference, which is another way to avoid making a copy.

7. Literals for std::string

*/

int main(){
    /*
    This is one of the exception cases where using an entire namespace is generally okay, 
    because the suffixes defined within are unlikely to collide with any of your code. Avoid such using-directives outside of functions in header files.
    */
    using namespace std::string_literals;
    
    std::cout << "Enter your full name: ";
    std::string name = "";
    std::getline(std::cin>>std::ws, name);

    std::cout << "Your name is " << name << '\n';
    std::cout << name.length() << '\n';

    std::cout << "foo\n";   // no suffix is a C-style string literal
    std::cout << "goo\n"s;  // s suffix is a std::string literal

    return 0;
}