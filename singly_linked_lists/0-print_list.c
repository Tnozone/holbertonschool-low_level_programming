#include "lists.h"

/**
 *print_list - prints elements of a list
 *@h: head node
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int x = 0;
	node *current = h;
	while(current != NULL)
	{
		if (current->str == NULL)
			str = "[0] (nil)";
		printf("%s", current->str);
		x++;
		current = current->next;
	}
	return (x);
}

