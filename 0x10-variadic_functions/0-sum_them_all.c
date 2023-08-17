#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * sum_them_all - some func
 * @n: some arg
 *
 * Return: the wanted value
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n < 1)
		if (n < 0)
			exit(1);
		else
			return (0);

	va_list ap;

	va_start(ap, n);

	int i, Sum = 0;

	for (i = 0; i < n; i++)
		Sum += va_arg(ap, int);
	va_end(ap);
	return (Sum);
}
