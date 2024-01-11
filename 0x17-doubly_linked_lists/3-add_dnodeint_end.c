#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Pointer to a pointer to the head (first node) of the list
 * @n: The value to be held by the new node
 *
 * Return: Address of the new node or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node)
	{
		new_node->n = n;
		new_node->next = NULL;
		if (*head == NULL)
		{
			new_node->prev = *head;
			*head = new_node;
		}
		else
		{
			dlistint_t *temp = *head;

			while (temp->next)
				temp = temp->next;
			temp->next = new_node;
			new_node->prev = temp;
		}
	}
	return (new_node);
}
