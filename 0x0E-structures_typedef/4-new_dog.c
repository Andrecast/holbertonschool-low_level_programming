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
	dog_t *dog_t2;
	char *name2, *owner2;

	dog_t2 = malloc(sizeof(dog_t));
	if (dog_t2 == NULL)
		return (NULL);
	dog_t2->name = name2;
	dog_t2->age = age;
	dog_t2->owner = owner2;

	return (dog_t2);
}
