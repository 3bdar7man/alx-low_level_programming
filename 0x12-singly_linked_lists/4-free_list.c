#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - some func
 * @head: some arg
 */
void free_list(list_t *head)
{
if (head == (void *) 0)
exit(1);

if (head->next == (void *) 0)
{
free(head->str);
free(head);
}
else
{
free_list(head->next);
}

free(head->str);
free(head);
}
