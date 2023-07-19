#include <ctype.h>

/**
 * _isalpha - check if (c) is char
 * @c: the char would checked
 *
 * Return: true ? 0 : 1
 */
int _isalpha(int c)
{
return (isalpha(c) == 0 ? 0 : 1);
}
