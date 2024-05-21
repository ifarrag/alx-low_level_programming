#ifndef DOG_H
#define DOG_H

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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
