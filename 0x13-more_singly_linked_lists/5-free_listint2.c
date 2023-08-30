#include "lists.h" /* with #include <stddef.h> */
#include <stdlib.h>
#include <string.h>

/**
 * free_listint2 - some func
 * @head: some arg
 */
void free_listint2(listint_t **head)
{
if (head == (void *) 0)
return;

if ((*head)->next == (void *) 0)
{
(*head) = NULL;
head = NULL;
return;
}
else
{
free_listint2(&((*head)->next));
}

free((*head)->next);
(*head)->next = NULL;
(*head) = NULL;
head = NULL;
}
