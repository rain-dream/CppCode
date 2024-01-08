#include <iostream>

/*
1. In programming, the name of a function (or object, type, template, etc…) is called its identifier.

2.Comment
(1). At the library, program, or function level, use comments to describe what.
(2). Inside the library, program, or function, use comments to describe how.
(3). At the statement level, use comments to describe why.

3. Introduction to objects and variables
(1). Random Access Memory: You can think of RAM as a series of numbered boxes that can be used to store data while the program is running.
(2). Objects and variables
1). In C++, direct memory access is discouraged. Instead, we access memory indirectly through an object. 
2). An object is a region of storage (usually memory) that can store a value, 
and has other associated properties (that we’ll cover in future lessons). 

An object with a name is called a variable.

(3). Variable instantiation
1). When the program is run (called runtime), the variable will be instantiated. 
Instantiation is a fancy word that means the object will be created and assigned a memory address. 
2). An instantiated object is sometimes called an instance.

(4). Data types
1). A type tells the program how to interpret a value in memory.

4. Variable assignment and initialization
(1). After a variable has been defined, you can give it a value (in a separate statement) using the = operator. 
This process is called assignment, and the = operator is called the assignment operator.

(2). By default, assignment copies the value on the right-hand side of the = operator 
to the variable on the left-hand side of the operator. This is called copy assignment.

(3). When a variable is defined, you can also provide an initial value for the variable at the same time. 
This is called initialization. The value used to initialize a variable is called an initializer.
*/

int main(){
    // default initialization
    // In most cases, default initialization leaves a variable with an indeterminate value.
    int a;
    
    // copy initialization
    /*Copy initialization had fallen out of favor in modern C++ due to 
    being less efficient than other forms of initialization for some complex types.
    However, C++17 remedied the bulk of these issues, and copy initialization is now finding new advocates.
    Copy initialization is also used whenever values are implicitly copied or converted, such as when passing arguments to a function by value, 
    returning from a function by value, or catching exceptions by value.*/
    int b = 5;

    // direct initialization
    /*Direct initialization was initially introduced to allow for more efficient initialization of 
    complex objects (those with class types, which we’ll cover in a future chapter). 
    Just like copy initialization, direct initialization had fallen out of favor in modern C++, 
    largely due to being superseded by list initialization. 
    However, we now know that list initialization has a few quirks of its own, 
    and so direct initialization is once again finding use in certain cases.
    Direct initialization is also used when values are explicitly cast to another type.
    One of the reasons direct initialization had fallen out of favor is 
    because it makes it hard to differentiate variables from functions.*/
    int c(6);

    std::cout << a << " " << b << " " << c << std::endl;

    return 0;
}