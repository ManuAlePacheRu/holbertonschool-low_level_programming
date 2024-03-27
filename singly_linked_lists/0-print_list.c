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
		printf("%d", ncont);
	}
	cont ++;
	h = h->next;
	printf("\n");
}

return (cont);
}
