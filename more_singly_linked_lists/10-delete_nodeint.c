#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head node
 * @index: place to delete node
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *copy;
	unsigned int i;

	tmp = *head;

	if (tmp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (tmp == NULL)
			return (-1);

		tmp = tmp->next;
	}

	copy = tmp->next;
	tmp->next = copy->next;
	free(copy);
	return (1);
}
