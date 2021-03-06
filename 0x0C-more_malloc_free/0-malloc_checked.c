#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: input integer
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
void *pointer;
pointer = malloc(b); /*se declara un puntero*/
/*sin nigun tipo de dato especifico*/
	if (pointer == NULL)
	{
		exit(98);
	}
return (pointer);
}
