#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Function that prints a name
 * @name: Name to print
 * @f: Pointer to the function
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	f(name);
}
