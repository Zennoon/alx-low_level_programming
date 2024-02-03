#include "hash_tables.h"

/**
 * get_hash_node - Retrieves an element of a hash table given the key
 * @ht: Pointer to the hash table
 * @key: The key of the key:value pair to find
 *
 * Return: Address of the element in the hash table if it exists, NULL if not
 */
hash_node_t *get_hash_node(hash_table_t *ht, const char *key)
{
	hash_node_t *node = NULL, *ptr;

	ptr = ht->array[key_index((unsigned char *)key, ht->size)];
	while (ptr != NULL)
	{
		if (!strcmp(key, ptr->key))
		{
			node = ptr;
			break;
		}
		ptr = ptr->next;
	}
	return (node);
}
/**
 * hash_table_set - Adds a new element (key-value pair) to a given hash table
 * @ht: Pointer to the hash table to insert to
 * @key: The key of the element to add
 * @value: The value of the element to add
 *
 * Return: 1 if the insertion is successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || key == NULL || value == NULL || !(*key))
		return (0);

	{
		hash_node_t *existing_node = get_hash_node(ht, key);
		char *elem_key = strdup(key), *elem_val = strdup(value);

		if (elem_key == NULL || elem_val == NULL)
			return (0);
		if (existing_node != NULL)
		{
			free(existing_node->value);
			existing_node->value = elem_val;
		}
		else
		{
			hash_node_t *new_node = malloc(sizeof(hash_node_t));
			hash_node_t **elem_position =
				&(ht->array[key_index((unsigned char *)key,
						      ht->size)]);

			if (new_node == NULL)
			{
				free(elem_key);
				free(elem_val);
				return (0);
			}
			new_node->key = elem_key;
			new_node->value = elem_val;
			new_node->next = *elem_position;
			*elem_position = new_node;
		}
	}
	return (1);
}
