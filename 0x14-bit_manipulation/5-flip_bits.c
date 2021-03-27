#include "holberton.h"
/**
 * flip_bits -  returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first number
 * @m: Second number
 * Return: number of bits you would need to
 * flip to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = 0, sum = 0;
	int index;

	res = n ^ m;
	for (index = 0; index < 64; index++)
	{
		if (((res >> index) & 1) == 1)
			sum++;
	}
return (sum);
}
