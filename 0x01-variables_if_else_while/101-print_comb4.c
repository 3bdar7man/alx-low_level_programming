#include <stdio.h>

/**
 * main - excuted program
 * Return: Description of the returned value
 */
/* commets like previous script */
int main(void)
{
int i, j, k;
int iUsed[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int jUsed[10];
int ifTrue = 0;

for (i = 0; i < 10; i++)
{
iUsed[i] = ifTrue;
for (j = 0; j < 10; j++)
jUsed[j] = 1;

for (j = 0; j < 10; j++)
{
jUsed[j] = ifTrue;
if (iUsed[j] == ifTrue)
continue;


for (k = 0; k < 10; k++)
{
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
