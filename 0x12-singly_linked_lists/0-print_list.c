#include <stdio.h>
#include "lists.h"

/**
 * print_list - ready to print characters involved
 * @h: pointer to the list
 *
 * Return: number of nodes Success
 */
size_t print_list(const list_t *h)
{
size_t s = 0;

while (h)
{
if (!h->str)
	printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
s++;
}

return (s);
}

