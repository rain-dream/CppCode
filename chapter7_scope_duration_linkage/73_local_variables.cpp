#include <iostream>

// 7.3 Local variables
/*
1, Local variables have block scope

2. Local variables have automatic storage duration
(1). A variable’s storage duration (usually just called duration) 
determines what rules govern when and how a variable will be created and destroyed. 
In most cases, a variable’s storage duration directly determines its lifetime.
For example, local variables have automatic storage duration, 
which means they are created at the point of definition and destroyed at the end of the block they are defined in.
For this reason, local variables are sometimes called automatic variables.

3. Local variables in nested blocks

4. Local variables have no linkage
(1). Identifiers have another property named linkage. 
An identifier’s linkage determines whether other declarations of that name refer to the same object or not.

5. Variables should be defined in the most limited scope
(1). Avoid creating new blocks whose only purpose is to limit the scope of variables.
*/

int main(){
    int x = {2};      // local variable, no linkage

    {
        int x = {3};  // this identifier x refers to a different object than the previous x
    }

    return 0;
}