#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: array
 * @size: array
 */

void print_diagsums(int *a, int size)
{
	int i, x, sum1 = 0, sum2 = 0, n = size * size;

	for (i = 0 ; i < n; i = i + (size + 1))
		sum1 = sum1 + a[i];
	for (x = size - 1; x <= n - size; x = x + (size - 1))
		sum2 = sum2 + a[x];
	printf("%d, %d\n", sum1, sum2);
}
