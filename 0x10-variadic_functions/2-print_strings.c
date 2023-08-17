#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - some func
 * @separator: some arg
 * @n: some arg
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	if (n < 1)
		exit(1);

	va_list ap;

	va_start(ap, n);

	int i;

	printf("%s", va_arg(ap, char *));
	for (i = 1; i < n; i++)
		if (separator == (void *)0)
			printf("%s", va_arg(ap, char *));
		else
			printf("%s%s", separator, va_arg(ap, char *));
	printf("\n");
	va_end(ap);
}
