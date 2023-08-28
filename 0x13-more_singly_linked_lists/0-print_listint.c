#include "lists.h" /* with #include <stddef.h> */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint - some func
 * @h: some arg
 *
 * Return: the wanted value
 */
size_t print_listint(const listint_t *h);
{
size_t n = 0;

if (h == (void *) 0)
{
printf("0");
return (0);
}

while (h)
{
n++;
printf("%d\n", h->n);
h = h->next;
}

return (n);
}
