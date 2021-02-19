#include "holberton.h"
/**
 * _strcat - function that concatenate two strings
 * @dest: array of destiny
 * @src: string to add
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int cont_dest, cont_src;

	for (cont_dest = 0; dest[cont_dest] != '\0'; cont_dest++)
	{}
	for (cont_src = 0; src[cont_src] != '\0'; cont_src++)
	{
		dest[cont_dest + cont_src] = src[cont_src]; /*concatena y envía a src*/
	}
	dest[cont_dest + cont_src] = '\0';
	return (dest);
}


