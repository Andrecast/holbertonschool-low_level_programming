#include <stdlib.h>
#include "holberton.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the first n bytes of s2
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int len1, len2, x, y;

	y = 0;
	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{}
	if (n >= len2)
		n = len2;
	pointer = malloc(sizeof(*pointer) * (len1 + n + 1));
	if (pointer == NULL)
		return (NULL);
	for (x = 0; x < len1; x++)
		pointer[x] = s1[x];
	for (x = len1; x < len1 + n; x++)
	{
		pointer[x] = s2[y];
		y++;
	}
	pointer[len1 + n] = '\0';
	return (pointer);
}
