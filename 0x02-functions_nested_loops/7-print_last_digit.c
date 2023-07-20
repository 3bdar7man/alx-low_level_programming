#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - print last digit of (n)
 * @n: the int would process
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
_putchar(abs(n % 10) + '0');
return (abs(n % 10));
}
