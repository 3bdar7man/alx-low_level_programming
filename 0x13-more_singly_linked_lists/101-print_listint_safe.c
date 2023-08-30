#include "lists.h" /* with #include <stddef.h> */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint_safe - some func
 * @head: some arg
 *
 * Return: the wanted value
 */
size_t print_listint_safe(const listint_t *head)
{
size_t sz = 1;
int n;
listint_t *Ltmp = malloc(sizeof(listint_t));

if ((head == (void *) 0) || (Ltmp == (void *) 0))
{
printf("0\n");
return (0);
}

n = head->n;
printf("%d\n", n);
Ltmp = head->next;
while (Ltmp)
{
sz++;
n = Ltmp->n;
printf("%d\n", n);
Ltmp = Ltmp->next;
}

return (sz);
}
