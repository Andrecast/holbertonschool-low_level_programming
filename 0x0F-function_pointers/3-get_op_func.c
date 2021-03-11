#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - This function selects the correct function to perform the
 * operation asked by the user.
 * @s: The operation asked by the user.
 * Return: A pointer to the function that corresponds to the operator
 * given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int j;

	j = 0;
	while (ops[j].op != NULL)
	{
		if (strcmp(s, ops[j].op) == 0)
		{
			return (ops[j].f);
		}
		j++;
	}
	return (NULL);
}
