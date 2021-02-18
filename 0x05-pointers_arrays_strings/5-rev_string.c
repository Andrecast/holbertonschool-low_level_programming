#include "holberton.h"
/**
 * rev_string - function that reverses a string
 * @s: string
 * return: 0
 */
void rev_string(char *s)
{
	char v[1000];
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		v[a] = s[a];
	}
	a--;
	for (b = 0; a >= 0; a--)
	{
		s[b] = v[a];
		b++;
	}
}
