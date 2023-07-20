#include <stdio.h>

/**
 * jack_bauer - print some thing
 */
void jack_bauer(void)
{
int i, j;
char* iStr, jStr;

for (i = 0; i < 24; i++)
{
i < 10 ? fprintf(iStr, "0%d", i) : fprintf(iStr, "%d", i);
for (j = 0; j < 60; j++)
{
j < 10 ? fprintf(jStr, "0%d", j) : fprintf(jStr, "%d", j);
printf("%d:%d\n", i, j);
}
}
}
