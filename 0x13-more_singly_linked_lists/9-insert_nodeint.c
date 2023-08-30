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
listint_t *nodeint = malloc(sizeof(listint_t));

if ((head == (void *) 0) || (nodeint == (void *) 0))
return (NULL);

if (idx == 0)
goto here_insert_nodeint;

nodeint = *head;
while (nodeint->next)
{
if (++i == idx)
goto here_insert_nodeint;
nodeint = (*head)->next;
}

if (idx == i)
goto here_insert_nodeint;

/* if ((head == (void *) 0) || ((*head) == (void *) 0) || (i < idx)) */
return (NULL);

here_insert_nodeint:

nodeint = malloc(sizeof(listint_t));
nodeint->n = n;
if (idx == ++i)
{
(*head)->next = nodeint;
}
else if (idx > 0)
{
nodeint->next = (*head)->next;
(*head)->next = nodeint;
}
else
{
nodeint->next = *head;
head = &nodeint;
}
return(nodeint);
}
