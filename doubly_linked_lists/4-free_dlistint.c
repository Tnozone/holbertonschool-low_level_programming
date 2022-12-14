#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: head node
 * Return: 0
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
