#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - some func
 * @s: some arg
 * @a: some arg
 * @b: some arg
 *
 * Return: the wanted value
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (s == ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}

int op_add(int a, int b)
{
	return (a + b);
}
 
int op_sub(int a, int b)
{
	return (a - b);
}
 
int op_mul(int a, int b)
{
	return (a * b);
}
 
int op_div(int a, int b)
{
	return (a / b);
}
 
int op_mod(int a, int b)
{
	return (a % b);
}
