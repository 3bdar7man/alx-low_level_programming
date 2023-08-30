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
listint_t *nodeint = malloc(sizeof(listint_t));

if ((head == (void *) 0) || (nodeint == (void *) 0))
return (NULL);

goto init_nodeint;
assign_nodeint:

/* if (*head != (void *) 0) */
nodeint->next = *head;

head = &nodeint;

goto done;
init_nodeint:

nodeint->n = n;

goto assign_nodeint;
done:

return (nodeint);
}
