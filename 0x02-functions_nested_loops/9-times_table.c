#include "holberton.h"
/**
*times_table - 9 times table
*Return: void
*@k:
*/
void times_table(void)
{
	int i, j, k;

	for (j = 0; j <= 9; j++)
	{
	for (i = 0; i <= 9; i++)
	{
	k = i * j;
			if (i == 0)
			{
				_putchar(48);
			}
			else if (k <= 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(k + '0');
			}
			else if (k >= 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
		}
		_putchar(10);
	}
}
