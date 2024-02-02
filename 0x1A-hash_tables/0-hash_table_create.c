#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table of given size and returns address
 * @size: The size of the hash table to create
 *
 * Return: Address of the newly created table, or NULL if it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (new_table != NULL)
	{
		unsigned long int i;

		new_table->size = size;
		new_table->array = malloc(sizeof(hash_node_t *) * size);
		if (new_table->array == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
			new_table->array[i] = NULL;
	}
	return (new_table);
}
