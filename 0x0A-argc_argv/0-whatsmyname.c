#include <stdio.h>
/**
* main - principal function
* @argc: argument count
* @argv: argument vector
* Return: 0
*/
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	printf("%s \n", argv[i]);
	return (0);
}
