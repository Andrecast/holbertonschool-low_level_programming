#include "holberton.h"
#include <stdio.h>
/**
 * *_strcpy - function that copies and paste a string
 * @dest: string de destino
 * @src: string de orien
 * return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0, b;

	while (src[a] != '\0')
		a++;
	for (b = 0; b < a; b++)
		dest[b] = src[b];
	dest[b] = '\0';
	return (dest);
}
