#include "holberton.h"
/**
 * _strncat - function that concatenate two strings
 * @dest: string of destiny
 * @src: string to add
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int src_len, dest_len = 0;

	for (; dest[dest_len] != 0; dest_len++)
	{}
	for (src_len = 0 ; src_len < n && src[src_len] != '\0' ; src_len++)
		dest[dest_len + src_len] = src[src_len];
	dest[dest_len + src_len] = '\0';
	return (dest);
}

