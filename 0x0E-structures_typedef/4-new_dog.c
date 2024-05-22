#include "dog.h"
#include <stdio.h>
/**
 * new_dog - creates a new dog
 * @name: New name
 * @age: age
 * @owner: owner of new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	dog_t new;
	new.name = name;
	new.age = age;
	new.owner = owner;
	dog_t *d = &new;
	return (d);
}
