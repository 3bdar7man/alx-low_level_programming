#include "lists.h" /* with #include <stddef.h> */
#include <stdlib.h>
#include <string.h>

/**
 * free_listint - some func
 * @head: some arg
 */
void free_listint(listint_t *head)
{
if (head == (void *) 0)
goto done;

if (head->next == (void *) 0)
goto done;
else
free_listint(head->next);

free(head->next);

done:
}
