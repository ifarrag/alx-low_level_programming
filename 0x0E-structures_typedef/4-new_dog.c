#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: New name
 * @age: age
 * @owner: owner of new dog
 * Return: pointer of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
