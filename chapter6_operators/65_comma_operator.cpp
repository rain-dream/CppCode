#include <iostream>

// 6.5 The comma operator
/*
1. x,y: Evaluate x then y, returns value of y.
2. In almost every case, a statement written using the comma operator would be better written as separate statements.
*/

int main(){
    int x = {1};
    int y = {2};

    std::cout << (++x, ++y) << '\n';

    return 0;
}