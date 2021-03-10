#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * @array: input array
 * @size: array size
 * @action: pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (action != NULL && array != NULL)
		for (j = 0; j < size; j++)
			action(array[j]);
}
