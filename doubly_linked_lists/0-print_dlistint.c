#include "lists.h"

/**
 * print_dlistint - prints all elements in a list
 * @h: head node
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int x = 0;

	if (h->prev != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}
