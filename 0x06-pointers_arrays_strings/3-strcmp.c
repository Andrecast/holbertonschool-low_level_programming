#include "holberton.h"
/**
 * _strcmp - function that compares two strings
 * @s1: string
 * @s2: string
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	int len;

	for (len = 0; len < s1[len] && s2[len] != '\0'; len++)
	{
		if (s1[len] != s2[len])
		{
			return (s1[len] - s2[len]);
		}
	}
	return (0);
}
