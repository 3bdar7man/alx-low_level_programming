#include <string.h>

/**
 * string_toupper - convert chars of string to uppercase
 *@s: the string
 *
 * Return: the wanted string
 */
char *string_toupper(char *s)
{
size_t i;

for (i = 0; i < strlen(s); i++)
if (s[i] >= 97 && s[i] <= 122)
s[i] = s[i] - 26;
return (s);
}
