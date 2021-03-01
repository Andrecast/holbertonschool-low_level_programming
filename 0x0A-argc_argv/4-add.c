#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
* main - program that prints all arguments it receives
* @argc: argument count
* @argv: argument vector
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i = 0, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++) /* recorre el array */
	{
		int a;

		for (a = 0; argv[i][a] != '\0'; a++)  /*recorre cada string del array*/
		{
			if (!isdigit(argv[i][a]))/*valida si en algun string hay una letra*/
			{
			printf("Error\n");
			return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
