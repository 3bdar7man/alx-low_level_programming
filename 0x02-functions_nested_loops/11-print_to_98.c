#include <stdio.h>

/**
 * print_to_98 - print some thing
 * @n: some thing parameter
 */
void print_to_98(int n)
{
int i;

printf("%d", n);
if (n > 98)
goto nGreater;
else if (n < 98)
goto nLess;
printf("\n");
nLess:
for (i = n + 1; n <= 98; i++)
{
printf", %d", i);
}
printf("\n");
return;
nGreater:
for (i = n - 1; n >= 98; i--) 
{
printf(", %d", i);
}
printf("\n");
}
