#include <iostream>

// 4.1 Introduction to fundamental data types
/*
1. Bits, types, and memory addressing
(1). The smallest unit of memory is a binary digit (also called a bit), which can hold a value of 0 or 1.
(2). Perhaps surprisingly, in modern computer architectures, each bit does not get its own unique memory address. 
This is because the number of memory addresses is limited, 
and the need to access data bit-by-bit is rare. Instead, each memory address holds 1 byte of data. 
A byte is a group of bits that are operated on as a unit. The modern standard is that a byte is comprised of 8 sequential bits.
(In C++, we typically work with “byte-sized” chunks of data.)

2. Data types
(1). Because all data on a computer is just a sequence of bits, 
we use a data type (often called a “type” for short) to tell the compiler how to interpret the contents of memory in some meaningful way. 

3. Fundamental data types
*/