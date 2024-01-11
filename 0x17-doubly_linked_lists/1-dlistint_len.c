#include "lists.h"

/**
 * dlistint_len - Returns the number of nodes in a doubly linked list
 * @h: Pointer to the head of the list
 *
 * Return: The length / number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
