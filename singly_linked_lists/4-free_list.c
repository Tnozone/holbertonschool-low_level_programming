#include "lists.h"
#include <string.h>

/**
 * free_list - frees a list
 * @head: head node
 * Return: 0
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
