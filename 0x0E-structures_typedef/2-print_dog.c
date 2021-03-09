#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Function that prints a struct dog
 * @d: pointer to the variables
 */
void print_dog(struct dog *d)
{
	if (d != 0)/*Me aseguro de que los elementos estén inicializados*/
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
		}
		/* with float not necessary, warning of incompatible types */
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}
		if (d->age < 0)
		{
			printf("Age: (nil)\n");
		}
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
