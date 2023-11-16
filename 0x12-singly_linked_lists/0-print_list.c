#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Prints contents of the elements (nodes) of a given singly llist
 * @h: Pointer to the singly linked list (its head) whose contents are printed
 *
 * Return: The number of nodes of h
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		nodes++;
	}
	return (nodes);
}
