#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string given as a parameter
 * Return: NULL or the pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *copy;
	int i = 0, j;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')/*Me recorre el string, para saber su tamaño*/
		i++;

	copy = malloc(sizeof(char) * (i + 1));/*va asignando la misma cantidad*/
	/*memoria que tiene str, i + 1 porque en i=0 no asignaría nada*/

	if (copy == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)/*es la forma de copiar un string en otro*/
		copy[j] = str[j];

	return (copy);
}
