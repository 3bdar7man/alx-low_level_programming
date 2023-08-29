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

if (head == (void *) 0)
return (0);

sum += head->n;
while (head->next)
{
head = head->next;
sum += head->n;
}

return (sum);
}
