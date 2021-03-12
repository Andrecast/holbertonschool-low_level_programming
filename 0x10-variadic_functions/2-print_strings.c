#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Function that prints strings
 *@n: number of arguments
 *@separator: separator of characters between strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list string;

	va_start(string, n);
		while (i < n)
		{
			if (string == NULL)
				printf("(nil)");
			else
			{
				printf("%s", va_arg(string, char *));
				if ((i != (n - 1)) && (separator != NULL))
					printf("%s", separator);
			}
			i++;
		}
	printf("\n");
	va_end(string);
}
