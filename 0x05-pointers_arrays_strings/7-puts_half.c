#include <string.h>
#include <stdio.h>

/**
 * puts_half - print second half of passed string
 * @str: pointer to the string
 */
void puts_half(char *str)
{
int charsNum;

charsNum = strlen(str) % 2 == 0 ? strlen(str) / 2 : (strlen(str) - 1) / 2;

printf("%s\n", (str + strlen(str) - charsNum));
}
