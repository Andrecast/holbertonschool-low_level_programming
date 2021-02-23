#include "holberton.h"

/**
 *_strchr - function that locates a character in a string
 *@s: string
 *@c: character
 *Return: 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)/*recorre el string, antes del nulo*/
	{
		if (s[i] == c)
		{
			return (&s[i]);/*retorna el puntero, cuando encuentra c*/
		}
	}
	return ('\0');/* retorna NULL si no encuentra la c*/
}
