#include <stdio.h>

/**
 * print_array - print group from elements of passed array
 * @a: the array
 * @n: number of elements to be print
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n - 1; i++)
printf("%d, ", *(a + i));
printf("%d\n", *(a + n - 1));
}
