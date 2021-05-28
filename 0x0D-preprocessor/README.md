# 0x0D. C - Preprocessor

-   Foundations - Low-level programming & Algorithm ― Hatching out
-   By Julien Barbier, co-founder & CEO at Holberton School & Johan Euphrosine, Software Engineer at Google

## Resources

**Read or watch**:

-   [Understanding C program Compilation Process](https://intranet.hbtn.io/rltoken/UlmUG7PSamY2_qL6xze6wg "Understanding C program Compilation Process")
-   [Object-like Macros](https://intranet.hbtn.io/rltoken/KAqnlwAvPZ84KI2JFlJpSg "Object-like Macros")
-   [Macro Arguments](https://intranet.hbtn.io/rltoken/cJyU0mmGRx_Wd9x8WwygOQ "Macro Arguments")
-   [Pre Processor Directives in C](https://intranet.hbtn.io/rltoken/A5176irunoejPUjwT3pFCQ "Pre Processor Directives in C")
-   [The C Preprocessor](https://intranet.hbtn.io/rltoken/lgohqkU5DlzUBkO2MeMmHA "The C Preprocessor")
-   [Standard Predefined Macros](https://intranet.hbtn.io/rltoken/C47iIZ3tGug6sklTB7hT_Q "Standard Predefined Macros")
-   [include guard](https://intranet.hbtn.io/rltoken/sqLUMtBCgAAXVdhIaVoaWQ "include guard")
-   [Common Predefined Macros](https://intranet.hbtn.io/rltoken/fJJUPJ-zZXlh3db00FEsJw "Common Predefined Macros")

## Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/q8A4cA0iZZTmv_nLXVCBQw "explain to anyone"), **without the help of Google**:

### General

-   What are macros and how to use them
-   What are the most common predefined macros
-   How to include guard your header files


## Quiz questions

#### Question #0

What are the steps of compilation?

-   1.  compiler 2. preprocessor 3. assembler 4. linker
x   1.  preprocessor 2.compiler 3. assembler 4. linker
-   1.  preprocessor 2.compiler 3. linker 4. assembler

#### Question #1

The preprocessor generates assembly code

-   True
    
x   False
    

#### Question #2

The preprocessor generates object code

-   True
    
x   False
    

#### Question #3

The preprocessor links our code with libraries.

-   True
    
x   False
    

#### Question #4

This portion of code is actually using the library stdlib.

```
#include <stdlib.h>

```

-   True
    
x   False
    

#### Question #5

The preprocessor removes all comments

x   True
    
-   False
    

#### Question #6

What is the  `gcc`  option that runs only the preprocessor?

-   -a
    
-   -P
    
-   -p
    
-   -pedantic
    
x   -E
    
-   -cisfun
    
-   -preprocessor
    

#### Question #7

`NULL`  is a macro

x   True
    
-   False
    

#### Question #8

What will be the last 5 lines of the output of the command  `gcc -E`  on this code?

```
#include <stdlib.h>

int main(void)
{
    NULL;
    return (EXIT_SUCCESS);
}

```

-   ```
    int main(void)
    {
     0;
     return (0);
    }
    
    ```
    
-   ```
    int main()
    {
     0;
     return (0);
    }
    
    ```
    
x   ```
    int main(void)
    {
     ((void *)0);
     return (0);
    }
    
    ```
    
-   ```
    int main(void)
    {
     '\0';
     return (0);
    }
    
    ```
    

#### Question #9

This code will try to allocate 1024 bytes in the heap:

```
#define BUFFER_SIZE 1024
malloc(BUFFER_SIZE)

```

x   True
    
-   False
    

#### Question #10

What does the macro  `TABLESIZE`  expand to?

```
#define BUFSIZE 1020
#define TABLESIZE BUFSIZE
#undef BUFSIZE
#define BUFSIZE 37

```

-   1020
    
x   37
    
-   nothing
    

#### Question #11

This is the correct way to define the macro  `SUB`:

```
#define SUB(a, b) a - b

```

-   Yes
    
-   No, it should be written this way:
    
    ```
    #define SUB(a, b) (a - b)
    
    ```
    
-   No, it should be written this way:
    
    ```
    #define SUB(a, b) (a) - (b)
    
    ```
    
x   No, it should be written this way:
    
    ```
    #define SUB(a, b) ((a) - (b))
    
    ```
    

#### Question #12

Why should we use include guards in our header files?

-   Because Holberton said so, and we should never ask why.
    
x   To avoid the problem of double inclusion when dealing with the include directive.
    

#### Question #13

The macro  `__FILE__`  expands to the name of the current input file, in the form of a C string constant.

x   True
    
-   False
    

#### Question #14

What will be the output of this program? (on a standard 64 bits, Linux machine)

```
#include <stdio.h>
#include <stdlib.h>

#define int char

int main(void)
{
    int i;

    i = 5;
    printf ("sizeof(i) = %lu", sizeof(i));
    return (EXIT_SUCCESS);
}

```

-   Segmentation Fault
    
-   It does not compile
    
-   sizeof(i) = 8
    
-   sizeof(i) = 5
    
-   sizeof(i) = 4
    
x   sizeof(i) = 1
    

## Tasks

### 0. Object-like Macro

mandatory

Score:  100.00%  (Checks completed: 100.00%)

Create a header file that defines a macro named  `SIZE`  as an abbreviation for the token  `1024`.

```
julien@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0c. macro, structures$ ./a 
1122
julien@ubuntu:~/0x0c. macro, structures$ 

```

**Repo:**

-   GitHub repository:  `holbertonschool-low_level_programming`
-   Directory:  `0x0D-preprocessor`
-   File:  `0-object_like_macro.h`

Done!  Help  Re-check your code  Get a sandbox  QA Review

### 1. Pi

mandatory

Score:  100.00%  (Checks completed: 100.00%)

Create a header file that defines a macro named  `PI`  as an abbreviation for the token  `3.14159265359`.

```
julien@ubuntu:~/0x0c. macro, structures$ cat 1-main.c
#include "1-pi.h"
#include "1-pi.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b
julien@ubuntu:~/0x0c. macro, structures$ ./b
30171.855
julien@ubuntu:~/0x0c. macro, structures$ 

```

**Repo:**

-   GitHub repository:  `holbertonschool-low_level_programming`
-   Directory:  `0x0D-preprocessor`
-   File:  `1-pi.h`

Done!  Help  Re-check your code  Get a sandbox  QA Review

### 2. File name

mandatory

Score:  100.00%  (Checks completed: 100.00%)

Write a program that prints the name of the file it was compiled from, followed by a new line.

-   You are allowed to use the standard library

```
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c
julien@ubuntu:~/0x0c. macro, structures$ ./c 
2-main.c
julien@ubuntu:~/0x0c. macro, structures$ cp 2-main.c 02-main.c
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 02-main.c -o cc
julien@ubuntu:~/0x0c. macro, structures$ ./cc
02-main.c
julien@ubuntu:~/0x0c. macro, structures$ 

```

**Repo:**

-   GitHub repository:  `holbertonschool-low_level_programming`
-   Directory:  `0x0D-preprocessor`
-   File:  `2-main.c`

Done!  Help  Re-check your code  Get a sandbox  QA Review

### 3. Function-like macro

mandatory

Score:  100.00%  (Checks completed: 100.00%)

Write a function-like macro  `ABS(x)`  that computes the absolute value of a number  `x`.

```
julien@ubuntu:~/0x0c. macro, structures$ cat 3-main.c
#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
julien@ubuntu:~/0x0c. macro, structures$ ./d 
980, 980
julien@ubuntu:~/0x0c. macro, structures$ 

```

**Repo:**

-   GitHub repository:  `holbertonschool-low_level_programming`
-   Directory:  `0x0D-preprocessor`
-   File:  `3-function_like_macro.h`

Done!  Help  Re-check your code  Get a sandbox  QA Review

### 4. SUM

mandatory

Score:  100.00%  (Checks completed: 100.00%)

Write a function-like macro  `SUM(x, y)`  that computes the sum of the numbers  `x`  and  `y`.

```
julien@ubuntu:~/0x0c. macro, structures$ cat 4-main.c
#include <stdio.h>
#include "4-sum.h"
#include "4-sum.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e
julien@ubuntu:~/0x0c. macro, structures$ ./e 
1122
julien@ubuntu:~/0x0c. macro, structures$ 

```

**Repo:**

-   GitHub repository:  `holbertonschool-low_level_programming`
-   Directory:  `0x0D-preprocessor`
-   File:  `4-sum.h`

Done!  Help  Re-check your code  Get a sandbox  QA Review

### 5. Worst abuse of the C preprocessor (IOCCC winner, 1986)

#advanced

Score:  0.00%  (Checks completed: 0.00%)

Compile this program, written by Jim Hague (UK), and feed ascii text into standard input.

-   Write a blog post to explain what this program does, how it works, and “de-obfuscate” it step by step for the reader
-   You blog post should have at least one picture, at the top of the blog post
-   Publish your blog post on Medium or LinkedIn
-   Share your blog post at least on LinkedIn

Once done, please add all urls below (blog post, LinkedIn post, etc.)

Please, remember that these blogs must be written in English to further your technical ability in a variety of settings  **It is your responsibility to request a review for your blog from a peer before the project’s deadline. If no peers have been reviewed, you should request a review from a TA or staff member.**

```
julien@ubuntu:~/c/ioccc$ cat hague.c 
#define DIT (
#define DAH )
#define __DAH   ++
#define DITDAH  *
#define DAHDIT  for
#define DIT_DAH malloc
#define DAH_DIT gets
#define _DAHDIT char
_DAHDIT _DAH_[]="ETIANMSURWDKGOHVFaLaPJBXCYZQb54a3d2f16g7c8a90l?e'b.s;i,d:"
;main           DIT         DAH{_DAHDIT
DITDAH          _DIT,DITDAH     DAH_,DITDAH DIT_,
DITDAH          _DIT_,DITDAH        DIT_DAH DIT
DAH,DITDAH      DAH_DIT DIT     DAH;DAHDIT
DIT _DIT=DIT_DAH    DIT 81          DAH,DIT_=_DIT
__DAH;_DIT==DAH_DIT DIT _DIT        DAH;__DIT
DIT'\n'DAH DAH      DAHDIT DIT      DAH_=_DIT;DITDAH
DAH_;__DIT      DIT         DITDAH
_DIT_?_DAH DIT      DITDAH          DIT_ DAH:'?'DAH,__DIT
DIT' 'DAH,DAH_ __DAH    DAH DAHDIT      DIT
DITDAH          DIT_=2,_DIT_=_DAH_; DITDAH _DIT_&&DIT
DITDAH _DIT_!=DIT   DITDAH DAH_>='a'?   DITDAH
DAH_&223:DITDAH     DAH_ DAH DAH;       DIT
DITDAH          DIT_ DAH __DAH,_DIT_    __DAH DAH
DITDAH DIT_+=       DIT DITDAH _DIT_>='a'?  DITDAH _DIT_-'a':0
DAH;}_DAH DIT DIT_  DAH{            __DIT DIT
DIT_>3?_DAH     DIT          DIT_>>1 DAH:'\0'DAH;return
DIT_&1?'-':'.';}__DIT DIT           DIT_ DAH _DAHDIT
DIT_;{DIT void DAH write DIT            1,&DIT_,1 DAH;}
julien@ubuntu:~/c/ioccc$ gcc -std=gnu89 hague.c -o h
hague.c:10:2: warning: return type defaults to ‘int’ [-Wimplicit-int]
 ;main   DIT   DAH{_DAHDIT
  ^
hague.c: In function ‘main’:
hague.c:6:17: warning: conflicting types for built-in function ‘malloc’
 #define DIT_DAH malloc
                 ^
hague.c:12:24: note: in expansion of macro ‘DIT_DAH’
 DITDAH   _DIT_,DITDAH  DIT_DAH DIT
                        ^
hague.c:15:35: warning: implicit declaration of function ‘__DIT’ [-Wimplicit-function-declaration]
 __DAH;_DIT==DAH_DIT DIT _DIT  DAH;__DIT
                                   ^
hague.c:18:7: warning: implicit declaration of function ‘_DAH’ [-Wimplicit-function-declaration]
 _DIT_?_DAH DIT  DITDAH   DIT_ DAH:'?'DAH,__DIT
       ^
hague.c: At top level:
hague.c:25:6: warning: return type defaults to ‘int’ [-Wimplicit-int]
 DAH;}_DAH DIT DIT_ DAH{   __DIT DIT
      ^
hague.c: In function ‘_DAH’:
hague.c:25:6: warning: type of ‘DIT_’ defaults to ‘int’ [-Wimplicit-int]
hague.c: At top level:
hague.c:27:17: warning: return type defaults to ‘int’ [-Wimplicit-int]
 DIT_&1?'-':'.';}__DIT DIT   DIT_ DAH _DAHDIT
                 ^
hague.c: In function ‘__DIT’:
hague.c:28:20: warning: implicit declaration of function ‘write’ [-Wimplicit-function-declaration]
 DIT_;{DIT void DAH write DIT   1,&DIT_,1 DAH;}
                    ^
/tmp/ccG1Yh1A.o: In function `main':
hague.c:(.text+0x14a): warning: the `gets' function is dangerous and should not be used.
julien@ubuntu:~/c/ioccc$ ./h 
Hello, Holberton
.... . .-.. .-.. --- --..-- ? .... --- .-.. -... . .-. - --- -. 
julien@ubuntu:~/c/ioccc$ 
```
