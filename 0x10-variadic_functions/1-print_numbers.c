#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Function that print numbers
 *@n: number of arguments
 *@separator: sepator of characters between numbers
 *Return: the sum of all the arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arguments;

	va_start(arguments, n);
	if (separator == NULL)
	{
		while (i < n)
		{
			printf("%d", va_arg(arguments, int));
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			printf("%d", va_arg(arguments, int));
			if (i != (n - 1))
				printf("%s", separator);
			i++;
		}
	}
	printf("\n");
	va_end(arguments);
}
