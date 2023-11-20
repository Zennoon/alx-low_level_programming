#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a given singly linked list
 * @head: A pointer to the head of the linked list (which is a pointer)
 * @n: The value to initialize the new node's n with
 *
 * Return: The address of the newly added node (or NULL if unsuccessful)
 */
listint_t *add_nodeint_end(listint_t **head, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			listint_t *tmp_ptr = *head;

			while (tmp_ptr->next != NULL)
			{
				tmp_ptr = tmp_ptr->next;
			}
			tmp_ptr->next = new_node;
		}
	}
	return (new_node);
}
