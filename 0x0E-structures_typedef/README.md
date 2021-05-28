# 0x0E. C - Structures, typedef

-   Foundations - Low-level programming & Algorithm ― Hatching out
-   By Julien Barbier, co-founder & CEO at Holberton School
- 
## Resources

**Read or watch**:

-   [0x0d. Structures.pdf](https://intranet.hbtn.io/rltoken/Rc1JAo6IS9HkELfLUylh2g "0x0d. Structures.pdf")
-   [struct (C programming language)](https://intranet.hbtn.io/rltoken/sF_gQY2e9CP95XbgWQkduA "struct (C programming language)")
-   [Documentation: structures](https://intranet.hbtn.io/rltoken/7VySR2oMyxk7VMR8LLOvZA "Documentation: structures")
-   [0x0d. Typedef and structures.pdf](https://intranet.hbtn.io/rltoken/kef9P9qRh_co4dxwHU8QGA "0x0d. Typedef and structures.pdf")
-   [typedef](https://intranet.hbtn.io/rltoken/-vbMNPFrIA5PcVs4RiWr4g "typedef")
-   [Programming in C](http://images.textbooks.com/TextbookInfo/Covers/0321776410.gif "Programming in C")  (_Chapter 8, Working with Structures p163-189_)
-   [The Lost Art of C Structure Packing](https://intranet.hbtn.io/rltoken/92gDeb3TtzgLDpzo9DXfZg "The Lost Art of C Structure Packing")  (_Advanced - not mandatory_)

## Learning Objectives

At the end of this project, you are expected to be able to  [explain to anyone](https://intranet.hbtn.io/rltoken/I_tsvWO9Fe7IGfMrvbxw2w "explain to anyone"),  **without the help of Google**:

### General

-   What are structures, when, why and how to use them
-   How to use  `typedef`
- 


## Quiz questions

#### Question #0

You should write documentation for all the structures you create

x   True
    
-   I’ll do it 5 minutes before the deadline when I try Betty on my header file
    
x   As soon as I write my structure.
    

#### Question #1

The general syntax for a struct declaration in C is:

```
struct tag_name {
   type member1;
   type member2;
   /* declare as many members as desired, but the entire structure size must be known to the compiler. */
};

```

x   True
    
-   False
    
-   Maybe
    

#### Question #2

Those two codes do the same thing:

```
typedef struct point point;
struct point {
   int    x;
   int    y;
};
point p = {1, 2};

```

```
typedef struct point point;
struct point {
   int    x;
   int    y;
};
point p = { .y = 2, .x = 1 };

```

x   True
    
-   False: the second does not compile
    
-   False: the members of the structures will not have the same values
    

#### Question #3

Given this code:

```
struct point {
   int x;
   int y;
};
struct point my_point = { 3, 7 };
struct point *p = &my_point;

```

To set the member y of my variable my_point to 98, I can do (select all valid answers):

x   my_point.y = 98;
    
-   my_point->y = 98;
    
-   p.y = 98;
    
x   (*p).y = 98;
    
x   p->y = 98;
    

## Tasks

### 0. Poppy

mandatory

Score:  100.00%  (Checks completed: 100.00%)

![](https://holbertonintranet.s3.amazonaws.com/uploads/medias/2021/3/3b534d73d79949ef8b7535d462014518256953f2.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210528%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20210528T185546Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=52c72f7dcc3d4762705002ea8bfae5cd903e1028f976ba51d698598a8c407d47)

Define a new type  `struct dog`  with the following elements:

-   `name`, type =  `char *`
-   `age`, type =  `float`
-   `owner`, type =  `char *`

```
julien@ubuntu:~/0x0d. structures, typedef$ cat 0-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0d. structures, typedef$ ./a 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 

```

**Repo:**

-   GitHub repository:  `holbertonschool-low_level_programming`
-   Directory:  `0x0E-structures_typedef`
-   File:  `dog.h`

Done!  Help  Re-check your code  Get a sandbox  QA Review

### 1. A dog is the only thing on earth that loves you more than you love yourself

mandatory

Score:  100.00%  (Checks completed: 100.00%)

![](https://holbertonintranet.s3.amazonaws.com/uploads/medias/2021/3/cdd1d618025642db8f78dac0809f1e4b0a5449f6.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210528%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20210528T185546Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=60312964576c98772c3eb0368be024880c4eeda86a8f4debcf776fa6de76876d)

Write a function that initialize a variable of type  `struct dog`

-   Prototype:  `void init_dog(struct dog *d, char *name, float age, char *owner);`

```
julien@ubuntu:~/0x0d. structures, typedef$ cat 1-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b
julien@ubuntu:~/0x0d. structures, typedef$ ./b 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 

```

**Repo:**

-   GitHub repository:  `holbertonschool-low_level_programming`
-   Directory:  `0x0E-structures_typedef`
-   File:  `1-init_dog.c`

Done!  Help  Re-check your code  Get a sandbox  QA Review

### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

mandatory

Score:  100.00%  (Checks completed: 100.00%)

![](https://holbertonintranet.s3.amazonaws.com/uploads/medias/2021/3/bb940d2ab10c3a4740f3c154cb980133e65e438e.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210528%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20210528T185546Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=5b659c739d76e7dc0471690dd705d12dd7bd576ff4b2f0cbfef7167c49a688c5)

Write a function that prints a  `struct dog`

-   Prototype:  `void print_dog(struct dog *d);`
-   Format: see example bellow
-   You are allowed to use the standard library
-   If an element of  `d`  is  `NULL`, print  `(nil)`  instead of this element. (if  `name`  is  `NULL`, print  `Name: (nil)`)
-   If  `d`  is  `NULL`  print nothing.

```
julien@ubuntu:~/0x0d. structures, typedef$ cat 2-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c
julien@ubuntu:~/0x0d. structures, typedef$ ./c 
Name: Poppy
Age: 3.500000
Owner: Bob
julien@ubuntu:~/0x0d. structures, typedef$ 

```

**Repo:**

-   GitHub repository:  `holbertonschool-low_level_programming`
-   Directory:  `0x0E-structures_typedef`
-   File:  `2-print_dog.c`

Done!  Help  Re-check your code  Get a sandbox  QA Review

### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

mandatory

Score:  100.00%  (Checks completed: 100.00%)

![](https://holbertonintranet.s3.amazonaws.com/uploads/medias/2021/3/9ef84b3fd1636992602868e45d3062719326de0e.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210528%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20210528T185546Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=87d1f9d27afba81b83b8a1353cb6ebf4764547c124eebcaabfadd4df8c64910f)

Define a new type  `dog_t`  as a new name for the type  `struct dog`.

```
julien@ubuntu:~/0x0d. structures, typedef$ cat 3-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
julien@ubuntu:~/0x0d. structures, typedef$ ./d 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 

```

**Repo:**

-   GitHub repository:  `holbertonschool-low_level_programming`
-   Directory:  `0x0E-structures_typedef`
-   File:  `dog.h`

Done!  Help  Re-check your code  Get a sandbox  QA Review

### 4. A door is what a dog is perpetually on the wrong side of

mandatory

Score:  100.00%  (Checks completed: 100.00%)

![](https://holbertonintranet.s3.amazonaws.com/uploads/medias/2021/3/8c1e394774fb8d25e0bbbb73a75ebc7de0c80745.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210528%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20210528T185546Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=643d1d7b4a40e8f7bc7db30995c2236f83cd132236566cf3e465db87123a26b3)

Write a function that creates a new dog.

-   Prototype:  `dog_t *new_dog(char *name, float age, char *owner);`
-   You have to store a copy of  `name`  and  `owner`
-   Return  `NULL`  if the function fails

```
julien@ubuntu:~/0x0d. structures, typedef$ cat 4-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e
julien@ubuntu:~/0x0d. structures, typedef$ ./e
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 

```

**Repo:**

-   GitHub repository:  `holbertonschool-low_level_programming`
-   Directory:  `0x0E-structures_typedef`
-   File:  `4-new_dog.c`

Done!  Help  Re-check your code  Get a sandbox  QA Review

### 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

mandatory

Score:  100.00%  (Checks completed: 100.00%)

![](https://holbertonintranet.s3.amazonaws.com/uploads/medias/2021/3/683112dbdd805c36a9b366cede0653dd80da5ec3.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210528%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20210528T185546Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=bae5edd3e8bafa15e57e023a3c6c681d177fbe01af15d07e727e15bb8e00db11)

Write a function that frees dogs.

-   Prototype:  `void free_dog(dog_t *d);`

```
julien@ubuntu:~/0x0d. structures, typedef$ cat 5-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f
julien@ubuntu:~/0x0d. structures, typedef$ valgrind ./f
==22840== Memcheck, a memory error detector
==22840== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22840== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22840== Command: ./f
==22840== 
My name is Poppy, and I am 3.5 :) - Woof!
==22840== 
==22840== HEAP SUMMARY:
==22840==     in use at exit: 0 bytes in 0 blocks
==22840==   total heap usage: 4 allocs, 4 frees, 1,059 bytes allocated
==22840== 
==22840== All heap blocks were freed -- no leaks are possible
==22840== 
==22840== For counts of detected and suppressed errors, rerun with: -v
==22840== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x0d. structures, typedef$ 

```

**Repo:**

-   GitHub repository:  `holbertonschool-low_level_programming`
-   Directory:  `0x0E-structures_typedef`
-   File:  `5-free_dog.c`
