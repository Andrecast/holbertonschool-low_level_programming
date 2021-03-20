#include <stdio.h>

void startupfun(void) __attribute__ ((constructor));
/**
 *startupfun - function that prints a
 *message before the main function is executed
 *Return: No return
 */
void startupfun(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
