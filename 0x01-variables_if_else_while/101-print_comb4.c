#include <stdio.h>

/**
 * main - excuted program
 * Return: Description of the returned value
 */
/* commets like previous script */
int main(void)
{
int i; int j; int k;
int iUsed[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int jUsed[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int ifTrue = 0;

/* set iUsed elements to not ifTrue (-false-) for all i var values */
for (i = 0; i < 10; i++)
{
iUsed[i] = ifTrue + 1;
jUsed[i] = ifTrue + 1;
}

for (i = 0; i < 10; i++)
{

/* set iUsed element for current i var value to ifTrue (-true-) */
iUsed[i] = ifTrue;
for (j = 0; j < 10; j++)
{


jUsed[j] = ifTrue;
for (k = 0; k < 10; k++)
{
/**
 * skip loop iteration - skip before use (k) value that was used in (i, j)
 * @ifTrue: true value for (if)
 */
if ((iUsed[k] == ifTrue) || (jUsed[k] == ifTrue))
continue;
putchar(i % 10 + '0');
putchar(j % 10 + '0');
putchar(k % 10 + '0');
if ((i != 7) || (j != 8) || (k != 9))
{
putchar(',');
putchar(' ');
}

}


}

}
putchar('\n');
return (0);
}
