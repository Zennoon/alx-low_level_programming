#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a given index of a singly llist
 * @head: The head of the linked list (pointer to the first node)
 * @index: Index of the node to return
 *
 * Return: A pointer to the node at the index (or NULL if not possible)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i != index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
