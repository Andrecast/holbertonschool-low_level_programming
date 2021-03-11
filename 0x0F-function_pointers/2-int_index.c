#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - function that searches for an integer
 * @array: input array
 * @size: array size
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (cmp != NULL && array != NULL)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))/*si se cumple cada función*/
				return (i);
		}
	return (-1);/* si no se cumplen las funciones retorne -1*/
}
