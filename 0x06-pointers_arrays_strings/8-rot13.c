#include "holberton.h"
/**
 * rot13 - function that encodes a string using rot13
 * @str: string
 * Return: 0
 */
char *rot13(char *str)
{
	char alph[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char encode[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
	int a, e;

	for (a = 0; str[a] != '\0'; a++)
	{
		for (e = 0; alph[e] != '\0'; e++)
		{
			if (str[a] == alph[e])
			{
				str[a] = encode[e];
				break;
			}
		}
	}
	return (str);
}
