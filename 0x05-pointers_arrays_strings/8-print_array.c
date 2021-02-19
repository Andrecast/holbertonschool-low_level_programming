#include "holberton.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers
 * @a: Array
 * @n: number of elements from the array
 * Return: 0
 */
void print_array(int *a, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		printf("%d", a[len]);
		if (len != n - 1)
		printf(", ");
	}
	printf("\n");
}

