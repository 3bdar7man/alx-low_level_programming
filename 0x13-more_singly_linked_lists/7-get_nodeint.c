#include "lists.h" /* with #include <stddef.h> */
#include <stdlib.h>

/**
 * get_nodeint_at_index - some func
 * @head: some arg
 * @index: some arg
 *
 * Return: the wanted value
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
int i = 0;
listint_t *Ltmp = malloc(sizeof(listint_t));

if ((head == (void *) 0) || (Ltmp == (void *) 0))
return (NULL);

if (index == 0)
return (head);

Ltmp = head;
while (Ltmp->next)
{
Ltmp = Ltmp->next;
if (++i == index)
return (Ltmp);
}

/* if ((head == (void *) 0) || (i < index)) */
return (NULL);
}
