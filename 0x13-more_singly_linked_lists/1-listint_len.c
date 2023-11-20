#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements/nodes in a given singly llist
 * @h: The head/pointer to the first node of the linked list
 *
 * Return: The number of nodes in the singly linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t node_cnt = 0;

	while (h != NULL)
	{
		node_cnt++;
		h = h->next;
	}
	return (node_cnt);
}
