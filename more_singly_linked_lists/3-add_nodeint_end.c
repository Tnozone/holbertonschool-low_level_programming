#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: head node
 * @n: integer
 * Return: address of the new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *end;
	int m;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	m = n;
	new->n = m;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}

	return (*head);
}
