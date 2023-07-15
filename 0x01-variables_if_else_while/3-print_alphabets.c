#include <stdio.h>

/* betty style doc for function main goes there */
/*
*main func - short description */ int main(void)
{
/* i var loop */
int i;

/* putchar loop func */
for (i = 97; i != 91; i++)
{
putchar(i);
/* convert loop to capital chars */
if (i == 122)
i = 64;
}
putchar('\n');
/* NOT "You can only use putchar three times in your code" BUT ONLY TWO */
return (0);
}
