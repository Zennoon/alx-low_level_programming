#include "hash_tables.h"

/**
 * main - The entry point of the program
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	hash_table_t *ht;
	int i;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "mentioner");
	hash_table_set(ht, "mentioner", "hetairas");
	hash_table_set(ht, "heliotropes", "neurospora");
	hash_table_set(ht, "neurospora", "heliotropes");
	hash_table_set(ht, "joyful", "synaphea");
	hash_table_set(ht, "synaphea", "joyful");
	for (i = 0; i < 1024; i++)
	{
		if ((ht->array)[i] != NULL)
		{
			hash_node_t *node = (ht->array)[i];
			int j = 1;

			while (node != NULL)
			{
				printf("%d -> %s : %s\n", j, node->key,
				       node->value);
				node = node->next;
				j++;
			}
		}
	}
	return (EXIT_SUCCESS);
}
