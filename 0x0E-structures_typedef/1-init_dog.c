#include "dog.h"

/**
 * init_dog - some func
 * @name: some arg
 * @age: some arg
 * @owner: some arg
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
