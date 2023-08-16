#include "3-calc.h"
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
	char *Op = argv[2], *N1Str = argv[1], *N2Str = argv[3];
	int N1 = atoi(N1Str), N2 =atoi(N2Str);
	printf("%d\n", (get_op_func(Op))(N1, N2));
	return (0);

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}
	else if (argc == 4)
	{
		int i;
		int A_N = 5;
		/* char *A[A_N] = {"+", "-", "*", "/", "%"}; */
		char *A = "+-*/%";
		char *C_Str = malloc((sizeof(char) * 2));

		if (isdigit(atoi(argv[1])) || isdigit(atoi(argv[3])))
		{
			printf("Error\n");
			return (98);
		}
		if ((argv[2] == "/" || argv[2] == "%") && isdigit(atoi(argv[3])) == 0)
		{
			printf("Error\n");
			return (100);
		}
		for (i = 0; i < A_N; i++)
			sprintf(C_Str, "%c", A[i]);
			if (argv[2] != C_Str)
			{
				printf("Error\n");
				return (99);
			}
	}
	else
	{
		exit(1);
	}
	return (0);
}
