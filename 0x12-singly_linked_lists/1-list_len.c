#include "lists.h"
#include <stdlib.h>

/**
 * list_len - some func
 * @h: some arg
 *
 * Return: the wanted value
 */
size_t list_len(const list_t *h)
{
size_t n = 0;

if (h == (void *) 0)
return (0);

while (h)
{
n++;
h = h->next;
}

return (n);
}
