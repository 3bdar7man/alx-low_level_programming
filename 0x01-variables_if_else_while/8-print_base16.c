#include <stdio.h>

/* betty style doc for function main goes there */
/*
*main func */ int main(void)
{
/* i var loop */
long i;
/* other hexa var loop */
int x;

/* putchar 10 base loop func */
for (i = 0; i < 10; i++)
putchar(i % 10 + '0');
/* putchar other 16 base loop func */
for (x = 97; x < 103; x++)
putchar(x);
putchar('\n');
return (0);
}

