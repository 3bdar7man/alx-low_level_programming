#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * alloc_grid - some func
 * @width: some arg
 * @height: some arg
 *
 * Return: the wanted value
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **aP;

	if (width < 1 || height < 1)
		return (NULL);

	aP = malloc(sizeof(int *) * height);
	if (aP == NULL)
	{
		printf("malloc error");
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		aP[i] = malloc(sizeof(int) * width);
		if (aP[i] == NULL)
		{
			printf("malloc error");
			return (NULL);
		}
		for (j = 0; j < width; j++)
			aP[i][j] = 0;
	}

	return (aP);
}
