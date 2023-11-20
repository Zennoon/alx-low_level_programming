#include "lists.h"

/**
 * free_listint - Frees the heap memory space allocated for a given singly llist
 * @head: The head of a linked list (A pointer to the first node)
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
