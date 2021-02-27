#include <stdio.h>
/**
* main - program that prints the number of arguments passed into it
* @argc: argument count
* @argv: argument vector
* Return: 0
*/
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		(void)argv;
	}
	printf("%d \n", j - 1);
	return (0);
}
