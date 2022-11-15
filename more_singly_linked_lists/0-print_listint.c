#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: head node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		if (h->n == NULL)
			printf("Error\n");
		else
			printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}
