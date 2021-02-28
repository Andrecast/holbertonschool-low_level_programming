#include "holberton.h"
/**
 * _memset - function that fills memory with a constant byte
 *@s: matrix
 *@b: byte which is constant
 *@n: number of bytes to fill
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
