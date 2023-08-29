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

if (index == 0)
goto here_delete_nodeint;

while ((*head)->next)
{
if (++i == index)
goto here_delete_nodeint;
(*head) = (*head)->next;
}

/* if ((head == (void *) 0) || ((*head) == (void *) 0) || (i < index)) */
return (0);

here_delete_nodeint:

if (index == 0)
n = (*head)->n;
else
n = (*head)->next->n;

if (index > 0)
{
nodeint_delete = (*head)->next;
}
else
{
nodeint_delete = (*head);
head = (*head)->next;
goto here_clean;
}

if ((*head)->next)
{
(*head)->next = (*head)->next->next;
}
else
{
free((*head)->next);
(*head)->next = NULL;
}

here_clean:

free(nodeint_delete->next);
nodeint_delete->next = NULL;
free(nodeint_delete);
nodeint_delete = NULL;

return(n);
}
