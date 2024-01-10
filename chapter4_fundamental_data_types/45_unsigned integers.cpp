# include<iostream>

// 4.5 Unsigned integers, and why to avoid them
/*
1. Unsigned integer overflow
(1). wrap around

2. The controversy over unsigned numbers
(1). Many developers (and some large development houses, such as Google) believe that developers should generally avoid unsigned integers.
*/

int main(){

    unsigned short a = {10};
    unsigned int b = {10};
    unsigned long c = {10};
    unsigned long long d = {10};

    return 0;
}