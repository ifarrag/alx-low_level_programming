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
	int i;
	dog_t new;
	dog_t *d = &new;
	char *nm, *ow;

	nm = malloc(sizeof(*name));
	if (nm == NULL) return '\0';
	ow = malloc(sizeof(*owner));
	if (ow == NULL) return '\0';
	for (i = 0; *name != '\0'; i++)
	{
		nm[i] = name[i];
	}
	nm[i] = '\0';
	for (i = 0; *owner != '\0'; i++)
	{
		ow[i] = owner[i];
	}
	ow[i] = '\0';
	if (name == NULL || owner == NULL)
	{
		free(nm);
		free(ow);
		return (NULL);
	}
	d->name = nm;
	d->age = age;
	d->owner = ow;
	return (d);
}
