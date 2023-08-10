#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


/**
 * malloc_checked - some func
 * @b: some arg
 *
 * Return: the wanted value
 */
void *malloc_checked(unsigned int b)
{
	void *Ptr = malloc(b);

	if (Ptr == NULL)
	{
		printf("malloc error");
		exit(98);
	}

	return (Ptr);
}
