#include "holberton.h"
/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * @a: string
 * Return: a
 */
char *string_toupper(char *a)
{
	int ind;

	for (ind = 0; a[ind] != '\0'; ind++)
	{
		if (a[ind] >= 'a' && a[ind] <= 'z')
		{
			a[ind] -= 32;
		}
	}
	return (a);
}
