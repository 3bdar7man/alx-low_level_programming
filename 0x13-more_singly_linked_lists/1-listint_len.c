#include "lists.h" /* with #include <stddef.h> */
#include <stdlib.h>

/**
 * listint_len - some func
 * @h: some arg
 *
 * Return: the wanted value
 */
size_t listint_len(const listint_t *h)
{
size_t sz = 0;

if (h == (void *) 0)
return (0);

while (h)
{
sz++;
h = h->next;
}

return (sz);
}
