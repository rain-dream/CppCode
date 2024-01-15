// #include "add.h"

#include <iostream>

// 7.2 User-defined namespaces and the scope resolution operator
/*
1. There are two different ways to tell the compiler which version of doSomething() to use, 
via the scope resolution operator, or via using statements.

2. Identifier resolution from within a namespace
(1). If an identifier inside a namespace is used and no scope resolution is provided, 
the compiler will first try to find a matching declaration in that same namespace. If no matching identifier is found, 
the compiler will then check each containing namespace in sequence to see if a match is found, with the global namespace being checked last.

3. Forward declaration of content in namespaces
(1). For identifiers inside a namespace, those forward declarations also need to be inside the same namespace.

4. Multiple namespace blocks are allowed

5. Nested namespaces

6. Namespace aliases
(1). One nice advantage of namespace aliases: 
If you ever want to move the functionality within Foo::Goo to a different place, 
you can just update the Active alias to reflect the new destination, 
rather than having to find/replace every instance of Foo::Goo.

7. When you should use namespaces
(1). In applications, namespaces can be used to separate application-specific code 
from code that might be reusable later (e.g. math functions). 
For example, physical and math functions could go into one namespace 
(e.g. Math::). Language and localization functions in another (e.g. Lang::).
When you write a library or code that you want to distribute to others, always place your code inside a namespace. 
As an additional advantage, placing library code inside a namespace 
also allows the user to see the contents of your library by using their editor’s auto-complete and suggestion feature.
*/

void print(){
    std::cout << " there\n";
}

namespace Foo{
    int doSomething(int x, int y){
        return x + y;
    }

    void print(){
        std::cout << "Hello";
    }

    void printHelloThere(){
        print();    // calls print() in Foo namespace
        ::print();  // calls print() in global namespace
    }
}

namespace Namespace1::Namespace2{
    int add(int x, int y){
        return x + y;
    }
}

namespace Goo{
    int doSomething(int x, int y){
        return x - y;
    }
}

int main(){
    namespace Active = Namespace1::Namespace2;

    std::cout << Foo::doSomething(3, 5) << '\n';
    std::cout << Goo::doSomething(3, 5) << '\n';

    Foo::printHelloThere();

    // std::cout << BasicMath::add(4, 4) << '\n';

    std::cout << Active::add(4, 4) << '\n';

    return 0;
}