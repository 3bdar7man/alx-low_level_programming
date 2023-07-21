#include <ctype.h>

/**
 * _isupper - check if (c) is uppercase char
 * @c: the char would checked
 *
 * Return: true ? 0 : 1
 */
int _isupper(int c)
{
return (isupper(c) == 0 ? 0 : 1);
}
