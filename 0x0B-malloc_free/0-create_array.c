#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: specific char
 * Return: NULL or the pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *chars;

	chars = malloc(sizeof(char) * size);/*asigno el tamaño*/
	/*en memoria para el puntero*/

	if (size == 0)
		return (NULL);
	if (chars == NULL)
		return (NULL);
	for (i = 0; i < size; i++)/*q me recorra el array chars*/
		chars[i] = c;/*y que le ponga c en todas las posiciones*/
	return (chars);
}
