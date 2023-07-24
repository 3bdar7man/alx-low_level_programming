#include <stdlib.h>

/**
 * swap_int - swap values of two passed vars
 * @a: the first var to be swap
 * @b: the secong var to be swap
 */
void swap_int(int *a, int *b)
{
int *tmpP = malloc(sizeof(int));

*tmpP = *a;
*a = *b;
*b = *tmpP;
}
