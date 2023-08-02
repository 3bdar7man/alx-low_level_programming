#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - some func
 * @s: some arg
 */
void _print_rev_recursion(char *s)
{
int i;

for (i = 0; i < strlen(s); i++)
{
putchar(strlen(s) - 1 - i);
}
}
