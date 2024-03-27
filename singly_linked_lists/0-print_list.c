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
	for (ncont = 0; ncont != '\0'; ncont++)
	{
	_putchar(h->str[ncont]);
	}
	cont ++;
	h = h->next;
	_putchar('\n');
}

return (cont);
}
