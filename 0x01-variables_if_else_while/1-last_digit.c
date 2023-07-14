#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/*
* main func */ int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* addition code*/
printf("Last digit of %d is %d ", n, n % 10);
if ((n % 10) == 0)
{
/* nLast zero if func */
puts("and is 0");
}
else if ((n % 10) > 5)
{
/* (n % 10) > 5 if func */
puts("and is greater than 5");
}
else
{
/* 0 != n < 6 */
puts("and is less than 6 and not 0");
}
return (0);
}
