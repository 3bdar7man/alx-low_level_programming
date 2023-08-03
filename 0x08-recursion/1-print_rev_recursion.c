#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - some func
 * @s: some arg
 */
void _print_rev_recursion(char *s)
{
int i = 0;

if (s[i] == '\0')
return;

_print_rev_recursion(&s[i + 1]);
_putchar(s[i]);
}
