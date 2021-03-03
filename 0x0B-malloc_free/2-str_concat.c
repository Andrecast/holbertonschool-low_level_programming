#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Function that concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: completa
 */

char *str_concat(char *s1, char *s2)
{
	char *completa;
	int lens1 = 0, lens2 = 0, i;

	while (s1[lens1] != '\0')
		lens1++;

	while (s2[lens2] != '\0')
		lens2++;

	completa = malloc(sizeof(char) * (lens1 + lens2 + 1));

	if (completa == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; i < lens1; i++)/*primero se llena con s1*/
		completa[i] = s1[i];

	for (i = 0; i <= lens2; i++)
		completa[lens1 + i] = s2[i];/*luego se le añade s2 desde la posición 0*/

	return (completa);
}
