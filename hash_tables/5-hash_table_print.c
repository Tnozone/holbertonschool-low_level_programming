#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: 0
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int x;

	if (ht == NULL)
		return;

	for (x = 0; ht->size; x++)
	{
		node = ht->array[x];

		while (node)
		{
			printf("\"%s\", \"%s\"", (char *) node->key, (char *) node->value);
			node = node->next;
		}
	}
}
