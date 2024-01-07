#include <iostream>

/*
1. Variables defined inside the body of a function are called local variables.

2. Function parameters are also generally considered to be local variables.

3. local variable lifetime
(1). Local variables are destroyed in the opposite order of creation at the end of the set of curly braces 
in which it is defined (or for a function parameter, at the end of the function).
(2). Note that variable creation and destruction happen when the program is running (called runtime), not at compile time. 
Therefore, lifetime is a runtime property.

4. local scope
(1). Scope is a compile-time property, and trying to use an identifier when it is not in scope will result in a compile error.
(2). "Out of scope" vs "going out of scope"
The term “going out of scope” is typically applied to objects rather than identifiers. 
We say an object goes out of scope at the end of the scope (the end curly brace) in which the object was instantiated.

5.Functional separation

6.Where to define local variables
(1). In modern C++, the best practice is that local variables inside the function body 
should be defined as close to their first use as reasonable.
*/