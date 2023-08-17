#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - some func
 * @separator: some arg
 * @n: some arg
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (n < 1)
		exit(1);

	va_list ap;

	va_start(ap, n);

	int i;

	printf("%d", va_arg(ap, int));
	for (i = 1; i < n; i++)
		if (separator == (void *)0)
			printf("%d", va_arg(ap, int));
		else
			printf("%s%d", separator, va_arg(ap, int));
	printf("\n");
	va_end(ap);
}
