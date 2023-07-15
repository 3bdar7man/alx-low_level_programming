#include <stdio.h>

/* betty style doc for function main goes there */
/*
*main func - short description */ int main(void)
{
/* i var loop */
int i;

/* putchar loop func */
for (i = 97; i < 123; i++)
{
/* if condition func */
if (i != 101 && i != 113)
putchar(i);
}
putchar('\n');
return (0);
}
