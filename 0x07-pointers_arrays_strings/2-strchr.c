#include "holberton.h"
#include <stdio.h>

/**
 *_strchr - function that locates a character in a string
 *@s: string, pointer
 *@c: character to find
 *Return: t or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != 00)
		s++;

	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (0);
	}
}
