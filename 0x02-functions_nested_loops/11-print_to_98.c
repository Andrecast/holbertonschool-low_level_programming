#include "holberton.h"
#include <stdio.h>
/**
*print_to_98 - print since n to 98
*@n: any number
*/

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			if (i <= 97)
			{
				printf("%i, ", i);
			}
			else
			{
				printf("%i", i);
			}
		}
	}
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			if (i > 98)
			{
				printf("%i, ", i);
			}
			else
			{
				printf("%i", i);
			}
		}
	}
	else if (n == 98)
	{
		printf("%i", n);
	}
	printf("\n");
}

