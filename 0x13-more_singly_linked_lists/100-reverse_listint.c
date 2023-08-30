#include "lists.h" /* with #include <stddef.h> */
#include <stdlib.h>
#include <string.h>

/**
 * reverse_listint - some func
 * @head: some arg
 *
 * Return: the wanted value
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *nodeint = malloc(sizeof(listint_t));
listint_t *Ltmp = malloc(sizeof(listint_t));

if ((head == (void *) 0) || (nodeint == (void *) 0) || (Ltmp == (void *) 0))
return (NULL);

nodeint = *head;
if ((*head)->next)
{
Ltmp = (*head)->next;
head = &Ltmp;
}
else
{
head = NULL;
return (nodeint);
}

while (Ltmp->next)
{
ret = reverse_listint(head);
if (nodeint == Ltmp)
return (*head);
if (!head)
{
ret->next = nodeint;
}
Ltmp->next = nodeint;
Ltmp = Ltmp->next;

}

if(!(nodeint->next))
return (next);
else
return (*head);
}
