#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>


/**
 * string_nconcat - some func
 * @s1: some arg
 * @s2: some arg
 * @n: some arg
 *
 * Return: the wanted value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *Str;

	Str = malloc(sizeof(char) * (strlen(s1) + strlen(s2)));
	if (Str == (void *)0)
		return (NULL);

	Str = strncat(s1, s2, n);

	return (Str);
}
