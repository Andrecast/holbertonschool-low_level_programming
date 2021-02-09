#include "holberton.h"
/**
* _islower - Checks whether c is a lowercase letter
* Return: void
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
