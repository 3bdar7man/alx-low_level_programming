#include <stdio.h>
#include <stdlib.h>

/**
 * is_prime_number - some func
 * @n: some arg
 *
 * Return: the wanted value
 */
int is_prime_number(int n)
{
int i,rt;

if(n < 2)
return (0);

for (i = 2; i < n; i++)
{
if (n / i % 10 == 0)
{
rt = 1;
return (1);
} else {
rt = 0;
}
}

return (rt);
}
