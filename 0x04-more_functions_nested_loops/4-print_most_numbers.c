#include <stdio.h>

/**
 * print_most_numbers - print all numbers expect 2, 4
 */
void print_most_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
if (!(i == 2) && !(i == 4))
{
printf("%d", i);
}
}
printf("\n");
}
