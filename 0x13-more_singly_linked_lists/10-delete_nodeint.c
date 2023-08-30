#include "lists.h" /* with #include <stddef.h> */
#include <stdlib.h>

/**
 * delete_nodeint_at_index - some func
 * @head: some arg
 * @index: some arg
 *
 * Return: the wanted value
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
int n, i = 0;
listint_t *nodeint_deleted = malloc(sizeof(listint_t));
listint_t *Ltmp = malloc(sizeof(listint_t));

if ((head == (void *) 0) || (nodeint_deleted == (void *) 0) || (Ltmp == (void *) 0))
return (0);

Ltmp = *head;
if (index == 0)
goto here_delete_nodeint;

while (Ltmp->next)
{
if (++i == index)
goto here_delete_nodeint;
Ltmp = Ltmp->next;
}

/* if ((head == (void *) 0) || ((*head) == (void *) 0) || (i < index)) */
return (0);

here_delete_nodeint:

if (index == 0)
n = (*head)->n;
else
n = Ltmp->next->n;

if (index > 0)
{
nodeint_deleted = Ltmp->next;
}
else
{
nodeint_deleted = *head;
Ltmp = (*head)->next;
head = &Ltmp;
goto here_clean;
}

/* really index > 0 */
if (Ltmp->next)
Ltmp->next = nodeint_deleted->next;

here_clean:

free(nodeint_deleted->next);
nodeint_deleted->next = NULL;
free(nodeint_deleted);
nodeint_deleted = NULL;

return(n);
}
