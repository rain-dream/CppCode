#include <iostream>

// Uninitialized variables and undefined behavior
/*
1. A variable that has not been given a known value (usually through initialization or assignment) 
is called an uninitialized variable.
2. Many readers expect the terms “initialized” and “uninitialized” to be strict opposites, 
but they aren’t quite! “Initialized” means the object was provided with an initial value at the point of definition.
 “Uninitialized” means the object has not been given a known value (through any means, including assignment).
Therefore, an object that is not initialized but is then assigned a value is no longer uninitialized 
(because it has been given a known value).
3. For now, you should always initialize your variables because the cost of doing so 
is minuscule compared to the benefit. Once you are more comfortable with the language, there may be certain cases 
where you omit the initialization for optimization purposes. But this should always be done selectively and intentionally.
4. undefined behavior
5. Implementation-defined behavior and unspecified behavior
(1). Implementation-defined behavior means the behavior of some syntax is left up to the implementation 
(the compiler) to define.
Such behaviors must be consistent and documented, but different compilers may produce different results.
(2). Unspecified behavior is almost identical to implementation-defined behavior 
in that the behavior is left up to the implementation,  but the implementation is not required to document the behavior.
(3). We generally want to avoid implementation-defined and unspecified behavior, 
as it means our program may not work as expected if compiled on a different compiler 
(or even on the same compiler if we change project settings that affect how the implementation behaves!)
*/

int main(){
    std::cout << sizeof(int) << '\n';

    return 0;
}