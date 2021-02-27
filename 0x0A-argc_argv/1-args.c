#include <stdio.h>
/**
* main - program that prints the number of arguments passed into it
* @argc: argument count
* @argv: argument vector
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		(void)argv;
	}
	printf("%d \n", i - 1);
	return (0);
}
