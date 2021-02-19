#include "holberton.h"
/**
 * _strncpy - function that copies a string
 * @dest: string
 * @src: string
 * @n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len;

	for (len = 0; len < n && src[len] != '\0'; len++)
		dest[len] = src[len];
	for ( ; len < n; len++)
		dest[len] = '\0';
	return (dest);
}
