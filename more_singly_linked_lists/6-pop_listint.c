#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head node
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (head->n);
}
