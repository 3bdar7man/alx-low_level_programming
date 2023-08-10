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
	void *Ptr;
	
	if(min > max)
		return(NULL);

	Ptr = malloc(sizeof(int) * (max - min + 1));
	if (Prt == NULL)
	{
		printf("malloc error");
		exit(98);
	}
	
	for (i = 0; i < (max - min + 1); i++)
		Ptr[i] = min + i;

	return (Ptr);
}
