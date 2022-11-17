#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at the index
 * @head: head node
 * @idx: place to insert node
 * @n: data
 * Return: adress of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	for (i = 0; i < idx; i++)
	{
		if (*head == NULL)
			return (NULL);

		*head = (*head)->next;
	}

	new->n = n;
	new->next = (*head)->next;
	*head = new;

	return (new);
}
