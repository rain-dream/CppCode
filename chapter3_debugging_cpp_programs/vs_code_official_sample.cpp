#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::string> msg = {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const std::string& world: msg){
        std::cout << world << " ";
    }
    
    return 0;
}