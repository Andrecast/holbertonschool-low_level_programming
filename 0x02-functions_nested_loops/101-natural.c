#include <stdio.h>
/**
*main - add the numbers multiples of 3 or 5
*Return: avoid
*
*/
int main(void)
{
	int m, n;

	m = 0;
	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			m = m + n;
		}
	}
	printf("%d", m);
	putchar('\n');
}
