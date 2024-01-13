#include<iostream>
#include<string>
#include<string_view>



// 5.10 Introduction to std::string_view
/*
1. std::string_view provides read-only access to an existing string 
(a C-style string, a std::string, or another std::string_view) without making a copy.

2. std::string_view will not implicitly convert to std::string.

3. Assignment changes what the std::string_view is viewing
*/

void printString(std::string str){
    // str makes a copy of its initializer
    std::cout << str << '\n';
}

void printSV(std::string_view str){
    std::cout << str << '\n';
}

/*
void stringLiteral(){
    using namespace std::string_literals;
    using namespace std::string_view_literals;

    std::cout << "foo\n";    // no suffix is a C-style string literal
    std::cout << "goo\n"s;   // no suffix is a std::string literal
    std::cout << "moo\n"sv;  // sv suffix is a std::string_view literal
}
*/


int main(){
    std::string s = "Hello, world!"; 
    printString(s);

    std::string_view sv = "Hello, world!"; 
    printSV(sv);

    // constexpr std::string_view cs = "Hello, world!";
    // printSV(cs);

    // stringLiteral();

    return 0;
}