#include "holberton.h"
/**
 * _strspn - funtion that locates a character in a string
 * @accept: string, pointer
 * @s: char
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;

	c = 0;
	for (a = 0; s[a] != '\0' && s[a] != 32; b++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;/*guarda el conteo*/
			}
		}
	}
	return (c);
}
