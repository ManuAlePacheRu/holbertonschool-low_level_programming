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
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	printf("[%d] %s\n", h->len, h->str);
	cont ++;
	h = h->next;
}

return (cont);
}
