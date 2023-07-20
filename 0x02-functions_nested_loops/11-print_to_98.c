#include <stdio.h>

/**
 * print_to_98 - print some thing
 * @n: some thing parameter
 */
void print_to_98(int n)
{
int i;
printf("%d", n);
if (n != 98)
for (i = n; n <= 98; i++) 
{
printf(", %d", i);
}
}
