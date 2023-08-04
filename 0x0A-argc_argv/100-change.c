#include <stdio.h>
#include <stdlib.h>

/**
 * main - executed program
 * @argc: some arg
 * @argv: some arg
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int n = atoi(argv[1]), rs = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
else if (atoi(argv[1]) < 0)
{
printf("0\n");
return (0);
}

while (n > 0)
{
if (n >= 25)
{
n -= 25;
rs++;
}
else if (n >= 10)
{
n -= 10;
rs++;
}
else if (n >= 5)
{
n -= 5;
rs++;
}
else if (n >= 2)
{
n -= 2;
rs++;
} else {
n--;
rs++;
}
}
printf("%d\n", rs);
argc = argc;
argv = argv;
return (0);
}
