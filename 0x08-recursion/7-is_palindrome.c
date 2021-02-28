#include "holberton.h"
/**
 * is_palindrome - function that look for if a string is a palindrome
 * @s: string
 * Return: 1 or 0
 */
int aux_is_palindrome(int a, int b, char *s);
int is_palindrome(char *s)
{
	int l, n = 0;

	l = _strlen_recursion(s);
	return (aux_is_palindrome(n, l - 1, s));
}

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}

/**
 * aux_is_palindrome - auxiliar function that look for if a string
 * is a palindrome
 * @a: counter
 * @b: length
 * @s: input
 * Return: 1 if the number is prime otherwise return 0
 */

int aux_is_palindrome(int a, int b, char *s)
{
	if (s[a] == s[b] && b > 0)
		return (aux_is_palindrome(a + 1, b - 1, s));
	if (b == 0)
		return (1);
	return (0);
}
