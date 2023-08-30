#include "lists.h" /* with #include <stddef.h> */
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - some func
 * @head: some arg
 * @n: some arg
 *
 * Return: the wanted value
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nodeint = malloc(sizeof(listint_t));
listint_t *Ltmp = malloc(sizeof(listint_t));

if ((head == (void *) 0) || (nodeint == (void *) 0) || (Ltmp == (void *) 0))
return (NULL);

nodeint->n = n;

Ltmp = (*head);
while (Ltmp->next)
Ltmp = Ltmp->next;

Ltmp->next = nodeint;

return (nodeint);
}
