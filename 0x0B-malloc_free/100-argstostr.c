#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>

/* some variable */
char *Str;

/**
 * _func - some func
 * @_arg: some arg
 * Return: the wanted value
 */
char *argstostr(int ac, char **av)
{
	int i;

	if (ac < 1 || av == NULL)
		return (NULL);

	Str = malloc(sizeof(char) * 99);
	if (Str == NULL)
	{
		printf("malloc error");
		return (NULL);
	}
	
	for (i = 1; i < ac; i++)
		Str = strcat(Str, *(av + i));
	return (Str);
}
