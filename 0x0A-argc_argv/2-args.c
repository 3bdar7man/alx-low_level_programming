#include <stdio.h>

/**
 * main - executed program
 * @argc: some arg
 * @argv: some arg
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int i;

for (i = 2; i < argc; i++)
printf("%s\n", argv[i]);
argc = argc;
argv = argv;
return (0);
}
