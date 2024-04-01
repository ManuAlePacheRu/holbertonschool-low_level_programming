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
 *Return: Retrun the pointer p to the list p
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *p;

	p = malloc(sizeof(list_t));

	if (p == NULL)
	{
		return (NULL);
	}

	p->next = *head;

		*head = p;

	p->str = strdup(str);

	if (p->str == NULL)
	{
		free(p);
		return (NULL);
	}

	p->len = _strlen((*head)->str);


	return (p);
}
