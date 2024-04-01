#include "lists.h"

/**
 * add_node - add a new node to a existen list
 *@str: is a const char string in the list
 *@head: is doble pointer to a list called list_t
 *Return: Retrun the pointer p to the list p
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *p;

	p = malloc(sizeof(list_t));

	p->next = *head;

		*head = p;

	p->str = strdup(str);

	p->len = strlen((*head)->str);

return (p);
}
