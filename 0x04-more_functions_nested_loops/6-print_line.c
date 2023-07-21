#include <stdio.h>

/**
 * print_line - print _ for (n) times
 * @n: the times number would _ printed
 */
void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
printf("%c", '_');
printf("\n");
}
