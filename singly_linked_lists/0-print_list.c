#include "lists.h"

/**
 *print_list - prints elements of a list
 *@h: head node
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int x = 0;
	while(*h != NULL)
	{
		if (h->str == NULL)
		{
			h->len = 0;
			h->str = "(nil)";
		}
		printf("[%s] %s\n", h->len, h->str);
		x++;
		h = h->next;
	}
	return (x);
}

