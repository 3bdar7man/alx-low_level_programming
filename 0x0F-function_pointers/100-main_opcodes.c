#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - executed func
 * @argc: some arg
 * @argv: some arg
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 2 && atoi(argv[1]) < 1)
	{
		printf("Error\n");
		return (2);
	}
	else if (argc > 2)
	{
		int i;

		for (i = 1; i < argc; i++)
			if (isdigit(atoi(argv[i])))
			{
				if (atoi(argv[i]) < 1)
				{
					printf("Error\n");
					return (2);
				}
			}
			else
			{
					printf("Error\n");
					exit(2);
			}
	}
	return (0);
}
