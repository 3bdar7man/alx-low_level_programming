#include <stdio.h>
#include <stdlib.h>

/**
 * jack_bauer - print some thing
 */
void jack_bauer(void)
{
int i, j;
char *iStr = malloc(sizeof(*iStr)), *jStr = malloc(sizeof(*jStr));

for (i = 0; i < 24; i++)
{
i < 10 ? sprintf(iStr, "0%d", i) : sprintf(iStr, "%d", i);
for (j = 0; j < 60; j++)
{
j < 10 ? sprintf(jStr, "0%d", j) : sprintf(jStr, "%d", j);
printf("%s:%s\n", iStr, jStr);
}
}
}
