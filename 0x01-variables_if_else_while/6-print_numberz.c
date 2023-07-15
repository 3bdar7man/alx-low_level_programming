#include <stdio.h>

/* betty style doc for function main goes there */
/*
*main func */ int main(void)
{
/* i var loop */
long i;

/* putchar loop func */
for (i = 0; i < 10; i++)
putchar(i % 10 + '0');
putchar('\n');
return (0);
}
