#include "holberton.h"
/**
 * get_bit - returns the bit of a specific postion (index)
 * @n: The number to be converted into binary
 * @index: the binary requested position
 *Return: number in binary
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int number;

	if (index > 31) /* si son mas de 32 bits*/
		return (-1);
	number = n >> index;
	return (number & 1);
}
