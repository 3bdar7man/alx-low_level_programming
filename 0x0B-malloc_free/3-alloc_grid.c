#include <stdlib.h>
#include <limits.h>


/* some variable */
int *a;

/**
 * alloc_grid - some func
 * @width: some arg
 * @height: some arg
 *
 * Return: the wanted value
 */
int **alloc_grid(int width, int height)
{
	int i;
	a = malloc(sizeof(int) * width * height);

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);

	for (i =0; i < width * height; i++)
		*(a + i) = 0;

	return (&a);
}
