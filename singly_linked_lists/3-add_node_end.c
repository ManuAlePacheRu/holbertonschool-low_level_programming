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
 * add_node_end - add a new node a the end of a list
 * @str: is a pointer to a string in the function
 * @head: is a double pointer to the list list_t
 * Return: Return the pointer new of the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *end = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	while (end->next != NULL)
	{
		end = end->next;
	}

	end->next = new;
	new->next = NULL;
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlen((*head)->str);

	return (new);
}
