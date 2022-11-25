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
	char com = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; ht->size; x++)
	{
		if (com == 1)
			printf(", ");
		node = ht->array[x];

		while (node)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			if (node != NULL)
				printf(", ");
		}
		com = 1;
	}
	printf("}\n");
}
