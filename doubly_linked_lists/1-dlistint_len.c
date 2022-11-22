#include "lists.h"

/**
 * dlistint_len - lists elements in a list
 * @h: head node
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
