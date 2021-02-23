#include "holberton.h"

/**
 *_strchr - function that locates a character in a string
 *@s: string
 *@c: character
 *Return: 0
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] != '\0'; a++)/*recorre el string, antes del nulo*/
	{
		if (s[a] == c)
		{
			return (&s[a]);/*retorna el puntero, cuando encuentra c*/
		}
	}
	return ('\0');/* retorna NULL si no encuentra la c*/
}
