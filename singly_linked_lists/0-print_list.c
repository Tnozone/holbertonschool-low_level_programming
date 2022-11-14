#include "lists.h"

/**
 *print_list - prints elements of a list
 *@h: head node
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int x = 0;
	list_t current = h;
	while(current != NULL)
	{
		if (current->str == NULL)
			current->str = "[0] (nil)";
		printf("%s", current->str);
		x++;
		current = current->next;
	}
	return (x);
}

