#include <stdio.h>

/**
 * main - like fizz buzz game
 */
int main(void)
{
int i;

for (i = 1; i < 101; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz ");
}
else if ((i % 3 == 0))
{
printf("Fizz ");
}
else if ((i % 5 == 0))
{
printf("Buzz");
if (i != 100)
printf(" ");
else
printf("\n");
}
else
printf("%d ", i);
}
return (0);
}
