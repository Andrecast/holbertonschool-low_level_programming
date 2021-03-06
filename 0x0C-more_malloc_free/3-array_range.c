#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int x, y = 0, *pointer, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	pointer = malloc(len * sizeof(int));

	if (pointer == NULL)
		return (NULL);

	for (x = min; x <= max; x++)
	{
		pointer[y] = x;
		y++;
	}

	return (pointer);
}
