#include <stdio.h>

/**
 * print_square - print # for (n*n) times
 * @n: the times number would # printed by square
 */
void print_square(int n)
{
int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
printf("#");
printf("\n");
}
printf("\n");
}
