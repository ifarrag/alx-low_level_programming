#include "dog.h"
/**
 * int_dog - initialize a variable of type struct dog
 * @d: pointer to struct type
 * @name: Name here
 * @age: Put age here
 * @owner: Father name
 **
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = &name;
	d->age = age;
	d->owner = &owner;
}
