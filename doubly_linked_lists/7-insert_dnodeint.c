#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at the index
 * @head: head node
 * @idx: place to insert node
 * @n: data
 * Return: adress of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *tmp;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	tmp = *head;

	if (idx == 0)
	{
		new->next = tmp;
		new->prev = NULL;

		if (*head != NULL)
			(*head)->prev = new;

		*head = new;
		return (new);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	new->next = tmp->next;
	new->prev = tmp;
	tmp->next = new;

	return (new);
}
