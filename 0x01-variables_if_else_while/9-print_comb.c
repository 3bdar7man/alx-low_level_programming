#include <stdio.h>

/* betty style doc for function main goes there */
/*
*main func */ int main(void)
{
/* i var loop */
int i;

/* putchar loop func */
for (i = 0; i < 10; i++)
{
/* putchar digit func */
putchar(i % 10 + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
