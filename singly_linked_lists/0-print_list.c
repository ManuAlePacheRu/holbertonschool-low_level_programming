#include "lists.h"

/**
 *
 */

int cont;

size_t print_list(const list_t *h)
{
size_t cont;

while (h != NULL)
{
	printf("[%d] %s\n", h->len, h->str);
	cont ++;
	h = h->next;
}

return (cont);
}
