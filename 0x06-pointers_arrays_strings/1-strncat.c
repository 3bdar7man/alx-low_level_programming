#include <string.h>

/**
 * _strncat - like strncat
 *@dest: the first string
 *@src: the second string
 *@n: the wanted number
 *
 * Return: the wanted string
 */
char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
