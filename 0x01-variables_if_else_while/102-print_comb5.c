#include <stdio.h>

/**
 * main - excuted program
 * Return: Description of the returned value
 */
int main(void)
{
int i, j;
/* set to 1 (-false-) for array that for check if (i) values was used */
int iUsed[99] = {0};
int ifTrueOther = 1;

for (i = 0; i < 99; i++)
{


/* set iUsed element for current i var value to ifTrueOther (-true-) */
iUsed[i] = ifTrueOther;
for (j = 0; j < 100; j++)
{

/* skip loop iteration - skip before use (j) value that was used in (i) */
if (iUsed[j] == ifTrueOther)
continue;
(i < 10) ? putchar(0 % 10 + '0') : putchar(i / 10 % 10 + '0');
(i < 10) ? putchar(i % 10 + '0') : putchar(i % 10 + '0');
putchar(' ');
(j < 10) ? putchar(0 % 10 + '0') : putchar(j / 10 % 10 + '0');
(j < 10) ? putchar(j % 10 + '0') : putchar(j % 10 + '0');
if ((i != 98) || (j != 99))
{
putchar(',');
putchar(' ');
}

}


}
putchar('\n');
return (0);
}
