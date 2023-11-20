#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a given singly llist
 * @head: A pointer to the head of the singly linked list
 * @n: The int to set as value for the newly created node
 *
 * Description: head is a pointer to the head and not a head itself because
 * we need to alter the head to point to the new node. If a head was given
 * directly only a copy of it would reach the function, and we would only be
 * able to alter the copy, and not the actual one used in the main function to
 * access the linked list
 * Return: Address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
