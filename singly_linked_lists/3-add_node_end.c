#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node at the ends of a list
 * @head: head node
 * @str: string
 * Return: address of the new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *end;
	char *newstr;
	int x = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	newstr = strdup(str);
	if (newstr == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[x])
		x++;

	new->str = newstr;
	new->len = x;
	new->next = NULL;

	if (*head == NULL)
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}

	return (*head);
}
