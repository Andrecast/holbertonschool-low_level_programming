#include "holberton.h"
/**
 * print_binary - Function that prints the binary representation of a number
 * @n: The number to be converted into binary
 *Return: binary number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((48 + (n & 1)));
}
