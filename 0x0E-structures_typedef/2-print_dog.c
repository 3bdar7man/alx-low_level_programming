#include <stdio.h>
#include "dog.h"

/**
 * init_dog - some func
 * @name: some arg
 * @age: some arg
 * @owner: some arg
 */
void print_dog(struct dog *d)
{
	char *name = (d->name == (void *)0) ? "(nil)" : d->name;
	char *owner = (d->owner == (void *)0) ? "(nil)" : d->owner;
	
	printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
}
