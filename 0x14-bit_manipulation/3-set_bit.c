#include "holberton.h"
/**
 * set_bit - Function that sets the bit of a specific postion (index) to 1
 * @n: The given number
 * @index: the binary requested position
 *Return: 1 on success, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int number = 0, *ptr;

	number = (1 << index);
	ptr = &number;
	if (index > 31)
	{
		return (-1);
	}
	*n = *n | *ptr;
	return (1);
}
