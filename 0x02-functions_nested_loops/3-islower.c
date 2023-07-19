#include <ctype.h>

/**
 * _islower - check if (c) is lowercase char
 * @c: the char would checked
 *
 * Return: true ? 0 : 1
 */
int _islower(int c)
{
return (islower(c) == 0 ? 0 : 1);
}
