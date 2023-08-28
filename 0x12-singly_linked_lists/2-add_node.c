#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - some func
 * @head: some arg
 * @str: some arg
 *
 * Return: the wanted value
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *h = malloc(sizeof(list_t) * 1);
if (h == (void *) 0)
exit(1);

if (head == (void *) 0)
exit(1);

h->str = strdup(str);
h->len = strlen(str);

if (*head == (void *) 0) 
h->next = (void *) 0;
else
h->next = (*head)->next;

*head = h;

return (h);
}
