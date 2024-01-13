#include<iostream>
#include<string>
#include<string_view>

// 5.11 std::string_view (part 2)
/*
1. An introduction to owners and viewers
(1). std::string is an owner
(2). We don't always need a copy
(3). std::string_view is a viewer
It is important to note that a std::string_view remains dependent on the initializer through its lifetime. 
If the string being viewed is modified or destroyed while the view is still being used, unexpected or undefined behavior will result.
A std::string_view that is viewing a string that has been destroyed is sometimes called a dangling view.

2. std::string_view is best used as a read-only function parameter

3. Should I prefer std::string_view or const std::string& function parameters?
(1). Prefer std::string_view in most cases.

4. Improperly using std::string_view
(1). Do not initialize a std::string_view with a std::string literal, 
as this will leave the std::string_view dangling.

5. Revalidating an invalid std::string_view
(1). For an invalidated std::string_view, we can do this by 
assigning the invalidated std::string_view object a valid string to view.

6. Be careful returning a std::string_view
(1). Because local variables are destroyed at the end of the function, returning a std::string_view to a local variable 
will result in the returned std::string_view being invalid, and further use of that std::string_view will result in undefined behavior. 
(2). There are two main cases where a std::string_view can be returned safely. 
First, because C-style string literals exist for the entire program, 
it’s fine to return C-style string literals from a function that has a return type of std::string_view.
Second, it is generally okay to return a function parameter of type std::string_view.

7. View modification functions
(1). std::string_view can view a substring.
(2). std::string_view may or may not be null-terminated.
The ability to view just a substring of a larger string comes with one consequence of note: 
a std::string_view may or may not be null-terminated.

8. A quick guide on when to use std::string vs std::string_view
*/

int main(){

}