#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head node
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		free(head->n);
		head = head->next;
		free(tmp);
	}
}
