#include "holberton.h"
/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: string
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s != 00)/*recorre el string hasta antes del nulo*/
	{
		_putchar(*s);/*va imprimiendo los elementos del string*/
		_puts_recursion(++s);/*vuelveaejecutar la función en la siguiente posicion*/
	}
	else
	{
		_putchar(10);/*sino, imprime nueva línea*/
	}
}
