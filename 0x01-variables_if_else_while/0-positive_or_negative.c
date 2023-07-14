#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/*
* main func*/ int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* addition code*/
if (n < 0)
{
/* n negative if func */
printf("%d is negative\n", n);
}
else if (n > 0)
{
/* n positive if func */
printf("%d is positive\n", n);
}
else
{
/* n zero if func */
printf("%d is zero\n", n);
}
return (0);
}
