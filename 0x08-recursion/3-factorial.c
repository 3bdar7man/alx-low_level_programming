#include <stdio.h>

/**
 * factorial - some func
 * @n: some arg
 *
 * Return: the wanted value
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n <= 1)
return (1);
return (n * factorial(n - 1));
}
