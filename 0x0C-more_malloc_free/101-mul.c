#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <stdio.h>
#include "main.h"


/**
 * main - executed program
 * @argc: some arg
 * @argv: some arg
 *
 * Return: the wanted value
 */
int main(int argc, char **argv)
{
	int i;
	char *rsStr = malloc(sizeof(char) * INT_MAX);

	if (argc != 3)
		return (1);
	for (i = 0; i < (int) strlen(argv[1]); i++)
		if (!isdigit(argv[1][i]))
			return (1);
	for (i = 0; i < (int) strlen(argv[2]); i++)
		if (!isdigit(argv[2][i]))
			return (1);

	sprintf(rsStr, "%d\n", atoi(argv[1]) * atoi(argv[2]));

	for (i = 0; i < (int) strlen(rsStr); i++)
		_putchar(rsStr[i]);
	return (0);
}
