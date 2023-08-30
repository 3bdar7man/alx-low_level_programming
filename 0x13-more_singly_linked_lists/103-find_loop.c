#include "lists.h" /* with #include <stddef.h> */
#include <stdlib.h>

/**
 * find_listint_loop - some func
 * @head: some arg
 *
 * Return: the wanted value
 */
listint_t *find_listint_loop(listint_t *head)
{
size_t n = 0;
listint_t *Ltmp = malloc(sizeof(listint_t));

if ((head == (void *) 0) || (Ltmp == (void *) 0))
return (0);

switch (head->next)
{
case (NULL):
return (NULL);
case (head): /* find for one nodeint loop */
return (head);
default:
return (find_listint_loop(head->next));
}
}
