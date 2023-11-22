#include "lists.h"

/**
 * count_links_between - Count the number of node links between two nodes
 * @node1: The first node
 * @node2: The second node
 *
 * Return: The number of jumps it takes to reach node2 from node1
 */
size_t count_links_between(listint_t *node1, listint_t *node2)
{
	size_t distance = 0;

	while (node1 != NULL && node2 != NULL && node1 != node2)
	{
		node1 = node1->next;
		distance++;
	}
	return (distance);
}

/**
 * find_listint_loop - Finds the beginning of a loop inside a list if it exists
 * @head: The head of the linked list
 *
 * Return: Address of the node where the loop begins, or NULL if there no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	size_t n = 0;
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		if (n >= count_links_between(head, ptr))
		{
			break;
		}
		n++;
	}
	return (ptr);
}
