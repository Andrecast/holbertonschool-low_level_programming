#include "holberton.h"
#include <stdlib.h>

/**
 *_calloc - creates a string of nmemb long and size int
 *@nmemb: number of elements
 *@size: size
 *Return: a pointer to the tring
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == 0)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		pointer[i] = 0;
return (pointer);
}
