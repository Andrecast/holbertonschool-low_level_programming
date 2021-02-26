#include "holberton.h"
/**
 * is_prime_number - function that recognizes if a number is prime
 * @n: input
 * Return: 1 or 0
 */
int another_function(int n, int b);

int is_prime_number(int n)
{
	int i;

	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	if (n == 0)
		return (0);
	i = another_function(n, 2);
	return (i);
}

/**
 * another_function - auxiliar function
 * @b: counter
 * @n: input
 * Return: 1 or 0
 */

int another_function(int n, int b)
{
	if (n % b == 0 && n == b)
		return (1);
	else if (n % b == 0 && n != b)
		return (0);
	return (another_function(n, b + 1));
}
