#include <stdlib.h>


/**
 * _realloc - some func
 * @ptr: some arg
 * @old_size: some arg
 * @new_size: some arg
 *
 * Return: the wanted value
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *Ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == (void *)0)
	{
		Ptr = malloc(new_size);
		if (Ptr == (void *)0)
			return ((void *)0);
		return (Ptr);
	}
	if (new_size == 0 || ptr != (void *)0)
	{
		free(ptr);
		return ((void *)0);
	}

	ptr = realloc(ptr, new_size);
	free(ptr);

	return (ptr);
}
