#include "lists.h"

/**
 *list_len - finds the number of elements in a linked list
 *@h: head node
 *Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			x++;
		h = h->next;
	}
	return (x);
}
