#include "holberton.h"
/**
 * puts_half - function that prints half of a string
 * @str: string
 * return: 0
 */
void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{}
	if (a % 2 == 0)
	{
		for (a /= 2; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}
	else
	{
		for ((a = (a - 1) / 2); str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}



