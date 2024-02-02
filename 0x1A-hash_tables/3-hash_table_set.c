#include "hash_tables.h"

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
	hash_node_t *new_elem = malloc(sizeof(hash_node_t));
	char *elem_val;
	hash_node_t **elem_position;

	if (!(*key) || new_elem == NULL)
	{
		free(new_elem);
		return (0);
	}
	new_elem->key = (char *)key;
	elem_val = strdup(value);
	if (elem_val == NULL)
	{
		free(new_elem);
		return (0);
	}
	new_elem->value = elem_val;
	elem_position = &((ht->array)[key_index((unsigned char *)key,
						ht->size)]);
	new_elem->next = *elem_position;
	*elem_position = new_elem;
	return (1);
}
