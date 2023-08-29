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

while (head->next)
{
if (index == 0)
return (head);
head = head->next;
if (++i == index)
return (head);
}

/* if ((head == (void *) 0) || (i < index)) */
return (NULL);
}
