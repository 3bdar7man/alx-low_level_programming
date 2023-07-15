#include <stdio.h>

/**
 * main - excuted program
 * Return: success, the program executed successfully
 */
int main(void)
{
int i;

for (i = 97; i != 91; i++)
{
putchar(i);
/* convert loop for capital chars */
if (i == 122)
i = 64;
}
putchar('\n');
/* NOT "You can only use putchar three times in your code" BUT ONLY TWO */
return (0);
}
