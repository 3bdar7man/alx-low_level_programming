#include "lists.h" /* with #include <stddef.h> */
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - some func
 * @head: some arg
 * @n: some arg
 *
 * Return: the wanted value
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
list_t *h = malloc(sizeof(listint_t) * 1);
if (h == (void *) 0)
exit(1);

if (head == (void *) 0)
return (NULL);

goto init_head;
assign_head:

if (*head != (void *) 0)
h->next = *head;

*head = h;

goto done;
init_head:

h->n = n;

assign_head:
done:

return (h);
}
