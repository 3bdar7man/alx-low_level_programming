#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - some func
 * @h: some arg
 *
 * Return: the wanted value
 */
size_t print_list(const list_t *h)
{
size_t n = 0;
char *str;

if (h == (void *) 0)
{
printf("[0] (nil)\n");
return (0);
}

while (h)
{
n++;
str = strdup(h->str);
printf("[%d] %c%s%c\n", h->len, '"', str, '"');
h = h->next;
}

return (n);
}
