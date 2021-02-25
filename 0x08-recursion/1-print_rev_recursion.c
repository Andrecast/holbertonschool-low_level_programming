#include "holberton.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == 00)/*si el elemento es el nulo*/
	{
		return;/*salga*/
	}
	else
	_print_rev_recursion(s + 1);/*se devuelve*/
_putchar(*s);
}
