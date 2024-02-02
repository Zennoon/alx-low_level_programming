#include "hash_tables.h"

/**
 * hash_table_delete - Frees up memory allocated for a given hash table
 * @ht: Pointer to the hash table to delete (free up)
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	if (ht != NULL)
	{
		unsigned long int i;
		hash_node_t *tmp;

		for (i = 0; i < ht->size; i++)
		{
			hash_node_t *node = ht->array[i];

			while (node != NULL)
			{
				tmp = node->next;
				free(node->value);
				free(node);
				node = tmp;
			}
		}
		free(ht->array);
		free(ht);
	}
}
