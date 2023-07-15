#include <stdio.h>

/**
 * main - excuted program
 * Return: success, the program executed successfully
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i % 10 + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
