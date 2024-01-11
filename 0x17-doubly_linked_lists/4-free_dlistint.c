#include "lists.h"

/**
 * free_dlistint - Frees memory allocated for the nodes of a doubly linked list
 * @head: Pointer to the head (first node) of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
