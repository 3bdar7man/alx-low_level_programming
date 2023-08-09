#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>

/* some variable */
char **strP;
/* char **tmpStr; char *tmpSplitStr; */

/**
 * strtow - some func
 * @str: some arg
 *
 * Return: the wanted value
 */
char **strtow(char *str)
{
	int i, index = 0;
	/* int preI = 0 */

	if (str == NULL || str == "")
		return (NULL);
	for (i = 0; i < strlen(str); i++)
		if (i == 0 && str[i] == " ")
		{
			str = *(str + i + 1);
			continue;
		}
		
		
		strP = malloc(sizeof(char *) * 99);
	if (strP == NULL)
	{
		printf("malloc error");
		return (NULL);
	}
			
		if (str[i] == " ")
		{
			/* tmpStr = strP; */
			/* strP[index] = malloc(sizeof(char) * strlen (str) + sizeof(char) * strlen(tmpSplitStr)); */
			strP = strncpy(strP, str, i);
			index++;
		}
	return (strP);
}
