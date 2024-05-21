#include <stdio.h>
/**
 * struct dog - Poppy details
 * @name: His name
 * @age: His age
 * @owner: His Father
 */
struct dog
{
        char *name;
        float age;
        char *owner;
};

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct type
 * @name: Name here
 * @age: Put age here
 * @owner: Father name
 **
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("Ok\n");
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
