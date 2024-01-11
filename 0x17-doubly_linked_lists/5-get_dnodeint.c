#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at a given index of a doubly linked
 * list
 * @head: Pointer to the head (first node) of the list
 * @index: The index of the required node
 *
 * Return: The node at the index or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int curr_idx = 0;
	dlistint_t *node_at_idx = NULL;

	while (head)
	{
		if (curr_idx == index)
		{
			node_at_idx = head;
			break;
		}
		curr_idx++;
		head = head->next;
	}
	return (node_at_idx);
}
