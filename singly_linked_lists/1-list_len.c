#include "lists.h"

/**
 *list_len - finds the number of elements in a linked list
 *@h: head node
 *Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int x = 0;
	int y;

	while (h != NULL)
	{
		y = h->len;
		x += y;
		h = h->next;
	}
	return (x);
}