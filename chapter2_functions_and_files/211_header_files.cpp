#include "add.h"
#include <iostream>

/*
1. As programs grow larger (and make use of more files), 
it becomes increasingly tedious to have to forward declare every function you want to use that is defined in a different file. 
Wouldn’t it be nice if you could put all your forward declarations in one place and then import them when you need them?

2. Unlike source files, header files should not be added to your compile command 
(they are implicitly included by #include statements and compiled as part of your source files).

3. How including definitions in a header file results in a violation of the one-definition rule
(1). You should avoid putting function or variable definitions in header files. 
Doing so will generally result in a violation of the one-definition rule (ODR) in cases 
where the header file is included into more than one source file.
(2). In future lessons, we will encounter additional kinds of definitions that can be safely defined in header files 
(because they are exempt from the ODR). This includes definitions for inline functions, inline variables, types, and templates. 
We’ll discuss this further when we introduce each of these.

4. Source files should include their paired header
(1). This allows the compiler to catch certain kinds of errors at compile time instead of link time.

5. Do not #include .cpp files

6. Angled brackets vs double quotes
(1). Our use of angled brackets vs double quotes helps give the preprocessor a clue as to where it should look for header files.

7. Another commonly asked question is “why doesn’t iostream 
(or any of the other standard library header files) have a .h extension?”. 
The answer is that iostream.h is a different header file than iostream! To explain requires a short history lesson.

8. Including header files from other directories
(1). A better method is to tell your compiler or IDE that you have a bunch of header files in some other location, 
so that it will look there when it can’t find them in the current directory. 
This can generally be done by setting an include path or search directory in your IDE project settings.

9. Headers may include other headers
(1). These additional header files are sometimes called transitive includes, 
as they’re included implicitly rather than explicitly.
(2). Each file should explicitly #include all of the header files it needs to compile. 
Do not rely on headers included transitively from other headers.

10. The #include order of header files
(1). If your header files are written properly and #include everything they need, the order of inclusion shouldn’t matter.

11. order your #includes as follows:
The paired header file
Other headers from your project
3rd party library headers
Standard library headers
The headers for each grouping should be sorted alphabetically 
(unless the documentation for a 3rd party library instructs you to do otherwise).

12. Header file best practices
*/

int main(){
    std::cout << add(4, 5) << std::endl;
}