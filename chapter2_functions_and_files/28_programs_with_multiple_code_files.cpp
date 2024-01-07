# include <iostream>

/*
1. Remember, the compiler compiles each file individually. 
It does not know about the contents of other code files, or remember anything it has seen from previously compiled code files. 
/Users/zhangyu/Desktop/Code/chapter2_functions_and_files

2. C++ is designed so that each source file can be compiled independently, with no knowledge of what is in other files. 
Therefore, the order in which files are actually compiled should not be relevant.
*/

int add(int x, int y);

int main(){
    std::cout << add(4, 5) << std::endl;
}