#include <stdlib.h>
#include <string.h>
#include <limits.h>

/* some variables */
char **strP, **tmpStrP, *tmpSplitStr;

/**
 * _func - some func
 * @_arg: some arg
 * Return: the wanted value
 */
char **strtow(char *str)
{

	if (str == NULL || str == "")
		return (NULL);
	for (i = 0; i < strlen(str); i++)
		if (i == 0 && str[i] == " ")
		{
			str = *(str + i + 1);
			continue;
		}
		if (str[i] == " ")
		{
			tmpStr = strP;
			strP = malloc(sizeof(char) * strlen (str) + sizeof(char) * strlen(tmpSplitStr));
			strP = 
		}
		strP = strcat(strP, *(av + i))
	return (strP);
}
