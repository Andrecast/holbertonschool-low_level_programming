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
## Tasks

### 0. Django
Define a new type  `struct dog`  with the following elements:

-   `name`, type =  `char *`
-   `age`, type =  `float`
-   `owner`, type =  `char *`

### 1. A dog is the only thing on earth that loves you more than you love yourself

mandatory

Write a function that initialize a variable of type  `struct dog`

-   Prototype:  `void init_dog(struct dog *d, char *name, float age, char *owner);`
- 
### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

mandatory

Write a function that prints a  `struct dog`

-   Prototype:  `void print_dog(struct dog *d);`
-   Format: see example bellow
-   You are allowed to use the standard library
-   If an element of  `d`  is  `NULL`, print  `(nil)`  instead of this element. (if  `name`  is  `NULL`, print  `Name: (nil)`)
-   If  `d`  is  `NULL`  print nothing.

### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

mandatory

Define a new type  `dog_t`  as a new name for the type  `struct dog`

### 4. A door is what a dog is perpetually on the wrong side of

mandatory

Write a function that creates a new dog.

-   Prototype:  `dog_t *new_dog(char *name, float age, char *owner);`
-   You have to store a copy of  `name`  and  `owner`
-   Return  `NULL`  if the function fails

### 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

mandatory

Write a function that frees dogs.

-   Prototype:  `void free_dog(dog_t *d);`
