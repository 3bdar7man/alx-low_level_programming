#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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
	char *Str, *Str1, *Str2;

	Str1 = malloc(sizeof(char) * strlen(s1));
	if (Str1 == NULL)
	{
		printf("malloc error");
		return (NULL);
	}
	Str2 = malloc(sizeof(char) * strlen(s2));
	if (Str2 == NULL)
	{
		printf("malloc error");
		return (NULL);
	}

	if (s1 == NULL)
		Str1 = "";
	else
		strcpy(Str1, s1);
	if (s2 == NULL)
		Str2 = "";
	else
		strcpy(Str2, s2);

	Str = malloc(sizeof(char) * (strlen(Str1) + strlen(Str2) + 1));
	if (Str == NULL)
	{
		printf("malloc error");
		return (NULL);
	}

	for (i = 0; i < (int) strlen(Str1); i++)
		Str[i] = Str1[i];
	for (i = 0; i < (int) strlen(Str2); i++)
		Str[i + strlen(Str1)] = Str2[i];
	Str[(strlen(Str1) + strlen(Str2) + 1)] = '\0';

	return (Str);
}
