#include "lists.h"

/**
 * sum_listint - returns sum of data
 * @head: head node
 * Return: sum
 */

int sum_listint(listint_t *head)
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
