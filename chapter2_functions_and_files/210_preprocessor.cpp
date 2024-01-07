#include <iostream>

/*
1. Instead, prior to compilation, each code (.cpp) file goes through a preprocessing phase. 
In this phase, a program called the preprocessor makes various changes to the text of the code file. ]
The preprocessor does not actually modify the original code files in any way -- 
rather, all changes made by the preprocessor happen either temporarily in-memory or using temporary files.

2. Most of what the preprocessor does is fairly uninteresting. 
For example, it strips out comments, and ensures each code file ends in a newline. 
However, the preprocessor does have one very important role: it is what processes #include directives.

3. When the preprocessor has finished processing a code file, the result is called a translation unit. 
This translation unit is what is then compiled by the compiler.
The entire process of preprocessing, compiling, and linking is called translation.

4. Preprocessor directives
(1). You’ve already seen the #include directive in action (generally to #include <iostream>). 
When you #include a file, the preprocessor replaces the #include directive with the contents of the included file. 

5. The #define directive can be used to create a macro. 
In C++, a macro is a rule that defines how input text is converted into replacement output text.
There are two basic types of macros: object-like macros, and function-like macros.
We recommend avoiding these kinds of macros altogether, as there are better ways to do this kind of thing. 
We discuss this more in lesson 5.1 -- Constant variables (named constants).

6. Conditional compilation
(1). The conditional compilation preprocessor directives allow you to specify under what conditions something will or won’t compile. 
There are quite a few different conditional compilation directives, 
but we’ll only cover the three that are used by far the most here: #ifdef, #ifndef, and #endif.

7. Directives defined in one code file do not have impact on other code files in the same project.
*/

#define PRINT_JOE

int main(){
    #ifdef PRINT_JOE
    std::cout << "Joe\n";
    #endif

    #ifdef PRINT_BOB
    std::cout << "Bob\n";
    #endif

    return 0;
}