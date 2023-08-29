#include "lists.h" /* with #include <stddef.h> */
#include <stdlib.h>

/**
 * pop_listint - some func
 * @head: some arg
 *
 * Return: the wanted value
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *h = malloc(sizeof(listint_t) * 1);
if (h == (void *) 0)
exit(1);

if (head == NULL || *head == NULL)
return (0);

n = (*head)->n;
if ((*head)->next == NULL)
{
free(h);
h = NULL;
head = &h;
return (0);
}

h->n = (*head)->nexn->n;
h->next = (*head)->next->next;
free((*head)->next);
(*head)->next = NULL;
head = &h;

return (n);
}
