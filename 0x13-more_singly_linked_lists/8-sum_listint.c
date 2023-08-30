#include "lists.h" /* with #include <stddef.h> */
#include <stdlib.h>

/**
 * sum_listint - some func
 * @head: some arg
 *
 * Return: the wanted value
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *Ltmp = malloc(sizeof(listint_t));

if ((head == (void *) 0) || (Ltmp == (void *) 0))
return (0);

sum += head->n;
while (!(Ltmp->n))
Ltmp = head;
while (Ltmp->next)
{
Ltmp = Ltmp->next;
sum += Ltmp->n;
}

return (sum);
}
