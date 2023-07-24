#include <string.h>
#include <stdio.h>

/**
 * puts2 - print every other char in passed string
 * @str: pointer to the string
 */
void puts2(char *str)
{
int i;

for (i = 0; i != '\0'; i += 2)
printf("%c", str[i]);
printf("\n");
}
