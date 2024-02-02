#include "hash_tables.h"

/**
 * get_elem_count - Returns the number of elements in a hash table
 * @ht: Pointer to the hash table
 *
 * Return: The number of key-value pairs in the hash table
 */
int get_elem_count(const hash_table_t *ht)
{
	int elem_count = 0;

	if (ht != NULL)
	{
		unsigned long int i;

		for (i = 0; i < ht->size; i++)
		{
			hash_node_t *node = ht->array[i];

			while (node != NULL)
			{
				elem_count++;
				node = node->next;
			}
		}
	}
	return (elem_count);
}

/**
 * hash_table_print - Prints elements of a given hash table
 * @ht: Pointer to the hash table to be printed
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	if (ht != NULL)
	{
		printf("{")
		unsigned long int i;
		int elem_count = get_elem_count(ht);

		for (i = 0; i < ht->size; i++)
		{
			hash_node_t *node = ht->array[i];

			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				if (elem_count > 1)
					printf(", ");
				elem_count--;
				node = node->next;
			}
		}
		printf("}\n")
	}
}
