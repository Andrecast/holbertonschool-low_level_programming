#include "holberton.h"
/**
 * puts_half - function that prints half of a string
 * @str: string
 * return: 0
 */
void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++) /*recorre el string*/
	{}
	if (a % 2 == 0) /*si es par*/
	{
		for (a /= 2; str[a] != '\0'; a++) /*tome la longitud del str*/
		{                                 /*y dividala a la mitad*/
			_putchar(str[a]);
		}
	}
	else
	{
		for (a = (a - ((a - 1) / 2)); str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
