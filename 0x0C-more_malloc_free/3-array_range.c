#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#include <stdio.h>


/**
 * array_range - some func
 * @min: some arg
 * @max: some arg
 *
 * Return: the wanted value
 */
int *array_range(int min, int max)
{
	int i;
	int *Ptr;

	if (min > max)
		return (NULL);

	Ptr = malloc(sizeof(int) * (max - min + 1));
	if (Ptr == NULL)
	{
		printf("malloc error");
		return (NULL);
	}

	for (i = 0; i < (max - min + 1); i++)
		Ptr[i] = min + i;

	return (Ptr);
}
