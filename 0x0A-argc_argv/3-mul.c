#include <stdlib.h>
#include <stdio.h>
/**
* main - program that prints all arguments it receives
* @argc: argument count
* @argv: argument vector
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i = 1, mult = 0;

	if (argc == 3)
	{
		mult = atoi(argv[i]) * atoi(argv[i + 1]);
		printf("%d \n", mult);
	}
	else
	{
		printf("Error\n");
	}
return (0);
}
