#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: dog_t2
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int a, b, c, d;
	dog_t *dog_t2;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog_t2 = malloc(sizeof(dog_t));
	if (dog_t2 == NULL)
		return (NULL);
	for (a = 0; name[a] != '\0'; a++)
	{
	}
	a++;
	dog_t2->name = malloc(a * sizeof(char));
	if (dog_t2->name == NULL)
	{
		free(dog_t2);
		return (NULL);
	}
	for (b = 0; owner[b] != '\0'; b++)
	{
	}
	b++;
	dog_t2->owner = malloc(b * sizeof(char));
	if (dog_t2->owner == NULL)
	{
		free(dog_t2->name);
		free(dog_t2);
		return (NULL);
	}
	for (c = 0; c < a; c++)
		dog_t2->name[c] = name[c];
	dog_t2->age = age;
	for (d = 0; d < b; d++)
		dog_t2->owner[d] = owner[d];
	return (dog_t2);
}
