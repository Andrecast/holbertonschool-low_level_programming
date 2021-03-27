#include "holberton.h"
/**
 * clear_bit - sets the bit of a specific postion (index) to 0
 * @n: The given number
 * @index: the binary requested position
 *Return: 1 on success, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	if (*n & 1 << index)
		*n = *n ^ 1 << index;
	return (1);
}
