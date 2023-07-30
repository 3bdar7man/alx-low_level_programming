#include <string.h>

/**
 * _strncpy - like strncpy
 *@dest: the first string
 *@src: the second string
 *@n: the wanted number
 *
 * Return: the wanted string
 */
char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
