#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * create_array - some func
 * @size: some arg
 * @c: some arg
 *
 * Return: the wanted value
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *str;

	if (size < 1)
		return ('\0');

		str = malloc(size * sizeof(char));
	if (str == NULL)
	{
		printf("Can't allocate %d bytes (after %d calls)\n", INT_MAX, i);
		return (NULL);
	}

	for (i = 0; i < (int) size; i++)
		str[i] = c;
	return (str);
}
