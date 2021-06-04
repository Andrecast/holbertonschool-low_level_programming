#include <stdio.h>
/**
 * main - Function that prints all the arguments, without using ac
 * @ac: number of arguments
 * @av: string of arguments
 * Return: 0
 */
int main(int ac, char **av)
{
	int i = 0;

	while (av[i])
	{
		printf("%s ", av[i]);
		i++;
	}
	return (0);
}
