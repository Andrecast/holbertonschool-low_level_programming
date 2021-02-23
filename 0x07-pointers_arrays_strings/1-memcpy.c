#include "holberton.h"
/**
 * _memcpy - function that copies memory area
 * @dest: destiny array
 * @src: source array
 * @n: bytes to copy
 * Return: dest (that is the copy of source array)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

	for (a = 0; a < n; a++)
	{
		src[a] = dest[a];
	}
	return (dest);
}
