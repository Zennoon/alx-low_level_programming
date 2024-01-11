#include "lists.h"

/**
 * dlistint_len - Returns the number of nodes in a doubly linked list
 * @h: Pointer to the head/first node of the list
 *
 * Return: The number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int num_nodes = 0;

	while (h)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}

/**
 * delete_dnodeint_at_index - Deletes the node at a given index of a doubly
 * linked list if possible
 * @head: Pointer to a pointer to the head/first node of the list
 * @index: Index of the node to delete
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t num_nodes = dlistint_len(*head);
	unsigned int curr_idx = 0;
	dlistint_t *ptr = *head;

	if (num_nodes == 0 || index >= num_nodes)
		return (-1);
	while (curr_idx < index)
	{
		ptr = ptr->next;
		curr_idx++;
	}
	if (ptr->prev)
		ptr->prev->next = ptr->next;
	if (ptr->next)
		ptr->next->prev = ptr->prev;
	if (index == 0)
		*head = ptr->next;
	free(ptr);
	return (1);
}
