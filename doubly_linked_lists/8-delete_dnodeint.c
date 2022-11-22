#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: head node
 * @index: node to be deleted
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	dlistint_t *tmp2;
	dlistint_t *del;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);

	for (i = 0; i < (index - 1); i++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}

	del = tmp;
	del = del->next;
	tmp->next = del->next;
	free(del);

	if (tmp->next != NULL)
	{
		tmp2 = tmp;
		tmp2 = tmp->next;
		tmp2->prev = tmp;
	}

	return (1);
}
