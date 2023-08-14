#include "dog.h"

/**
 * new_dog - some func
 * @name: some arg
 * @age: some arg
 * @owner: some arg
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Dog;
	Dog->name = name;
	Dog->age = age;
	Dog->owner = owner;
	return (Dog);
}
