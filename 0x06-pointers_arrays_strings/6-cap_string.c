#include "holberton.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @str: string
 * Return: 0
 */
char *cap_string(char *str)
{
	int a, b;
	char aux[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; aux[b] != '\0'; b++)
		{
			if (str[0] >= 97 && str[0] <= 122)/*Lee sólo la letra*/
			/*inicial de cada palabra de la a a la z*/
			{
				str[0] = str[0] - 32;/*restele 32 para volverlo mayuscula*/
			}
			else if (str[a] == aux[b] && str[a + 1] >= 97 && str[a + 1] <= 122)
			{
				str[a + 1] = str[a + 1] - 32;
			}
	}
}
	return (str);
}
