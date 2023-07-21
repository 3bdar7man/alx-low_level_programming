#include "main.h"

/**
 * print_number - print based number
 * @n: the number would printed
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n *= -1;
}
if (n < 10)
_putchar(n + '0');
else if (n < 100)
{
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}
}
