#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: pointer to struct dog
 * @name: pointer character name
 * @age: integer
 * @owner: pointer character string owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
