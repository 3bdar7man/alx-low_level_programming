#include <string.h>

/**
 * print_diagsums - some func
 *@a: some arg
 *@size: some arg
 */
void print_diagsums(int *a, int size)
{
int i, j, nSum = 0, pSum = 0;

for (i = 0; i < size; i++)
for (j = 0; j < size; j++)
if (i == j)
nSum += *(a + (i * size + j));
else if (i + j == size - 1)
pSum += *(a + (i * size + j));
printf("%d, %d\n", nSum, pSum);
}
