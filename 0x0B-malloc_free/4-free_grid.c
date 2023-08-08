#include <stdlib.h>
#include <limits.h>

/**
 * free_grid - some func
 * @grid: some arg
 * @height: some arg
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
}
