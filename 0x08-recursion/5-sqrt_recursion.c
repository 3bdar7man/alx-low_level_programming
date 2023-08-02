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
int i, rs;

for (i = 1; i <= n; i++)
{
if (n / i == i)
{
rs = i;
return (rs);
} else {
rs = -1;
}
}

return (rs);
}
