#include "holberton.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: string
 * return: 0
 */
void puts2(char *str)
{
	int cont;

	for (cont = 0; str[cont] != '\0'; cont++)
	{
		if (cont % 2 == 0)
		{
			_putchar(str[cont]);
		}
	}
	_putchar('\n');
}
