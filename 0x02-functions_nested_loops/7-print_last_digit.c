#include "holberton.h"
/**
*print_last_digit - print last digit of a number
*@v: integer
*Return: y%10
*/
int print_last_digit(int v)
{
	int y;

	y = v % 10;
	if (v < 0)
		y = -y;
	_putchar(y + '0');
	return (y);
}
