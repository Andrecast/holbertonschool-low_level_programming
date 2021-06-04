#include "holberton.h"
/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: pointer to a string
 * Return: 0
 */
void _puts(char *str)
{
	int p;

	for (p = 0; str[p] != '\0'; p++)
	{
		_putchar (str[p]);
	}
	_putchar ('\n');
}
