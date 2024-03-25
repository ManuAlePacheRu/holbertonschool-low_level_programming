#include "lists.h"

/**
 *
 */

int cont;

size_t print_list(const list_t *h)
{

while (h != NULL)
{
	_putchar(h);
	cont ++;
	h = -> *next;
}

return (cont);
}
