#include "holberton.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array
 * @n: integer
 * Return: 0
 */
void reverse_array(int *a, int n)
{
int len, c[500];

for (len = 0; len < n; len++)
{
	c[n - 1 - len] = a[len];
}
for (len = 0; len < n; len++)
{
	a[len] = c[len];
}
}
