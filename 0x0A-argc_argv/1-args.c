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
printf("%d\n", argc - 1);
argc = argc;
argv = argv;
return (0);
}
