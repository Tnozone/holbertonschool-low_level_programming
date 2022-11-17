#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head node
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
