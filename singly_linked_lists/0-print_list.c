#include "lists.h"

/**
 *
 */

int cont;

size_t print_list(const list_t *h)
{
size_t cont = 0;

while (h != NULL)
{
	printf("[%d] %s\n", h->len, h->str);
	cont ++;
	h = h->next;
}

return (cont);
}