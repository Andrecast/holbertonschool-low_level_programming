#include "holberton.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: string
 * Return: '\0'
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b, c = 0;

	if (needle[0] == '0')
		return (0);
	for (a = 0; haystack[a] != '\0'; a++)
	{
		if (haystack[a] == needle[0])
		{
			for (b = 1; needle[b] != '\0'; b++)
			{
				if (haystack[a + b] == needle[b])
					c++;
			}
			if (c == b - 1)
				return (haystack + a);
		}
	}
	return (0);
}
