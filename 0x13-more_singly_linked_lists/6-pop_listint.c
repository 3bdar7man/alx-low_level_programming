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
listint_t *Ltmp = malloc(sizeof(listint_t));

if ((head == (void *) 0) || (Ltmp == (void *) 0))
return (0);

n = (*head)->n;
if ((*head)->next == NULL)
{
free(*head);
*head = NULL;
return (n);
}

Ltmp->n = (*head)->nexn->n;
Ltmp->next = (*head)->next->next;

free((*head)->next);
(*head)->next = NULL;
free(*head);
*head = NULL;

head = &Ltmp;

return (n);
}
