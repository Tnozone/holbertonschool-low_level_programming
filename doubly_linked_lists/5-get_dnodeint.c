#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node
 * @head: head node
 * @index: node to return
 * Return: address of index node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
