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
list_t *h = malloc(sizeof(listint_t) * 1);
if (h == (void *) 0)
exit(1);

if (head == (void *) 0)
exit(1);

h->n = n;
h->next = (void *) 0;

while((*head)->next)
*head = (*head)->next;

(*head)->next = h;

return (h);
}
