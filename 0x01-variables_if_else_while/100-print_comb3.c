#include <stdio.h>

/**
 * main - excuted program
 * Return: Description of the returned value
 */
int main(void)
{
int i, j;
/* set to 1 (-false-) for array that for check if (i) values was used */
int iUsed[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int ifTrue = 0;

for (i = 0; i < 10; i++)
{


/* set iUsed element for current i var value to ifTrue (-true-) */
iUsed[i] = ifTrue;
for (j = 0; j < 10; j++)
{

/**
 * skip loop iteration - skip before use (j) value that was used in (i)
 * @ifTrue: true value for (if)
 */
if (iUsed[j] == ifTrue)
continue;
putchar(i % 10 + '0');
putchar(j % 10 + '0');
if ((i != 8) || (j != 9))
{
putchar(',');
putchar(' ');
}

}


}
putchar('\n');
return (0);
}
