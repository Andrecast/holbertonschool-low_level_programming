#include "holberton.h"
#include "2-strlen.c"
/**
 * print_rev - function that prints a string, in reverse
 * _strlen - function that prints the lenght of a string
 * @s: pointer to a string
 * return: 0
 */
void print_rev(char *s)
{
	int p = 0;

for (p = _strlen(s); p > 0; --p)
{
	_putchar(s[p]);
}
_putchar ('\n');
}
