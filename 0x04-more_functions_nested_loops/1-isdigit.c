#include <ctype.h>

/**
 * _isdigit - check if (c) is int
 * @c: the int would checked
 *
 * Return: true ? 0 : 1
 */
int _isdigit(int c)
{
return (isdigit(c) == 0 ? 0 : 1);
}
