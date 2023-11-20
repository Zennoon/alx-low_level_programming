#include <stdio.h>
#include "lists.h"

/**
 * print_list: Prints the content of the nodes of a given singly linked list
 * @h: Head / A pointer to the first node of the singly linked list
 *
 * Return: The number of nodes in the singly linked list
 */
int print_list(const listint_t *h)
{
	unsigned int node_cnt = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_cnt++;
		h = h->next;
	}
	return (node_cnt);
}
