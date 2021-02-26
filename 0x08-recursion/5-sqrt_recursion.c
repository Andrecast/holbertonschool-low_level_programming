#include "holberton.h"
#include <stdio.h>

int another_funtion(int a, int b);

/**
 * _sqrt_recursion - returns the value of x raised to the power of y
 * @n: base
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	int a = 0;

	return (another_funtion(a, n));
}

/**
 * another_funtion - auxiliar
 * @a: Varibale to operate
 * @b: entry
 * Return: 0
 */

int another_funtion(int a, int b)
{

	if (a * a == b)
	{
		return (a);
	}
	if (a * a > b)
	{
		return (-1);
	}

	return (another_funtion(a + 1, b));
}
