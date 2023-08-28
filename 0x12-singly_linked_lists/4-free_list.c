#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - some func
 * @head: some arg
 */
void free_list(list_t *head)
{
if (head  == (void *) 0)
goto done;

if (head->next == (void *) 0)
{
free(head);
goto done;
}
else
{
free_list(head->next);
}

free(head);

done:
}
