#include<stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Function that sums all the numbers in the arguments
 *@n: number of arguments
 *Return: the sum of all the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, arg;
	unsigned int i = 0;
	va_list arguments;

	va_start(arguments, n);
	if (!n)
		return (0);
	while (i < n)
	{
		arg = va_arg(arguments, int);
		sum += arg;
		i++;
	}
	va_end(arguments);
	return (sum);
}
