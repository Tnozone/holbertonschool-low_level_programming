#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node
 * @head: head node
 * @index: node to return
 * Return: address of index node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		else
			head = head->next;
	}

	return (head);
}
