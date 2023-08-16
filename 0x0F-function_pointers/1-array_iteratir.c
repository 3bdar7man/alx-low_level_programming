#include <stdlib.h>

/**
 * array_iterator - some func
 * @array: some arg
 * @size: some arg
 * @action: some arg
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == (void *)0 || size < 1)
		exit(1);
	for (i = 0; i < (int) size; i++)
		action(array[i]);
}
