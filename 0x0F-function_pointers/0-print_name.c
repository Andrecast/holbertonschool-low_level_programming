#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Function that prints a name
 * @name: Name to print
 * @f: Pointer to the function
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
/*f es un puntero a las dos funciones en 0-main.c*/
{
	if (f != NULL && name != NULL)
	f(name);/*imprima la variable name de ambas funciones*/
}
