#include <stdio.h>

/**
 * _pow_recursion - like pow
 * @x: some arg
 * @y: some arg
 *
 * Return: the wanted value
 */
int _pow_recursion(int x, int y)
{
int i, rs = 0;

if (y < 0)
return (-1);

for (i = 1; i < y; i++)
rs += x * x;
return (rs);
}
