#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @ac: Number of arguments
 * @av: arguments
 * Return: 0 (Success)
 */
int main(int ac, char *av[])
{
	int i, j, result;
	int (*p)(int a, int b);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	p = get_op_func(av[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	i = atoi(av[1]);
	j = atoi(av[3]);
	if (*av[2] == '/' || *av[2] == '%')
	{
		if (j == 0)
		{
			printf("Error\n");
			exit(100);
		}
	}
	result = (*get_op_func(av[2]))(i, j);
	printf("%d\n", result);
	return (0);
}
