#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a given key
 * @ht: Pointer to the hash table to retrieve from
 * @key: The key for the value
 *
 * Return: The value for the given key if the key exists, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *val = NULL;
	unsigned long int elem_index = key_index((unsigned char *)key,
						 ht->size);
	hash_node_t *node = ht->array[elem_index];

	if (node != NULL)
	{
		while (node != NULL)
		{
			if (!strcmp(node->key, key))
			{
				val = node->value;
				break;
			}
			node = node->next;
		}
	}
	return (val);
}
