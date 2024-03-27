#include "lists.h"

/**
 *list_len - it returns the length of a list
 *Return: return the length that is saved in the variable count
 *@h: is the pointer to the list list_t
 */

size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
	count++;
	h = h->next;
}
return (count);
}
