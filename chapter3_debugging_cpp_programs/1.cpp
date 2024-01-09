#include <iostream>

// 3.1 Syntax and semantic(logic) errors

// 3.2 The debugging process

// 3.3 A strategy for debugging
/*
1. Finding problems via code inspection
2. Finding problems by running the problem
3. Reproducing the problem
*/

// 3.4 Basic debugging tactics
/*
1. Commenting out your code
2. Validating your code flow
(1). It can be helpful to place statements at the top of your functions to 
print the function’s name. That way, when the program runs, you can see which functions are getting called.
(2). When printing information for debugging purposes, use std::cerr instead of std::cout. 
std::cerr is unbuffered, which means anything you send to it will output immediately.
3. Printing values 
4. Why using printing statements to debug isn't great
*/

int main(){
    return 0;
}