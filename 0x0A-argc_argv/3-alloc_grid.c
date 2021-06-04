#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k;

	if (width <= 0 || height <= 0)/*ni el alto ni el ancho deben ser 0*/
		return (NULL);

	grid = malloc(sizeof(int *) * height);/*asignación de memoria*/

	if (grid == NULL)/*si es NULL libere la memoria y retorne NULL*/
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		/*asignación de memoria en la otra dimension*/
		if (grid[i] == NULL)
		{
			for (k = 0; k <= i; k++)
			{
				free(grid[k]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)/*lleno la matriz con 0's*/
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
