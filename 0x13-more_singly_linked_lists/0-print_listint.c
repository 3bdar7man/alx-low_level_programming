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
size_t print_listint(const listint_t *h)
{
size_t sz = 1;
int n;

if (h == (void *) 0)
{
printf("0\n");
return (0);
}

n = h->n;
printf("%d\n", n);
h = h->next;
while (h)
{
sz++;
n = h->n;
printf("%d\n", n);
h = h->next;
}

return (sz);
}
