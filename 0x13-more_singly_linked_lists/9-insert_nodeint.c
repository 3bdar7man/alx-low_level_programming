#include "lists.h" /* with #include <stddef.h> */
#include <stdlib.h>

/**
 * insert_nodeint_at_index - some func
 * @head: some arg
 * @idx: some arg
 * @n: some arg
 *
 * Return: the wanted value
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
int i = 0;
listint_t *h = malloc(sizeof(listint_t) * 1);

if (idx == 0)
goto here_insert_nodeint;

while ((*head)->next)
{
if (++i == idx)
goto here_insert_nodeint;
(*head) = (*head)->next;
}

if (idx == i)
goto here_insert_nodeint;

/* if ((head == (void *) 0) || ((*head) == (void *) 0) || (i < idx)) */
return (NULL);

here_insert_nodeint:

h->n = n;
if (idx == ++i)
{
(*head)->next = h;
}
else if (idx > 0)
{
h->next = (*head)->next;
(*head)->next = h;
}
else
{
h->next = (*head);
head = &h
}
return(h);
}
