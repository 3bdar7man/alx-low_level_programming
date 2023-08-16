#include <stdlib.h>

/**
 * int_index - some func
 * @array: some arg
 * @size: some arg
 * @cmp: some arg
 *
 * Return: the wanted value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == (void *)0)
		exit(1);
	if (size < 1)
		return (-1);
	for (i = 0; i < (int) size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
