#include <stdlib.h>
#include <string.h>

/**
 * rev_string - reverse passed string
 * @s: pointer to the string
 */
void rev_string(char *s)
{
int i;
char *tmpP = malloc(strlen(s) * sizeof(char));

strcpy(tmpP, s);

for (i = 0; tmpP[i] != '\0'; i++)
s[i] = tmpP[strlen(tmpP) - 1 - i];
}
