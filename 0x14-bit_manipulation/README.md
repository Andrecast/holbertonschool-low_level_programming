# 0x14. C - Bit manipulation

-   Foundations - Low-level programming & Algorithm ― Hatching out
-   By Julien Barbier, co-founder & CEO at Holberton School

## Learning Objectives

At the end of this project, you are expected to be able to  [explain to anyone](https://intranet.hbtn.io/rltoken/DgCiUstEQtlD1rCbb7oSow "explain to anyone"),  **without the help of Google**:

### General

-   Look for the right source of information without too much help
-   How to manipulate bits and use bitwise operators

## Quiz questions

Hide

#### Question #0

What is  `0x89`  in base10?

-   89
    
-   135
    
-   137
    
-   139
    

#### Question #1

What is  `0x89`  in base2?

-   0b10101001
    
-   0b10001001
    
-   0b01101001
    
-   0b10001000
    

#### Question #2

What is  `0b001010010`  in base10?

-   81
    
-   82
    
-   83
    
-   84
    

#### Question #3

What is  `0b01101101`  in base16?

-   0x36
    
-   0x6D
    
-   0x6E
    
-   0x7D
    
-   0xD6
    

#### Question #4

What is  `98`  in base2?

-   0b01010010
    
-   0b01100010
    
-   0b10011000
    

#### Question #5

What is  `98`  in base16?

-   0x62
    
-   0x98
    
-   0x96
    

#### Question #6

`0x01 & 0x01 =`  ?

-   `0x00`
    
-   `0x01`
    
-   `0x02`
    

#### Question #7

`0x01 | 0x01 =`  ?

-   `0x00`
    
-   `0x01`
    
-   `0x02`
    

#### Question #8

`0x01 & 0x00 =`  ?

-   `0x00`
    
-   `0x01`
    
-   `0x02`
    

#### Question #9

`0x01 | 0x00 =`  ?

-   `0x00`
    
-   `0x01`
    
-   `0x02`
    

#### Question #10

`0x66 & 0x22 =`  ?

-   `0x22`
    
-   `0x44`
    
-   `0x66`
    

#### Question #11

`0x44 | 0x22 =`  ?

-   `0x22`
    
-   `0x44`
    
-   `0x66`
    

#### Question #12

`0x89 & 0x01 =`  ?

-   `0x00`
    
-   `0x01`
    
-   `0x88`
    
-   `0x89`
    

#### Question #13

`0x88 & 0x01 =`  ?

-   `0x00`
    
-   `0x01`
    
-   `0x88`
    
-   `0x89`
    

#### Question #14

`0x02 >> 1 =`  ?

-   0x02
    
-   0x01
    
-   0x00
    

#### Question #15

`0x89 >> 3 =`  ?

-   0x89
    
-   0x44
    
-   0x22
    
-   0x11
    
-   0x08
    

#### Question #16

`0x01 << 1 =`  ?

-   0x00
    
-   0x01
    
-   0x02
    
-   0x03
    
-   0x10
    

#### Question #17

`0x13 << 1 =`  ?

-   0x13
    
-   0x26
    
-   0x4C
    
-   0x98
    

#### Question #18

`~ 0x12 =`  ?

-   0xED
    
-   0xFD
    
-   0xEE
    
-   0x21
    

#### Question #19

`~ 0x98 =`  ?

-   0x66
    
-   0x67
    
-   0x68
    

## Tasks

### 0. 0

mandatory

Write a function that converts a binary number to an  `unsigned int`.

-   Prototype:  `unsigned int binary_to_uint(const char *b);`
-   where  `b`  is pointing to a string of  `0`  and  `1`  chars
-   Return: the converted number, or 0 if
    -   there is one or more chars in the string  `b`  that is not  `0`  or  `1`
    -   `b`  is  `NULL`

### 1. 1

mandatory

Write a function that prints the binary representation of a number.

-   Prototype:  `void print_binary(unsigned long int n);`
-   Format: see example
-   You are not allowed to use arrays
-   You are not allowed to use  `malloc`
-   You are not allowed to use the  `%`  or  `/`  operators

### 2. 10

mandatory

Write a function that returns the value of a bit at a given index.

-   Prototype:  `int get_bit(unsigned long int n, unsigned int index);`
-   where  `index`  is the index, starting from  `0`  of the bit you want to get
-   Returns: the value of the bit at index  `index`  or  `-1`  if an error occured

### 3. 11

mandatory

Write a function that sets the value of a bit to  `1`  at a given index.

-   Prototype:  `int set_bit(unsigned long int *n, unsigned int index);`
-   where  `index`  is the index, starting from  `0`  of the bit you want to set
-   Returns:  `1`  if it worked, or  `-1`  if an error occurred

### 4. 100

mandatory

Write a function that sets the value of a bit to  `0`  at a given index.

-   Prototype:  `int clear_bit(unsigned long int *n, unsigned int index);`
-   where  `index`  is the index, starting from  `0`  of the bit you want to set
-   Returns:  `1`  if it worked, or  `-1`  if an error occurred

### 5. 101

mandatory

Write a function that returns the number of bits you would need to flip to get from one number to another.

-   Prototype:  `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
-   You are not allowed to use the  `%`  or  `/`  operators
