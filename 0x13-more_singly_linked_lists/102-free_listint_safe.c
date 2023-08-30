#include "lists.h" /* with #include <stddef.h> */
#include <stdlib.h>
#include <string.h>

/**
 * free_listint_safe - some func
 * @h: some arg
 */
void free_listint_safe(listint_t **h)
{
if (h == (void *) 0)
return;

if ((*h)->next == (void *) 0)
{
(*h) = NULL;
h = NULL;
return;
}
else
{
free_listint_safe(&((*h)->next));
}

free((*h)->next);
(*h)->next = NULL;
(*h) = NULL;
h = NULL;
}
