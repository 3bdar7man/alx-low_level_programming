#include <string.h>
#include <ctype.h>

/**
 * cap_string - convert first chars of words with lowercase to uppercase
 *@s: the string
 *
 * Return: the wanted string
 */
char *cap_string(char *s)
{
size_t i;

for (i = 0; i < strlen(s); i++)
if ((isspace (s[i-1]) || ispunct(s[i-1])) && s[i] >= 97 && s[i] <= 122)
s[i] = s[i] - 26;
return (s);
}
