#ifndef _LISTS_H_
#define _LISTS_H_

#include "list_t.h"
#include <stddef.h>

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif  /* _LISTS_H_ */
