#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list
 * @head: head node
 * @str: string
 * Return: address of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	new = malloc(sizeof(list_t));

	new->str = strdup(*str);
	new->next = *head;
	*head = new;
	return (head);
}
