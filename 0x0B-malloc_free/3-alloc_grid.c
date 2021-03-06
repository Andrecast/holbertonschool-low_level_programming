#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - Function returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: 0 - NULL or pointer
 */

int **alloc_grid(int width, int height)
{
	int **array2d;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array2d = malloc(height * sizeof(int *));
	if (array2d == NULL)
		return (NULL);
	for (i = 0; i <  height; i++)
	{
		array2d[i] = malloc(width * sizeof(int));
		if (array2d[i] == NULL)
		{
			for (; i >= 0; i--)
				free(array2d[i]);
			free(array2d);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
			array2d[j][i] = 0;
	}
	return (array2d);
}
