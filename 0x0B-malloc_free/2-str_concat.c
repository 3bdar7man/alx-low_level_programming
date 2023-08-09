#include <stdlib.h>
#include <string.h>
#include <limits.h>

/**
 * str_concat - some func
 * @s1: some arg
 * @s2: some arg
 *
 * Return: the wanted value
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	char *Str;

	if (s1 = NULL)
		s1 = '';
	if (s2 = NULL)
		s2 = '';

	Str = malloc(sizeof(char) * (strlen(s1) + strlen(2) + 1))

	for (i = 0; i < strlen(s1); i++)
		Str[i] = s1[i];
	for (i = 0; i < strlen(s2); i++)
		Str[i + strlen(s1)] = s2[i];
	Str[i] = '\0';

	return (Str);
}
