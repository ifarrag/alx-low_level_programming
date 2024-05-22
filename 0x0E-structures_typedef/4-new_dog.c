#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: New name
 * @age: age
 * @owner: owner of new dog
 * Return: pointer of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0;
	dog_t new;
	dog_t *d = &new;
	char *n = malloc(sizeof(char) * (strlen(name) + 1));
	char *o = malloc(sizeof(char) * (strlen(owner) + 1));

	for (i = 0; name != NULL; i++)
	{
		n[i] = name[i];
	}
	n[i] = '\0';
	for (i = 0; owner != NULL; i++)
	{
		o[i] = owner[i];
	}
	o[i] = '\0';
	if (name == NULL || owner == NULL)
	{
		free(new);
		free(d);
		free(n);
		free(o);
		return (NULL);
	}
	d->name = n;
	d->age = age;
	d->owner = o;
	return (d);
}
