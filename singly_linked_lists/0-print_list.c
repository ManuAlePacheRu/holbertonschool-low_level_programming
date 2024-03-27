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
	if (h->str[ncont] == '\0')
{
        _putchar('\n');
}
	for (ncont = 0; ncont != '\0'; ncont++)
	_putchar(h->str[ncont]);
	_putchar('\n');

	cont ++;
	h = h->next;
}

return (cont);
}
