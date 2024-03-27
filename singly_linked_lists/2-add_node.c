#include "lists.h"

/**
 *
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *p;
	p = malloc(sizeof(list_t));

	p->next = *head;
	
		*head = p;

	p->str = strdup(str);

return (p);
}
