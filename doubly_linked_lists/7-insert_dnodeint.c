#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at the index
 * @h: head node
 * @idx: place to insert node
 * @n: data
 * Return: adress of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *tmp;
	dlistint_t *tmp2;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	tmp = *h;

	if (idx == 0)
	{
		new->next = tmp;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
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

	if (new->next != NULL)
	{
		tmp2 = new->next;
		tmp2->prev = new;
	}
	return (new);
}
