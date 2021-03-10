#include "function_pointers.h"
/**
 * print_name - Function that prints a name
 * @name: Name to print
 * @f: Pointer to the function
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
