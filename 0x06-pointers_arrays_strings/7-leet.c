#include <string.h>
#include <ctype.h>

/**
 * leet - encode string in 1337 coding
 *@s: the string
 *
 * Return: the wanted string
 */
char *leet(char *s)
{
size_t i, j;
char codedChars[8] = {'o', '1', '2', 'e', 'a', '5', '6', 't'};

for (i = 0; i < strlen(s); i++)
for (j = 0; j < 18; j++)
if (s[i] == codedChars[j])
s[i] = j % 8;
return (s);
}
