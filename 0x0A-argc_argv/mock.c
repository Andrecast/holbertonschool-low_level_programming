#include "holberton.h"
/**
*print_diagonal - function that prints a \ diagonal
*@n: diagonal lenght
*/
void print_diagonal(int n)
{
int i, j, esp = 0, len = 0;

while (len > 0)
{
    for (i = 1; i < len; i++)
    {
        _putchar(92);
        _putchat('\n');
    }
    esp = n - 1;
    while (j <= esp)
    {
        _putchar(32);
        j++;
    }
}
}
