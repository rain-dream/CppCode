# include<iostream>

/*
1. A forward declaration allows us to tell the compiler about the existence of an identifier 
before actually defining the identifier.

2. To write a forward declaration for a function, we use a function declaration statement 
(also called a function prototype).

3. Forward declarations are most often used with functions. 
However, forward declarations can also be used with other identifiers in C++, such as variables and types. 
Variables and types have a different syntax for forward declaration, so we’ll cover these in future lessons.

4. Declarations vs. definitions
(1). A definition is a declaration that actually implements (for functions and types) or instantiates (for variables) the identifier.
(2). In C++, all definitions are declarations. Therefore int x; is both a definition and a declaration.
(3). Conversely, not all declarations are definitions. Declarations that aren’t definitions are called pure declarations. 
Types of pure declarations include forward declarations for function, variables, and types.
(4). However, there are a few cases where the compiler must be able to see a full definition in order to use an identifier 
(such as for template definitions and type definitions, both of which we will discuss in future lessons).
*/

int add(int x, int y);
int multiply(int x, int y);

int main(){
    std::cout << add(4, 5) << std::endl;

    return 0;
}

int add(int x, int y){
    int c  = multiply(x, y);
    return c+x+y;
}

int multiply(int x, int y){
    return x*y;
}