#include "lists.h"

/**
 * _strlen - take string drection
 * @s: take the string
 *
 * Return: i
 */

int _strlen(char *s)

{

	int i = 0;


	while (s[i] != '\0')
	{

		i++;

	}

	return (i);

}

/**
 * add_node - add a new node to a existen list
 *@str: is a const char string in the list
 *@head: is doble pointer to a list called list_t
 *Retur: Retrun the pointer p to the list p
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *p = NULL;
	
	if ((*head) == NULL)
	{
		return (NULL);
	}

	p = malloc(sizeof(list_t));

	p->next = *head;

		*head = p;

	p->str = strdup(str);

	p->len = _strlen((*head)->str); 

	if (p == NULL)
	{
		return (NULL);
	}

return (p);
}
