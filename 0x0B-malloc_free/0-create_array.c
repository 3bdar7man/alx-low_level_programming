#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - some func
 * @size: some arg
 * @c: some arg
 *
 * Return: the wanted value
 */
char *create_array(unsigned int size, char c)
{
	size_t i;
	char *str;

	if (size < 1)
		return ('\0');

		str = malloc(size * sizeof(char));
	if (s == NULL)
	{
		printf("Can't allocate %d bytes (after %d calls)\n", INT_MAX, i);
		return (1);
	}

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
