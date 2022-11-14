#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node at the beginning of a list
 * @head: head node
 * @str: string
 * Return: address of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;
	*head = new;

	return (new);
}
