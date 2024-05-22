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
	int i, n = 0, o = 0;
	dog_t new;
	dog_t *d = &new;
	char *nm, *ow;

	if (name == NULL || owner == NULL)
	{
		return ('\0');
	}
	while (name[n])
	{
		n++;
	}
	n++;
	while (owner[o])
	{
		o++;
	}
	o++;
	nm = malloc(sizeof(char) * n);
	if (nm == NULL)
		return ('\0');
	ow = malloc(sizeof(char) * o);
	if (ow == NULL)
		return ('\0');
	for (i = 0; name[i] != '\0'; i++)
	{
		nm[i] = name[i];
	}
	nm[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
	{
		ow[i] = owner[i];
	}
	ow[i] = '\0';
	new.name = nm;
	new.age = age;
	new.owner = ow;
	return (d);
}
