#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node into a doubly linked list at a
 * given index
 * @h: Pointer to a pointer to the head/first node of the list
 * @idx: The index at which the node will be inserted
 * @n: The value to be held by the new node
 *
 * Return: Address of the new node or NULL if it fails, or idx is out of range
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int num_nodes = dlistint_len(*h);

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == num_nodes)
		return (add_dnodeint_end(h, n));
	if (idx > num_nodes)
		return (NULL);
	{
		unsigned int curr_idx = 0;
		dlistint_t *new_node = malloc(sizeof(dlistint_t)), *ptr = *h;

		if (new_node)
		{
			new_node->n = n;
			while (curr_idx != idx)
			{
				curr_idx++;
				ptr = ptr->next;
			}
			new_node->prev = ptr->prev;
			new_node->next = ptr;
			ptr->prev->next = new_node;
			ptr->prev = new_node;
		}
		return (new_node);
	}
}

/**
 * dlistint_len - Returns the number of nodes in a doubly linked list
 * @h: Pointer to the head/first node of the list
 *
 * Return: The number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int num_nodes = 0;

	while (h)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
