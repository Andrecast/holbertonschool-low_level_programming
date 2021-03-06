#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - Funtion that concatenates all the arguments
 * @ac: int
 * @av: double pointer
 * Return: pointer or NULL
 */
char *argstostr(int ac, char **av)
{
	int a = 0;
	int b = 0, c = 0, d = 1, e = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (a < ac)
	{
		d = d + len_str(av[a]);
		a++;
	}
	concat = malloc((d + ac) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	while (b < ac)
	{
		c = 0;
		while (c < len_str(av[b]))
		{
			if (e < d + (ac - 1))
			{
				concat[e] = av[b][c];
			}
			e++;
			c++;
		}
		concat[e] = '\n';
		e++;
		b++;
	}
	concat[d + ac - 1] = '\0';
	return (concat);
}

/**
 * len_str - length arguments
 * @s: pointer
 * Return: c
 */
int len_str(char *s)
{
	int f = 0;

	while (s[f] != '\0')
	{
		f++;
	}
	return (f);
}
