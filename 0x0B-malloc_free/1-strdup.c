#include <string.h>
#include <limits.h>


/**
 * _strdup - some func
 * @str: some arg
 *
 * Return: the wanted value
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	return (strdup(str));
}
