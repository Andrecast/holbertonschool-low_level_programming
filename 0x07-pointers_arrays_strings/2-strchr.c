#include "holberton.h"
#include <stdio.h>

/**
 *_strchr - function that locates a character in a string
 *@s: string
 *@c: character to find
 *Return: t
 */

char *_strchr(char *s, char c)
{
	int a = 0, b;
	char *t = NULL;

	while (s[a] != '\0')
		a++;
	for (b = 0; b <= a; b++)
	{
		if (s[b] == c)
		{
			t = s + b;
			break;
		}
	}
	return (t);
}
