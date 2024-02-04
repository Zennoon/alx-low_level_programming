#include "hash_tables.h"

/**
 * shash_table_create - Creates a new alphabetically ordered hash table of
 * given size and returns its address
 * @size: Size of the hash table to create
 *
 * Return: Address of the newly created table, or NULL if it fails
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = malloc(sizeof(shash_table_t));

	if (new_table != NULL)
	{
		unsigned long int i;

		new_table->size = size;
		new_table->array = malloc(sizeof(shash_node_t *) * size);
		if (new_table->array == NULL)
		{
			free(new_table);
			return (NULL);
		}
		for (i = 0; i < size; i++)
			new_table->array[i] = NULL;
		new_table->shead = NULL;
		new_table->stail = NULL;
	}
	return (new_table);
}

/**
 * get_shash_node - Retrieves an element of a hash table if it exists given
 * the key
 * @ht: Pointer to the hash table to retrieve from
 * @key: The key, a string
 *
 * Return: Address of the element of the hash table with the given key, or NULL
 * if it doesn't exist
 */
shash_node_t *get_shash_node(shash_table_t *ht, const char *key)
{
	shash_node_t *node = NULL, *ptr;

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
 * insert_to_sorted_list - Inserts a node into the sorted doubly linked list
 * of a hash table
 * @ht: Pointer to the hash table to insert to
 * @node: Pointer to the node to insert into the sorted linked linked list
 * The linked list is sorted based on the ASCII values of the keys of the nodes
 *
 * Return: void
 */
void insert_to_sorted_list(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t **head = &(ht->shead);
	shash_node_t **tail = &(ht->stail);

	if (*head == NULL || strcmp(node->key, (*head)->key) < 0)
	{
		node->sprev = NULL;
		node->snext = *head;
		if (*head != NULL)
			(*head)->sprev = node;
		(*head) = node;
		if (*tail == NULL)
			*tail = node;
	}
	else
	{
		shash_node_t *ptr = *head;

		while (ptr->snext != NULL &&
		       strcmp(node->key, ptr->snext->key) > 0)
			ptr = ptr->snext;
		node->snext = ptr->snext;
		if (ptr->snext != NULL)
			ptr->snext->sprev = node;
		node->sprev = ptr;
		ptr->snext = node;
		if (node->snext == NULL)
			*tail = node;
	}
}

/**
 * shash_table_set - Adds a new element to a given hash table
 * @ht: Pointer to the hash table being inserted to
 * @key: The key of the element to add
 * @value: The value of the element to add
 *
 * Return: 1 if the insertion is successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || key == NULL || value == NULL || !(*key))
		return (0);
	{
		shash_node_t *existing_node = get_shash_node(ht, key);
		char *elem_key = strdup(key), *elem_val = strdup(value);

		if (elem_key == NULL || elem_val == NULL)
			return (0);
		if (existing_node != NULL)
		{
			free(elem_key);
			free(existing_node->value);
			existing_node->value = elem_val;
		}
		else
		{
			shash_node_t *new_node = malloc(sizeof(shash_node_t));
			shash_node_t **elem_position =
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
			insert_to_sorted_list(ht, new_node);
		}
	}
	return (1);
}

/**
 * shash_table_get - Retrieves the value associated with a given key in a hash
 * table
 * @ht: Pointer to the hash table to retrieve from
 * @key: The key associated with th value to retrieve
 *
 * Return: The value if it exists, NULL otherwise
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	char *val = NULL;

	if (key == NULL && !(*key))
		return (val);
	{
		shash_node_t *node = ht->array[key_index((unsigned char *)key,
							 ht->size)];

		while (ht != NULL && node != NULL && key != NULL && *key)
		{
			if (!strcmp(key, node->key))
			{
				val = node->value;
				break;
			}
			node = node->next;
		}
	}
	return (val);
}

/**
 * shash_table_print - Prints a hash table using its sorted linked list
 * @ht: Pointer to the hash table to print
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	if (ht != NULL)
	{
		shash_node_t *head = ht->shead;
		int i = 0;

		printf("{");
		while (head != NULL)
		{
			if (i)
				printf(", ");
			printf("'%s': '%s'", head->key, head->value);
			head = head->snext;
			i = 1;
		}
		printf("}\n");
	}
}

/**
 * shash_table_print_rev - Prints a hash table in reverse order using its
 * sorted linked list
 * @ht: Pointer to the hash table to print
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	if (ht != NULL)
	{
		shash_node_t *tail = ht->stail;
		int i = 0;

		printf("{");
		while (tail != NULL)
		{
			if (i)
				printf(", ");
			printf("'%s': '%s'", tail->key, tail->value);
			tail = tail->sprev;
			i = 1;
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - Frees up memory allocated for a given hash table
 * @ht: Pointer to the hash table to free up
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	if (ht != NULL)
	{
		shash_node_t *node = ht->shead, *tmp;

		while (node != NULL)
		{
			tmp = node->snext;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
		free(ht->array);
		free(ht);
	}
}
