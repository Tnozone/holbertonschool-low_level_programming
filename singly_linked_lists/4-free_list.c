#include "lists.h"
#include <string.h>

/**
 * free_list - frees a list
 * @head: head node
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		free(head->str);
		head = head->next;
		free(tmp);
	}
}
