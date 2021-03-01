#include <stdio.h>
/**
* main - program that prints the number of arguments passed into it
* @argc: argument count
* @argv: argument vector
* Return: 0
*/
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		(void)argv;
	}
	printf("%d\n", argc - 1);
	return (0);
}
