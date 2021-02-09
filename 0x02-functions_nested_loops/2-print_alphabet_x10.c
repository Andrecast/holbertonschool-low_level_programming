#include "holberton.h"
/**
*main - Entry poit
*
*print_alphabet_x10 - Print the alphabet
*/

void print_alphabet_x10(void)
{
int x;
char l;
for (x = 0; x >= 9; x++)
{
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
_putchar('\n');
}
}
