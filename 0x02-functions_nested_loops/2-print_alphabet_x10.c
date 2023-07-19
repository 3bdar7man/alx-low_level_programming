#include "main.h"

/**
 * print_alphabet_x10 - print lowercase chars 10 times
 */
void print_alphabet_x10(void)
{
int i;
int ij;

for (ij = 0; ij < 10; ij++)
{
for (i = 0; i < 26; i++)
_putchar(i + 97);
_putchar('\n');
}
}
