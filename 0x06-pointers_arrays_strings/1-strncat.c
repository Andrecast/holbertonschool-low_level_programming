#include "holberton.h"
/**
 * _strncat - function that concatenate two strings
 * @dest: array of destiny
 * @src: string to add
 * @n: number of bytes
 * Return: suma
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len = 0;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
