#include <string.h>
#include <stdio.h>

/**
 * print_rev - print passed string in reverse form
 * @s: pointer to the string
 */
void print_rev(char *s)
{
int i;

for (i = strlen(s); i > 0; i--)
printf("%c", s[i - 1]);
printf("\n");
}
