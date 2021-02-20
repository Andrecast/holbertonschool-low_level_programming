#include "holberton.h"
/**
 * leet - function that encodes a string into 1337
 * @str: string
 * Return: 0
 */
char *leet(char *str)
{
	char min[] = {97, 101, 111, 116, 108};
	char may[] = {65, 69, 79, 84, 76};
	char num[] = {52, 51, 48, 55, 49};
	int i, b;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (b = 0; min[b] && may[b] != '\0'; b++)
		{
			if (str[i] == min[b] || str[i] == may[b])
			{
				str[i] = num[b];
				break;
			}
		}
	}
	return (str);
}
