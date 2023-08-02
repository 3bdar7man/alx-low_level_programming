#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - like sqrt
 * @n: some arg
 *
 * Return: the wanted value
 */
int _sqrt_recursion(int n)
{
return (sqrt(n) * 10 % 10 == 0 ? sqrt(n) : -1);
}
