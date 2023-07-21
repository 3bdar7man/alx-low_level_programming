#include <stdio.h>

/**
 * more_numbers - print all numbers addition to 10 : 14
 */
void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
printf("%d", j);
printf("\n");
}
}
