#include <iostream>

// Introduction to iostream
/*
1. std::cout is buffered
(1). Statements in our program request that output be sent to the console. However, that output is typically not sent to the console immediately. 
Instead, the requested output “gets in line”, and is stored in a region of memory set aside to collect such requests (called a buffer). 
Periodically, the buffer is flushed, meaning all of the data collected in the buffer 
is transferred to its destination (in this case, the console).
(2). unbuffered output
(3). Writing data to a buffer is typically fast, whereas transferring a batch of data to an output device is comparatively slow. 
Buffering can significantly increase performance  by minimizing the number of slow transfers 
that need to be performed when there are multiple output requests.

2. std::endl vs '\n'
(1). Because of this, use of the ‘\n’ character is typically preferred instead. 
The '\n' character moves the cursor to the next line of the console, but doesn’t request a flush (std::endl require), so it will often perform better.
*/

int main(){
    std::cout << "Enter two numbers separated by a space: ";

    int x{};
    int y{};
    std::cin >> x >> y;

    std::cout << "You entered " << x << " and " << y << '\n';

    return 0;
}