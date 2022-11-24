#include "hash_tables.h"

/**
 * hash_table_get - retreives a value from a hash table
 * @ht: hash table
 * @key: key to search
 * Return: value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];

	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	if (node == NULL)
		return (NULL);
	else
		return (node->value);
}
