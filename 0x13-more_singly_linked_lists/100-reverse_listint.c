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

if ((*head)->next)
{
if (!((*head)->next->next))
{
(*head)->next->next = *head;
nodeint = (*head)->next;
goto finish;
}
Ltmp = (*head)->next->next;
(*head)->next->next = *head;
nodeint = reverse_listint(&Ltmp);
Ltmp->next = (*head)->next;
goto finish;
}

return (*head);

finish:

(*head)->next = NULL;
head = &nodeint;
return (*head);
}
