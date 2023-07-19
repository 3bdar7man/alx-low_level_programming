#include "main.h"

int print_sign_part(int c, int nPar);

/**
 * print_sign - inform sign of (n) and print it or zero
 * @n: the int would checked
 *
 * Return: {1 for pos. , -1 for neg. , 0 for other}
 */
int print_sign(int n)
{
if (n > 0)
return (print_sign_part('+', 1));
else if (n < 0)
return (print_sign_part('-', -1));
else
return (print_sign_part('0', 0));
}

/**
 * print_sign_part - used for shorten code of (print_sign)
 * @c: char would print
 * @nPar: sign value to main return
 *
 * Return: value of (nPar)
 */
int print_sign_part(int c, int nPar)
{
_putchar(c);
return (nPar);
}
