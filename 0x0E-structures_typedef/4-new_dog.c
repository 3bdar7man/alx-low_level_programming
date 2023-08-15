#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - some func
 * @name: some arg
 * @age: some arg
 * @owner: some arg
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Dog = malloc(sizeof(dog_t));
	if (Dog == (void *)0)
		return ((void *)0);

	Dog->name = name;
	Dog->age = age;
	Dog->owner = owner;
	return (Dog);
}
