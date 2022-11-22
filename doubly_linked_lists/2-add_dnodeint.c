#include "lists.h"

/**
 * *add_dnodeint - add new node at the beginning of the list
 * @head: head node
 * @n: data
 * Return: adress of new node, or NUll
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	int m;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	m = n;
	new->n = m;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}
