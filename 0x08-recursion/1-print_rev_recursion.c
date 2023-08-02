#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - some func
 * @s: some arg
 */
void _print_rev_recursion(char *s)
{
size_t i;

for (i = 0; i < strlen(s); i++)
{
_putchar(s[strlen(s) - 1 - i]);
}
}
