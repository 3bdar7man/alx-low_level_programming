#include <string.h>

/**
 * _strspn - like strspn
 *@s: some arg
 *@accept: some arg
 *
 * Return: the wanted value
 */
unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
