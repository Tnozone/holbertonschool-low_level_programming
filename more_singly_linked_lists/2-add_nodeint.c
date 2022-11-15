#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a list
 * @head: head node
 * @n: integer
 * Return: address of the new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	int m;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	m = n;
	new->n = m;
	new->next = *head;
	*head = new;

return (new);
}
