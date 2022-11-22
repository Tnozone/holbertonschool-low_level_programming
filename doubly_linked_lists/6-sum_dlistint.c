#include "lists.h"

/**
 * sum_dlistint - returns sum of data
 * @head: head node
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int i;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		i = head->n;
		sum += i;
		head = head->next;
	}
	return (sum);
}
