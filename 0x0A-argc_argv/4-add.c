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
	for (i = 1; i < argc; i++)
	{
		int a;

		for (a = 0; argv[i][a] != '\0'; a++)  /*recorre el string*/
		{
			if (!isdigit(argv[i][a]))
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
