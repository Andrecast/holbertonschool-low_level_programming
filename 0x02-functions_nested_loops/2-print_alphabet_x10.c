#include "holberton.h"
/**
*print_alphabet_x10 - Print the alphabet
*Description: use loops
*Return: void
*/

void print_alphabet_x10(void)
{
char x;
char l;
for (x = '0'; x <= '9'; x++)
{
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
_putchar('\n');
}
}
