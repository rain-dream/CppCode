#include <iostream>

/*
1. It’s quite easy to end up in a situation where a definition in a header file gets included more than once. 
This can happen when a header file #includes another header file (which is common).

2. 
#ifndef SOME_UNIQUE_NAME_HERE
#define SOME_UNIQUE_NAME_HERE

// your declarations (and certain types of definitions) here

#endif

3. Some good suggestions are a naming convention of PROJECT_PATH_FILE_H, FILE_LARGE-RANDOM-NUMBER_H, 
or FILE_CREATION-DATE_H.

4. Note that the goal of header guards is to prevent a code file from receiving more than one copy of a guarded header. 
By design, header guards do not prevent a given header file from being included (once) into separate code files. 
(1). The best way to work around this issue is simply to 
put the function definition in one of the .cpp files so that the header just contains a forward declaration

5. Can't we just avoid definitions in header files?
(1). There are quite a few cases we’ll show you in the future where it’s necessary to put non-function definitions 
in a header file. For example, C++ will let you create your own types. 
These custom types are typically defined in header files, 
so the type definitions can be propagated out to the code files that need to use them. 
Without a header guard, a code file could end up with multiple (identical) copies of a given type definition, 
which the compiler will flag as an error.

6. #pragma once
*/