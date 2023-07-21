#include <stdio.h>

/**
 * print_diagonal - print diagonal by \ with (n) times
 * @n: the times number would \ printed
 */
void print_diagonal(int n)
{
int i, j;

for (i = 0; i < n; i++)
{
for (j = n - i; j < n; j++)
printf("%c", ' ');
printf("\\");
}
printf("\n");
}
