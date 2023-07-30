#include <stdlib.h>

/**
 * reverse_array - reverse in elements of array
 *@a: the array
 *@n: number of elements
 */
void reverse_array(int *a, int n)
{
int i;
int *tmpA = alloca(n);

for (i = 0; i < n; i++)
tmpA[i] = a[i];

for (i = 0; i < n; i++)
a[i] = tmpA[n - 1 - i];
}
