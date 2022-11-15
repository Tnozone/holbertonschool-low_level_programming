#include "lists.h"

/**
 *listint_len - finds the number of elements in a linked list
 *@h: head node
 *Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
