#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - some func
 * @d: some arg
 */
void free_dog(dog_t *d)
{
	if (d != (void  *)0)
		free(d);
}
