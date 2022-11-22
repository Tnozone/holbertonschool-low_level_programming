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

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
