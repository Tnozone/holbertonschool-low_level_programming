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
	unsigned int i;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (-1);

		tmp = tmp->next;
	}

	*head = tmp->next;
	free(tmp);
	return (1);
}
