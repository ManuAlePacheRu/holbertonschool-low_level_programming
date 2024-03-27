#include "lists.h"

/**
 *print_list - function that return the contents of a list and the length
 *Return: return cont that is the number of arguments
 *@h: is a pointer to the list list_t
 */



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
	cont++;
	h = h->next;
}

return (cont);
}
