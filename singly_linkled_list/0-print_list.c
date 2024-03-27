#include "lists.h"

/**
 *
 */

int cont;

size_t print_list(const list_t *h)
{
size_t cont;
int ncont = 0;
while (h != NULL)
{
	_putchar(h->str[ncont]);
	cont ++;
	h = h->next;
}

return (cont);
}
