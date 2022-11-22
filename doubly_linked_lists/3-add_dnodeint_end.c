#include "lists.h"

/**
 * add_dnodeint_end - add node at end of list
 * @head: head node
 * @n: data
 * Return: adress of new node, or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *end;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
		new->prev = end;
	}

	return (new);
}
