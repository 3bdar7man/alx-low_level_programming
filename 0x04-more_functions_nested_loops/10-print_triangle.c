#include "main.h"

/**
 * print_triangle - print triangle by #
 * @size: lines number would # printed
 */
void print_triangle(int size)
{
int i, j, k;

for (i = 0; i < size; i++)
{
for (j = i + 1; j < size; j++)
{
_putchar(' ');
}
for (k = size - i - 1; k < size; k++)
{
_putchar('#');
}
_putchar('\n');
}

}
