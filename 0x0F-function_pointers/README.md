# 0x0F. C - Function pointers

-   Foundations - Low-level programming & Algorithm ― Hatching out
-   By Alexandre Gautier, Software Engineer at Holberton School
## Resources

**Read or watch**:

-   [Function Pointer in C](https://intranet.hbtn.io/rltoken/LvjzIoEU3gQ_D5QCwoGtxA "Function Pointer in C")
-   [Pointers to functions](https://intranet.hbtn.io/rltoken/3y_80bkcxiZ5Pc5Zk6NCvQ "Pointers to functions")
-   [Function Pointers in C / C++](https://intranet.hbtn.io/rltoken/i-zereq8foaoJZfG383Rvg "Function Pointers in C / C++")
-   [why pointers to functions?](https://intranet.hbtn.io/rltoken/jbk8p-_m0dJq2KC7tHrJbg "why pointers to functions?")
-   [Everything you need to know about pointers in C](https://intranet.hbtn.io/rltoken/HuMpTjvVc_PxonkOuzQEbg "Everything you need to know about pointers in C")

## Learning Objectives

At the end of this project, you are expected to be able to  [explain to anyone](https://intranet.hbtn.io/rltoken/HrRD7rSaTQBPrNroSccL7g "explain to anyone"),  **without the help of Google**:

### General

-   What are function pointers and how to use them
-   What does a function pointer exactly hold
-   Where does a function pointer point to in the virtual memory

## Quiz questions

Hide

#### Question #0

Which one is a pointer to a function?

-   int func(int a, float b);
    
-   int *func(int a, float b);
    
-   int (*func)(int a, float b);
    
-   (int *)func(int a, float b);
    

#### Question #1

To store the address of this function:

```
void neyo(void);

```

to the variable  `f`  of type pointer to a function that does not take any argument and does not return anything, you would do (check all correct answers if there is more than one):

-   f = neyo;
    
-   f = &neyo;
    
-   *f = neyo;
    
-   *f = &neyo;
    

#### Question #2

If  `f`  is a pointer to a function that takes no parameter and returns an  `int`, you can call the function pointed by  `f`  this way (check all correct answers if there is more than one):

-   f();
    
-   (*f)();
    
-   f;
    

#### Question #3

This  `void (*anjula[])(int, float)`  is:

-   A pointer to a function that takes an  `int`  and a  `float`  as parameters and returns nothing
    
-   A pointer to a function that takes an array of  `int`  and  `float`  as a parameter and returns nothing
    
-   A pointer to a function that takes an  `int`  and a  `float`  as parameters and returns an empty array
    
-   An array of pointers to functions that take an  `int`  and a  `float`  as parameters and returns nothing
    
-   A pointer to an array of functions that take an  `int`  and a  `float`  as parameters and returns nothing
    

#### Question #4

What does a pointer to a function point to (check all correct answers if there is more than one)?

-   data
    
-   code
    
-   The first character of the name of the function
    
-   The first byte of code of the function
    

## Tasks

### 0. What's my name

mandatory

Write a function that prints a name.

-   Prototype:  `void print_name(char *name, void (*f)(char *));

### 1. If you spend too much time thinking about a thing, you'll never get it done

mandatory

Write a function that executes a function given as a parameter on each element of an array.

-   Prototype:  `void array_iterator(int *array, size_t size, void (*action)(int));`
-   where  `size`  is the size of the array
-   and  `action`  is a pointer to the function you need to use

### 2. To hell with circumstances; I create opportunities

mandatory

Write a function that searches for an integer.

-   Prototype:  `int int_index(int *array, int size, int (*cmp)(int));`
-   where  `size`  is the number of elements in the array  `array`
-   `cmp`  is a pointer to the function to be used to compare values
-   `int_index`  returns the index of the first element for which the  `cmp`  function does not return  `0`
-   If no element matches, return  `-1`
-   If size <=  `0`, return  `-1`

### 3. A goal is not always meant to be reached, it often serves simply as something to aim at

mandatory

Write a program that performs simple operations.

-   You are allowed to use the standard library
-   Usage:  `calc num1 operator num2`
-   You can assume  `num1`  and  `num2`  are integers, so use the  `atoi`  function to convert them from the string input to  `int`
-   `operator`  is one of the following:
    -   `+`: addition
    -   `-`: subtraction
    -   `*`: multiplication
    -   `/`: division
    -   `%`: modulo
-   The program prints the result of the operation, followed by a new line
-   You can assume that the result of all operations can be stored in an  `int`
-   if the number of arguments is wrong, print  `Error`, followed by a new line, and exit with the status  `98`
-   if the  `operator`  is none of the above, print  `Error`, followed by a new line, and exit with the status  `99`
-   if the user tries to divide (`/`  or  `%`) by  `0`, print  `Error`, followed by a new line, and exit with the status  `100`

This task requires that you create four different files.
