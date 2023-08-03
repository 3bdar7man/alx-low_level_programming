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
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else if (y == 1)
return (x);

x *= _pow_recursion(x, y - 1);
return (x);
}
