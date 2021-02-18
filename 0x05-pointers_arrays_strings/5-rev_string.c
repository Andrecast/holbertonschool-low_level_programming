#include "holberton.h"
#include "2-strlen.c"
#include "_putchar.c"
/**
 * rev_string - function that reverses a string
 * _strlen - function that prints the lenght of a string
 * @s: string
 * return: 0
 */
void rev_string(char *s)
{
	int x;

	for (x = _strlen(s); x > 0; x--)
		_putchar (s[x - 1]);
}
