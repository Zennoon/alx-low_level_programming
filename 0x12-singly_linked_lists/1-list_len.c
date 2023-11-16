#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns the number of nodes (the length) of a singly linked list
 * @h: Pointer to the singly linked list (its head) whose length is returned
 *
 * Return: The number of nodes of h
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
