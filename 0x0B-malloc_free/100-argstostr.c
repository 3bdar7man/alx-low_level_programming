#include <stdlib.h>
#include <string.h>
#include <limits.h>

/* some variable */
char *strP;

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

	for (i = 1; i < ac; i++)
		strP = strcat(strP, *(av + i));
	return (strP);
}
