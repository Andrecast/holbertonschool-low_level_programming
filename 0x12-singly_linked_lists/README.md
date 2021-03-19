# 0x12. C - Singly linked lists

-   Foundations - Low-level programming & Algorithm ― Data structures and Algorithms
-   By Julien Barbier, co-founder & CEO at Holberton School

## Concepts

_For this project, students are expected to look at this concept:_

-   [Data Structures](https://intranet.hbtn.io/concepts/120)

## Resources

**Read or watch**:

-   [Linked Lists](https://intranet.hbtn.io/rltoken/2WOe5XO84Puxd4Y1FUJwVQ "Linked Lists")
-   [Google](https://intranet.hbtn.io/rltoken/jiyCC9L1Axkl_nEmuh4j3w "Google")
-   [Youtube](https://intranet.hbtn.io/rltoken/DcEVPdONWy2p1x8XPH53Uw "Youtube")

## Learning Objectives

At the end of this project, you are expected to be able to  [explain to anyone](https://intranet.hbtn.io/rltoken/XpKKexlcPAQCuAFmEDiu9Q "explain to anyone"),  **without the help of Google**:

### General

-   When and why using linked lists vs arrays
-   How to build and use linked lists

## More Info

Please use this data structure for this project:

```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```
## Tasks

### 0. Print list

mandatory

Write a function that prints all the elements of a  `list_t`  list.

-   Prototype:  `size_t print_list(const list_t *h);`
-   Return: the number of nodes
-   Format: see example
-   If  `str`  is  `NULL`, print  `[0] (nil)`
-   You are allowed to use  `printf`

### 1. List length

mandatory

Write a function that returns the number of elements in a linked  `list_t`  list.

-   Prototype:  `size_t list_len(const list_t *h);`

### 2. Add node

mandatory

Write a function that adds a new node at the beginning of a  `list_t`  list.

-   Prototype:  `list_t *add_node(list_t **head, const char *str);`
-   Return: the address of the new element, or  `NULL`  if it failed
-   `str`  needs to be duplicated
-   You are allowed to use  `strdup`

### 3. Add node at the end

mandatory

Write a function that adds a new node at the end of a  `list_t`  list.

-   Prototype:  `list_t *add_node_end(list_t **head, const char *str);`
-   Return: the address of the new element, or  `NULL`  if it failed
-   `str`  needs to be duplicated
-   You are allowed to use  `strdup`

### 4. Free list

mandatory

Write a function that frees a  `list_t`  list.

-   Prototype:  `void free_list(list_t *head);
