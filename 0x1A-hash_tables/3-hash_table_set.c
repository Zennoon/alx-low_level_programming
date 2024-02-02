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
	unsigned long int elem_index;

	if (new_elem == NULL)
		return (0);
	if (key == NULL || value == NULL ||
	    !(*key) || ht == NULL || ht->array == NULL || ht->size <= 0)
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
	elem_index = key_index((unsigned char *)key, ht->size);
	if (elem_index >= ht->size)
	{
		free(new_elem);
		free(elem_val);
		return (0);
	}
	elem_position = &((ht->array)[elem_index]);
	new_elem->next = *elem_position;
	*elem_position = new_elem;
	return (1);
}
