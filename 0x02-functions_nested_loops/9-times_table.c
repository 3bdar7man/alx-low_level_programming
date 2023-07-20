#include <stdio.h>

/**
 * times_table - print some thing
 */
void times_table(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
printf("%d", 0);
for (j = 1; j < 10; j++)
{
(j * i) < 10 ? printf(",  %d", j * i) : printf(", %d", j * i);
}
printf("\n");
}
}
