#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function that prints the minimum number of coins to make change
 * atoi - string to integer
 * @argc: cents
 * @argv: coins
 * Return: 0
 */
int main(int argc, char *argv[])
{
	argv[5] = "25, 10, 5, 2, 1";
	int number;
	int i = 0;

	while (i < 4)
	{
		if (atoi(argv[i]) <= argc)
		{
			number = argc / atoi(argv[i]);
			if (atoi(argv[i]) == 25)
			{
				printf("%d\n", number);
			}
			if (atoi(argv[i]) == 10)
			{
				printf("%d\n", atoi(argv[i]));
			}
			if (atoi(argv[i]) == 5)
			{
				printf("%d\n", number);
			}
			if (atoi(argv[i]) == 2)
			{
				printf("%d\n", number);
			}
			if (atoi(argv[i]) == 1)
			{
				printf("%d\n", number);
			}
			argc = argc - number * atoi(argv[i]);
		}
		i++;
	}
}
